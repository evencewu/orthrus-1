%�˶�ѧ�������ſ˱ȼ��㺯����Doghome�ṩ
clc;
close all;
clear all;
%--------------------����----------------------
show_flag=[1,1,1];
en_cal_jacobi=1;%ʹ�ܼ���������ſ˱Ⱦ���  �ȵ��ڻ�ͼ���ֵĽǶȰ����Լ�������ϵ ����sita alfa��ʽ����������ſ˱� XY����ֱ�������endpos��ʽ���Է���λ����
s=[25,            25,          90,         0];%��ڽǶ� ���ȽǶ� С�ȽǶ�
l=[0.025,         0.07,       0.06];%�����ƫ ���� С��


sita=[180,      -90,          s(2),      s(3)-180,      0];
alfa=[-90,      -s(1),        0,           0,      0];
%-----------------------------DH����׼�ⷨ---------------------------------------
L=[0,0,0,l(2),l(3)];
D=[0,l(1),0,0,0];
sitau=sita(1);
alfau=alfa(1);
Lu=L(1);
Du=D(1);
T1=[cosd(sitau) -sind(sitau) 0 Lu;
   sind(sitau)*cosd(alfau) cosd(sitau)*cosd(alfau)  -sind(alfau) -Du*sind(alfau);
   sind(sitau)*sind(alfau) cosd(sitau)*sind(alfau)  cosd(alfau) Du*cosd(alfau);
   0          0           0 1];

sitau=sita(2);
alfau=alfa(2);
Lu=L(2);
Du=D(2);
T2=[cosd(sitau) -sind(sitau) 0 Lu;
   sind(sitau)*cosd(alfau) cosd(sitau)*cosd(alfau)  -sind(alfau) -Du*sind(alfau);
   sind(sitau)*sind(alfau) cosd(sitau)*sind(alfau)  cosd(alfau) Du*cosd(alfau);
   0          0           0 1];

sitau=sita(3);
alfau=alfa(3);
Lu=L(3);
Du=D(3);
T3=[cosd(sitau) -sind(sitau) 0 Lu;
   sind(sitau)*cosd(alfau) cosd(sitau)*cosd(alfau)  -sind(alfau) -Du*sind(alfau);
   sind(sitau)*sind(alfau) cosd(sitau)*sind(alfau)  cosd(alfau) Du*cosd(alfau);
   0          0           0 1];

sitau=sita(4);
alfau=alfa(4);
Lu=L(4);
Du=D(4);
T4=[cosd(sitau) -sind(sitau) 0 Lu;
   sind(sitau)*cosd(alfau) cosd(sitau)*cosd(alfau)  -sind(alfau) -Du*sind(alfau);
   sind(sitau)*sind(alfau) cosd(sitau)*sind(alfau)  cosd(alfau) Du*cosd(alfau);
   0          0           0 1];

sitau=sita(5);
alfau=alfa(5);
Lu=L(5);
Du=D(5);
T5=[cosd(sitau) -sind(sitau) 0 Lu;
   sind(sitau)*cosd(alfau) cosd(sitau)*cosd(alfau)  -sind(alfau) -Du*sind(alfau);
   sind(sitau)*sind(alfau) cosd(sitau)*sind(alfau)  cosd(alfau) Du*cosd(alfau);
   0          0           0 1];

e1=T1;
e2=T1*T2;
e3=T1*T2*T3;
e4=T1*T2*T3*T4;
e5=T1*T2*T3*T4*T5;
p1=[e1(1,4),e1(2,4),e1(3,4)];
p2=[e2(1,4),e2(2,4),e2(3,4)];
p3=[e3(1,4),e3(2,4),e3(3,4)];
p4=[e4(1,4),e4(2,4),e4(3,4)];
p5=[e5(1,4),e5(2,4),e5(3,4)] %xyz
%-----------------------------------��ͼ�Ա�DH�������-----------------------------------             
plot3(0,0,0,'s','Markersize',22,'Linewidth',5);hold on;
line([0,e1(1,4)],[0,e1(2,4)],[0,e1(3,4)]*show_flag(3),'Linewidth',10); hold on;
plot3(e1(1,4),e1(2,4),e1(3,4)*show_flag(3),'o','Markersize',5);hold on;

line([e1(1,4),e2(1,4)],[e1(2,4),e2(2,4)],[e1(3,4),e2(3,4)]*show_flag(3),'Linewidth',10); hold on;
plot3(e2(1,4),e2(2,4),e2(3,4)*show_flag(3),'o','Markersize',5);hold on;

