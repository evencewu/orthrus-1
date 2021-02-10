#include "rclcpp/rclcpp.hpp"

#include <string.h>
#include <stdio.h>
#include <errno.h>      //错误定义
#include <unistd.h>    //Unix标准函数定义, usleep()
#include <sys/time.h> 

#include "LSerial.h"    //串口通信函数
#include "motor_ctrl.h" //声明发送数据、接收数据的结构体，以及函数声明


using namespace std::chrono_literals;


    int main(int argc, char * argv[])
    {
        rclcpp::init(argc, argv);
        // double pi = 3.1415;
	//发送参数
    	MOTOR_send motor_s, motor_s1;
    	// long long start_time = 0;
    	motor_s.id =0;
    	motor_s.mode = 10;
    	motor_s.T = 0;            //单位：Nm, T<255.9
    	motor_s.W = 0;               //单位：rad/s, W<511.9
    	motor_s.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s.K_P = 0.1;        //K_P<31.9
    	motor_s.K_W = 3;        //K_W<63.9

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


    	for(int i=0; i<100; i++)
    	{
			printf("3\n");
            sta = send_recv(fd, &motor_s, &motor_r);
			printf("status2: %d\n", sta);
			extract_data(&motor_r);
			printf("POS: %f\n", motor_r.Pos);
    	    // extract_data(&motor_r);
    	    // show_resv_data(&motor_r);
			printf("1\n");
    	    usleep(100000);
			printf("2\n");
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
