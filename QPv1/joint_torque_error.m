function [Au, bu] = joint_torque_error(u)
    % Base linear velocity dimension: 3x1 
    % Base angular velocity dimension: 3x1 
    % Joint velocities dimension: 10x1 
    % Slack variable dimension 16x1 
    % Torque variable dimension 10x1 <-- Minimizing error for this
    % Reaction force dimension 12x1
    
    Au = [zeros(10,6), zeros(10, 10), zeros(10, 16), eye(10), zeros(10, 12)];
    bu = u';
end