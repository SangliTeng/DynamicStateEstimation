function [Aeq, beq] = equality_constraints(M, S, J, X, h, dt) 
    % S 16x10
    % M 16x16
    % J 12x16
    Aeq = [M/dt, -eye(16), -S, -J'];
    beq = -h + (M/dt)*[X(1:6); X(7:10); X(13:17); X(20)]; % Only use actuated joints?
end