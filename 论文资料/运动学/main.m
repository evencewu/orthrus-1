clc;
close all;
clear all;
Dt=0.1;%s
L=[0.03,0.0625,0.075];%长度基座 大腿 小腿
sita=[25,45,-70];%基座旋转 大腿角度 小腿角度

pos_now1=[0,0,0.0];%
[pos_end1]=draw_robot(pos_now1,sita,L,1)

sita=[25,45,-70];%基座旋转 大腿角度 小腿角度
pos_now2=[0,0.07,0];
[pos_end2]=draw_robot(pos_now2,sita,L,2)

sita=[100,-5,-45];%基座旋转 大腿角度 小腿角度
pos_now3=[0,0.07,0];
[pos_end3]=draw_robot(pos_now3,sita,L,3)
%----


%--dsita 

sita=[0,0,0];%基座旋转 大腿角度 小腿角度
pos_now4=[0,0.07,0];
[pos_end4]=draw_robot(pos_now3,sita,L,4)