function [output1] = Jb_VectorNav_to_RightToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = Jb_VectorNav_to_RightToeBottom_mex(var1);
    else
        coder.cinclude('Jb_VectorNav_to_RightToeBottom_src.h');
        
        output1 = zeros(6, 14);

        
        coder.ceval('Jb_VectorNav_to_RightToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
