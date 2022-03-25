//! 电机执行 接收 限位保护程序
//!   
#include <string.h>
#include <stdio.h>
#include <errno.h>      //错误定义
#include <unistd.h>    //Unix标准函数定义, usleep()
#include <sys/time.h> 

#include "LSerial.h"    //串口通信函数
#include "motor_ctrl.h" //声明发送数据、接收数据的结构体，以及函数声明

#include <memory>
#include <chrono>
#include <functional>
#include <string> 

#include "rclcpp/rclcpp.hpp"
#include "message/msg/motorcarryout.hpp"
#include "message/msg/motorrecv.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

//todo 初始化，加载端口
// ? 创建发送数据  
MOTOR_send  motor_LF_s1, motor_LF_s2, motor_LF_s3,
            motor_RF_s1, motor_RF_s2, motor_RF_s3,
            motor_LB_s1, motor_LB_s2, motor_LB_s3,
            motor_RB_s1, motor_RB_s2, motor_RB_s3;
// ? 创建接收数据           
MOTOR_recv motor_LF_r1, motor_LF_r2, motor_LF_r3,
            motor_RF_r1, motor_RF_r2, motor_RF_r3,
            motor_LB_r1, motor_LB_r2, motor_LB_r3,
            motor_RB_r1, motor_RB_r2, motor_RB_r3;

int fd1 = open_set((char*)"/dev/ttyUSB0");
int fd2 = open_set((char*)"/dev/ttyUSB1");
int fd3 = open_set((char*)"/dev/ttyUSB2");
int fd4 = open_set((char*)"/dev/ttyUSB3");

//todo 订阅者代码
//todo 作用：接收控制信息
class motor_carryout : public rclcpp::Node{
  public:
    motor_carryout()
    : Node("motor_carryout")
    {
      subscription_ = this->create_subscription<message::msg::Motorcarryout>(
      "motor_carryout", 2, std::bind(&motor_carryout::motor_carryout_callback, this, _1));
    }

    //todo 节点名叫motor_carryout，构造函数中创建了订阅者，订阅Motorcarryout消息，订阅的话题名叫做“motor_carryout”，
    //todo 保存消息的队列长度是10，当订阅到数据时，会进入回调函数motor_carryout_callback。

