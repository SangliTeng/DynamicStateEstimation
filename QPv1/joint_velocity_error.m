function [Adt, bdt] = joint_velocity_error(X)
    % Base velocity dimension: 6x1
    % **Joint velocities dimension**: 10x1 <-- Minimizing here for this
    % Slack variable dimension 16x1 
    % Torque variable dimension 10x1
    % Reaction force dimension 12x1
    
    Adt = [zeros(10, 6), eye(10), zeros(10, 16), zeros(10, 10), zeros(10, 12)];
    bdt = [X(7:10); X(13:17); X(20)];
end