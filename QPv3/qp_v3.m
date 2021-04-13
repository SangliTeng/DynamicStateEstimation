proceed_data;

Freq = 1000;
N = ceil(2000 / Freq);
dt = (Time(2) - Time(1)) * N;
Start = 0;
N_steps = length(Time);

actuated = [1,2,3,4,7,8,9,10,11,14];

X = [q_SE3(1,:)'; q_leg(1,actuated)'; dq_SE3(1,:)'; dq_leg(1,actuated)'; zeros(12,1)]; %44x1
B = [zeros(6,10); eye(10)];

x_est = zeros(N_steps, 1);
y_est = zeros(N_steps, 1);
z_est = zeros(N_steps, 1);
yaw_est = zeros(N_steps, 1);
pitch_est = zeros(N_steps, 1);
roll_est = zeros(N_steps, 1);
Fz_l = zeros(N_steps, 1);
Fz_r = zeros(N_steps, 1);


for i = Start+1:N:N_steps - 1 - N
    % Convert IMU measurement to robot frame
    %R = eul2rotm(q_SE3(i, 4:6), 'ZYX');
    %imu_reordered = IMU(i, [1:3,6,5,4]); % Convert angular velocity to X,Y,Z order
    %imu_robot_frame = reshape(R \ reshape(imu_reordered, 3, 2), 1, 6); % Convert to robot frame
    %imu_robot_frame = imu_robot_frame([1:3,6,5,4]); % Return to Z,Y,X order    
    
    q = [X(1:6); q_leg(i, :)'];
    dq = [X(17:22); dq_leg(i, :)'];
    [D, ~, ~, J, ~, h] = CassieDynamics_Full(q, dq, contact(i,:));
    
    if rank(J) > 0
       Fc = [];
       if contact(i, 1) > 0.99
           Fc = [Fc; X(end-11:end-6)];
       end
       if contact(i, 2) > 0.99
           Fc = [Fc; X(end-5:end)];
       end
       f = J'*Fc;
    else
       f = zeros(16,1);
    end
   
    dq_kp1 = dq([1:6, 6+actuated]) + dt*(D\(B*u(i,:)' + f - h));
    
    A_velocity = [zeros(6,16), eye(6), zeros(6,22)];
    b_velocity = dq_kp1(1:6);
              
    A_position = [eye(6), zeros(6,38)];
    b_position = X(1:6)+dt*X(17:22);
        
    vkp1 = X(17:19) + IMU(i, 1:3)'*dt;
    wkp1 = IMU(i+N, [6,5,4])'; 
    
    %R = eul2rotm(X(4:6)', 'ZYX');
    H1 = [zeros(6,16), eye(6), zeros(6, 22)];
    y1 = [vkp1; wkp1];
    
    H2 = [zeros(size(J, 1), 16), J, zeros(size(J, 1), 12)];
    y2 = zeros(size(J,1),1);
    
    H = [H1;...
         H2];
    y = [y1;...
         y2];
    
    A = [A_velocity;...
         A_position;...
         H];
    b = [b_velocity;...
         b_position;...
         y];
    
    G = A'*A;
    g = -A'*b;
    
    Aeq = [zeros(20,6), eye(20,10), zeros(20, 6), [zeros(10); eye(10)], zeros(20,12)];
    beq = [q_leg(i+N,actuated)'; dq_leg(i+N,actuated)'];
    
    mu = 0.1;
    Ain = [zeros(1, 32), mu*sign(X(33)), mu*sign(X(34)), -1, zeros(1, 9);... % Left foot friction cone
           zeros(1, 38), mu*sign(X(39)), mu*sign(X(40)), -1, zeros(1, 3);... % Right foot friction cone
           zeros(1, 34), -1, zeros(1,9);... % -f_z,l <= 0
           zeros(1, 40), -1, zeros(1,3)];   % -f_z,r <= 0
       
    bin = [0; 0; 0; 0];
    
    X = quadprog(G, g, Ain, bin, Aeq, beq);
    
    x_est(i) = X(1);
    y_est(i) = X(2);
    z_est(i) = X(3);
    yaw_est(i) = X(4);
    pitch_est(i) = X(5);
    roll_est(i) = X(6);
    Fz_l(i) = X(35);
    Fz_r(i) = X(41);
end

subplot(4,2,1);
plot(Time(1:N:end), x_est(1:N:end), Time, q_SE3(:, 1));
legend("X (estimated)", "X (ground truth)");
subplot(4,2,2);
plot(Time(1:N:end), y_est(1:N:end), Time, q_SE3(:, 2));
legend("Y (estimated)", "Y (ground truth)");
subplot(4,2,3);
plot(Time(1:N:end), z_est(1:N:end), Time, q_SE3(:, 3));
legend("Z (estimated)", "Z (ground truth)");

subplot(4,2,4);
plot(Time(1:N:end), yaw_est(1:N:end), Time, q_SE3(:, 4));
legend("Yaw (estimated)", "Yaw (ground truth)");
subplot(4,2,5);
plot(Time(1:N:end), pitch_est(1:N:end), Time, q_SE3(:, 5));
legend("Pitch (estimated)", "Pitch (ground truth)");
subplot(4,2,6);
plot(Time(1:N:end), roll_est(1:N:end), Time, q_SE3(:, 6));
legend("Roll (estimated)", "Roll (ground truth)");

subplot(4,2,7);
plot(Time(1:N:end), Fz_l(1:N:end));
legend("Fz (Left, estimated)");
subplot(4,2,8);
plot(Time(1:N:end), Fz_r(1:N:end));
legend("Fz (Right, estimated)");
