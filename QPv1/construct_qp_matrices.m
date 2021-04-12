function [G, g] = construct_qp_matrices(X, imu_data, u, dt, J, weights, M, S, h)
    % Base velocity dimension: 6x1
    % Joint velocities dimension: 14x1
    % Slack variable dimension 16x1
    % Torque variable dimension 10x1
    % Reaction force dimension 12x1 
    % I assume the reaction force is 6x1 for each foot
    % that is in contact. CassieDynamics_Full returns [] if the feet are
    % not in contact, so we will probably have to pad it with 0s.

    [Aw, bw] = modeling_error();
    [Adt, bdt] = joint_velocity_error(X);
    [Adq_base, bdq_base] = base_angular_velocity_error(imu_data);
    [Adq_lin_base, bdq_lin_base] = base_linear_velocity_error(X, imu_data, dt);
    [Au, bu] = joint_torque_error(u);
    [Ast, bst] = stance_foot_velocity_error(J);
    [Aeq, beq] = equality_constraints(M, S, J, X, h, dt);
    
    A = [weights(1) * Aw;...
         weights(2) * Adt;...
         weights(3) * Adq_base;...
         weights(4) * Adq_lin_base;...
         weights(5) * Au;...
         weights(7) * Aeq;...
         ];
     
     if ~isempty(Ast)
         A = [A; weights(6) * Ast];
     end
     
     b = [weights(1) * bw;...
          weights(2) * bdt;...
          weights(3) * bdq_base;...
          weights(4) * bdq_lin_base';...
          weights(5) * bu;...
          weights(7) * beq;...
          ];
      
      if ~isempty(bst)
         b = [b; weights(6) * bst];
     end
      
      G = A'*A;
      g = -A'*b;
end