function [output1] = R_LeftToeFront_to_RightToeFront(var1)
    if coder.target('MATLAB')
        [output1] = R_LeftToeFront_to_RightToeFront_mex(var1);
    else
        coder.cinclude('R_LeftToeFront_to_RightToeFront_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_LeftToeFront_to_RightToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
