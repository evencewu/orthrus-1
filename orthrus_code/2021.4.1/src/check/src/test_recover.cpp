#include "rclcpp/rclcpp.hpp"

#include <string.h>
#include <stdio.h>
#include <errno.h>      //错误定义
#include <unistd.h>    //Unix标准函数定义, usleep()
#include <sys/time.h> 
#include <iostream>
#include <math.h>

#include "LSerial.h"    //串口通信函数
#include "motor_ctrl.h" //声明发送数据、接收数据的结构体，以及函数声明


using namespace std;
    int main(int argc, char * argv[])
    {
        rclcpp::init(argc, argv);

    	MOTOR_send motor_s0,motor_s1;
		MOTOR_recv motor_r0,motor_r1;
    	// long long start_time = 0;


        int fd;
        
		char a;
		cin >> a;
		if(a == 'a')
		{
			fd = open_set((char*)"/dev/ttyUSB0");
		}
		else if(a == 'b')
		{
			fd = open_set((char*)"/dev/ttyUSB1");
		}
		else if(a == 'c')
		{
			fd = open_set((char*)"/dev/ttyUSB2");
		}
		else if(a == 'd')
		{
			fd = open_set((char*)"/dev/ttyUSB3");
		}

        motor_s0.id = 0;
    	motor_s0.mode = 10;
    	motor_s0.T = 0;            //单位：Nm, T<255.9
    	motor_s0.W = 0;               //单位：rad/s, W<511.9
    	motor_s0.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s0.K_P = 0;        //K_P<31.9
    	motor_s0.K_W = 0;        //K_W<63.9

        motor_s1.id = 1;
    	motor_s1.mode = 10;
    	motor_s1.T = 0;            //单位：Nm, T<255.9
    	motor_s1.W = 0;               //单位：rad/s, W<511.9
    	motor_s1.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s1.K_P = 0;        //K_P<31.9
    	motor_s1.K_W = 0;        //K_W<63.9

	    long long start;
	    int sta0,sta1;
        int Ret, epfd;
        epfd = epoll_create(1);

	    struct epoll_event eventTest;
        eventTest.events = EPOLLIN;
        eventTest.data.fd = fd;
        
        Ret = epoll_ctl(epfd, EPOLL_CTL_ADD, fd, &eventTest);
        if(Ret != 0){                                                                                                    
            printf("[ERROR] Serial communication: epoll set error: %d\n", Ret);
        }
         
        float sq0;
        float sq1;
        
		float theta_cos;

		float cos;
		float sin;

		float pi = 3.141592;
        for(int i=0; i > -1; i++)
        {
		    modify_data(&motor_s0);
		    modify_data(&motor_s1);

            start = getSystemTime();
            sta0 = send_recv(fd, epfd, &motor_s0, &motor_r0);
			sta1 = send_recv(fd, epfd, &motor_s1, &motor_r1);
            printf("cost time: %lld\n", getSystemTime() - start);
			extract_data(&motor_r0);
			extract_data(&motor_r1);
			
            // printf("**************\n");
            printf("sta: %d\n", sta0);
			printf("sta: %d\n", sta1);
            printf("acc: %f\n", motor_r0.acc[0]);
			printf("acc: %f\n", motor_r0.acc[1]);
			printf("acc: %f\n", motor_r0.acc[2]);

			printf("acc: %f\n", motor_r1.acc[0]);
			printf("acc: %f\n", motor_r1.acc[1]);
			printf("acc: %f\n", motor_r1.acc[2]);

            sq0 = sqrt(motor_r0.acc[0]*motor_r0.acc[0] + motor_r0.acc[1]*motor_r0.acc[1] + motor_r0.acc[2]*motor_r0.acc[2]);
            sq1 = sqrt(motor_r1.acc[0]*motor_r1.acc[0] + motor_r1.acc[1]*motor_r1.acc[1] + motor_r1.acc[2]*motor_r1.acc[2]);
            //printf("sq0: %f\n", sq0);
            //printf("sq1: %f\n", sq1);
            //    
            //printf("sq1: %f\n", -motor_r1.acc[2]);
            //printf("sq0: %f\n", -motor_r1.acc[1]);
            //printf("sq1: %f\n", -motor_r1.acc[0]);
			cos = (-motor_r0.acc[0]*motor_r1.acc[2] - motor_r0.acc[1]*motor_r1.acc[1] - motor_r0.acc[2]*motor_r1.acc[0])/(sq0*sq1);
			//sin = (motor_r0.acc[1]*motor_r1.acc[0] - motor_r0.acc[2]*motor_r1.acc[1])-
			//      (motor_r0.acc[0]*motor_r1.acc[2] - motor_r0.acc[2]*motor_r1.acc[0])-
			//	  (-motor_r0.acc[0]*motor_r1.acc[1] + motor_r0.acc[1]*motor_r1.acc[0]);
			sin = -motor_r0.acc[0]*motor_r1.acc[1] + motor_r0.acc[1]*motor_r1.acc[2];
			if(sin > 0){
				theta_cos = acos(cos);
            }
		    else{
				theta_cos = -acos(cos);
			}
			printf("pos+: %f\n", motor_r0.Pos + theta_cos*9);
            
     	    motor_s0.Pos = motor_r0.Pos + theta_cos*9;          //单位：rad, Pos<131071.9
    	    motor_s0.K_P = 0.003;        //K_P<31.9
			motor_s1.K_W = 0.004;

            printf("pos: %f\n", motor_r0.Pos);
			printf("cos: %f\n", cos);
            printf("theta_cos: %f\n", theta_cos*9);
            printf("**************\n");
            // usleep(100000);
        }
 
    	printf("END\n");
    	// show_resv_data(&motor_r);

    	close_serial(fd);
    	rclcpp::shutdown();
    	return 0;
    }