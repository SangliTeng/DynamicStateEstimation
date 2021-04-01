clear;close;clc;
proceed_data;
% a demo code to compute the GRF
%% Data
N_steps = length(Time);
q_SE3_ = q_SE3 * 0;% zeros(N_steps,6);
dq_SE3_ = dq_SE3 * 0;% zeros(N_steps,6);
dt = Time(2) - Time(1);
%% UKF parameters
x_input = zeros(12,1);        % input mean
P = eye(12) * 0.01;              % input covariance
% L;              % scaled Cholesky factor of P
% mean;           % output mean
% Cov;            % output covariance
% Cov_xy;         % input-output cross covariance
kappa = 0.01;          % user-defined parameter to control the sigma points
Dim = 12;              % input dimention
% X;              % 2n+1 sigma points
% Y;              % mapped sigma points
% w;              % 2n+1 sigma points weights

%%
tic
for k = 1:N_steps-1
    if k == 10*2000
        k;
    end
    
    x_input = [q_SE3_(k,1:6)';dq_SE3_(k,1:6)'];
    input = [q_leg(k,:)';dq_leg(k,:)';u(k,:)';contact(k,:)';dt];
    
    %% propagate
    % compute sigma points
    L = sqrt(Dim + kappa) * chol(P, 'lower');
    Y = x_input(:, ones(1, numel(x_input)));
    X = [x_input, Y + L, Y - L];
    w = zeros(2 * Dim + 1, 1);
    w(1) = kappa / (Dim + kappa);
    w(2:end) = 1 / (2*(Dim + kappa));
    
    mean = 0;
    Y = [];
    for i = 1:2*Dim+1
        Y(:,i) = Dynamics_UKF(X(:,i),input);
        mean = mean + w(i) * Y(:,i);
    end
    Cov = (Y - mean) * diag(w) * (Y - mean)';
    Cov_xy = (X - x_input) * diag(w) * (Y - mean)';
    
    Sigma_pred = Cov + Q;
    %% correct
    % compute New sigma points
    L = sqrt(Dim + kappa) * chol(P, 'lower');
    Y = x_input(:, ones(1, numel(x_input)));
    X = [x_input, Y + L, Y - L];
    w = zeros(2 * Dim + 1, 1);
    w(1) = kappa / (Dim + kappa);
    w(2:end) = 1 / (2*(Dim + kappa));
    
    mean = 0;
    Y = [];
    for i = 1:2*Dim+1
        Y(:,i) = Dynamics_UKF(X(:,i),input);
        mean = mean + w(i) * Y(:,i);
    end
    Cov = (Y - mean) * diag(w) * (Y - mean)';
    Cov_xy = (X - x_input) * diag(w) * (Y - mean)';
    
    v_hat = Observation_UKF(mean,input); % holonomic constraints: v_hat = 0
    if ~isempty(v_hat)
        s = v_hat - 0;
        S = Cov + R;
        % compute state-measurement cross covariance
        Cov_xz = Cov_xy;

        % filter gain
        K = Cov_xz * (S \ eye(size(S)));

        % correct the predicted state statistics
        mean = mean + K * s;
        Sigma = Sigma_pred - K * S * K';
    end
    
    q_SE3_(k+1,:) = q_';
    dq_SE3_(k+1,:) = dq_';
end
toc
%%
close all
figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    plot(Time,q_SE3_(:,k),'b')
    plot(Time,q_SE3(:,k),'r-.')
    xlim([0,Time(end)])
    ylim([-3,3])
end

figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    plot(Time,dq_SE3_(:,k),'b')
    plot(Time,dq_SE3(:,k),'r-.')
    xlim([0,Time(end)])
    ylim([-3,3])
end
%%
function ut = sigma_points(ut)
    % sigma points around the reference point
    ut.L = sqrt(ut.n + ut.kappa) * chol(ut.P, 'lower');
    Y = ut.x_input(:, ones(1, numel(ut.x_input)));
    ut.X = [ut.x_input, Y + ut.L, Y - ut.L];
    ut.w = zeros(2 * ut.n + 1, 1);
    ut.w(1) = ut.kappa / (ut.n + ut.kappa);
    ut.w(2:end) = 1 / (2*(ut.n + ut.kappa));
end

function propagate(ut)
    % propagate the input Gaussian using an unscented transform
    ut = sigma_points(ut);
    % compute sample mean and covariance
    ut.mean = 0;
    ut.Cov = 0;
    ut.Y = [];
    for i = 1:2*ut.n+1
        ut.Y(:,i) = ut.func(ut.X(:,i)); % use our function
        ut.mean = ut.mean + ut.w(i) * ut.Y(:,i);
    end
    ut.Cov = (ut.Y - ut.mean) * diag(ut.w) * (ut.Y - ut.mean)';
    ut.Cov_xy = (ut.X - ut.x_input) * diag(ut.w) * (ut.Y - ut.mean)';
end