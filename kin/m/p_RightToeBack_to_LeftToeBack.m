function [output1] = p_RightToeBack_to_LeftToeBack(var1)
    if coder.target('MATLAB')
        [output1] = p_RightToeBack_to_LeftToeBack_mex(var1);
    else
        coder.cinclude('p_RightToeBack_to_LeftToeBack_src.h');
        
        output1 = zeros(3, 1);

        
        coder.ceval('p_RightToeBack_to_LeftToeBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
