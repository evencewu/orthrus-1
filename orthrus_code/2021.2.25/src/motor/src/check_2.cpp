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
    	MOTOR_send motor_s0, motor_s1;
		MOTOR_recv motor_r0, motor_r1;
    	// long long start_time = 0;
    	motor_s0.id =0;
    	motor_s0.mode = 0;
    	motor_s0.T = 0;            //单位：Nm, T<255.9
    	motor_s0.W = 0;               //单位：rad/s, W<511.9
    	motor_s0.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s0.K_P = 0;        //K_P<31.9
    	motor_s0.K_W = 0;        //K_W<63.9

		motor_s1.id =1;
    	motor_s1.mode = 0;
    	motor_s1.T = 0;            //单位：Nm, T<255.9
    	motor_s1.W = 0;               //单位：rad/s, W<511.9
    	motor_s1.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s1.K_P = 0;        //K_P<31.9
    	motor_s1.K_W = 0;        //K_W<63.9

        int fd;

        fd = open_set((char*)"/dev/ttyUSB3");
    	// fd = open_set((char*)"COM4");
    
    	modify_data(&motor_s0);
		modify_data(&motor_s1);

    	printf("reseat\n");
    	// show_resv_data(&motor_r);
        
		send_recv(fd, &motor_s0, &motor_r0);
		send_recv(fd, &motor_s1, &motor_r1);
        
        
		float fault;
		//todo z_2 = -x_1
        while (9==9)  
		{
		  extract_data(&motor_r0);
		  extract_data(&motor_r1);
		  fault = (motor_r1.acc[2] +  motor_r0.acc[0]) * -1;
		  printf("fault: %f\n", fault);
		  printf("0");
          motor_s0.mode = 10;
		  while (fault <= 0.5 && fault >= 0.5)
		  {
			  motor_s0.Pos = motor_r0.Pos-fault/4;
		  }
		  motor_s0.K_P = 0.05;
		  motor_s1.W = 0; 
		  motor_s0.K_W = 0.5;
		  printf("3");			/* code */
		  modify_data(&motor_s0);
		  modify_data(&motor_s1);
		  printf("1");
		  send_recv(fd, &motor_s0, &motor_r0);
		  send_recv(fd, &motor_s1, &motor_r1);
		  printf("2");
		}
		


        //int ko = 1;
     	//do
    	//{
        //    sta = send_recv(fd, &motor_s, &motor_r);
		//	printf("status2: %d\n", sta);
		//	extract_data(&motor_r);
		//	printf("gyro_x: %f\n", motor_r.gyro[0]);
        //    printf("gyro_y: %f\n", motor_r.gyro[1]);
        //    printf("gyro_z: %f\n", motor_r.gyro[2]);
        //    printf("acc_x: %f\n", motor_r.acc[0]);
        //    printf("acc_y: %f\n", motor_r.acc[1]);
        //    printf("acc_z: %f\n", motor_r.acc[2]);
//
    	//    // extract_data(&motor_r);
    	//    // show_resv_data(&motor_r);
        //    cin >> ko;
    	//}
        //while(ko != 1);
//
    	printf("END\n");
    	// show_resv_data(&motor_r);

    	close_serial(fd);
	#if defined(__WIN32__)
    	    system("pause");
	#endif
    	rclcpp::shutdown();
    	return 0;
    }