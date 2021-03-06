function [output1] = H_LeftToeBottom_to_RightToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = H_LeftToeBottom_to_RightToeBottom_mex(var1);
    else
        coder.cinclude('H_LeftToeBottom_to_RightToeBottom_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_LeftToeBottom_to_RightToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
