function [xi, P, b_a, b_g] =  Observation_RIEKF(xi_,P_,b_a_,b_g_,v)
% 
        H = [zeros(3), -eye(3), zeros(3,9)];
       
        y = [v;1;0];                                                     % measurement
        b = zeros(5,1);    
        b(4) = -1;                                                         % construct b vector
        Cov_nf = 1e1*blkdiag(50,1,100);                                           % n_f
        R_ = xi_(1:3,1:3);
        Nbar = R_ * Cov_nf * R_';                      
        S = H * P_ * H' + Nbar;
        K = P_ * H' * inv(S);                                              % filter gain 
        nu = xi_ * y + b;                                                  % innovation term
        select_mat = zeros(3,5);                                           % construct selection matrix
        select_mat(1:3,1:3) = eye(3);
        %% get correction term for update
        correction = K * select_mat * nu;
        correct_imu = correction(1:9);
        correct_ba = correction(13:15);
        correct_bg = correction(10:12);
        correct_mat = zeros(5,5);
        correct_mat(1:3,1:3) = skew(correct_imu(1:3));
        correct_mat(1:3,4) = correct_imu(4:6);
        correct_mat(1:3,5) = correct_imu(7:9);
        %correct_mat(4,4) = 1;
        %correct_mat(5,5) = 1;
        
        %% update state , covariance and biases
        xi = expm(correct_mat)*xi_;
        b_a = b_a_ + correct_ba;
        b_g = b_g_ + correct_bg;
        P = (eye(size(P_)) - K*H) * P_ * (eye(size(P_)) - K*H)' + K * Nbar * K'  ;
end

