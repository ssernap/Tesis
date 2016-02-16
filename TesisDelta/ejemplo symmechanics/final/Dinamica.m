%Ejercicio curso dirigido.
%caracteristicas del mecanismo:
clear all
clc
syms l1 l2 l3;
syms lc1 lc2 lc3;
syms m1 m2 m3;
syms q1 q2 q3;
syms qp1 qp2 qp3;
syms gx gy gz;
syms qpp1 qpp2 qpp3;
mm = {m1 m2 m3}';
q = {q1 q2 q3}';
qp = {qp1 qp2 qp3}';
g = [gx gy gz]';
qpp = [qpp1 qpp2 qpp3]';

%Se calculan las inercias del mecanismo en el centro de masa de cada eslabon
I11 = (m1*(l1^2))/12;
I22 = (m2*(l2^2))/12;
I33 = (m3*(l3^2))/12;

%Se calcula el Jacobiano del mecanismo
z0 = [0 0 1]';
z1 = z0;
z2 = z1;
z3 = z2;

R23 = [cos(q3) -sin(q3) 0;sin(q3) cos(q3) 0;0 0 1];
R12 = [cos(q2) -sin(q2) 0;sin(q2) cos(q2) 0;0 0 1];
R01 = [cos(q1) -sin(q1) 0;sin(q1) cos(q1) 0;0 0 1];
R02 = R01*R12;
R03 = R02*R23;

I1 = R01*I11*R01';
I2 = R02*I22*R02';
I3 = R03*I33*R03';

r23 = [l3*cos(q3) l3*sin(q3) 0]';
r12 = [l2*cos(q2) l2*sin(q2) 0]';
r01 = [l1*cos(q1) l1*sin(q1) 0]';

P23 = (R02*r23);
P13 = (R01*r12)+P23;
P03 = (eye(3)*r01)+P13;

Pc1en0 = [lc1*cos(q1) lc1*sin(q1) 0]';
Pc2en1 = R01*[lc2*cos(q2) lc2*sin(q2) 0]';
Pc3en2 = R01*R12*[lc3*cos(q3) lc3*sin(q3) 0]';

Pc2en0 = Pc2en1+[l1*cos(q1) l1*sin(q1) 0]';
Pc3en1 = Pc3en2+R01*[l2*cos(q2) l2*sin(q2) 0]';
Pc3en0 = Pc3en2+R01*[l2*cos(q2) l2*sin(q2) 0]'+[l1*cos(q1) l1*sin(q1) 0]';

%Se calcula el jacobiano en los centros de masa para el lagrangiano
Jv1 = [cross(z0,Pc1en0) [0 0;0 0;0 0]];
Jw1 = [z0 [0 0;0 0;0 0]];

Jv2 = [cross(z0,Pc2en0) cross(z1,Pc2en1) [0;0;0]];
Jw2 = [z0 z1 [0;0;0]];

Jv3 = [cross(z0,Pc3en0) cross(z1,Pc3en1) cross(z2,Pc3en2)];
Jw3 = [z0 z1 z2];

Jv = {Jv1 Jv2 Jv3}';