  private:
    void motor_carryout_callback(const message::msg::Motorcarryout::SharedPtr msg) const
    {
      //todo 设置参数
        //! LF_1
      if(motor_LF_r1.Pos < 0 && motor_LF_r1.Pos > 0)// ? 限位
      {
        motor_LF_s1.id   =                 0;
        motor_LF_s1.mode =  msg -> mode_lf_1;
        motor_LF_s1.T    =  msg ->    t_lf_1;  //单位：Nm, T<255.9
        motor_LF_s1.W    =  msg ->    w_lf_1;  //单位：rad/s, W<511.9
        motor_LF_s1.Pos  =  msg ->  pos_lf_1;  //单位：rad, Pos<131071.9
        motor_LF_s1.K_P  =  msg ->  k_p_lf_1;  //K_P<31.9
        motor_LF_s1.K_W  =  msg ->  k_w_lf_1;  //K_W<63.9
      }	
      //! LF_2
      if(motor_LF_r2.Pos < 0 && motor_LF_r2.Pos > 0)// ? 限位
      {
        motor_LF_s2.id   =                1;
      	motor_LF_s2.mode = msg -> mode_lf_2;
      	motor_LF_s2.T    = msg ->    t_lf_2;           
      	motor_LF_s2.W    = msg ->    w_lf_2;              
      	motor_LF_s2.Pos  = msg ->  pos_lf_2;         
      	motor_LF_s2.K_P  = msg ->  k_p_lf_2;      
      	motor_LF_s2.K_W  = msg ->  k_w_lf_2;      
      }	
      //! LF_3
      if(motor_LF_r3.Pos < 0 && motor_LF_r3.Pos > 0)// ? 限位
      {
        motor_LF_s3.id   =                2;
        motor_LF_s3.mode = msg -> mode_lf_3;
        motor_LF_s3.T    = msg ->    t_lf_3;             
        motor_LF_s3.W    = msg ->    w_lf_3;               
        motor_LF_s3.Pos  = msg ->  pos_lf_3;       
        motor_LF_s3.K_P  = msg ->  k_p_lf_3;         
        motor_LF_s3.K_W  = msg ->  k_w_lf_3;      
      }	
      
          //! RF_1
            if(motor_RF_r1.Pos < 0 && motor_RF_r1.Pos > 0)// ? 限位
          {
            motor_RF_s1.id   =                0;
          	motor_RF_s1.mode = msg -> mode_rf_1;
          	motor_RF_s1.T    = msg ->    t_rf_1;           
          	motor_RF_s1.W    = msg ->    w_rf_1;             
          	motor_RF_s1.Pos  = msg ->  pos_rf_1;       
          	motor_RF_s1.K_P  = msg ->  k_p_rf_1;       
          	motor_RF_s1.K_W  = msg ->  k_w_rf_1;      
          }	
          //! RF_2
            if(motor_RF_r2.Pos < 0 && motor_RF_r2.Pos > 0)// ? 限位
          {
            motor_RF_s2.id   =                1;
          	motor_RF_s2.mode = msg -> mode_rf_2;
          	motor_RF_s2.T    = msg ->    t_rf_2;            
          	motor_RF_s2.W    = msg ->    w_rf_2;             
          	motor_RF_s2.Pos  = msg ->  pos_rf_2;         
          	motor_RF_s2.K_P  = msg ->  k_p_rf_2;        
          	motor_RF_s2.K_W  = msg ->  k_w_rf_2;     
          //! RF_3
          }
            if(motor_RF_r3.Pos < 0 && motor_RF_r3.Pos > 0)// ? 限位
          {
            motor_RF_s3.id   =                2;
          	motor_RF_s3.mode = msg -> mode_rf_3;
          	motor_RF_s3.T    = msg ->    t_rf_3;             
          	motor_RF_s3.W    = msg ->    w_rf_3;                
          	motor_RF_s3.Pos  = msg ->  pos_rf_3;         
          	motor_RF_s3.K_P  = msg ->  k_p_rf_3;        
          	motor_RF_s3.K_W  = msg ->  k_w_rf_3;      
          }	
    
      //! LB_1
        if(motor_LB_r1.Pos < 0 && motor_LB_r1.Pos > 0)// ? 限位
      {
        motor_LB_s1.id   =                0;
        motor_LB_s1.mode = msg -> mode_lb_1;
        motor_LB_s1.T    = msg ->    t_lb_1;            
        motor_LB_s1.W    = msg ->    w_lb_1;               
        motor_LB_s1.Pos  = msg ->  pos_lb_1;         
        motor_LB_s1.K_P  = msg ->  k_p_lb_1;         
        motor_LB_s1.K_W  = msg ->  k_w_lb_1;        
      }	
      //! LB_2
        if(motor_LB_r2.Pos < 0 && motor_LB_r2.Pos > 0)// ? 限位
      {
        motor_LB_s2.id   =                1;
        motor_LB_s2.mode = msg -> mode_lb_2;
        motor_LB_s2.T    = msg ->    t_lb_2;             
        motor_LB_s2.W    = msg ->    w_lb_2;              
        motor_LB_s2.Pos  = msg ->  pos_lb_2;     
        motor_LB_s2.K_P  = msg ->  k_p_lb_2;       
        motor_LB_s2.K_W  = msg ->  k_w_lb_2;       
      }	
      //! LB_3
        if(motor_LB_r3.Pos < 0 && motor_LB_r3.Pos > 0)// ? 限位
      {
        motor_LB_s3.id   =                2;
        motor_LB_s3.mode = msg -> mode_lb_3;
        motor_LB_s3.T    = msg ->    t_lb_3;             //单位：Nm, T<255.9
        motor_LB_s3.W    = msg ->    w_lb_3;                //单位：rad/s, W<511.9
        motor_LB_s3.Pos  = msg ->  pos_lb_3;         //单位：rad, Pos<131071.9
        motor_LB_s3.K_P  = msg ->  k_p_lb_3;         //K_P<31.9
        motor_LB_s3.K_W  = msg ->  k_w_lb_3;        //K_W<63.9
      }	
          //! RB_1
            if(motor_RB_r1.Pos < 0 && motor_RB_r1.Pos > 0)// ? 限位
          {
            motor_RB_s1.id   =                0;
            motor_RB_s1.mode = msg -> mode_rb_1;
            motor_RB_s1.T    = msg ->    t_rb_1;            
            motor_RB_s1.W    = msg ->    w_rb_1;               
            motor_RB_s1.Pos  = msg ->  pos_rb_1;         
            motor_RB_s1.K_P  = msg ->  k_p_rb_1;         
            motor_RB_s1.K_W  = msg ->  k_w_rb_1; 
          }	
          //! RB_2
            if(motor_RB_r2.Pos < 0 && motor_RB_r2.Pos > 0)// ? 限位
          {
            motor_RB_s2.id   =                1;
            motor_RB_s2.mode = msg -> mode_rb_2;
            motor_RB_s2.T    = msg ->    t_rb_2;            
            motor_RB_s2.W    = msg ->    w_rb_2;               
            motor_RB_s2.Pos  = msg ->  pos_rb_2;         
            motor_RB_s2.K_P  = msg ->  k_p_rb_2;         
            motor_RB_s2.K_W  = msg ->  k_w_rb_2; 
          }
          //! RB_3
            if(motor_RB_r3.Pos < 0 && motor_RB_r3.Pos > 0)// ? 限位
          {
            motor_RB_s3.id   =                2;
            motor_RB_s3.mode = msg -> mode_lb_3;
            motor_RB_s3.T    = msg ->    t_lb_3;            
            motor_RB_s3.W    = msg ->    w_lb_3;               
            motor_RB_s3.Pos  = msg ->  pos_lb_3;         
            motor_RB_s3.K_P  = msg ->  k_p_lb_3;         
            motor_RB_s3.K_W  = msg ->  k_w_lb_3; 
          }	
      //todo 打包发送参数
      // ? 将数据处理成stm32所需的格式
      modify_data(&motor_LF_s1);
      modify_data(&motor_LF_s2);
      modify_data(&motor_LF_s3);
      modify_data(&motor_RF_s1);
      modify_data(&motor_RF_s2);
      modify_data(&motor_RF_s3);
      modify_data(&motor_LB_s1);
      modify_data(&motor_LB_s2);
      modify_data(&motor_LB_s3);
      modify_data(&motor_RB_s1);
      modify_data(&motor_RB_s2);
      modify_data(&motor_RB_s3);
  
      // ? 发送数据，接收反馈
      send_recv(fd1, &motor_LF_s1, &motor_LF_r1);
      send_recv(fd1, &motor_LF_s2, &motor_LF_r2);
      send_recv(fd1, &motor_LF_s3, &motor_LF_r3);
  
      send_recv(fd2, &motor_RF_s1, &motor_RF_r1);
      send_recv(fd2, &motor_RF_s2, &motor_RF_r2);
      send_recv(fd2, &motor_RF_s3, &motor_RF_r3);
  
      send_recv(fd3, &motor_LB_s1, &motor_LB_r1);
      send_recv(fd3, &motor_LB_s2, &motor_LB_r2);
      send_recv(fd3, &motor_LB_s3, &motor_LB_r3);
  
      send_recv(fd4, &motor_RB_s1, &motor_RB_r1);
      send_recv(fd4, &motor_RB_s2, &motor_RB_r2);
      send_recv(fd4, &motor_RB_s3, &motor_RB_r3);
      // ? 处理反馈
      extract_data(&motor_LF_r1);		
      extract_data(&motor_LF_r2);
      extract_data(&motor_LF_r3);
  
      extract_data(&motor_RF_r1);
      extract_data(&motor_RF_r2);
      extract_data(&motor_RF_r3);
  
      extract_data(&motor_LB_r1);
      extract_data(&motor_LB_r2);
      extract_data(&motor_LB_r3);
  
      extract_data(&motor_RB_r1);
      extract_data(&motor_RB_r2);
      extract_data(&motor_RB_r3);
    }
  rclcpp::Subscription<message::msg::Motorcarryout>::SharedPtr subscription_;
};


