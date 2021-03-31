q_eul = zeros(length(Acc),6);
dq_eul = zeros(length(Acc),6);

q_r = zeros(length(Acc),6);
q_r_ = q_SE3_quat;
dq_r = zeros(length(Acc),6);
d2q_ = zeros(length(Acc),6);
d2q_optim = zeros(length(Acc),6);

dt = 1/2000;

for k = 1:length(q_eul)
    
    q_eul(k+1,:) = q_eul(k,:) + dq_eul(k,:) * dt + 1/2 * dt^2*Acc(k,[1,2,3,6,5,4]);
    dq_eul(k+1,:) =  dq_eul(k,:) + Acc(k,[1,2,3,6,5,4]) * dt;
    
    dq_r(k+1,4:6) = dq_r(k,4:6) + Acc(k,4:6) * dt; % XYZ
    
    R1 = dq_r(k,4:6)' * dt + Acc(k,4:6)' * dt^2 / 2; % XYZ
    R2 = 1/12 * skew(Acc(k,4:6)) * dq_r(k,4:6)' * dt^3;
    R3 = 1/240 * skew(Acc(k,4:6)) * (skew(Acc(k,4:6)) * dq_r(k,4:6)') * dt^5;
    
    R = expm(skew(R1+R2+R3)) * quat2rotm(q_r_(k,4:7));
    q_r_(k+1,4:7) = rotm2quat(R);
    q_r(k+1,4:6) = rotm2eul(R,'ZYX');
end
%% plot acc
for k = 1:length(q_SE3)
    q = [q_SE3(k,1:3)';q_SE3(k,4:6)';q_leg(k,:)'];
    dq = [dq_SE3(k,1:3)';dq_SE3(k,4:6)';dq_leg(k,:)'];
    ddq = Dynamics(q,dq,u(k,:)',contact(k,:));
    ddq_ = Dynamics_optim(q,dq,u(k,:)',contact(k,:));
    d2q_(k,:) = ddq(1:6)';
    d2q_optim(k,:) = ddq_(1:6)';
end
%%
close all
listt = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,listt(k))
    hold on
    plot(Time,Acc(:,k),'k','LineWidth',1)
    plot(Time,d2q_(:,k),'b-.','LineWidth',1)
    % plot(Time,d2q_optim(:,k),'r-.','LineWidth',1)
    % ylim([min(Acc(:,k)), max(Acc(:,k))])
end
xlim([5,10])
%%
close all
figure
for k = 4:6
    subplot(3,1,k-3)
    hold on
    plot(q_SE3(:,k),'r')
    plot(q_r(:,k),'b-.')
    plot(q_eul(:,k),'k--')
end
figure
listt = [6,5,4];
for k = 4:6
    subplot(3,1,k-3)
    hold on
    plot(dq_SE3(:,k),'r')
    plot(dq_r(:,listt(k-3)),'b-.')
    % plot(q_eul(:,k),'k-.')
end
% %%
% for k = 4:7
%     subplot(4,1,k-3)
%     hold on
%     plot(q_SE3_quat(:,k),'r')
%     % plot(q_r(:,k),'b-.')
%     plot(q_r_(:,k),'k-.')
% end