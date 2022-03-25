//! 电机复位程序
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
#include "data/msg/motorcarryout.hpp"
#include "data/msg/motorrecv.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

//todo 订阅者代码
//todo 作用：接收电机返回信息
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
       
    }
  rclcpp::Subscription<message::msg::Motorcarryout>::SharedPtr subscription_;
};


//todo 发布者代码
//todo 作用：发送指令
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