function [output1] = Be_cassie(var1)
    if coder.target('MATLAB')
        [output1] = Be_cassie_mex(var1);
    else
        coder.cinclude('Be_cassie_src.h');
        
        output1 = zeros(20, 10);

        
        coder.ceval('Be_cassie_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
