clear;close;clc;
proceed_data;
dt = diff(Time);
dt = [dt;dt(1)];
%% Data
N_steps = length(Time);
q_SE3_ = q_SE3;% zeros(N_steps,6);
dq_SE3_ = dq_SE3;% zeros(N_steps,6);
q_SE3_b = q_SE3;% zeros(N_steps,6);
dq_SE3_b = dq_SE3;% zeros(N_steps,6);
%% Initialization
P = eye(15);
R = eye(3);
p = q_SE3(1,1:3)';
v = zeros(3,1);
b_a = zeros(3,1);
b_g = zeros(3,1);
g = [0 0 -9.8067]'; % gravitational force vector
noise_omega =  [0 0 0];
noise_acc = [0 0 0];
noise_ba = [0 0 0];
noise_bg = [0 0 0];
Cov_noise = blkdiag(diag(noise_omega), diag(noise_acc), diag(zeros(1,3)), diag(noise_ba), diag(noise_bg));
%% InEKF loop
for k = 1:length(IMU)
    %% propagation
    % step 1: X = f(X,u)
    cur_acc = IMU(k,1:3)';                                                  % extract current acceleration from data , frame: robot frame
    cur_omega = IMU(k,4:6)';                                                % extract current omega from data
    R_ = R * exp(skew(cur_omega - b_g)*dt(k));                              % update R matrix
    v_ = v + R * (cur_acc - b_a) * dt(k) + g * dt(k);                       % update v vector
    p_ = p + v * dt(k) + 1/2 * (R * ( cur_acc - b_a ) + g) * dt(k) * dt(k); % update p
    %b_a = b_a;                                              
    %b_g = b_g;
    xi = zeros(5,5);
    xi(1:3, 1:3) = R_;                                                     % update state 
    xi(1:3, 4) = v_;
    xi(1:3, 5) = p_;
    xi(4, 4) = 1;
    xi(5, 5) = 1;
    %% step 2: update the covariance, use the discrete state transition matrix Phi
    % compute A matrix
    A = zeros(15,15);
    A( 4:6, 1:3) = skew(g);
    A(7:9, 4:6) = eye(3);
    A(1:3, 10:12) = - R_;
    A(4:6, 10:12) = -skew(v_)*R_;
    A(10:12,10:12) = -skew(p_)*R_;
    A(4:6, 13:15) = - R_;
    A(10:15, 10:15) = eye(6);
    % compute adjoint matrix of xi
    xi_adj = zeros(9,9);
    xi_adj(1:3,1:3) = R_;
    xi_adj(4:6, 1:3) = -skew(v_)*R_;
    xi_adj(7:9,1:3) = -skew(p_)*R_;
    xi_adj(4:6, 4:6) = R_;
    xi_adj(7:9, 7:9) = R_;
    % compute B and Q
    B = zeros(15,15);
    B(1:9, 1:9) = xi_adj;
    B(10:15,10:15) = eye(6);
    Q = B * Cov_noise * B;
    
    % update P matrix
    Phi = expm(A*dt(k));
    Qk = Phi * Q * Phi' * dt(k);
    P = Phi * P * Phi' + Q; 
    %% correction
    % form the kinematics measurementes. 
    H = [];
    z = [];
    if contact(k,1) > 0.99 % left is in contact
        H = [zeros(3), -eye(3), zeros(3,9)];        
        vb = Jp_VectorNav_to_LeftToeBottom(q_leg(k,:)) * dq_leg(k,:)';
        pb = p_VectorNav_to_LeftToeBottom(q_leg(k,:));
        v = cross(IMU(k,4:6), pb)' + vb;
        [xi, P, b_a, b_g] = Observation_RIEKF(xi,P,b_a,b_g,v);
        % z = [z;v];

    end
    if contact(k,2) > 0.99 % right is in contact

        H = [zeros(3), -eye(3), zeros(3,9)];       
        vb = Jp_VectorNav_to_RightToeBottom(q_leg(k,:)) * dq_leg(k,:)';
        pb = p_VectorNav_to_RightToeBottom(q_leg(k,:));
        v = cross(IMU(k,4:6), pb)' + vb;
        [xi, P, b_a, b_g] = Observation_RIEKF(xi,P,b_a,b_g,v);
        % z = [z;v];
    end
    % excecute the covariance update steps
    if isempty(H)

    end
    eul_angle = rotm2eul(xi(1:3,1:3));
    position = xi(1:3,5);
    vel = xi(1:3,4);
    q_SE3_(k,1:6) = [position' eul_angle];
    
    dq_SE3_(k,1:6) = [vel' cur_omega'];
    
end

close all
figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    plot(Time(1:end),dq_SE3_(1:length(Time),k),'b')
    plot(Time(1:end),dq_SE3_b_ref(1:length(Time),k),'r-.')
    xlim([0,Time(end)])
    ylim([-1,1])
end

figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    if k < 4
        plot(Time(1:end),q_SE3_(1:length(Time),k),'b')
        % plot(Time(1:N:end),pos_int(dq_SE3_(1:N:length(Time),k),dt),'g')
    else
        plot(Time(1:end),wrapTo2Pi(q_SE3_(1:length(Time),k) + pi) - pi,'b')
    end
    plot(Time(1:end),q_SE3(1:length(Time),k),'r-.')
    xlim([0,Time(end)])
    % ylim([-2,2])
end