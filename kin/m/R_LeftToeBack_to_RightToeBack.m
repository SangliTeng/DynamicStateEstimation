function [output1] = R_LeftToeBack_to_RightToeBack(var1)
    if coder.target('MATLAB')
        [output1] = R_LeftToeBack_to_RightToeBack_mex(var1);
    else
        coder.cinclude('R_LeftToeBack_to_RightToeBack_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_LeftToeBack_to_RightToeBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
