%闭链五杆工作空间求解
%                 y |   / E
%                   |  /  L6
%                   | / B
%                   |/\ 
%                   /  \
%               L2 /|   \ L3
%                 / |    \
%              A /  |     \ C
%                \   |     /
%              L1 \ |    / L4
%          ---------|---------->
%                  O  L5 D      x
%
% L1=L4=70 L2=L3=140 L6=0 L5=0 菱形
%E点坐标（x,y）
clc;
clear all;
close all;
Param=[0.05,0.1,0.1,0.05,0,0.035];
x=0.0083        ;
y=-0.16   ;
figure(1)
[S1,S2] = i_2Dof(x,y,Param)
[x,y] = f_2Dof(S1,S2,Param);
% figure(2)
% S1=180+45;S2=90;
% [x,y] = f_2Dof(S1,S2,Param)




