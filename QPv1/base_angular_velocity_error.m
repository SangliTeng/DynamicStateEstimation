function [Adq_base, bdq_base] = base_angular_velocity_error(imu_data)
    % Base linera velocity dimension: 3x1
    % **Base angular velocity dimension**: 3x1 <-- Minimizing error for this
    % Joint velocities dimension: 10x1 
    % Slack variable dimension 16x1 
    % Torque variable dimension 10x1
    % Reaction force dimension 12x1
    
    Adq_base = [zeros(3, 3), eye(3), zeros(3, 10), zeros(3, 16), zeros(3, 10), zeros(3, 12)];
    bdq_base = imu_data(4:6)';
end