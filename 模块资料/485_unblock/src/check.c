#include <stdio.h>
#include <errno.h>      //错误定义
#include <string.h>
#include <unistd.h>    //Unix标准函数定义, usleep()
#include <sys/time.h> 
#include "LSerial.h"    //串口通信函数
// #include "crc32.h"      //针对stm32f4的crc校验计算
#include "motor_ctrl.h" //声明发送数据、接收数据的结构体，以及函数声明
#include <time.h>
#include <sys/epoll.h>


int main()
{
    //发送参数
    MOTOR_send motor_s, motor_s1;
    // long long start_time = 0;
    motor_s.id = 0;
    motor_s.mode = 10;
    motor_s.T = 0.0;            //单位：Nm, T<255.9
    motor_s.W = 0.0;               //单位：rad/s, W<511.9
    motor_s.Pos = 0.0;          //单位：rad, Pos<131071.9
    motor_s.K_P = 0.0;        //K_P<31.9      0.05
    motor_s.K_W = 0.0;        //K_W<63.9     20

    motor_s1.id = 0;
    motor_s1.mode = 0;
    //接收参数
    MOTOR_recv motor_r;
    //文件ID
    int fd;
    fd = open_set("/dev/ttyUSB0");

    long long start;

    // printf("size of send: %ld\n", sizeof(motor_s));
    // printf("size of recv: %ld\n", sizeof(motor_r));

    int sta;
    
    modify_data(&motor_s);
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

    printf("START\n");    

    for(int i=0; i<10; i++)
    {
        start = getSystemTime();
        sta = send_recv(fd, epfd, &motor_s, &motor_r);
        printf("cost time: %lld\n", getSystemTime() - start);

        extract_data(&motor_r);
        // printf("**************\n");
        printf("sta: %d\n", sta);
        printf("pos: %f\n", motor_r.Pos);
        printf("w  : %f\n", motor_r.LW);
        printf("**************\n");
        // usleep(100000);
    }

    printf("END\n");

    close_serial(fd);
    
    return 0;
}