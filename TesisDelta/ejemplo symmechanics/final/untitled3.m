syms tf q0 qp0 qpp0 qi qpi qppi;
m = [1 0 0 0 0 0;0 1 0 0 0 0;0 0 2 0 0 0;1 tf tf^2 tf^3 tf^4 tf^5;0 1 2*tf^2 3*tf^2 4*tf^3 5*tf^4;0 0 2 6*tf 12*tf^2 20*tf^3];
minv = inv(m);
q = [q0;0;0;qi;0;0];
qp0 = 0;
qpi = 0;
qpp0 = 0;
qppi = 0;
f = eval(minv*q)

