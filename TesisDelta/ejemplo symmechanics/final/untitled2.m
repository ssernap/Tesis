clear all
clc

l3=10;
l1=20;
l2=20;
x = 20;
y = 20;
wz=-pi()/2;
xw = x-l3*cos(wz);
yw = y-l3*sin(wz);
%a = atan2(yw,xw);
%q2 = 1 - acos((l1^2 + l2^2-xw^2-yw^2)/(2*l1*l2));
%c2 = (xw^2 + yw^2 -l1^2 - l2^2) / (2*l1*l2);
%q2 = acos(c2);

q2 = -acos((xw^2 + yw^2 - l1^2 - l2^2)/(2*l1*l2));
q1 = asin((l2*sin(-q2))/(sqrt(xw^2 + yw^2))) + atan(yw/xw);

%q1 = a + acos(((xw^2 + yw^2+l1^2-l2^2)/(2*l1*sqrt(xw^2+yw^2))));
q3= wz-q1-q2;













