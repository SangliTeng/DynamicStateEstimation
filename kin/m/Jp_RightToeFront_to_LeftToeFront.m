function [output1] = Jp_RightToeFront_to_LeftToeFront(var1)
    if coder.target('MATLAB')
        [output1] = Jp_RightToeFront_to_LeftToeFront_mex(var1);
    else
        coder.cinclude('Jp_RightToeFront_to_LeftToeFront_src.h');
        
        output1 = zeros(3, 14);

        
        coder.ceval('Jp_RightToeFront_to_LeftToeFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