M = m1*(Jv1'*Jv1) + m2*(Jv2'*Jv2) + m3*(Jv3'*Jv3) + Jw1'*I1*Jw1 + Jw2'*I2*Jw2 + Jw3'*I3*Jw3;

%Se calcula el Jacobiano convencional para la cinematica inversa
J1 = simplify([cross(z0,P03);z0]);
J2 = simplify([cross(z1,P13);z1]);
J3 = simplify([cross(z2,P23);z2]);

J = [J1 J2 J3];

%Se calcula la matriz G de fuerzas gravitacionales
G1=0;
for j = 1:3
        G1 = G1 - mm{j}*g'*Jv{j}(1:3,1:1);
end

G2=0;
for j = 1:3
        G2 = G2 - mm{j}*g'*Jv{j}(1:3,2:2);
end

G3=0;
for j = 1:3
        G3 = G3 - mm{j}*g'*Jv{j}(1:3,3:3);
end

G = [G1 G2 G3]';

%Se calcula la matriz C de coreolis

%cijk
%syms i j k;
%Cijk = ((diff(M(i,j),q(k))-0.5*diff(M(j,k),q(i)))*q(j)*q(K));

i = 1;
C1 = 0;
for j = 1:3
    for k = 1:3
        C1 = C1 + ((diff(M(i,j),q{k})-0.5*diff(M(j,k),q{i}))*qp{j}*qp{k});
    end
end

i = 2;
C2 = 0;
for j = 1:3
    for k = 1:3
        C2 = C2 + ((diff(M(i,j),q{k})-0.5*diff(M(j,k),q{i}))*qp{j}*qp{k});
    end
end

i = 3;
C3 = 0;
for j = 1:3
    for k = 1:3
        C3 = C3 + ((diff(M(i,j),q{k})-0.5*diff(M(j,k),q{i}))*qp{j}*qp{k});
    end
end

C = [C1;C2;C3];

%Se calcula el lagrangiano para hallar las fuerzas generalizadas t
t = M*qpp+C+G;
Jsi = inv((J'*J))*J';

%Se añade la fuerza de freciccion y los actuadores.

fric_visc1 = 0;
fric_visc2 = 0;
fric_visc3 = 0;

fric_coulomb1 = 0;
fric_coulomb2 = 0;
fric_coulomb3 = 0;


Fric= ([fric_visc1 0 0;0 fric_visc2 0; 0 0 fric_visc3]*[qp1;qp2;qp3])+([fric_coulomb1 0 0;0 fric_coulomb2 0; 0 0 fric_coulomb3]*[qp1;qp2;qp3])

tfric = M*qpp+C+G+Fric

% Se ingresan las constantes de los motores utilizados en las
% articulaciones.

Jm1 = 0.0000059;
Jm2 = 0.0000059;
Jm3 = 0.0000059;
Ka1 = 0.68;
Ka2 = 0.68;
Ka3 = 0.68;
Ra1 = 41.8;
Ra2 = 41.8;
Ra3 = 41.8;
Kb1 = 20;
Kb2 = 20;
Kb3 = 20;
fm1 = 0.5;
fm2 = 0.5;
fm3 = 0.5;
r1 = 2;
r2 = 2;
r3 = 2;
v1 = 680;
v2 = 680;
v3 = 680;

J = [Jm1 0 0;0 Jm2 0;0 0 Jm3];
B = [(fm1+(Ka1*Kb1/Ra1)) 0 0;0 (fm2+(Ka2*Kb2/Ra2)) 0;0 0 (fm3+(Ka3*Kb3/Ra3))];
R = [(1/r1^2) 0 0;0 (1/r2^2) 0;0 0 (1/r3^2)];
K = [((Ka1/Ra1)*(1/r1)) 0 0;0 ((Ka2/Ra2)*(1/r2)) 0;0 0 ((Ka3/Ra3)*(1/r3))];

v=inv(K)*((J*[qpp1;qpp2;qpp3])+(B*[qp1;qp2;qp3])+(R*t));


%%Se ingresan las caracteristicas del robot con posicion inicial.

dt = 1;
l1 = 20;
l2 = 20;
l3 = 10;
lc1 = 10;
lc2 = 10;
lc3 = 5;
q1 = pi()/2;
q2 = -pi()/2;
q3 = -pi()/2;
qp1 = 0;
qp2 = 0;
qp3 = 0;
qpp1 = 0;
qpp2 = 0;
qpp3 = 0;
m1 = 1;
m2 = 1;
m3 = 1;
gy = 0;
gx = 0;
gz = -9.81;
tval = eval(t);
cla
run('Plot')
grid

%%
%Cinematica inversa del robot

run('Trayectorias')
total_t = cell(3,iter_total);
total_v = cell(3,iter_total);
t1 = zeros(iter_total,1);
t2 = zeros(iter_total,1);
t3 = zeros(iter_total,1);
v1 = zeros(iter_total,1);
v2 = zeros(iter_total,1);
v3 = zeros(iter_total,1);

for i = 1:iter_total
    paso_pos = Jsi * [dx{i} dy{i} dz{i} dwx{i} dwy{i} dwz{i}]';
    paso_vel = Jsi* [dpx{i} dpy{i} dpz{i} dpwx{i} dpwy{i} dpwz{i}]';
    paso_acel = Jsi* [dppx{i} dppy{i} dppz{i} dppwx{i} dppwy{i} dppwz{i}]';
    q1 = q1+eval(paso_pos(1));
    q2 = q2+eval(paso_pos(2));
    q3 = q3+eval(paso_pos(3));
    qp1 = eval(paso_vel(1));
    qp2 = eval(paso_vel(2));
    qp3 = eval(paso_vel(3));
    qpp1 = eval(paso_acel(1));
    qpp2 = eval(paso_acel(2));
    qpp3 = eval(paso_acel(3));
    tval = eval(t);
    total_t{1,i} = tval(1);
    total_t{2,i} = tval(2);
    total_t{3,i} = tval(3);
    t1=cell2mat(total_t(1:1,1:iter_total)');
    t2=cell2mat(total_t(2:2,1:iter_total)');
    t3=cell2mat(total_t(3:3,1:iter_total)');
    v_val = eval(v);
    total_v{1,i} = v_val(1);
    total_v{2,i} = v_val(2);
    total_v{3,i} = v_val(3);
    t1ts{i,1} = tval(1);
    t2ts{i,1} = tval(2);
    t3ts{i,1} = tval(3);
    v1=cell2mat(total_v(1:1,1:iter_total)');
    v2=cell2mat(total_v(2:2,1:iter_total)');
    v3=cell2mat(total_v(3:3,1:iter_total)');    
    q1ts{i,1} = q1;
    qp1ts{i,1} = qp1;
    %q1ts{i,2} = i*dt;
    q2ts{i,1} = q2;
    %q2ts{i,2} = i*dt;
    q3ts{i,1} = q3;
    %q3ts{i,2} = i*dt;
        run('Plot')
    pause(.01)
end

subplot(2,2,2)
hold on
title('Torques primera articulacion')
plot(t1);
grid
hold off
subplot(2,2,3)
hold on
title('Torques segunda articulacion')
plot(t2);
grid
hold off
subplot(2,2,4)
hold on
title('Torques tercera articulacion')
plot(t3);
grid
hold off

q1ts = timeseries(cell2mat(q1ts));
q2ts = timeseries(cell2mat(q2ts));
q3ts = timeseries(cell2mat(q3ts));
t1ts = timeseries(t1);
t2ts = timeseries(t2);
t3ts = timeseries(t3);

