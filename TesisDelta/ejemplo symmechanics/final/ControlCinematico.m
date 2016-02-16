clear all
clc
%Para un paso cualquiera

syms q1 q0 qp1 qp0;
syms a0 a1 a2 a3;
syms t0 tf t;


a = [a0; a1; a2; a3];
m = [1 t0 (t0)^2 (t0)^3;0 1 (2*(t0)^2) (3*(t0)^2);1 tf (tf)^2 (tf)^3;0 1 (2*(tf)^2) (3*(tf)^2)];

%suponiendo siempre que:
qp1 = 0;
qp0 = 0;
t0 = 0;
tf = 1;
%la expresion de la posicion es:
qi = q0 + 3*(q1-q0)*t^2 - 2*(q1-q0)*t^3;

%%
%Paso de un lugar a otro:
syms pxf pxi vxi vxf;
syms a0 a1 a2 a3;
syms t0 tf t;
x = pxi + 3*(pxf-pxi)*t^2 - 2*(pxf-pxi)*t^3;



%%

q0 = 10;
q1 = -20;
hold on
f(t) = eval(qi);
ezplot(f)
axis([0 1 -20 20])

hold off








