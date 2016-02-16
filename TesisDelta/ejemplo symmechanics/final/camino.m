syms t

tf1=1;
tf2=1;
tf3=1;


px2i=0;
px2f=20;

pz1i=-10;
pz1f=10;

pz3i=10;
pz3f=-10;


% %%%%%%%%%%%%%%%%%%%%%%%%%%% funcion Z

a10z = pz1i;
a11z = 0; %velocidad inicial
a12z = 0; %aceleracion inicial
a13z = (10*(pz1f-pz1i))/tf1^3;
a14z = -(15*(pz1f-pz1i))/tf1^4;
a15z = (6*(pz1f-pz1i))/tf1^5;
z1(t) = a10z + a11z*t + a12z*t^2 + a13z*t^3 + a14z*t^4 + a15z*t^5;
acz1=diff(diff(diff(z1)));


a30z = pz3i;
a31z = 0; %velocidad inicial
a32z = 0; %aceleracion inicial
a33z = (10*(pz3f-pz3i))/tf3^3;
a34z = -(15*(pz3f-pz3i))/tf3^4;
a35z = (6*(pz3f-pz3i))/tf3^5;
z3(t) = a30z + a31z*t + a32z*t^2 + a33z*t^3 + a34z*t^4 + a35z*t^5;
acz3(t)=diff(diff(diff(z3)));

% %%%%%%%%%%%%%%%%%%%%%%%% funcion X
a10x = px2i;
a11x = 0; %velocidad inicial
a12x = 0; %aceleracion inicial
a13x = (10*(px2f-px2i))/tf2^3;
a14x = -(15*(px2f-px2i))/tf2^4;
a15x = (6*(px2f-px2i))/tf2^5;
x2(t) = a10x + a11x*t + a12x*t^2 + a13x*t^3 + a14x*t^4 + a15x*t^5;



paso=0.01;
for i=1:(tf1)/paso;
  tiempo1(i)=tf1*paso*i;
  PosX1(i)=px2i;
  PosY1(i)=0;
  PosZ1(i)=z1(tiempo1(i));
  acelZ1(i)=acz1(tiempo1(i));
end
for i=1:(tf2)/paso;
  tiempo2(i)=tf2*paso*i;
  PosX2(i)=x(tf2*paso*i);
  PosY2(i)=0;
  PosZ2(i)=pz1f;
end
for i=1:(tf3)/paso;
  tiempo3(i)=tf3*paso*i;
  PosX3(i)=px2f;
  PosY3(i)=0;
  PosZ3(i)=z3(tiempo3(i));
  acelZ3(i)=acz3(tiempo3(i));
end


figure(1)
hold on
hold all
plot3(PosX1,PosY1,PosZ1);
plot3(PosX2,PosY2,PosZ2);
plot3(PosX3,PosY3,PosZ3);

figure(2)
hold on
hold all
plot(tiempo1,PosX1);
plot(tiempo1+tf1,PosX2);
plot(tiempo1+tf1+tf2,PosX3);

figure(3)
hold on
hold all
plot(tiempo1,PosZ1);
plot(tiempo1+tf1,PosZ2);
plot(tiempo1+tf1+tf2,PosZ3);


figure(6)
hold on
hold all
plot(tiempo1,acelZ1);
plot(tiempo1+tf1,PosY1);
plot(tiempo1+tf1+tf2,acelZ3);

% plot(tiempo,PosX)