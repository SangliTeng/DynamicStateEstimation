clear;close;clc;
proceed_data;
% a demo code to compute the GRF
%%
N_steps = length(Time);
% N_steps = 2000 * 20;

q_SE3_ = q_SE3 * 0;% zeros(N_steps,6);
dq_SE3_ = dq_SE3 * 0;% zeros(N_steps,6);

dt = Time(2) - Time(1);
tic
for k = 1:N_steps-1
     if k == 10*2000
         k;
     end
    q = [q_SE3_(k,1:3)';q_SE3_(k,4:6)';q_leg(k,:)'];
    dq = [dq_SE3_(k,1:3)';dq_SE3_(k,4:6)';dq_leg(k,:)'];
    % [q_,dq_] = Dynamics_R6(q,dq,u(k,:)',contact,dt);
    v = Observation(q,dq,contact(k,:));
    [q_,dq_] = Dynamics_ZOH(q,dq,u(k,:)',contact(k,:),dt,Acc(k,1:6)');
    q_SE3_(k+1,:) = q_';
    dq_SE3_(k+1,:) = dq_';
end
toc
%%
close all
figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    plot(Time,q_SE3_(:,k),'b')
    plot(Time,q_SE3(:,k),'r-.')
    xlim([0,Time(end)])
    ylim([-3,3])
end

figure
seq = [1,3,5,2,4,6];
for k = 1:6
    subplot(3,2,seq(k))
    hold on
    plot(Time,dq_SE3_(:,k),'b')
    plot(Time,dq_SE3(:,k),'r-.')
    xlim([0,Time(end)])
    ylim([-3,3])
end
