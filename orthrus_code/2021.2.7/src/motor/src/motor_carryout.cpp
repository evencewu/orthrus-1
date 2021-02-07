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

int fd1,fd2,fd3,fd4;

fd1 = open_set((char*)"/dev/ttyUSB0");
fd2 = open_set((char*)"/dev/ttyUSB1");
fd3 = open_set((char*)"/dev/ttyUSB2");
fd4 = open_set((char*)"/dev/ttyUSB3");


//todo 指令处理和发送
void carryout_()
{
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

//todo 设置电机参数
void setup_data(int short &mode_LF_1, float &T_LF_1, float &W_LF_1, float &Pos_LF_1, float &K_P_LF_1, float &K_W_LF_1,
                int short &mode_LF_2, float &T_LF_2, float &W_LF_2, float &Pos_LF_2, float &K_P_LF_2, float &K_W_LF_2,
                int short &mode_LF_3, float &T_LF_3, float &W_LF_3, float &Pos_LF_3, float &K_P_LF_3, float &K_W_LF_3,

                int short &mode_RF_1, float &T_RF_1, float &W_RF_1, float &Pos_RF_1, float &K_P_RF_1, float &K_W_RF_1,
                int short &mode_RF_2, float &T_RF_2, float &W_RF_2, float &Pos_RF_2, float &K_P_RF_2, float &K_W_RF_2,
                int short &mode_RF_3, float &T_RF_3, float &W_RF_3, float &Pos_RF_3, float &K_P_RF_3, float &K_W_RF_3,

                int short &mode_LB_1, float &T_LB_1, float &W_LB_1, float &Pos_LB_1, float &K_P_LB_1, float &K_W_LB_1,
                int short &mode_LB_2, float &T_LB_2, float &W_LB_2, float &Pos_LB_2, float &K_P_LB_2, float &K_W_LB_2,
                int short &mode_LB_3, float &T_LB_3, float &W_LB_3, float &Pos_LB_3, float &K_P_LB_3, float &K_W_LB_3,
                
                int short &mode_RB_1, float &T_RB_1, float &W_RB_1, float &Pos_RB_1, float &K_P_RB_1, float &K_W_RB_1,
                int short &mode_RB_2, float &T_RB_2, float &W_RB_2, float &Pos_RB_2, float &K_P_RB_2, float &K_W_RB_2,
                int short &mode_RB_3, float &T_RB_3, float &W_RB_3, float &Pos_RB_3, float &K_P_RB_3, float &K_W_RB_3)
{

  //! LF_1
  if(motor_LF_r1.Pos < 0 && motor_LF_r1.Pos > 0)// ? 限位
  {
      motor_LF_s1.id   = 0;
    	motor_LF_s1.mode = mode_LF_1;
    	motor_LF_s1.T    = T_LF_1;            //单位：Nm, T<255.9
    	motor_LF_s1.W    = W_LF_1;               //单位：rad/s, W<511.9
    	motor_LF_s1.Pos  = Pos_LF_1;          //单位：rad, Pos<131071.9
    	motor_LF_s1.K_P  = K_P_LF_1;        //K_P<31.9
    	motor_LF_s1.K_W  = K_W_LF_1;        //K_W<63.9
  }	
  //! LF_2
    if(motor_LF_r2.Pos < 0 && motor_LF_r2.Pos > 0)// ? 限位
  {
      motor_LF_s2.id   = 1;
    	motor_LF_s2.mode = mode_LF_2;
    	motor_LF_s2.T    = T_LF_2;             //单位：Nm, T<255.9
    	motor_LF_s2.W    = W_LF_2;                //单位：rad/s, W<511.9
    	motor_LF_s2.Pos  = Pos_LF_2;         //单位：rad, Pos<131071.9
    	motor_LF_s2.K_P  = K_P_LF_2;         //K_P<31.9
    	motor_LF_s2.K_W  = K_W_LF_2;       //K_W<63.9
  }	
  //! LF_3
    if(motor_LF_r3.Pos < 0 && motor_LF_r3.Pos > 0)// ? 限位
  {
      motor_LF_s3.id   = 2;
    	motor_LF_s3.mode = mode_LF_3;
    	motor_LF_s3.T    = T_LF_3;             //单位：Nm, T<255.9
    	motor_LF_s3.W    = W_LF_3;                //单位：rad/s, W<511.9
    	motor_LF_s3.Pos  = Pos_LF_3;         //单位：rad, Pos<131071.9
    	motor_LF_s3.K_P  = K_P_LF_3;         //K_P<31.9
    	motor_LF_s3.K_W  = K_W_LF_3;       //K_W<63.9
  }	
  
      //! RF_1
        if(motor_RF_r1.Pos < 0 && motor_RF_r1.Pos > 0)// ? 限位
      {
          motor_RF_s1.id   = 0;
        	motor_RF_s1.mode = mode_RF_1;
        	motor_RF_s1.T    = T_RF_1;             //单位：Nm, T<255.9
        	motor_RF_s1.W    = W_RF_1;                //单位：rad/s, W<511.9
        	motor_RF_s1.Pos  = Pos_RF_1;         //单位：rad, Pos<131071.9
        	motor_RF_s1.K_P  = K_P_RF_1;         //K_P<31.9
        	motor_RF_s1.K_W  = K_W_RF_1;       //K_W<63.9
      }	
      //! RF_2
        if(motor_RF_r1.Pos < 0 && motor_RF_r1.Pos > 0)// ? 限位
      {
          motor_RF_s2.id   = 1;
        	motor_RF_s2.mode = mode_RF_2;
        	motor_RF_s2.T    = T_RF_2;             //单位：Nm, T<255.9
        	motor_RF_s2.W    = W_RF_2;                //单位：rad/s, W<511.9
        	motor_RF_s2.Pos  = Pos_RF_2;         //单位：rad, Pos<131071.9
        	motor_RF_s2.K_P  = K_P_RF_2;         //K_P<31.9
        	motor_RF_s2.K_W  = K_W_RF_2;       //K_W<63.9
      }	
      //! RF_3
        if(motor_RF_r1.Pos < 0 && motor_RF_r1.Pos > 0)// ? 限位
      {
          motor_RF_s3.id   = 2;
        	motor_RF_s3.mode = mode_RF_3;
        	motor_RF_s3.T    = T_RF_3;             //单位：Nm, T<255.9
        	motor_RF_s3.W    = W_RF_3;                //单位：rad/s, W<511.9
        	motor_RF_s3.Pos  = Pos_RF_3;         //单位：rad, Pos<131071.9
        	motor_RF_s3.K_P  = K_P_RF_3;         //K_P<31.9
        	motor_RF_s3.K_W  = K_W_RF_3;       //K_W<63.9
      }	

  //! LB_1
    if(motor_LF_r1.Pos < 0 && motor_LF_r1.Pos > 0)// ? 限位
  {
      motor_LF_1.mode = 10;
      motor_s.id =0;
    	motor_s.mode = 10;
    	motor_s.T = 0;            //单位：Nm, T<255.9
    	motor_s.W = 0;               //单位：rad/s, W<511.9
    	motor_s.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s.K_P = 0.1;        //K_P<31.9
    	motor_s.K_W = 3;        //K_W<63.9
  }	
  //! LB_2
    if(motor_LF_r1.Pos < 0 && motor_LF_r1.Pos > 0)// ? 限位
  {
      motor_LF_1.mode = 10;
      motor_s.id =0;
    	motor_s.mode = 10;
    	motor_s.T = 0;            //单位：Nm, T<255.9
    	motor_s.W = 0;               //单位：rad/s, W<511.9
    	motor_s.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s.K_P = 0.1;        //K_P<31.9
    	motor_s.K_W = 3;        //K_W<63.9
  }	
  //! LB_3
    if(motor_LF_r1.Pos < 0 && motor_LF_r1.Pos > 0)// ? 限位
  {
      motor_LF_1.mode = 10;
      motor_s.id =0;
    	motor_s.mode = 10;
    	motor_s.T = 0;            //单位：Nm, T<255.9
    	motor_s.W = 0;               //单位：rad/s, W<511.9
    	motor_s.Pos = 0;          //单位：rad, Pos<131071.9
    	motor_s.K_P = 0.1;        //K_P<31.9
    	motor_s.K_W = 3;        //K_W<63.9
  }	
      //! RB_1
        if(motor_LF_r1.Pos < 0 && motor_LF_r1.Pos > 0)// ? 限位
      {
          motor_LF_1.mode = 10;
          motor_s.id =0;
        	motor_s.mode = 10;
        	motor_s.T = 0;            //单位：Nm, T<255.9
        	motor_s.W = 0;               //单位：rad/s, W<511.9
        	motor_s.Pos = 0;          //单位：rad, Pos<131071.9
        	motor_s.K_P = 0.1;        //K_P<31.9
        	motor_s.K_W = 3;        //K_W<63.9
      }	
      //! RB_2
        if(motor_LF_r1.Pos < 0 && motor_LF_r1.Pos > 0)// ? 限位
      {
          motor_LF_1.mode = 10;
          motor_s.id =0;
        	motor_s.mode = 10;
        	motor_s.T = 0;            //单位：Nm, T<255.9
        	motor_s.W = 0;               //单位：rad/s, W<511.9
        	motor_s.Pos = 0;          //单位：rad, Pos<131071.9
        	motor_s.K_P = 0.1;        //K_P<31.9
        	motor_s.K_W = 3;        //K_W<63.9
      }
      //! RB_3
        if(motor_LF_r1.Pos < 0 && motor_LF_r1.Pos > 0)// ? 限位
      {
          motor_LF_1.mode = 10;
          motor_s.id =0;
        	motor_s.mode = 10;
        	motor_s.T = 0;            //单位：Nm, T<255.9
        	motor_s.W = 0;               //单位：rad/s, W<511.9
        	motor_s.Pos = 0;          //单位：rad, Pos<131071.9
        	motor_s.K_P = 0.1;        //K_P<31.9
        	motor_s.K_W = 3;        //K_W<63.9
      }	
}

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
      //void carryout(msg.mode_1,msg.mode_1,msg.mode_1); 
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
      auto message = std_msgs::msg::String();
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
