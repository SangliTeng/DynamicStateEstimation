function [output1] = p_RightToeFront_to_LeftToeFront(var1)
    if coder.target('MATLAB')
        [output1] = p_RightToeFront_to_LeftToeFront_mex(var1);
    else
        coder.cinclude('p_RightToeFront_to_LeftToeFront_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_RightToeFront_to_LeftToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
