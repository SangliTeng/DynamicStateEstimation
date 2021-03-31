function [output1] = H_VectorNav_to_LeftToeBack(var1)
    if coder.target('MATLAB')
        [output1] = H_VectorNav_to_LeftToeBack_mex(var1);
    else
        coder.cinclude('H_VectorNav_to_LeftToeBack_src.h');
        
        output1 = zeros(4, 4);

        
        coder.ceval('H_VectorNav_to_LeftToeBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
