function [Ad, ud, H, z] = Dynamics_EKF_false(x,input)
    q = [x(1:6);input(1:14)];
    dq = [x(7:12);input(15:28)];
    tau = input(29:38);
    contact = input(39:40);
    dt = input(end);
    
    [D, C, G, J, ~, ~]= CassieDynamics_Full(q,dq,contact); % only actuated
    
    D_12 = D(1:6,7:end) * D(7:end,7:end)^(-1);
    if isempty(J)
        D_ = (D(1:6,1:6) - D_12 * D(7:end,1:6));
        D_inv = D_^(-1);
        C_ = (C(1:6,1:6) - D_12 * C(7:end,1:6));
        B_ = D_12;
        G_ = (G(1:6) - D_12 * G(7:end)) + (C(1:6,7:end) - D_12 * C(7:end,7:end)) * dq([7,8,9,10,13,14,15,16,17,20]);
        
        H = [];
        z = [];
    else
        J = J';
        J_ = J(1:6,:) + D_12 * J(7:end,:);
        Proj = eye(6) - pinv(J_') * J_';
        
        D_ = Proj * (D(1:6,1:6) - D_12 * D(7:end,1:6));
        D_inv = D_^(-1);
        C_ = Proj * (C(1:6,1:6) - D_12 * C(7:end,1:6));
        B_ = Proj * D_12;
        G_ = (G(1:6) - D_ * G(7:end)) + (C(1:6,7:end) - D_ * C(7:end,7:end)) * dq([7,8,9,10,13,14,15,16,17,20]);
        
        H = J(:,1:6);
        z = -J(:,7:end) * dq([7,8,9,10,13,14,15,16,17,20]);
    end
    
    
    
    Ac = [zeros(6),eye(6);...
          zeros(6),-D_inv * C_] * dt;
    u = [zeros(6,1);D_inv * (B_ * tau - G_)];
    
    Ad = eye(12) + Ac * (Ac * (Ac/6 + 1/2) + 1);
    ud = (eye(12) * dt + Ac * (Ac/6 + 1/2) * dt) * u;
end
