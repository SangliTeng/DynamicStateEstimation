% clear;close;clc;
% proceed_data;
%% Data
N_steps = length(Time);
q_SE3_ = q_SE3;% zeros(N_steps,6);
dq_SE3_ = dq_SE3;% zeros(N_steps,6);
q_SE3_b = q_SE3;% zeros(N_steps,6);
dq_SE3_b = dq_SE3;% zeros(N_steps,6);

Freq = 100;
Start = 0;
N = ceil(2000 / Freq);
dt = (Time(2) - Time(1)) * N;
%% EKF parameters
x_input = zeros(12,1);        % input mean
% Q_vec = [1e-2,1e-2,1e-2, 1,1,1, 1e-2,1e-2,1e-2, 1,1,1];
Q_vec = [1 1 1 1e-3 1e-3 1e-3 1 1 1 1e-3 1e-3 1e-3];
Q_inv = diag(Q_vec) * 1 / 3e-3; % process noise
R_inv = 1 / 1e-4; % measurement noise

% regularization term
reg_1 = ones(12,1);
reg_1([1,2,3]) = 2e-1;
reg_1([4,5,6]) = 5;
reg_1([7,8,9]) = 1;
reg_1([10,11,12]) = 5;
reg_1 = reg_1 * 0e-4;

reg_2 = ones(12,1);
reg_2([1,2,3]) = 2e-1;
reg_2([4,5,6]) = 5;
reg_2([7,8,9]) = 1;
reg_2([10,11,12]) = 5;

options = optimset('Algorithm','interior-point-convex','Display','iter'); % interior-point-convex
%%
tic
for k = Start+1:N:N_steps - 1 - N
    %% Solving EKF as AMP via QP
    % propagate one step as initial guess
    x_input = [q_SE3_(k,1:6)';dq_SE3_(k,1:6)'];
    input = [q_leg(k,:)'+ randn(14,1) * 1e-4;dq_leg(k,:)'+ randn(14,1) * 1e-4;u(k,:)';contact(k,:)';dt];
    
    [Ad, ud, H, z] = Dynamics_EKF_v2(x_input,input,q_SE3(k,4:6),dq_SE3(k,4:6));
    x_input = Ad * x_input + ud;
    x_ = x_input;
    
    % SQP loop
    % use measurement at k+N
    input = [q_leg(k+N,:)'+ randn(14,1) * 1e-4;dq_leg(k+N,:)'+ randn(14,1) * 1e-4;u(k+N,:)';contact(k+N,:)';dt];
    for tt = 1:1
        [Ad, ud, H, z] = Dynamics_EKF_v2(x_input,input,q_SE3(k+N,4:6),dq_SE3(k+N,4:6));
        
        R_inv_ = ones(size(H,1),1);
        R_inv_(end-2:end) = 1 / 1e-2;
        R_inv_ = diag(R_inv_) * R_inv;
        
        A = Q_inv + H' * R_inv_ * H + reg_1;
        b = Q_inv * x_ + H' * R_inv_ * z;
        x_input_ = A^(-1) * b;
        delta = norm(x_input - x_input_);
        % disp(delta)
        x_input = x_input_;
        if delta < 1e-3
           break; 
        end
    end
    %%
    q_SE3_(k + N,1:6) = x_input(1:6);
    q_SE3_b(k + N,1:6) = x_input(1:6);
    
    dq_SE3_(k + N,1:6) = x_input(7:12);
    
    dq_SE3_b(k + N,1:3) = eul2rotm(x_input(4:6)')' * dq_SE3_(k + N,1:3)';
    dq_SE3_b(k + N,[6,5,4]) = eul2rotm(x_input(4:6)')' * dq_SE3_(k + N,[6;5;4])';
end
toc
%%
close all
figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    plot(Time(1:N:end),dq_SE3_b(1:N:length(Time),k),'b')
    plot(Time(1:N:end),dq_SE3_b_ref(1:N:length(Time),k),'r-.')
    xlim([0,Time(end)])
    ylim([-1,1])
end

figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    if k < 4
        plot(Time(1:N:end),q_SE3_(1:N:length(Time),k),'b')
        % plot(Time(1:N:end),pos_int(dq_SE3_(1:N:length(Time),k),dt),'g')
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