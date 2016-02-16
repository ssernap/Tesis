clear all
clc
syms t;

pxi = 20;
pxf = 20;
pyi = 10;
pyf = 0;
wzi = -pi()/2;
wzf = -pi()/2;
tf = 10;


a0x = pxi;
a1x = 0; %velocidad inicial
a2x = 0; %aceleracion inicial
a3x = (20*pxf)/tf^3 - (20*pxi)/tf^3;
a4x = (35*pxi)/tf^4 - (35*pxf)/tf^4;
a5x = (16*pxf)/tf^5 - (16*pxi)/tf^5;
x = a0x + a1x*t + a2x*t^2 + a3x*t^3 + a4x*t^4 + a5x*t^5;
a0y = pyi;
a1y = 0; %velocidad inicial
a2y = 0; %aceleracion inicial
a3y = (20*pyf)/tf^3 - (20*pyi)/tf^3;
a4y = (35*pyi)/tf^4 - (35*pyf)/tf^4;
a5y = (16*pyf)/tf^5 - (16*pyi)/tf^5;
y = a0y + a1y*t + a2y*t^2 + a3y*t^3 + a4y*t^4 + a5y*t^5;
a0wz = wzi;
a1wz = 0; %velocidad inicial
a2wz = 0; %aceleracion inicial
a3wz = (20*wzf)/tf^3 - (20*wzi)/tf^3;
a4wz = (35*wzi)/tf^4 - (35*wzf)/tf^4;
a5wz = (16*wzf)/tf^5 - (16*wzi)/tf^5;
wz = a0wz + a1wz*t + a2wz*t^2 + a3wz*t^3 + a4wz*t^4 + a5wz*t^5;

%- t^5/625 + (7*t^4)/200 - t^3/5 + 10