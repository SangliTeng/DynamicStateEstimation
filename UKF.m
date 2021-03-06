clear;close;clc;
proceed_data;
% a demo code to compute the GRF
%% Data
N_steps = length(Time);
q_SE3_ = q_SE3 * 0;% zeros(N_steps,6);
dq_SE3_ = dq_SE3 * 0;% zeros(N_steps,6);
N = 5;
dt = (Time(2) - Time(1)) * N;
%% UKF parameters
x_input = zeros(12,1);        % input mean
Cov = eye(12) * 1;              % input covariance
% L;              % scaled Cholesky factor of P
% mean;           % output mean
% Cov;            % output covariance
% Cov_xy;         % input-output cross covariance
kappa = 0.01;          % user-defined parameter to control the sigma points
Dim = 12;              % input dimention
% X;              % 2n+1 sigma points
% Y;              % mapped sigma points
% w;              % 2n+1 sigma points weights
Q = eye(12) * 0.04;
%%
tic
for k = 1:N:N_steps-1
    x_input = [q_SE3_(k,1:6)';dq_SE3_(k,1:6)'];
    input = [q_leg(k,:)';dq_leg(k,:)';u(k,:)';contact(k,:)';dt];
    
    %% propagate
    % compute sigma points for process covariance
    L = sqrt(Dim + kappa) * chol(Cov, 'lower');
    X = x_input(:, ones(1, numel(x_input)));
    X = [x_input, X + L, X - L];
    w = zeros(2 * Dim + 1, 1);
    w(1) = kappa / (Dim + kappa);
    w(2:end) = 1 / (2*(Dim + kappa));
    
    x_hat = zeros(Dim,1);
    for i = 1:2*Dim+1
        X(:,i) = Dynamics_UKF(X(:,i),input);
        x_hat = x_hat + X(:,i) * w(i);
    end
    % x_hat = mean(X * diag(w),2);
    % x_hat = mean(X,2);
    Cov = (X - x_hat) * diag(w) * (X - x_hat)' + Q;

    % compute sigma points for measurments
    Y = zeros(3,2*Dim+1);
    if contact(k,1) > 0.5
        Y = [Y;zeros(3,2*Dim+1)];
    end
    if contact(k,2) > 0.5
        Y = [Y;zeros(3,2*Dim+1)];
    end
    
    L = sqrt(Dim + kappa) * chol(Cov, 'lower');
    X = x_hat(:, ones(1, numel(x_hat)));
    X = [x_hat, X + L, X - L];
    w = zeros(2 * Dim + 1, 1);
    w(1) = kappa / (Dim + kappa);
    w(2:end) = 1 / (2*(Dim + kappa));
    Y_hat = zeros(size(Y,1),1);
    for i = 1:2*Dim+1
        % X(:,i) = Dynamics_UKF(X(:,i),input);
        [v, omega] = Observation_UKF(X(:,i),input);
        Y(:,i) = [v; omega];
        Y_hat = Y_hat + w(i) * Y(:,i);
    end
    %% correct
    if ~isempty(Y)
        % Y_hat = mean(Y,2);
        r = 1e-6 * ones(size(Y,1),1);
        % r(end-2:end) = 1e-4;
        
        Cov_y = (Y - Y_hat) * diag(w) * (Y - Y_hat)' + diag(r); % R
        Cov_xy = (X - x_hat) * diag(w) * (Y - Y_hat)';
        K = Cov_xy * Cov_y^(-1);
        
        y = zeros(size(Y_hat,1),1);
        y(end-2:end) = eul2rotm(q_SE3(k,[4,5,6])) * IMU(k,[4,5,6])';
        
        x_hat = x_hat + K * ( y - Y_hat);
        Cov = Cov - K * Cov_y * K';
    end
    % Observation_UKF(mean,input)
   %%
    q_SE3_(k + N,1:6) = x_hat(1:6);
    dq_SE3_(k + N,1:6) = x_hat(7:12);
end
toc
%%
close all
figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    plot(Time(1:N:end),q_SE3_(1:N:length(Time),k),'b')
    plot(Time(1:N:end),q_SE3(1:N:length(Time),k),'r-.')
    xlim([0,Time(end)])
    % ylim([-1,1])
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