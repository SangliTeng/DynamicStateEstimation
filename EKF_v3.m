% clear;close;clc;
% proceed_data;
%% Data
N_steps = length(Time);
q_SE3_ = q_SE3;% zeros(N_steps,6);
dq_SE3_ = dq_SE3;% zeros(N_steps,6);
Freq = 100;
Start = 0;
N = ceil(2000 / Freq);
dt = (Time(2) - Time(1)) * N;
%% EKF parameters
x_input_1 = zeros(12,1);        % input mean
x_input_2 = zeros(12,1);        % input mean
% Q_vec = [1e-2,1e-2,1e-2, 1,1,1, 1e-2,1e-2,1e-2, 1,1,1];
Q_vec = [1 1 1 1 1 1 1 1 1 1 1 1];
Q_inv = diag(Q_vec) * 1 / 1e-2; % process noise
R_inv = 1 / 1e-4; % measurement noise

% regularization term
reg_1 = ones(12,1);
reg_1([1,2,3]) = 2e-1;
reg_1([4,5,6]) = 5;
reg_1([7,8,9]) = 1;
reg_1([10,11,12]) = 5;

reg_2 = ones(12,1);
reg_2([1,2,3]) = 2e-1;
reg_2([4,5,6]) = 5;
reg_2([7,8,9]) = 1;
reg_2([10,11,12]) = 5;
% reg_2 = reg_2 * 1e-1;
options = optimset('Algorithm','interior-point-convex','Display','iter'); % interior-point-convex
%%
tic
for k = Start+1:N:N_steps-1-N
    x_input_1 = [q_SE3_(k,1:6)';dq_SE3_(k,1:6)'];
    input_1 = [q_leg(k,:)'+ randn(14,1) * 1e-4;dq_leg(k,:)'+ randn(14,1) * 1e-4;u(k,:)';contact(k,:)';dt];
    input_2 = [q_leg(k+N,:)'+ randn(14,1) * 1e-4;dq_leg(k+N,:)'+ randn(14,1) * 1e-4;u(k+N,:)';contact(k+N,:)';dt];
    %% Solving EKF as AMP via QP
    % use full dynamics:
    [Ad, ud, ~, ~] = Dynamics_EKF_v2(x_input_1,input_1,q_SE3(k,4:6),dq_SE3(k,4:6));
    x_input_2 = Ad * x_input_1 + ud;
    for tt = 1:1
        [Ad, ud, H_1, z_1] = Dynamics_EKF_v2(x_input_1,input_1,q_SE3(k,4:6),dq_SE3(k,4:6));
        H_1 = H_1 * 0;
        [~, ~, H_2, z_2] = Dynamics_EKF_v2(x_input_2,input_2,q_SE3(k+N,4:6),dq_SE3(k+N,4:6));
        % H_2 = H_2 * 0;
        R_inv_1 = ones(size(H_1,1),1);
        R_inv_1(end-2:end) = 1 / 1e-2;
        R_inv_1 = diag(R_inv_1) * R_inv;
        
        R_inv_2 = ones(size(H_2,1),1);
        R_inv_2(end-2:end) = 1 / 1e-2;
        R_inv_2 = diag(R_inv_2) * R_inv;
        
        A = [Ad' * Q_inv * Ad + H_1' * R_inv_1 * H_1 + diag(reg_1), -Ad' * Q_inv;...
            -Q_inv * Ad, Q_inv + H_2' * R_inv_2 * H_2 + diag(reg_2) ];
        b = [-H_1' * R_inv_1 * z_1 + Q_inv * Ad * ud; 
             -H_2' * R_inv_2 * z_2 - Q_inv * ud];

        % x_hat = -pinv(A) * b;
        x_hat = -inv(A) * b;
        delta = norm(x_input_1 - x_hat(1:12));
        % disp(delta)
        if delta < dt * 1e-1
           break; 
        end
        alpha = 0.2;
        x_input_1 = x_hat(1:12) * alpha + x_input_1 * (1 - alpha);
    end
    x_hat_1 = x_hat(1:12);
    x_hat_2 = x_hat(13:end);
    %%
    q_SE3_(k,1:6) = x_hat_1(1:6);
    dq_SE3_(k,1:6) = x_hat_1(7:12);
    
    q_SE3_(k + N,1:6) = x_hat_2(1:6);
    dq_SE3_(k + N,1:6) = x_hat_2(7:12);
end
toc
%%
close all
figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    plot(Time(1:N:end),dq_SE3_(1:N:length(Time),k),'b')
    plot(Time(1:N:end),dq_SE3(1:N:length(Time),k),'r-.')
    xlim([0,Time(end)])
    % ylim([-2,2])
end

figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    if k < 4
        plot(Time(1:N:end),q_SE3_(1:N:length(Time),k),'b')
        plot(Time(1:N:end),pos_int(dq_SE3_(1:N:length(Time),k),dt),'g')
    else
        plot(Time(1:N:end),wrapTo2Pi(q_SE3_(1:N:length(Time),k) + pi) - pi,'b')
    end
    plot(Time(1:N:end),q_SE3(1:N:length(Time),k),'r-.')
    xlim([0,Time(end)])
    % ylim([-2,2])
end
%%
function p = pos_int(v,dt)
    p = zeros(size(v));
    for t = 1:length(p)-1
       p(t+1) = p(t) + v(t) * dt;
    end
end