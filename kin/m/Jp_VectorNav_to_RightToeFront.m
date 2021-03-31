function [output1] = Jp_VectorNav_to_RightToeFront(var1)
    if coder.target('MATLAB')
        [output1] = Jp_VectorNav_to_RightToeFront_mex(var1);
    else
        coder.cinclude('Jp_VectorNav_to_RightToeFront_src.h');
        
        output1 = zeros(3, 14);

        
        coder.ceval('Jp_VectorNav_to_RightToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