//todo 发布者代码
//todo 作用：反馈电机状态，并向话题motor_recv广播
//todo 频率1000hz
class motor_recv : public rclcpp::Node{    
  public:
    motor_recv()
    : Node("motor_recv"), count_(0) 
    {
      publisher_ = this->create_publisher<message::msg::Motorrecv>("motor_recv", 2);
      timer_ = this->create_wall_timer(1ms, std::bind(&motor_recv::motor_recv_callback, this)); 
      // ? 创建了一个发布者，发布的话题名是Motor_recv，话题消息是Motorrecv，保存消息的队列长度是10
      // ? 然后创建了一个定时器timer_，做了一个1ms的定时，每次触发定时器后，都会运行回调函数timer_callback。
    }


  private:
    void motor_recv_callback()
    {
      auto motorrecv = message::msg::Motorrecv();

      motorrecv.motor_id_lf_1 = motor_LF_r1.motor_id;// ?电机ID 
      motorrecv.    temp_lf_1 = motor_LF_r1.Temp; // ?温度
      motorrecv.       t_lf_1 = motor_LF_r1.T;    // ?当前实际电机输出力矩
      motorrecv.       w_lf_1 = motor_LF_r1.W;    // ?当前实际电机速度（高速）
      motorrecv.      lw_lf_1 = motor_LF_r1.LW;   // ?当前实际电机速度（低速）
      motorrecv.     acc_lf_1 = motor_LF_r1.Acc;  // ?电机转子加速度
      motorrecv.     pos_lf_1 = motor_LF_r1.Pos;  // ?当前电机位置（主控0点修正，电机关节还是以编码器0点为准）
      motorrecv. imu_g_x_lf_1 = motor_LF_r1.gyro[0];// ? 三轴加速度
      motorrecv. imu_g_y_lf_1 = motor_LF_r1.gyro[1];
      motorrecv. imu_g_z_lf_1 = motor_LF_r1.gyro[2];
      motorrecv. imu_a_x_lf_1 = motor_LF_r1.acc[0];// ? 三轴偏转角
      motorrecv. imu_a_y_lf_1 = motor_LF_r1.acc[1];
      motorrecv. imu_a_z_lf_1 = motor_LF_r1.acc[2];

      motorrecv.motor_id_lf_2 = motor_LF_r2.motor_id;
      motorrecv.    temp_lf_2 = motor_LF_r2.Temp; 
      motorrecv.       t_lf_2 = motor_LF_r2.T;    
      motorrecv.       w_lf_2 = motor_LF_r2.W;   
      motorrecv.      lw_lf_2 = motor_LF_r2.LW;   
      motorrecv.     acc_lf_2 = motor_LF_r2.Acc;  
      motorrecv.     pos_lf_2 = motor_LF_r2.Pos;  
      motorrecv. imu_g_x_lf_2 = motor_LF_r2.gyro[0];
      motorrecv. imu_g_y_lf_2 = motor_LF_r2.gyro[1];
      motorrecv. imu_g_z_lf_2 = motor_LF_r2.gyro[2];
      motorrecv. imu_a_x_lf_2 = motor_LF_r2.acc[0];
      motorrecv. imu_a_y_lf_2 = motor_LF_r2.acc[1];
      motorrecv. imu_a_z_lf_2 = motor_LF_r2.acc[2];

      motorrecv.motor_id_lf_3 = motor_LF_r3.motor_id;
      motorrecv.    temp_lf_3 = motor_LF_r3.Temp; 
      motorrecv.       t_lf_3 = motor_LF_r3.T;    
      motorrecv.       w_lf_3 = motor_LF_r3.W;   
      motorrecv.      lw_lf_3 = motor_LF_r3.LW;   
      motorrecv.     acc_lf_3 = motor_LF_r3.Acc;  
      motorrecv.     pos_lf_3 = motor_LF_r3.Pos;  
      motorrecv. imu_g_x_lf_3 = motor_LF_r3.gyro[0];
      motorrecv. imu_g_y_lf_3 = motor_LF_r3.gyro[1];
      motorrecv. imu_g_z_lf_3 = motor_LF_r3.gyro[2];
      motorrecv. imu_a_x_lf_3 = motor_LF_r3.acc[0];
      motorrecv. imu_a_y_lf_3 = motor_LF_r3.acc[1];
      motorrecv. imu_a_z_lf_3 = motor_LF_r3.acc[2];

        motorrecv.motor_id_rf_1 = motor_RF_r1.motor_id;
        motorrecv.    temp_rf_1 = motor_RF_r1.Temp; 
        motorrecv.       t_rf_1 = motor_RF_r1.T;    
        motorrecv.       w_rf_1 = motor_RF_r1.W;   
        motorrecv.      lw_rf_1 = motor_RF_r1.LW;   
        motorrecv.     acc_rf_1 = motor_RF_r1.Acc;  
        motorrecv.     pos_rf_1 = motor_RF_r1.Pos;  
        motorrecv. imu_g_x_rf_1 = motor_RF_r1.gyro[0];
        motorrecv. imu_g_y_rf_1 = motor_RF_r1.gyro[1];
        motorrecv. imu_g_z_rf_1 = motor_RF_r1.gyro[2];
        motorrecv. imu_a_x_rf_1 = motor_RF_r1.acc[0];
        motorrecv. imu_a_y_rf_1 = motor_RF_r1.acc[1];
        motorrecv. imu_a_z_rf_1 = motor_RF_r1.acc[2];
  
        motorrecv.motor_id_rf_2 = motor_RF_r2.motor_id;
        motorrecv.    temp_rf_2 = motor_RF_r2.Temp; 
        motorrecv.       t_rf_2 = motor_RF_r2.T;    
        motorrecv.       w_rf_2 = motor_RF_r2.W;   
        motorrecv.      lw_rf_2 = motor_RF_r2.LW;   
        motorrecv.     acc_rf_2 = motor_RF_r2.Acc;  
        motorrecv.     pos_rf_2 = motor_RF_r2.Pos;  
        motorrecv. imu_g_x_rf_2 = motor_RF_r2.gyro[0];
        motorrecv. imu_g_y_rf_2 = motor_RF_r2.gyro[1];
        motorrecv. imu_g_z_rf_2 = motor_RF_r2.gyro[2];
        motorrecv. imu_a_x_rf_2 = motor_RF_r2.acc[0];
        motorrecv. imu_a_y_rf_2 = motor_RF_r2.acc[1];
        motorrecv. imu_a_z_rf_2 = motor_RF_r2.acc[2];
  
        motorrecv.motor_id_rf_3 = motor_RF_r3.motor_id;
        motorrecv.    temp_rf_3 = motor_RF_r3.Temp; 
        motorrecv.       t_rf_3 = motor_RF_r3.T;    
        motorrecv.       w_rf_3 = motor_RF_r3.W;   
        motorrecv.      lw_rf_3 = motor_RF_r3.LW;   
        motorrecv.     acc_rf_3 = motor_RF_r3.Acc;  
        motorrecv.     pos_rf_3 = motor_RF_r3.Pos;  
        motorrecv. imu_g_x_rf_3 = motor_RF_r3.gyro[0];
        motorrecv. imu_g_y_rf_3 = motor_RF_r3.gyro[1];
        motorrecv. imu_g_z_rf_3 = motor_RF_r3.gyro[2];
        motorrecv. imu_a_x_rf_3 = motor_RF_r3.acc[0];
        motorrecv. imu_a_y_rf_3 = motor_RF_r3.acc[1];
        motorrecv. imu_a_z_rf_3 = motor_RF_r3.acc[2];

      motorrecv.motor_id_lb_1 = motor_LB_r1.motor_id;
      motorrecv.    temp_lb_1 = motor_LB_r1.Temp; 
      motorrecv.       t_lb_1 = motor_LB_r1.T;    
      motorrecv.       w_lb_1 = motor_LB_r1.W;   
      motorrecv.      lw_lb_1 = motor_LB_r1.LW;   
      motorrecv.     acc_lb_1 = motor_LB_r1.Acc;  
      motorrecv.     pos_lb_1 = motor_LB_r1.Pos;  
      motorrecv. imu_g_x_lb_1 = motor_LB_r1.gyro[0];
      motorrecv. imu_g_y_lb_1 = motor_LB_r1.gyro[1];
      motorrecv. imu_g_z_lb_1 = motor_LB_r1.gyro[2];
      motorrecv. imu_a_x_lb_1 = motor_LB_r1.acc[0];
      motorrecv. imu_a_y_lb_1 = motor_LB_r1.acc[1];
      motorrecv. imu_a_z_lb_1 = motor_LB_r1.acc[2];

      motorrecv.motor_id_lb_2 = motor_LB_r2.motor_id;
      motorrecv.    temp_lb_2 = motor_LB_r2.Temp; 
      motorrecv.       t_lb_2 = motor_LB_r2.T;    
      motorrecv.       w_lb_2 = motor_LB_r2.W;   
      motorrecv.      lw_lb_2 = motor_LB_r2.LW;   
      motorrecv.     acc_lb_2 = motor_LB_r2.Acc;  
      motorrecv.     pos_lb_2 = motor_LB_r2.Pos;  
      motorrecv. imu_g_x_lb_2 = motor_LB_r2.gyro[0];
      motorrecv. imu_g_y_lb_2 = motor_LB_r2.gyro[1];
      motorrecv. imu_g_z_lb_2 = motor_LB_r2.gyro[2];
      motorrecv. imu_a_x_lb_2 = motor_LB_r2.acc[0];
      motorrecv. imu_a_y_lb_2 = motor_LB_r2.acc[1];
      motorrecv. imu_a_z_lb_2 = motor_LB_r2.acc[2];

      motorrecv.motor_id_lb_3 = motor_LB_r3.motor_id;
      motorrecv.    temp_lb_3 = motor_LB_r3.Temp; 
      motorrecv.       t_lb_3 = motor_LB_r3.T;    
      motorrecv.       w_lb_3 = motor_LB_r3.W;   
      motorrecv.      lw_lb_3 = motor_LB_r3.LW;   
      motorrecv.     acc_lb_3 = motor_LB_r3.Acc;  
      motorrecv.     pos_lb_3 = motor_LB_r3.Pos;  
      motorrecv. imu_g_x_lb_3 = motor_LB_r3.gyro[0];
      motorrecv. imu_g_y_lb_3 = motor_LB_r3.gyro[1];
      motorrecv. imu_g_z_lb_3 = motor_LB_r3.gyro[2];
      motorrecv. imu_a_x_lb_3 = motor_LB_r3.acc[0];
      motorrecv. imu_a_y_lb_3 = motor_LB_r3.acc[1];
      motorrecv. imu_a_z_lb_3 = motor_LB_r3.acc[2];

        motorrecv.motor_id_rb_1 = motor_RB_r1.motor_id;
        motorrecv.    temp_rb_1 = motor_RB_r1.Temp; 
        motorrecv.       t_rb_1 = motor_RB_r1.T;    
        motorrecv.       w_rb_1 = motor_RB_r1.W;   
        motorrecv.      lw_rb_1 = motor_RB_r1.LW;   
        motorrecv.     acc_rb_1 = motor_RB_r1.Acc;  
        motorrecv.     pos_rb_1 = motor_RB_r1.Pos;  
        motorrecv. imu_g_x_rb_1 = motor_RB_r1.gyro[0];
        motorrecv. imu_g_y_rb_1 = motor_RB_r1.gyro[1];
        motorrecv. imu_g_z_rb_1 = motor_RB_r1.gyro[2];
        motorrecv. imu_a_x_rb_1 = motor_RB_r1.acc[0];
        motorrecv. imu_a_y_rb_1 = motor_RB_r1.acc[1];
        motorrecv. imu_a_z_rb_1 = motor_RB_r1.acc[2];
  
        motorrecv.motor_id_rb_2 = motor_RB_r2.motor_id;
        motorrecv.    temp_rb_2 = motor_RB_r2.Temp; 
        motorrecv.       t_rb_2 = motor_RB_r2.T;    
        motorrecv.       w_rb_2 = motor_RB_r2.W;   
        motorrecv.      lw_rb_2 = motor_RB_r2.LW;   
        motorrecv.     acc_rb_2 = motor_RB_r2.Acc;  
        motorrecv.     pos_rb_2 = motor_RB_r2.Pos;  
        motorrecv. imu_g_x_rb_2 = motor_RB_r2.gyro[0];
        motorrecv. imu_g_y_rb_2 = motor_RB_r2.gyro[1];
        motorrecv. imu_g_z_rb_2 = motor_RB_r2.gyro[2];
        motorrecv. imu_a_x_rb_2 = motor_RB_r2.acc[0];
        motorrecv. imu_a_y_rb_2 = motor_RB_r2.acc[1];
        motorrecv. imu_a_z_rb_2 = motor_RB_r2.acc[2];
  
        motorrecv.motor_id_rb_3 = motor_RB_r3.motor_id;
        motorrecv.    temp_rb_3 = motor_RB_r3.Temp; 
        motorrecv.       t_rb_3 = motor_RB_r3.T;    
        motorrecv.       w_rb_3 = motor_RB_r3.W;   
        motorrecv.      lw_rb_3 = motor_RB_r3.LW;   
        motorrecv.     acc_rb_3 = motor_RB_r3.Acc;  
        motorrecv.     pos_rb_3 = motor_RB_r3.Pos;  
        motorrecv. imu_g_x_rb_3 = motor_RB_r3.gyro[0];
        motorrecv. imu_g_y_rb_3 = motor_RB_r3.gyro[1];
        motorrecv. imu_g_z_rb_3 = motor_RB_r3.gyro[2];
        motorrecv. imu_a_x_rb_3 = motor_RB_r3.acc[0];
        motorrecv. imu_a_y_rb_3 = motor_RB_r3.acc[1];
        motorrecv. imu_a_z_rb_3 = motor_RB_r3.acc[2];
        
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<message::msg::Motorrecv>::SharedPtr publisher_;
    size_t count_;
    // todo 这里是创建定时器、发布者和计数变量的。
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<motor_carryout>());
  printf("motor_carryout has been created");
  rclcpp::spin(std::make_shared<motor_recv>());
  printf("motor_recv has been created");
  //todo 使用rclcpp::spin创建motor_carryout
  rclcpp::shutdown();
  return 0;
}

