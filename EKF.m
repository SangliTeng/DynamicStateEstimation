% clear;close;clc;
% proceed_data;
%% Data
N_steps = length(Time);
q_SE3_ = q_SE3 * 0;% zeros(N_steps,6);
dq_SE3_ = dq_SE3 * 0;% zeros(N_steps,6);
N = 5;
dt = (Time(2) - Time(1)) * N;
%% EKF parameters
x_input = zeros(12,1);        % input mean
% Q_vec = [1e-2,1e-2,1e-2, 1,1,1, 1e-2,1e-2,1e-2, 1,1,1];
Q_vec = ones(12,1);
Q_inv = diag(Q_vec) * 1 / 1e-2; % process noise
R_inv = 1 / 1e-4; % measurement noise
reg_1 = ones(12,1) * 5;
reg_2 = ones(12,1) * 5;
options = optimset('Algorithm','interior-point-convex','Display','iter'); % interior-point-convex
%%
tic
for k = 1:N:N_steps-1
    x_input = [q_SE3_(k,1:6)';dq_SE3_(k,1:6)'];
    input = [q_leg(k,:)';dq_leg(k,:)';u(k,:)';contact(k,:)';dt];
    %% EKF as SQP
    % use full dynamics:
    for tt = 1:10
        [Ad, ud, H, z] = Dynamics_EKF(x_input,input,q_SE3(k,4:6),dq_SE3(k,4:6));
        if isempty(H)
            A = [Ad' * Q_inv * Ad + diag(reg_1), -Ad' * Q_inv;...
                -Q_inv * Ad, Q_inv + diag(reg_2) ];
            b = [-Q_inv * Ad * ud;-Q_inv * ud];
        else
            R_inv_ = ones(size(H,1),1);
            R_inv_(end-2:end) = 1 / 1e-2;
            R_inv_ = diag(R_inv_) * R_inv;
            A = [Ad' * Q_inv * Ad + H' * R_inv_ * H + diag(reg_1), -Ad' * Q_inv;...
                -Q_inv * Ad, Q_inv + diag(reg_2) ];
            b = [H' * R_inv_ * z - Q_inv * Ad * ud; -Q_inv * ud];
        end
        x_hat = -pinv(A) * b;
        % x_hat = quadprog(A,b,[],[],[],[],[],[],zeros(24,1),options);
        delta = norm(x_input - x_hat(1:12));
        if delta < 1e-5
           break; 
        end
        alpha = 0.5;
        x_input = x_hat(1:12) * alpha + x_input * (1 - alpha);
    end
    x_hat_1 = x_hat(1:12);
    x_hat_2 = x_hat(13:end);
%     x_hat_1(4:6) = wrapTo2Pi(x_hat_1(4:6));
%     x_hat_2(4:6) = wrapTo2Pi(x_hat_2(4:6));
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
    if k < 4
        plot(Time(1:N:end),q_SE3_(1:N:length(Time),k),'b')
    else
        plot(Time(1:N:end),wrapTo2Pi(q_SE3_(1:N:length(Time),k) + pi) - pi,'b')
    end
    plot(Time(1:N:end),q_SE3(1:N:length(Time),k),'r-.')
    xlim([0,Time(end)])
    ylim([-.2,.2])
end
figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    plot(Time(1:N:end),dq_SE3_(1:N:length(Time),k),'b')
    plot(Time(1:N:end),dq_SE3(1:N:length(Time),k),'r-.')
    xlim([0,Time(end)])
    ylim([-4,4])
end