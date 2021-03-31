clear;close;clc;
proceed_data;
% a demo code to compute the GRF
%%
N_steps = length(Time);
% N_steps = 2000 * 20;
Fc_list = nan(N_steps,12);
tic
for k = 2000*10:N_steps
%     quat = q_SE3(k,1:4);
%     eul = quat2eul(quat);
    q = [0;0;0;q_SE3(k,4:6)';q_leg(k,:)'];
    dq = [dq_SE3(k,1:6)';dq_leg(k,:)'];
    [d2q, Fc] = Dynamics(q,dq,u(k,:)',contact(k,:));
    if contact(k,1) > 0.99 % left is in contact
        Fc_list(k,1:6) = Fc(1:6)';
    end
    if contact(k,2) > 0.99 % right is in contact
        if contact(1) > 0.5
            Fc_list(k,7:12) = Fc(7:12)';
        else
            Fc_list(k,7:12) = Fc(1:6)';
        end
    end
end
toc
%%
close
F_max = 400;
F_min = -F_max;
subplot(2,2,1)
plot(Time,Fc_list(:,1:3))
xlim([Time(1),Time(end)]);
ylim([F_min,F_max])

subplot(2,2,2)
plot(Time,Fc_list(:,4:6))
xlim([Time(1),Time(end)]);
ylim([F_min,F_max])

subplot(2,2,3)
plot(Time,Fc_list(:,7:9))
xlim([Time(1),Time(end)]);
ylim([F_min,F_max])

subplot(2,2,4)
plot(Time,Fc_list(:,10:12))
xlim([Time(1),Time(end)]);
ylim([F_min,F_max])
%%
% function [d2q, Fc] = Dynamics(q,dq,tau,contact)
%     B = [0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;0,0,0,0,0,0,0,0,0,0;1,0,0,0,0,0,0,0,0,0;0,1,0,0,0,0,0,0,0,0;0,0,1,0,0,0,0,0,0,0;0,0,0,1,0,0,0,0,0,0;0,0,0,0,1,0,0,0,0,0;0,0,0,0,0,1,0,0,0,0;0,0,0,0,0,0,1,0,0,0;0,0,0,0,0,0,0,1,0,0;0,0,0,0,0,0,0,0,1,0;0,0,0,0,0,0,0,0,0,1];
%     [D, ~, ~, J, dJ, h] = CassieDynamics_Full(q,dq,contact);
%     Nc = rank(J);
%     if Nc > 0
%         [U,~,~] = svd(J');
%         Un = U(:,Nc+1:end);% Uc = U(:,1:Nc);
%         
%         Dn = Un * (Un' * D * Un)^(-1) * Un';
%         d2q0 = -pinv(J) * dJ * dq([1:6,7,8,9,10,13,14,15,16,17,20]);
%         d2q = Dn * ([zeros(6,1);tau] - h - D * d2q0) + d2q0;
%         Fc =  pinv(J') * (D * d2q + h - [zeros(6,1);tau]);
%     else
%         d2q = D^(-1) * ([zeros(6,1);tau] - h);
%         Fc = 0;
%     end
% end
% 
% function [D, C, G, J, dJ, h]= CassieDynamics_Full(q,dq,contact)
%     
%     D = perm_right(perm_left(De_cassie(q)));
%     C = Ce_cassie(q,dq);
%     G = Ge_cassie(q);
%     h = perm_left(C * dq + G);
%     
%     J = [];
%     dJ = [];
%     if contact(1) > 0.5 % left is in contact
%         J = [J;perm_right(Jp_LeftToeFront(q));perm_right(Jp_LeftToeBack(q))];
%         dJ = [dJ;perm_right(dJp_LeftToeFront(q,dq));perm_right(dJp_LeftToeBack(q,dq))];
%     end
%     
%     if contact(2) > 0.5 % right is in contact
%         J = [J;perm_right(Jp_RightToeFront(q));perm_right(Jp_RightToeBack(q))];
%         dJ = [dJ;perm_right(dJp_RightToeFront(q,dq));perm_right(dJp_RightToeBack(q,dq))];
%     end
% end
% 
% function mat_out = perm_right(mat_in)
%     mat_out = [mat_in(:,1:6),mat_in(:,7:9),mat_in(:,10)-mat_in(:,12),mat_in(:,13),...
%         mat_in(:,14:16),mat_in(:,17)-mat_in(:,19),mat_in(:,20)];
% end
% 
% function mat_out = perm_left(mat_in)
%     mat_out = [mat_in(1:6,:);mat_in(7:9,:);mat_in(10,:)-mat_in(12,:);mat_in(13,:);...
%         mat_in(14:16,:);mat_in(17,:)-mat_in(19,:);mat_in(20,:)];
% end

function mat = skew(x)
    mat = [0,-x(3),x(2);...
        x(3),0,-x(1);...
        -x(2),x(1),0 ];
end