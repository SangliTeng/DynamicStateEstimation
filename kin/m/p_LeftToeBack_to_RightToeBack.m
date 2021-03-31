function [output1] = p_LeftToeBack_to_RightToeBack(var1)
    if coder.target('MATLAB')
        [output1] = p_LeftToeBack_to_RightToeBack_mex(var1);
    else
        coder.cinclude('p_LeftToeBack_to_RightToeBack_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_LeftToeBack_to_RightToeBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
