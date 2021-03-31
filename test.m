% addpath()
% clear;close;clc;
% proceed_data;
%%
% B = Be_cassie(randn(20,1)); % need to check the coefficients

q_SE3 = randn(6,1);
dq_SE3 = randn(6,1);
q_leg = randn(14,1);
dq_leg = randn(14,1);

q = [q_SE3;q_leg];
dq = [dq_SE3;dq_leg];

q_leg_a = randn(10,1);
dq_leg_a = randn(10,1);
q_a = [q_SE3;q_leg_a];
dq_a = [dq_SE3;dq_leg_a];

tau = randn(10,1) * 10;

%%
[D, C, G, J, dJ, h] = CassieDynamics_Full(q,dq,[1,1]);

Nc = rank(J);
[U,~,~] = svd(J');
Un = U(:,Nc+1:end);
Uc = U(:,1:Nc);

Dn = Un * (Un' * D * Un)^(-1) * Un';

d2q0 = -pinv(J) * dJ * dq_a;

d2q = Dn * (B * tau - h - D * d2q0) + d2q0;
Fc =  pinv(J') * (D * d2q + h - B * tau);
Dynamics(q,dq,tau,[1,1])
%%
function [d2q, Fc] = Dynamics(q,dq,tau,contact)
%     q_SE3 = q(1:6);
%     dq_SE3 = dq(1:6);
%     q_leg = q(7:end);
%     dq_leg = dq(7:end);
    B = [0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;1,0,0,0,0,0,0,0,0,0;0,1,0,0,0,0,0,0,0,0;0,0,1,0,0,0,0,0,0,0;0,0,0,1,0,0,0,0,0,0;0,0,0,0,1,0,0,0,0,0;0,0,0,0,0,1,0,0,0,0;0,0,0,0,0,0,1,0,0,0;0,0,0,0,0,0,0,1,0,0;0,0,0,0,0,0,0,0,1,0;0,0,0,0,0,0,0,0,0,1];
    [D, ~, ~, J, dJ, h] = CassieDynamics_Full(q,dq,contact);
    Nc = rank(J);
    [U,~,~] = svd(J');
    Un = U(:,Nc+1:end);% Uc = U(:,1:Nc);

    Dn = Un * (Un' * D * Un)^(-1) * Un';
    d2q0 = -pinv(J) * dJ * dq([1:6,7,8,9,10,13,14,15,16,17,20]);
    d2q = Dn * (B * tau - h - D * d2q0) + d2q0;
    
    Fc =  pinv(J') * (D * d2q + h - B * tau);
end

function [D, C, G, J, dJ, h]= CassieDynamics_Full(q,dq,contact)
    
    D = perm_right(perm_left(De_cassie(q)));
    C = Ce_cassie(q,dq);
    G = Ge_cassie(q);
    h = perm_left(C * dq + G);
    
    J = [];
    dJ = [];
    if contact(1) > 0.5 % left is in contact
        J = [J;perm_right(Jp_LeftToeFront(q));perm_right(Jp_LeftToeBack(q))];
        dJ = [dJ;perm_right(dJp_LeftToeFront(q,dq));perm_right(dJp_LeftToeBack(q,dq))];
    end
    
    if contact(2) > 0.5 % right is in contact
        J = [J;perm_right(Jp_RightToeFront(q));perm_right(Jp_RightToeBack(q))];
        dJ = [dJ;perm_right(dJp_RightToeFront(q,dq));perm_right(dJp_RightToeBack(q,dq))];
    end
end

function mat_out = perm_right(mat_in)
    mat_out = [mat_in(:,1:6),mat_in(:,7:9),mat_in(:,10)-mat_in(:,12),mat_in(:,13),...
        mat_in(:,14:16),mat_in(:,17)-mat_in(:,19),mat_in(:,20)];
end

function mat_out = perm_left(mat_in)
    mat_out = [mat_in(1:6,:);mat_in(7:9,:);mat_in(10,:)-mat_in(12,:);mat_in(13,:);...
        mat_in(14:16,:);mat_in(17,:)-mat_in(19,:);mat_in(20,:)];
end

function mat = skew(x)
    mat = [0,-x(3),x(2);...
        x(3),0,-x(1);...
        -x(2),x(1),0 ];
end