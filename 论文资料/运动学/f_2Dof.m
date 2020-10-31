function [Xe,Ye] = f_2Dof(Alpha1,Alpha2,Param)
L1=Param(1);
L2=Param(2);
L3=Param(3);
L4=Param(4);
L5=Param(5);
L6=Param(6);
Xa=L1.*cosd(Alpha1);
Ya=L1.*sind(Alpha1);
Xc=L5+L4.*cosd(Alpha2);
Yc=L4.*sind(Alpha2);
lengthAC=sqrt((Xc-Xa)^2+(Yc-Ya)^2);
A=2*L2.*(Xc-Xa);
B=2*L2.*(Yc-Ya);
C=L2^2+lengthAC^2-L3^2;
theta1=2*atand((B+sqrt(A^2+B^2-C^2))/(A+C));
theta2=2*atand((B-sqrt(A^2+B^2-C^2))/(A+C));
Xb=Xa+(L2)*cosd(theta1);
Yb=Ya+(L2)*sind(theta1);
%if isreal(theta1)
    Xe=Xa+(L2+L6)*cosd(theta1);
    Ye=Ya+(L2+L6)*sind(theta1);
% else
%     Xe=Xa+(L2+L6)*cos(theta2);
%     Ye=Ya+(L2+L6)*sin(theta2);
% end
plot(0,0,'s','Markersize',22,'Linewidth',5);hold on;%O
plot(L5,0,'s','Markersize',22,'Linewidth',5);hold on;%D
plot(Xa,-Ya,'s','Markersize',11,'Linewidth',5);hold on;%A
line([0,Xa],[0,-Ya],'Linewidth',2); hold on;
plot(Xc,-Yc,'s','Markersize',11,'Linewidth',5);hold on;%C
line([L5,Xc],[0,-Yc],'Linewidth',2); hold on;
plot(Xb,-Yb,'s','Markersize',11,'Linewidth',5);hold on;%B
line([Xb,Xa],[-Yb,-Ya],'Linewidth',2); hold on;
line([Xb,Xc],[-Yb,-Yc],'Linewidth',2); hold on;
plot(Xe,-Ye,'s','Markersize',11,'Linewidth',5);hold on;%E
line([Xb,Xe],[-Yb,-Ye],'Linewidth',2); hold on;
axis equal;
grid on;
Ye=-Ye;
end
