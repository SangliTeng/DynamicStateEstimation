function x = Dynamics_UKF(x,input)
    q = [x(1:6);input(1:14)];
    dq = [x(7:12);input(15:28)];
    tau = input(29:38);
    contact = input(39:40);
    dt = input(end);
    
    R = eul2rotm(q(4:6)','ZYX');
    [d2q, ~] = Dynamics(q,dq,tau,contact);
    d2q = d2q(1:6); % linear/angular
    % d2q = d2q_gt;
    
    q_ = zeros(6,1);
    dq_ = zeros(6,1);
    
    q_(1:3) = q(1:3) + dq(1:3) * dt + d2q(1:3) * dt^2 / 2; % world frame
    dq_(1:3) = dq(1:3) + d2q(1:3) * dt;
    
    w = dq([6,5,4]);
    alpha = d2q([6,5,4]);
    R_ = expm(skew(w) * dt + (skew(alpha)) * dt^2 / 2) * R;
    
    q_(4:6) = rotm2eul(R_,'ZYX');
    dq_(4:6) = dq(4:6) + d2q(4:6) * dt;
    
    x = [q_(:);dq_(:)];
end
