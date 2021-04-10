function [Ad, ud, H, z] = Dynamics_EKF_v2(x,input,r,dr)
    q = [x(1:6);input(1:14)];
    dq = [x(7:12);input(15:28)];
    tau = input(29:38);
    contact = input(39:40);
    dt = input(end);
    
    [D, C, G, J, dJ, h] = CassieDynamics_Full(q,dq,contact);
    Nc = rank(J);
    if Nc > 0
%         [U,~,~] = svd(J');
%         Un = U(:,Nc+1:end);% Uc = U(:,1:Nc);
        Un = null(J);

        Dn = Un * (Un' * D * Un)^(-1) * Un';
        d2q0 = -pinv(J) * dJ * dq([1:6,7,8,9,10,13,14,15,16,17,20]);
        d2q = Dn * ([zeros(6,1);tau] - h - D * d2q0) + d2q0;
        
        H = J(:,1:6);
        H = [zeros(size(H)),H];
        z = -J(:,7:end) * dq([7,8,9,10,13,14,15,16,17,20]);
    else
        d2q = D^(-1) * ([zeros(6,1);tau] - h);
        H = [];
        z = [];
        % d2q(3)
    end
    w = eul2rotm(r) * dr([3,2,1])';
    w = w([3,2,1]) + 2e-2 * randn(3,1);
    z = [z;w];
    P = [0,0,1;
         0,1,0;
         1,0,0];
    H = [H;[zeros(3,6),zeros(3), P*eul2rotm(x(4:6)')'*P]];
    
    % k: q dq, k_1: q dq
    Ac = zeros(12);
    Ac(1:6,7:end) = eye(6) * dt;
    Ad = eye(12) + Ac;
    
    ud = [0.5 * d2q(1:6) * dt^2; d2q(1:6) * dt];
end
