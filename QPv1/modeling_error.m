function [Aw, bw] = modeling_error()
    % Base velocity dimension: 6x1
    % Joint velocities dimension: 14x1
    % **Slack variable dimension 16x1** <-- Minimizing error for this
    % Torque variable dimension 10x1
    % Reaction force dimension 12x1
    
    Aw = [zeros(16, 16), eye(16), zeros(16, 10), zeros(16, 12)];
    bw = zeros(16, 1);
end