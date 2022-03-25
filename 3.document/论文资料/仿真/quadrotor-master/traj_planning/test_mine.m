function test_mine
clc;
clear all;
close all;
Tsw=0.25;
leg_h=0.2;
tar_dis=0.4;
speed=tar_dis/Tsw;

Opt=3   ;

path=[ -tar_dis/2 , 0, 0 ;
       -tar_dis/2, leg_h/2, 0;
       -tar_dis/2, leg_h, 0;
       0, leg_h, 0;
       tar_dis/2, leg_h, 0;
       tar_dis/2, leg_h/2, 0;
       tar_dis/2,  0, 0;];
[ts, total_time] = generate_ts_mine(path,speed);
if Opt==3
X = traj_opt3(path, total_time,ts);
else
X = traj_opt7(path, total_time,ts);
end
t=0;
dt=0.001;
N=total_time/dt;
for i=1:N
  t=t+dt;  

%     
%     3rd order trajectory planning
    k = find(ts<=t);
    k = k(end);
    if k>24
        k=24;
    end
    if Opt==3
    pos(i,:) = [t^3, t^2, t, 1]*X(4*(k-1)+1:4*k,:);
    vel(i,:) = [3*t^2, 2*t, 1, 0]*X(4*(k-1)+1:4*k,:);
    acc(i,:) = [6*t, 2, 0, 0]*X(4*(k-1)+1:4*k,:);
    else
%     % 7th order minimum snap trajectory
    pos(i,:) = [t^7, t^6, t^5, t^4, t^3, t^2, t, 1]*X(8*(k-1)+1:8*k,:);
    vel(i,:) = [7*t^6, 6*t^5, 5*t^4, 4*t^3, 3*t^2, 2*t, 1, 0]*X(8*(k-1)+1:8*k,:);
    acc(i,:) = [42*t^5, 30*t^4, 20*t^3, 12*t^2, 6*t, 2, 0, 0]*X(8*(k-1)+1:8*k,:);
    end
end
figure(1)
plot(pos(:,1),pos(:,2));

grid on
axis equal;
xlabel('X÷·(m)');ylabel('Y÷·(m)');

figure(2)
subplot(2,1,1);
plot(vel(:,1));
grid on
subplot(2,1,2);
plot(vel(:,2));
grid on
end


function [ts, total_time] = generate_ts_mine(path,speed)
path_len = sum(sqrt(sum((path(2:end, :) - path(1:end-1,:)).^2,2)));
total_time = path_len/speed;
% ts = linspace(0, total_time, size(path,1));
path_seg_len = sqrt(sqrt(sum((path(2:end, :) - path(1:end-1,:)).^2,2)));
ts = cumsum(path_seg_len);
ts = ts/ts(end);
ts = [0; ts]';
ts = ts*total_time;
end

