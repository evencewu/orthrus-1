//todo 本模块用于预测足尖输出力，输入参数：电机角加速度，电机扭矩，足底传感器数据，强化学习网络
//todo                         输出参数：预测足端力
//todo 可以与 train_leg_NN 联合训练

#include "predict_foot.h"


//? ------------------

#include <memory>
#include <chrono>
#include <functional>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;


//todo 订阅者代码
class kinetics : public rclcpp::Node{
  public:
    MinimalSubscriber()
    : Node("kineticsr")
    {
      subscription_ = this->create_subscription<std_msgs::msg::String>(
      "topic", 10, std::bind(&kinetics::topic_callback, this, _1));
    }

    //todo 节点名叫kinetics，构造函数中创建了订阅者，订阅String消息，订阅的话题名叫做“topic”，
    //todo 保存消息的队列长度是10，当订阅到数据时，会进入回调函数topic_callback。

  private:
    void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
    {
      RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
    }
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;};


//todo 发布者代码
class kinetics_Publisher : public rclcpp::Node{    //? 创建一个节点类 kinetics_Publisher
  public:
    MinimalPublisher()
    : Node("kinetics_Publisher"), count_(0) //? 这一行代码是创建一个节点类kinetics_Publisher，从rclcpp::Node这个ROS2节点基类继承而来。
    {
      publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
      //? 创建了一个发布者，发布的话题名是topic，话题消息是String，保存消息的队列长度是10
      
      timer_ = this->create_wall_timer(500ms, std::bind(&kinetics_Publisher::timer_callback, this)); 
      //? 然后创建了一个定时器timer_，做了一个500ms的定时，每次触发定时器后，都会运行回调函数timer_callback。
    }


  private:
    void timer_callback()
    {
      auto message = std_msgs::msg::String();
      message.data = 

      //* auto message = std_msgs::msg::String();
      //* message.data = "Hello, world! " + std::to_string(count_++);
      //* RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
      //* publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    size_t count_;
    //todo 这里是创建定时器、发布者和计数变量的。
  };


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  //todo 初始化ROS2节点，，并且进入自旋锁，当退出锁时，就会关闭节点结束啦。
  rclcpp::spin(std::make_shared<kinetics>());
  //todo 使用rclcpp::spin创建kinetics
  rclcpp::shutdown();
  return 0;
}

//todo 




/* This example creates a subclass of Node and uses std::bind() to register a* member function as a callback from the timer. */




  int main(int argc, char * argv[])
  {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalPublisher>());
    rclcpp::shutdown();
    return 0;
  }