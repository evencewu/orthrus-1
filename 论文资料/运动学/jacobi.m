clc;
clear all;
syms Alpha1 Alpha2 L1 L2 L3 L4 L5 L6
% L1=0.044;
% L2=0.019;
% L3=0.055;
% L4=0.022;
% L5=0.014;
% L6=0.038;
Xa=L1.*cos(Alpha1);
Ya=L1.*sin(Alpha1);
Xc=L5+L4.*cos(Alpha2);
Yc=L4.*sin(Alpha2);
lengthAC=sqrt((Xc-Xa)^2+(Yc-Ya)^2);
A=2*L2.*(Xc-Xa);
B=2*L2.*(Yc-Ya);
C=L2^2+lengthAC^2-L3^2;
theta1=2*atan((B+sqrt(A^2+B^2-C^2))/(A+C));
Xe=Xa+(L2+L6)*cos(theta1);
Ye=Ya+(L2+L6)*sin(theta1);
Ye=-Ye;
J=jacobian([Xe;Ye],[Alpha1 Alpha2]);
J(1)
J(2)
J(3)
J(4)
%diff([Xe,Ye],[Alpha1,Alpha2])