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
        // double pi = 3.1415;
	//发送参数
    	MOTOR_send motor_s0,motor_s1;
		MOTOR_recv motor_r0,motor_r1;
    	// long long start_time = 0;
    	motor_s0.id =0;
    	motor_s0.mode = 0;
    	motor_s0.T = 0;            //单位：Nm, T<255.9
    	motor_s0.W = 0;               //单位：rad/s, W<511.9
    	motor_s0.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s0.K_P = 0;        //K_P<31.9
    	motor_s0.K_W = 0;        //K_W<63.9

		motor_s0.id =1;
    	motor_s0.mode = 0;
    	motor_s0.T = 0;            //单位：Nm, T<255.9
    	motor_s0.W = 0;               //单位：rad/s, W<511.9
    	motor_s0.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s0.K_P = 0;        //K_P<31.9
    	motor_s0.K_W = 0;        //K_W<63.9

        int fd;

        fd = open_set((char*)"/dev/ttyUSB1");
    	// fd = open_set((char*)"COM4");
    
	    long long start;
	    int sta;

    	modify_data(&motor_s0);
		modify_data(&motor_s1);

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
			modify_data(&motor_s0);
			modify_data(&motor_s1);

            start = getSystemTime();
            sta = send_recv(fd, epfd, &motor_s0, &motor_r0);
            printf("cost time: %lld\n", getSystemTime() - start);
			printf("T: %lf\n", motor_s0.T);
    
            extract_data(&motor_r0);
            // printf("**************\n");
            printf("sta: %d\n", sta);
            printf("pos: %f\n", motor_r0.Pos);
            printf("**************\n");
            // usleep(100000);
        }
 
    	printf("END\n");
    	// show_resv_data(&motor_r);

    	close_serial(fd);
	#if defined(__WIN32__)
    	    system("pause");
	#endif
    	rclcpp::shutdown();
    	return 0;
    }