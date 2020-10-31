function [Alpha1,Alpha2] = i_2Dof(x,y,Param)
L1=Param(1);
L2=Param(2);
L3=Param(3);
L4=Param(4);
L5=Param(5);
L6=Param(6);
y=-y; 
a=2*x*L1;
b=2*y*L1;
c=x^2+y^2+L1^2-(L2+L6)^2;
Alpha10=[0,0]; 
Alpha10(1)=2*atan((b+sqrt(a^2+b^2-c^2))/(a+c));
Alpha10(2)=2*atan((b-sqrt(a^2+b^2-c^2))/(a+c));
 
Xb=x-L6*((x-L1*cos(Alpha10))/(L2+L6));
Yb=y-L6*((y-L1*sin(Alpha10))/(L2+L6));
 
d=2*L4*(Xb-L5);
e=2*L4*Yb;
f=[((Xb(1)-L5)^2+L4^2+(Yb(1))^2-L3^2),((Xb(2)-L5)^2+L4^2+(Yb(2))^2-L3^2)];
Alpha20=[0,0,0,0];
Alpha20(1)=2*atan((e(1)+sqrt((d(1))^2+(e(1))^2-(f(1))^2))/(d(1)+f(1)));
Alpha20(2)=2*atan((e(1)-sqrt((d(1))^2+(e(1))^2-(f(1))^2))/(d(1)+f(1)));
 
Alpha20(3)=2*atan((e(2)+sqrt((d(2))^2+(e(2))^2-(f(2))^2))/(d(2)+f(2)));
Alpha20(4)=2*atan((e(2)-sqrt((d(2))^2+(e(2))^2-(f(2))^2))/(d(2)+f(2)));
 
if (Alpha10(1))<0 
    Alpha10(1)=Alpha10(1)+2*pi;
end
if (Alpha10(2))<0 
    Alpha10(2)=Alpha10(2)+2*pi; 
end
 
if (Alpha20(1))<0 
    Alpha20(1)=Alpha20(1)+2*pi;
end
if (Alpha20(2))<0
    Alpha20(2)=Alpha20(2)+2*pi;
end
if (Alpha20(3))<0
    Alpha20(3)=Alpha20(3)+2*pi;
end
if (Alpha20(4))<0 
    Alpha20(4)=Alpha20(4)+2*pi; 
end
Alpha1o=Alpha10*57.3;
Alpha2o=Alpha20*57.3;

Alpha1=Alpha1o(1);
Alpha2=Alpha2o(2);
end