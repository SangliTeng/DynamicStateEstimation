function [Af, bf] = contact_force_error(q, Fc)
    %R = eul2rotm(q([6,5,4])', 'XYZ'); % In the paper, they convert force
    %measurements from foot frame to world frame, but we estimate the
    %contact forces in world frame already?
    %R = J*q;
    %Af = [zeros(12, 42), blkdiag(R, R, R, R)];
    Af = [zeros(12, 42), eye(12)];
    bf = [0; 0; Fc(3:5); 0; 0; 0; Fc(9:11); 0];
end