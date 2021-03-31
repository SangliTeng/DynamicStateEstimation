function [D, C, G, J, dJ, h]= CassieDynamics_Full(q,dq,contact)
    D = perm_right(perm_left(De_cassie(q)));
    C = Ce_cassie(q,dq);
    G = Ge_cassie(q);
    h = perm_left(C * dq + G);
    
    C = perm_right(perm_left(C));
    G = perm_left(G);
    
    J = [];
    dJ = [];
    
    if contact(1) > 0.99 % left is in contact
        J = [J;perm_right(Jp_LeftToeFront(q));perm_right(Jp_LeftToeBack(q))];
        dJ = [dJ;perm_right(dJp_LeftToeFront(q,dq));perm_right(dJp_LeftToeBack(q,dq))];
    end
    
    if contact(2) > 0.99 % right is in contact
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