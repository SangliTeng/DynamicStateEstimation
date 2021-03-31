clear;clc;close;
%% 
syms al_x al_y al_z 'real'
syms w_x w_y w_z 'real'
syms t1 t 'real'

al = skew([al_x,al_y,al_z]);
w0 = skew([w_x, w_y, w_z]);
wt = al + skew(w0 + al * t)^2;
wt1 = int(@(t)wt,t,0,t1);
%% verify the optimization based projected dynamics

%%
function mat = skew(x)
    mat = [0,-x(3),x(2);...
        x(3),0,-x(1);...
        -x(2),x(1),0 ];
end