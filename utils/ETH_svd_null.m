function [u] = ETH_svd_null(q,dq,task,stanceLeg,d2x1_des,err1,derr1,d2x2_des,err2,derr2,d2x3_des,err3,derr3,tau_last,U1,E1,V1,U2,E2,V2,U3,E3,V3,F_ext)
%% get body dynamics matrix
S = [0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;1,0,0,0,0,0,0,0,0,0;0,1,0,0,0,0,0,0,0,0;0,0,1,0,0,0,0,0,0,0;0,0,0,1,0,0,0,0,0,0;0,0,0,0,1,0,0,0,0,0;0,0,0,0,0,1,0,0,0,0;0,0,0,0,0,0,1,0,0,0;0,0,0,0,0,0,0,1,0,0;0,0,0,0,0,0,0,0,1,0;0,0,0,0,0,0,0,0,0,1];
M = perm_right(perm_left(De(q)));
H = perm_left(Ge(q));%+ Ce(q,dq)*dq);
% % H = Gmap'*(Ge_cassie(q));
%% get foot Jacobian
b1 = dJp_LeftToeFront(q,dq)*dq;%*Gmap;
b2 =  dJp_LeftToeBack(q,dq)*dq;
b3 =  dJp_RightToeFront(q,dq)*dq;
b4 =  dJp_RightToeBack(q,dq)*dq;
if task == 1
    % ffd w.r.t the center of support polygon
    J0 = perm_right(Jp_LeftToeBottom(q))/2 + perm_right(Jp_RightToeBottom(q))/2;
    dJ0 = perm_right(dJp_LeftToeBottom(q,dq))/2 + perm_right(dJp_RightToeBottom(q,dq))/2;
else
    if stanceLeg == 1
        % ffd w.r.t the right stance leg
        J0 = perm_right(Jp_RightToeBottom(q));
        dJ0 = perm_right(dJp_RightToeBottom(q,dq));
    else
        % ffd w.r.t the left stance leg
        J0 = perm_right(Jp_LeftToeBottom(q));
        dJ0 = perm_right(dJp_LeftToeBottom(q,dq));
    end
end
%% 
U_perp = U1(:,11:16);
J_inv = zeros(12,16);

for i = 1:10
    J_inv = J_inv + V1(:,i)/E1(i)*U1(:,i)';
end

if task == 1
    U_r = [U_perp,zeros(16,3)];
    b = -[b1;b2;b3;b4];
    x0 = J_inv'*b;
else
    if stanceLeg == 1 % right stance
        U_r = U3(:,8:16);
        A_inv = zeros(8,16);
        for i = 1:7
            A_inv = A_inv + V3(:,i)/E3(i)*U3(:,i)';
        end
        b = -[b1(3);b2(3);b3;b4];
        x0 = A_inv'*b;
    else
        U_r = U2(:,8:16);
        A_inv = zeros(8,16);
        for i = 1:7
            A_inv = A_inv + V2(:,i)/E2(i)*U2(:,i)';
        end
        b = -[b1;b2;b3(3);b4(3)];
        x0 = A_inv'*b;
    end
end
%% task 1 gain
kpx = 500;
kpy = 200;

kp1 = [500,200,0];% 500 200
kd1 = [20,50,0];% 20 50
%% task 2
% we control the COM or just the base link?
J_torso_xyz =  perm_right(Jcom_cassie(q))-perm_right(Jp_LeftToeBottom(q))/2 + perm_right(Jp_RightToeBottom(q))/2;% J0;%zeros(3,16);
% J_torso_xyz = (J_torso_xyz);% - Jst);

dJ_torso_xyz =  perm_right(dJcom_cassie(q,dq))-perm_right(dJp_LeftToeBottom(q,dq))/2 + perm_right(dJp_RightToeBottom(q,dq))/2;% dJ0;
% dJ_torso_xyz = (dJ_torso_xyz);% - dJst);

kp2 = [200,200,200*0.5];
kd2 = [30,30,5];
%% task 3
J_torso_ypr = zeros(3,16);
J_torso_ypr(1:3,4:6) = eye(3);
dJ_torso_ypr = zeros(3,16);

