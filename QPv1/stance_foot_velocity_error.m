function [Ast, bst] = stance_foot_velocity_error(J)
    Ast = [J, zeros(size(J,1), 38)];
    bst = zeros(size(J,1),1);
end