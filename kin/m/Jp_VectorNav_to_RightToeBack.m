function [output1] = Jp_VectorNav_to_RightToeBack(var1)
    if coder.target('MATLAB')
        [output1] = Jp_VectorNav_to_RightToeBack_mex(var1);
    else
        coder.cinclude('Jp_VectorNav_to_RightToeBack_src.h');
        
        output1 = zeros(3, 14);

        
        coder.ceval('Jp_VectorNav_to_RightToeBack_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
