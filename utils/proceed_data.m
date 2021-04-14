raw = load("Data_ROB530_raw_v3.mat");
%% ground truth (in world frame)
% lin_base: 1->3 position
% lin_base: 4->6 velocity

% ang_base: 1->4 quaternion
% ang_base: 5->13 rotation matrix
% ang_base: 14->16 angular velocity

% need to convert to robot frame to compare the result.
q_SE3 = [squeeze(raw.lin_base.Data(:,[1,2,3])),...
         quat2eul(squeeze(raw.ang_base.Data(:,[1,2,3,4])))]; % x y z Yaw Pitch Roll R = RzRyRx [-pi pi]
q_SE3_quat = [squeeze(raw.lin_base.Data(:,[1,2,3])),...
         squeeze(raw.ang_base.Data(:,[1,2,3,4]))]; % x y z Yaw Pitch Roll R = RzRyRx [-pi pi]
dq_SE3 = [squeeze(raw.lin_base.Data(:,[4,5,6])),...
         squeeze(raw.ang_base.Data(:,[14,15,16]))];
dq_SE3(:,[4,5,6]) = dq_SE3(:,[6,5,4]);
%%
dq_SE3_b_ref = dq_SE3;
for k = 1:length(dq_SE3)
    dq_SE3_b_ref(k,1:3) = eul2rotm(q_SE3(k,4:6)) * dq_SE3(k,1:3)';
    dq_SE3_b_ref(k,[6,5,4]) = eul2rotm(q_SE3(k,4:6)) * dq_SE3(k,[6,5,4])';
end
%% measurements
Time = raw.outputs.leftLeg.hipRollDrive.position.Time;
% joint position
q_leg = [];

q_leg = [q_leg, squeeze(raw.outputs.leftLeg.hipRollDrive.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.leftLeg.hipYawDrive.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.leftLeg.hipPitchDrive.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.leftLeg.kneeDrive.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.leftLeg.shinJoint.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.leftLeg.tarsusJoint.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.leftLeg.footJoint.position.Data)];

q_leg = [q_leg, squeeze(raw.outputs.rightLeg.hipRollDrive.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.rightLeg.hipYawDrive.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.rightLeg.hipPitchDrive.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.rightLeg.kneeDrive.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.rightLeg.shinJoint.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.rightLeg.tarsusJoint.position.Data)];
q_leg = [q_leg, squeeze(raw.outputs.rightLeg.footJoint.position.Data)];

% joint velocity
dq_leg = [];

dq_leg = [dq_leg, squeeze(raw.outputs.leftLeg.hipRollDrive.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.leftLeg.hipYawDrive.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.leftLeg.hipPitchDrive.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.leftLeg.kneeDrive.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.leftLeg.shinJoint.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.leftLeg.tarsusJoint.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.leftLeg.footJoint.velocity.Data)];

dq_leg = [dq_leg, squeeze(raw.outputs.rightLeg.hipRollDrive.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.rightLeg.hipYawDrive.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.rightLeg.hipPitchDrive.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.rightLeg.kneeDrive.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.rightLeg.shinJoint.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.rightLeg.tarsusJoint.velocity.Data)];
dq_leg = [dq_leg, squeeze(raw.outputs.rightLeg.footJoint.velocity.Data)];

% joint torque, need to check the impact map
u = [];
u = [u, squeeze(raw.outputs.leftLeg.hipRollDrive.torque.Data)];
u = [u, squeeze(raw.outputs.leftLeg.hipYawDrive.torque.Data)];
u = [u, squeeze(raw.outputs.leftLeg.hipPitchDrive.torque.Data)];
u = [u, squeeze(raw.outputs.leftLeg.kneeDrive.torque.Data)];
u = [u, squeeze(raw.outputs.leftLeg.footDrive.torque.Data)];

u = [u, squeeze(raw.outputs.rightLeg.hipRollDrive.torque.Data)];
u = [u, squeeze(raw.outputs.rightLeg.hipYawDrive.torque.Data)];
u = [u, squeeze(raw.outputs.rightLeg.hipPitchDrive.torque.Data)];
u = [u, squeeze(raw.outputs.rightLeg.kneeDrive.torque.Data)];
u = [u, squeeze(raw.outputs.rightLeg.footDrive.torque.Data)];

% contact
contact = squeeze(raw.Data.s_LR.Data)';

% IMU need to check the IMU orientation
% we try without IMU.
%%
IMU = [squeeze(raw.outputs.pelvis.vectorNav.linearAcceleration.Data)',...
       squeeze(raw.outputs.pelvis.vectorNav.angularVelocity.Data)']; 
Acc = squeeze(raw.acc_imu.Data(:,:));
Acc = Acc(:,[4,5,6,1,2,3]);
%%
