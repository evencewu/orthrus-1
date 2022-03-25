//已完成
#include "rclcpp/rclcpp.hpp"

#include <string.h>
#include <stdio.h>
#include <errno.h>      //错误定义
#include <unistd.h>    //Unix标准函数定义, usleep()
#include <sys/time.h> 
#include <iostream>

#include "LSerial.h"    //串口通信函数
#include "motor_ctrl.h" //声明发送数据、接收数据的结构体，以及函数声明


using namespace std;
    int main(int argc, char * argv[])
    {
        rclcpp::init(argc, argv);

    	MOTOR_send motor_s0;
		MOTOR_recv motor_r0;
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
        unsigned short id_input;
		cin >> id_input;

        motor_s0.id = id_input;
    	motor_s0.mode = 0;
    	motor_s0.T = 0;            //单位：Nm, T<255.9
    	motor_s0.W = 0;               //单位：rad/s, W<511.9
    	motor_s0.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s0.K_P = 0;        //K_P<31.9
    	motor_s0.K_W = 0;        //K_W<63.9
        modify_data(&motor_s0);

	    long long start;
	    int sta;
        int Ret, epfd;
        epfd = epoll_create(1);

	    struct epoll_event eventTest;
        eventTest.events = EPOLLIN;
        eventTest.data.fd = fd;
        
        Ret = epoll_ctl(epfd, EPOLL_CTL_ADD, fd, &eventTest);
        if(Ret != 0){                                                                                                    
            printf("[ERROR] Serial communication: epoll set error: %d\n", Ret);
        }

        for(int i=0; i > -1; i++)
        {
            start = getSystemTime();
			    motor_s0.T = 0;            //单位：Nm, T<255.9
    	        motor_s0.W = 0;               //单位：rad/s, W<511.9
    	        motor_s0.Pos = 4;          //单位：rad, Pos<131071.9
    	        motor_s0.K_P = 0.1;        //K_P<31.9
    	        motor_s0.K_W = 0;
            modify_data(&motor_s0);

            sta = send_recv(fd, epfd, &motor_s0, &motor_r0);
            printf("cost time: %lld\n", getSystemTime() - start);
			extract_data(&motor_r0);
			
            // printf("**************\n");
            printf("sta: %d\n", sta);
            printf("pos: %f\n", motor_r0.Pos);
			printf("T: %f\n", motor_r0.T);
            printf("**************\n");
            // usleep(100000);
        }
 
    	printf("END\n");
    	// show_resv_data(&motor_r);

    	close_serial(fd);
    	rclcpp::shutdown();
    	return 0;
    }