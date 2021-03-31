function v = Observation(q,dq,contact)
    v = [];
    if contact(1) > 0.5
        v = [v;-J_LeftToeBottom(q) * dq];
    end
    if contact(2) > 0.5
        v = [v;-J_RightToeBottom(q) * dq];
    end
end