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
    	MOTOR_send motor_s, motor_s1;
    	// long long start_time = 0;
    	motor_s.id =0;
    	motor_s.mode = 0;
    	motor_s.T = 0;            //单位：Nm, T<255.9
    	motor_s.W = 0;               //单位：rad/s, W<511.9
    	motor_s.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s.K_P = 0;        //K_P<31.9
    	motor_s.K_W = 0;        //K_W<63.9

        motor_s1.id = 0;
    	motor_s1.mode = 0;
    	//接收参数
    	MOTOR_recv motor_r;
		
    	//文件ID
	#if defined(__linux__)
    	    int fd;
    
	#elif defined(__WIN32__)
    	    HANDLE fd;

        #endif

    	fd = open_set((char*)"/dev/ttyUSB1");
    	// fd = open_set((char*)"COM4");
    
    	modify_data(&motor_s);
		modify_data(&motor_s1);

    	int sta;
    	printf("START\n");
    	// show_resv_data(&motor_r);

        int ko = 1;
     	do
    	{
            sta = send_recv(fd, &motor_s, &motor_r);
			printf("status2: %d\n", sta);
			extract_data(&motor_r);
			printf("gyro_x: %f\n", motor_r.gyro[0]);
            printf("gyro_y: %f\n", motor_r.gyro[1]);
            printf("gyro_z: %f\n", motor_r.gyro[2]);
            printf("acc_x: %f\n", motor_r.acc[0]);
            printf("acc_y: %f\n", motor_r.acc[1]);
            printf("acc_z: %f\n", motor_r.acc[2]);

    	    // extract_data(&motor_r);
    	    // show_resv_data(&motor_r);
            cin >> ko;
    	}
        while(ko != 1);

    	printf("END\n");
    	// show_resv_data(&motor_r);

    	close_serial(fd);
	#if defined(__WIN32__)
    	    system("pause");
	#endif
    	rclcpp::shutdown();
    	return 0;
    }