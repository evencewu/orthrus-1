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
class motor_carryout : public rclcpp::Node{
  public:
    motor_carryout()
    : Node("motor_carryout")
    {
      subscription_ = this->create_subscription<message::msg::Motorcarryout>(
      "motor_carryout", 2, std::bind(&motor_carryout::topic_callback, this, _1));
    }

    //todo 节点名叫kinetics，构造函数中创建了订阅者，订阅String消息，订阅的话题名叫做“topic”，
    //todo 保存消息的队列长度是10，当订阅到数据时，会进入回调函数topic_callback。

  private:
    void topic_callback(const message::msg::Motorcarryout::SharedPtr msg) const
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
  rclcpp::Subscription<message::msg::Motorcarryout>::SharedPtr subscription_;};


// todo 发布者代码
/*class kinetics_Publisher : public rclcpp::Node{    // ? 创建一个节点类 kinetics_Publisher
  public:
    MinimalPublisher()
    : Node("kinetics_Publisher"), count_(0) //? 这一行代码是创建一个节点类kinetics_Publisher，从rclcpp::Node这个ROS2节点基类继承而来。
    {
      publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
      // ? 创建了一个发布者，发布的话题名是topic，话题消息是String，保存消息的队列长度是10
      
      timer_ = this->create_wall_timer(500ms, std::bind(&kinetics_Publisher::timer_callback, this)); 
      // ? 然后创建了一个定时器timer_，做了一个500ms的定时，每次触发定时器后，都会运行回调函数timer_callback。
    }
  private:
    void timer_callback()
    {
      auto message = message::msg::Motorcarryout();
      message.data = 
      // * auto message = std_msgs::msg::String();
      // * message.data = "Hello, world! " + std::to_string(count_++);
      // * RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
      // * publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    size_t count_;
    // todo 这里是创建定时器、发布者和计数变量的。
  };*/

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  //todo 初始化ROS2节点，，并且进入自旋锁，当退出锁时，就会关闭节点结束啦。
  rclcpp::spin(std::make_shared<motor_carryout>());
  //todo 使用rclcpp::spin创建kinetics
  rclcpp::shutdown();

  //close_serial(fd1);
  //close_serial(fd2);
  //close_serial(fd3);
  //close_serial(fd4);

  return 0;
}