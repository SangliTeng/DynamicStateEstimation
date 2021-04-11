clear;close;clc;
proceed_data;
dt = diff(Time);
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
%% InEKF loop
for k = 1:length(IMU)
    %% propagation
    % step 1: X = f(X,u)
    
    % step 2: update the covariance, use the discrete state transition matrix Phi
    
    %% correction
    % form the kinematics measurementes. 
    H = [];
    z = [];
    if contact(1) > 0.99 % left is in contact
        H_ = [zeros(3), -eye(3), zeros(3,9)];
        H = [H,H_];
        
        vb = Jp_VectorNav_to_LeftToeBottom(q_leg(k,:)) * dq_leg(k,:)';
        pb = p_VectorNav_to_LeftToeBottom(q_leg(k,:));
        v = cross(IMU(k,4:6), pb) + vb;
        
        z = [z;v];
    end
    if contact(2) > 0.99 % right is in contact
        H_ = [zeros(3), -eye(3), zeros(3,9)];
        H = [H,H_];
        
        vb = Jp_VectorNav_to_RightToeBottom(q_leg(k,:)) * dq_leg(k,:)';
        pb = p_VectorNav_to_RightToeBottom(q_leg(k,:));
        v = cross(IMU(k,4:6), pb) + vb;
        
        z = [z;v];
    end
    % excecute the covariance update steps
    if isempty(H)
        
    end
    
end