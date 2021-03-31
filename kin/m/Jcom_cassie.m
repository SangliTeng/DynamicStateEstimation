function [output1] = Jcom_cassie(var1)
    if coder.target('MATLAB')
        [output1] = Jcom_cassie_mex(var1);
    else
        coder.cinclude('Jcom_cassie_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('Jcom_cassie_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end
