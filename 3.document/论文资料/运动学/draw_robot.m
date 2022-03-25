function [pos_end]=draw_robot(pos_now,s,param,id)
pos_now=[pos_now(3),pos_now(2),-pos_now(1)];
%--------------------正解----------------------
show_flag=[1,1,1];
l=[param(1),param(2),param(3)];%长度基座 大腿 小腿
sita=[0,s(2),s(3)-90,0];
alfa=[s(1),-90,0,-90];
%-----------------------------DH法标准解法---------------------------------------
L=[l(1),0,l(2),0];
D=[0,0,0,l(3)];
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

T_off=[0 0 0 pos_now(1);
       0 0 0 pos_now(2);
       0 0 0 -pos_now(3);
       0 0 0 0];
e1=T1+T_off;
e2=T1*T2+T_off;
e3=T1*T2*T3+T_off;
e4=T1*T2*T3*T4+T_off;
p1=[e1(1,4),e1(2,4),e1(3,4)];
p2=[e2(1,4),e2(2,4),e2(3,4)];
p3=[e3(1,4),e3(2,4),e3(3,4)];
p4=[e4(1,4),e4(2,4),e4(3,4)];
pos_end(1)=p4(3);
pos_end(2)=p4(2);
pos_end(3)=p4(1);
%-------------------------------总体公式  数值解法-----------------------------------
%正解
s1=[s(1),s(2),s(3),0];%基座旋转 大腿角度 小腿角度 基座偏角
end_pos=[
         -(l(2)*sind(s1(2))+l(3)*sind(s1(2)+s1(3)));
         sind(s1(4))*(l(1)+l(2)*cosd(s1(2))+l(3)*cosd(s1(2)+s1(3)));
         -cosd(s1(4))*(l(1)+l(2)*cosd(s1(2))+l(3)*cosd(s1(2)+s1(3)))];
end_pos=end_pos'*[cosd(s1(1)) -sind(s1(1)) 0;
                  sind(s1(1)) cosd(s1(1)) 0;
                  0,0,1];
              
%逆解
%1 机械臂
s2(1)=90+atan2(end_pos(1),end_pos(2))*57.3;
end_pos1=end_pos*[cosd(-s2(1)) -sind(-s2(1)) 0;
                   sind(-s2(1)) cosd(-s2(1)) 0;
                   0,0,1]+[0,0,l(1)];

sita=-atan2(-end_pos1(3),end_pos1(1))*57.3-90;
r=(end_pos1(3)^2+end_pos1(1)^2)^0.5;
s21=180+sita-acos((r*r+l(2)^2-l(3)^2)/(2*l(2)*r))*57.3;
s22=180+sita+acos((r*r+l(2)^2-l(3)^2)/(2*l(2)*r))*57.3;
s2(2)=-s22;
s2(3)=180-acos((l(2)^2+l(3)^2-r^2)/(2*l(2)*l(3)))*57.3;
%2 机械腿
sl(4)=180-atan2(end_pos(2),end_pos(3))*57.3;
end_posl=end_pos*[ 1   0    0;
                   0 cosd(sl(4)) -sind(sl(4)) ;
                   0 sind(sl(4)) cosd(sl(4))]+[0,0,l(1)];
sita=-atan2(-end_posl(3),end_posl(1))*57.3-90;
r=(end_posl(3)^2+end_posl(1)^2)^0.5;
s21=180+sita-acos((r*r+l(2)^2-l(3)^2)/(2*l(2)*r))*57.3;
s22=180+sita+acos((r*r+l(2)^2-l(3)^2)/(2*l(2)*r))*57.3;
sl(2)=-s22;
sl(3)=180-acos((l(2)^2+l(3)^2-r^2)/(2*l(2)*l(3)))*57.3;
%-----------------------------------绘图对比DH和逆解结果-----------------------------------             
plot3(-pos_now(3),pos_now(2),pos_now(1),'s','Markersize',15,'Linewidth',5);hold on;
line([-pos_now(3),e1(3,4)],[pos_now(2),e1(2,4)],[pos_now(1),e1(1,4)]*show_flag(3),'Linewidth',2); hold on;
plot3(e1(3,4),e1(2,4),e1(1,4)*show_flag(3),'o','Markersize',5);hold on;

line([e1(3,4),e2(3,4)],[e1(2,4),e2(2,4)],[e1(1,4),e2(1,4)]*show_flag(3),'Linewidth',2); hold on;
plot3(e2(3,4),e2(2,4),e2(1,4)*show_flag(3),'o','Markersize',5);hold on;

line([e2(3,4),e3(3,4)],[e2(2,4),e3(2,4)],[e2(1,4),e3(1,4)]*show_flag(3),'Linewidth',8); hold on;
plot3(e3(3,4),e3(2,4),e3(1,4)*show_flag(3),'o','Markersize',5);hold on;

line([e3(3,4),e4(3,4)],[e3(2,4),e4(2,4)],[e3(1,4),e4(1,4)]*show_flag(3),'Linewidth',2); hold on;
plot3(e4(3,4),e4(2,4),e4(1,4)*show_flag(3),'o','Markersize',10,'Linewidth',5);hold on;

end_pos=end_pos+[-pos_now(3),pos_now(2),-pos_now(1)];
plot3(end_pos(1),end_pos(2),end_pos(3)*-show_flag(3),'*','Markersize',10,'Linewidth',5);hold on;

str = [' ',num2str(id)];
text(0.01+end_pos(1),end_pos(2),end_pos(3)*-show_flag(3),str,'FontSize',20);
% line([0,0.125],[0,0],[0,0],'Linewidth',1); hold on;
% line([0,0],[0,0.25],[0,0],'Linewidth',1); hold on;
% line([0,0],[0,0],[0,0.075],'Linewidth',1); hold on;
grid on;
axis equal;
xlabel('Axis-X(m)')
ylabel('Axis-Y(m)')
zlabel('Axis-Z(m)')
end

%----------------逆解-----------------------
