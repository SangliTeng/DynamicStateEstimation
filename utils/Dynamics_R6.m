function [q_,dq_] = Dynamics_R6(q,dq,tau,contact,dt)
    [d2q, ~] = Dynamics(q,dq,tau,contact);
    d2q = d2q(1:6); % linear/angular
    
%     q_ = zeros(6,1);
%     dq_ = zeros(6,1);
    
    q_ = q(1:6) + dq(1:6) * dt + d2q(1:6) * dt^2 / 2; % world frame
    dq_ = dq(1:6) + d2q(1:6) * dt;
    
%     R = eul2rotm(q_(4:6)');
%     w = R' * dq_(4:6);
%     alpha = R' * d2q(4:6);
%     R_ = R * expm(skew(w) * dt + skew(alpha) * dt^2 / 2);
%     
%     q_(4:6) = rotm2eul(R_);
%     dq_(4:6) = dq_(4:6) + d2q(4:6) * dt;
end
