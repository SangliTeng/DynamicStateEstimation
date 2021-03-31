function [output1] = p_LeftToeFront_to_RightToeFront(var1)
    if coder.target('MATLAB')
        [output1] = p_LeftToeFront_to_RightToeFront_mex(var1);
    else
        coder.cinclude('p_LeftToeFront_to_RightToeFront_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_LeftToeFront_to_RightToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
