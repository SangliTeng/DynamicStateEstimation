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
syms D11 D12 D21 D22 'real'
syms C11 C12 C21 C22 'real'
syms G1 G2 'real'
syms f1 f2 'real'
syms d2q1 d2q2 dq1 dq2 'real'
dq = [dq1;dq2];
d2q = [d2q1;d2q2];
D = [D11,D12;D21,D22];
C = [C11,C12;C21,C22];
G = [G1;G2];
F = [f1;f2];
solve(D^(-1) * (F-G-C*dq) - d2q == 0,d2q)
%%
function mat = skew(x)
    mat = [0,-x(3),x(2);...
        x(3),0,-x(1);...
        -x(2),x(1),0 ];
end