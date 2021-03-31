function [q_, dq_, A, u, Fc] = Dynamics_affine(q,dq,tau,contact,dt)
    [D, C, G, J, dJ, h] = CassieDynamics_Full(q,dq,contact);
    Nc = rank(J);
    if Nc > 0
        [U,~,~] = svd(J');
        Un = U(:,Nc+1:end);% Uc = U(:,1:Nc);

        Dn = Un * (Un' * D * Un)^(-1) * Un';
        A = -Dn * C;
        A = A(1:6,1:6);
        
        d2q0 = -pinv(J) * dJ * dq([1:6,7,8,9,10,13,14,15,16,17,20]);
        h = [zeros(6,1);tau] - h - D * d2q0;
        h = D * h;
        u = h(1:6);
        
        d2q = Dn * ([zeros(6,1);tau] - h - D * d2q0) + d2q0;
        Fc =  pinv(J') * (D * d2q + h - [zeros(6,1);tau]);
    else
        A = -D^(-1) * C;
        A = A(1:6,1:6);
        h = -D^(-1) * (G + [zeros(6,1);tau]);
        u = h(1:6);
        
        Fc = 0;
    end
    
end
