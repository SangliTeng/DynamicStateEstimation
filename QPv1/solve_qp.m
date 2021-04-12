close all;
proceed_data;
dt = diff(Time);
n = length(dt);
weights = [3, 5e4, 5e4, 1e3, 1e5, 1e1, 1];
q_leg_lb = min(q_leg)' - 0.1; % Need actual joint bounds
q_leg_lb([5,6,12,13]) = [];
q_leg_ub = max(q_leg)' + 0.1;
q_leg_ub([5,6,12,13]) = [];

% Initial conditions
q = [q_SE3(1, :)'; q_leg(1, :)'];
dq = [dq_SE3(1,:)'; dq_leg(1,:)'];
[~, Fc] = Dynamics(q, dq, u(1,:)', contact(1,:));

% Pad Fc
if length(Fc) == 1
    Fc = zeros(12,1);
elseif length(Fc) < 12
   if contact(1, 1) < 0.99
      Fc = [zeros(6,1); Fc]; 
    elseif contact(1, 2) < 0.99
       Fc = [Fc; zeros(6,1)];
   end
end

S = [zeros(6, 10); eye(10)];
X = [dq_SE3(1,:)'; dq_leg(1,:)'; zeros(16,1); u(1,:)'; Fc];   

x_est = zeros(n, 1);
y_est = zeros(n, 1);
z_est = zeros(n, 1);
yaw_est = zeros(n, 1);
pitch_est = zeros(n, 1);
roll_est = zeros(n, 1);

for i = 1:n
    % Convert IMU measurement to robot frame
    R = eul2rotm(q_SE3(i, 4:6), 'ZYX');
    imu_reordered = IMU(i, [1:3,6,5,4]); % Convert angular velocity to X,Y,Z order
    imu_robot_frame = reshape(R \ reshape(imu_reordered, 3, 2), 1, 6); % Convert to robot frame
    imu_robot_frame = imu_robot_frame([1:3,6,5,4]); % Return to Z,Y,X order

    % Get dynamics and normal eqn matrices
    [D, ~, ~, J, ~, h] = CassieDynamics_Full(q, X(1:20), contact(i, :));  
    
    % Pad Jacobian with zeros if necessary
    if size(J,1) < 12
        if contact(i, 1) < 0.99
            J = [zeros(6,16); J];
        end
        if contact(i, 2) < 0.99
            J = [J; zeros(6,16)];
        end
    end
    
    [G, g] = construct_qp_matrices(X, imu_robot_frame, u(i,:), dt(i), J, weights, D, S, h);
    
    
    % Get constraint matrices
    %[Aeq, beq] = equality_constraints(D, S, J, X, h, dt(i)); 
    [A, b, lb, ub] = inequality_constraints([q_leg(i,1:4), q_leg(i,7:11), q_leg(i,14)]', q_leg_lb, q_leg_ub, dt(i));
    
    % Solve QP
    %X = quadprog(G, g, A, b, Aeq, beq, lb, ub, X);
    X = quadprog(G, g, A, b, [], [], lb, ub);
    
    % Dynamics expects all leg joint states/velocities, so
    % remove the underactuated joints for QP, then add them back here
    X = [X(1:10); 0; 0; X(11:15); 0; 0; X(16:end)]; % Add back underactuated joints, 0 is fine because they are not used
    
    % Get next q from dynamics using predicted dq
    [q_, dq_] = Dynamics_ZOH(q, X(1:20), u(i,:)', contact(i,:), dt(i), []);
    q = [q_; q_leg(i+1, :)']; % Use known joint angles
    
    %X(1:6) = dq_; % Not sure about this
    
    % Store results for plotting (just x,y,z for now)
    x_est(i) = q(1);
    y_est(i) = q(2);
    z_est(i) = q(3);
    yaw_est(i) = q(4);
    pitch_est(i) = q(5);
    roll_est(i) = q(6);
end

subplot(3,2, 1);
plot(Time(2:end), x_est, Time, q_SE3(:, 1));
legend("X (estimated)", "X (ground truth)");
subplot(3,2,2);
plot(Time(2:end), y_est, Time, q_SE3(:, 2));
legend("Y (estimated)", "Y (ground truth)");
subplot(3,2,3);
plot(Time(2:end), z_est, Time, q_SE3(:, 3));
legend("Z (estimated)", "Z (ground truth)");

subplot(3,2,4);
plot(Time(2:end), yaw_est, Time, q_SE3(:, 4));
legend("Yaw (estimated)", "Yaw (ground truth)");
subplot(3,2,5);
plot(Time(2:end), pitch_est, Time, q_SE3(:, 5));
legend("Pitch (estimated)", "Pitch (ground truth)");
subplot(3,2,6);
plot(Time(2:end), roll_est, Time, q_SE3(:, 6));
legend("Roll (estimated)", "Roll (ground truth)");