line([e2(1,4),e3(1,4)],[e2(2,4),e3(2,4)],[e2(3,4),e3(3,4)]*show_flag(3),'Linewidth',4); hold on;
plot3(e3(1,4),e3(2,4),e3(3,4)*show_flag(3),'o','Markersize',5);hold on;

line([e3(1,4),e4(1,4)],[e3(2,4),e4(2,4)],[e3(3,4),e4(3,4)]*show_flag(3),'Linewidth',4); hold on;
plot3(e4(1,4),e4(2,4),e4(3,4)*show_flag(3),'o','Markersize',5);hold on;

line([e4(1,4),e5(1,4)],[e4(2,4),e5(2,4)],[e4(3,4),e5(3,4)]*show_flag(3),'Linewidth',2); hold on;
plot3(e5(1,4),e5(2,4),e5(3,4)*show_flag(3),'o','Markersize',10,'Linewidth',5);hold on;

xlabel('X��');
ylabel('Y��');
zlabel('Z��');
line([0,0.08],[0,0],[0,0],'Linewidth',1,'color','r'); hold on;
line([0,0],[0,0.06],[0,0],'Linewidth',1,'color','b'); hold on;
line([0,0],[0,0],[0,0.1],'Linewidth',1,'color','k'); hold on;
grid on;
axis equal;



%----------------��ʽ����----------------------
syms L1 L2 L3 S1 S2 S3
if (en_cal_jacobi)
s=[S1,S2,S3,0];%��ڽǶ� ���ȽǶ� С�ȽǶ�
l=[L1,L2,L3];%�����ƫ ���� С��
sita=[pi,    -pi/2,      s(2),      s(3)-pi,      0];
alfa=[-pi/2,    -s(1),        0,      0,      0];
%-----------------------------DH����׼�ⷨ---------------------------------------
L=[0,0,0,l(2),l(3)];
D=[0,l(1),0,0,0];
sitau=sita(1);
alfau=alfa(1);
Lu=L(1);
Du=D(1);
T1=[cos(sitau) -sin(sitau) 0 Lu;
   sin(sitau)*cos(alfau) cos(sitau)*cos(alfau)  -sin(alfau) -Du*sin(alfau);
   sin(sitau)*sin(alfau) cos(sitau)*sin(alfau)  cos(alfau) Du*cos(alfau);
   0          0           0 1];

sitau=sita(2);
alfau=alfa(2);
Lu=L(2);
Du=D(2);
T2=[cos(sitau) -sin(sitau) 0 Lu;
   sin(sitau)*cos(alfau) cos(sitau)*cos(alfau)  -sin(alfau) -Du*sin(alfau);
   sin(sitau)*sin(alfau) cos(sitau)*sin(alfau)  cos(alfau) Du*cos(alfau);
   0          0           0 1];

sitau=sita(3);
alfau=alfa(3);
Lu=L(3);
Du=D(3);
T3=[cos(sitau) -sin(sitau) 0 Lu;
   sin(sitau)*cos(alfau) cos(sitau)*cos(alfau)  -sin(alfau) -Du*sin(alfau);
   sin(sitau)*sin(alfau) cos(sitau)*sin(alfau)  cos(alfau) Du*cos(alfau);
   0          0           0 1];

sitau=sita(4);
alfau=alfa(4);
Lu=L(4);
Du=D(4);
T4=[cos(sitau) -sin(sitau) 0 Lu;
   sin(sitau)*cos(alfau) cos(sitau)*cos(alfau)  -sin(alfau) -Du*sin(alfau);
   sin(sitau)*sin(alfau) cos(sitau)*sin(alfau)  cos(alfau) Du*cos(alfau);
   0          0           0 1];

sitau=sita(5);
alfau=alfa(5);
Lu=L(5);
Du=D(5);
T5=[cos(sitau) -sin(sitau) 0 Lu;
   sin(sitau)*cos(alfau) cos(sitau)*cos(alfau)  -sin(alfau) -Du*sin(alfau);
   sin(sitau)*sin(alfau) cos(sitau)*sin(alfau)  cos(alfau) Du*cos(alfau);
   0          0           0 1];

e5=T1*T2*T3*T4*T5;
end_pos=[e5(1,4);e5(2,4);e5(3,4)] %xyz

sita=[S1 S2 S3];
jacobi = jacobian(end_pos,sita)
end

