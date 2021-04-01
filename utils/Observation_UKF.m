function v = Observation_UKF(x,input)
    q = [x(1:6);input(1:14)];
    q(1:3) = 0; % here we convert the velocity to body frame % will rotate the covariance...
    dq = [x(7:12);input(15:28)];
    contact = input(39:40);
    v = Observation(q,dq,contact);
end