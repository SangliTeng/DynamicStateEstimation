function [Ad2q_base, bd2q_base] = base_linear_acceleration_error(X, imu_data, dt)
    % Base linear velocity dimension: 3x1 <-- Minimizing error for this
    % Base angular velocity dimension: 3x1 
    % Joint velocities dimension: 14x1 
    % Slack variable dimension 16x1 
    % Torque variable dimension 10x1
    % Reaction force dimension 12x1
    
    Ad2q_base = [eye(3), zeros(3,3), zeros(3, 14), zeros(3, 16), zeros(3, 10), zeros(3, 12)];
    bd2q_base = X(1:3)' + dt*imu_data(1:3)'; % Discrete acceleration estimate
end