kp3 = [100,100,100];
kd3 = [5,5,5];
%% weight
Q1 = [5,5,0]*1e3;
% Q2 = [10,10,10]*500;
Q2 = [20,10,10]*500;
% Q3 = [1,1,1]*1e4;
Q3 = [1,1,1e3]*1e5;% 1e5
Q4 = [1,1,1,1,1,...
      1,1,1,1,1]*10;
Q6 = ones(10,1)*500*0; 

%%
[J_R, J_L] = J_spring(q);
if task == 1 % stand
    %% standing
    Jx = zeros(3,16);
    dJx = zeros(3,16);

    alpha_5 = 1e-1;
    Q5 = [1e4,1e4,1,...
        1e4,1e4,1,...
        1e4,1e4,1,...
        1e4,1e4,1]*alpha_5;
else
    if stanceLeg == 1 
        %% right stance
        Jx = perm_right(Jp_LeftToeBottom(q)) - J0;%  - perm_right(Jp_RightToeBottom(q));
        Jx(3,:) = 0*Jx(3,:);
        Jx(3,10) = J_L;
        kd1(3) = kd1(3)*abs(J_L);
        
        dJx = perm_right(dJp_LeftToeBottom(q,dq)) - dJ0;% - perm_right(dJp_RightToeBottom(q,dq));
        dJx(3,:) = 0*dJx(3,:);
        
        alpha_5 = 1e-1;
        Q5 = [0,1e4,1e4,...
            0,1e4,1e4,...
            1e8,1e8,0,...
            1e8,1e8,0]*alpha_5;
    else
        %% left stance
        Jx = perm_right(Jp_RightToeBottom(q)) - J0;
        Jx(3,:) = 0*Jx(3,:);
        Jx(3,15) = J_R;
        kd1(3) = kd1(3)*abs(J_R);
        
        dJx = perm_right(dJp_RightToeBottom(q,dq)) - dJ0;
        dJx(3,:) = 0*dJx(3,:);
        
        alpha_5 = 1e-1;
        Q5 = [1e8,1e8,0,...
            1e8,1e8,0,...
            0,1e4,1.5e3,...
            0,1e4,1.5e3]*alpha_5;
    end
end
%% solver
output = optWBC(q,dq,M,H,S,...
    Jx,dJx,kp1,kd1,d2x1_des,err1,derr1,...
    J_torso_xyz,dJ_torso_xyz,kp2,kd2,d2x2_des,err2,derr2,...
    J_torso_ypr,dJ_torso_ypr,kp3,kd3,d2x3_des,err3,derr3,...
    Q1,Q2,Q3,Q4,Q5,Q6,...
    tau_last,...
    U_perp,U_r,J_inv,x0,...
    F_ext);
% output = zeros(83,1);
if coder.target('MATLAB')
    u = output;% = reshape(output.tau(1:83),[83,1]);
else
    u = reshape(output(1:83),[83,1]);%63:noSlip\\\83:smooth
end
% u = output;
end

function mat = skew(x)
mat = [0,-x(3),x(2);...
    x(3),0,-x(1);...
    -x(2),x(1),0 ];
end

function [J_R, J_L] = J_spring(qall)
qall(4) = 0;
JR = J_RightToeJoint(qall);
JL = J_LeftToeJoint(qall);
JR_s = JR([1,3],[18,19]);
JL_s = JL([1,3],[11,12]);

Ks1 = 1800;
Ks2 = 1600;

mat_R = (JR_s')^-1;
mat_L = (JL_s')^-1;

J_R = mat_R(2,1)*(Ks1+Ks2) + mat_R(2,2)*Ks2;
J_L = mat_L(2,1)*(Ks1+Ks2) + mat_L(2,2)*Ks2;
end

function mat_out = perm_right(mat_in)
mat_out = [mat_in(:,1:6),mat_in(:,7:9),mat_in(:,10)-mat_in(:,12),mat_in(:,13),...
    mat_in(:,14:16),mat_in(:,17)-mat_in(:,19),mat_in(:,20)];
end

function mat_out = perm_left(mat_in)
mat_out = [mat_in(1:6,:);mat_in(7:9,:);mat_in(10,:)-mat_in(12,:);mat_in(13,:);...
    mat_in(14:16,:);mat_in(17,:)-mat_in(19,:);mat_in(20,:)];
end