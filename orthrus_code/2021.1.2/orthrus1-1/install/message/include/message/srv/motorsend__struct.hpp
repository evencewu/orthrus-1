// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message:srv/Motorsend.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__SRV__MOTORSEND__STRUCT_HPP_
#define MESSAGE__SRV__MOTORSEND__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__message__srv__Motorsend_Request __attribute__((deprecated))
#else
# define DEPRECATED__message__srv__Motorsend_Request __declspec(deprecated)
#endif

namespace message
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Motorsend_Request_
{
  using Type = Motorsend_Request_<ContainerAllocator>;

  explicit Motorsend_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_0 = 0.0;
      this->t_0 = 0.0;
      this->w_0 = 0.0;
      this->pos_0 = 0.0;
      this->k_p_0 = 0.0;
      this->k_w_0 = 0.0;
      this->mode_1 = 0.0;
      this->t_1 = 0.0;
      this->w_1 = 0.0;
      this->pos_1 = 0.0;
      this->k_p_1 = 0.0;
      this->k_w_1 = 0.0;
      this->mode_2 = 0.0;
      this->t_2 = 0.0;
      this->w_2 = 0.0;
      this->pos_2 = 0.0;
      this->k_p_2 = 0.0;
      this->k_w_2 = 0.0;
    }
  }

  explicit Motorsend_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_0 = 0.0;
      this->t_0 = 0.0;
      this->w_0 = 0.0;
      this->pos_0 = 0.0;
      this->k_p_0 = 0.0;
      this->k_w_0 = 0.0;
      this->mode_1 = 0.0;
      this->t_1 = 0.0;
      this->w_1 = 0.0;
      this->pos_1 = 0.0;
      this->k_p_1 = 0.0;
      this->k_w_1 = 0.0;
      this->mode_2 = 0.0;
      this->t_2 = 0.0;
      this->w_2 = 0.0;
      this->pos_2 = 0.0;
      this->k_p_2 = 0.0;
      this->k_w_2 = 0.0;
    }
  }

  // field types and members
  using _mode_0_type =
    double;
  _mode_0_type mode_0;
  using _t_0_type =
    double;
  _t_0_type t_0;
  using _w_0_type =
    double;
  _w_0_type w_0;
  using _pos_0_type =
    double;
  _pos_0_type pos_0;
  using _k_p_0_type =
    double;
  _k_p_0_type k_p_0;
  using _k_w_0_type =
    double;
  _k_w_0_type k_w_0;
  using _mode_1_type =
    double;
  _mode_1_type mode_1;
  using _t_1_type =
    double;
  _t_1_type t_1;
  using _w_1_type =
    double;
  _w_1_type w_1;
  using _pos_1_type =
    double;
  _pos_1_type pos_1;
  using _k_p_1_type =
    double;
  _k_p_1_type k_p_1;
  using _k_w_1_type =
    double;
  _k_w_1_type k_w_1;
  using _mode_2_type =
    double;
  _mode_2_type mode_2;
  using _t_2_type =
    double;
  _t_2_type t_2;
  using _w_2_type =
    double;
  _w_2_type w_2;
  using _pos_2_type =
    double;
  _pos_2_type pos_2;
  using _k_p_2_type =
    double;
  _k_p_2_type k_p_2;
  using _k_w_2_type =
    double;
  _k_w_2_type k_w_2;

  // setters for named parameter idiom
  Type & set__mode_0(
    const double & _arg)
  {
    this->mode_0 = _arg;
    return *this;
  }
  Type & set__t_0(
    const double & _arg)
  {
    this->t_0 = _arg;
    return *this;
  }
  Type & set__w_0(
    const double & _arg)
  {
    this->w_0 = _arg;
    return *this;
  }
  Type & set__pos_0(
    const double & _arg)
  {
    this->pos_0 = _arg;
    return *this;
  }
  Type & set__k_p_0(
    const double & _arg)
  {
    this->k_p_0 = _arg;
    return *this;
  }
  Type & set__k_w_0(
    const double & _arg)
  {
    this->k_w_0 = _arg;
    return *this;
  }
  Type & set__mode_1(
    const double & _arg)
  {
    this->mode_1 = _arg;
    return *this;
  }
  Type & set__t_1(
    const double & _arg)
  {
    this->t_1 = _arg;
    return *this;
  }
  Type & set__w_1(
    const double & _arg)
  {
    this->w_1 = _arg;
    return *this;
  }
  Type & set__pos_1(
    const double & _arg)
  {
    this->pos_1 = _arg;
    return *this;
  }
  Type & set__k_p_1(
    const double & _arg)
  {
    this->k_p_1 = _arg;
    return *this;
  }
  Type & set__k_w_1(
    const double & _arg)
  {
    this->k_w_1 = _arg;
    return *this;
  }
  Type & set__mode_2(
    const double & _arg)
  {
    this->mode_2 = _arg;
    return *this;
  }
  Type & set__t_2(
    const double & _arg)
  {
    this->t_2 = _arg;
    return *this;
  }
  Type & set__w_2(
    const double & _arg)
  {
    this->w_2 = _arg;
    return *this;
  }
  Type & set__pos_2(
    const double & _arg)
  {
    this->pos_2 = _arg;
    return *this;
  }
  Type & set__k_p_2(
    const double & _arg)
  {
    this->k_p_2 = _arg;
    return *this;
  }
  Type & set__k_w_2(
    const double & _arg)
  {
    this->k_w_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message::srv::Motorsend_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const message::srv::Motorsend_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message::srv::Motorsend_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message::srv::Motorsend_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message::srv::Motorsend_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message::srv::Motorsend_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message::srv::Motorsend_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message::srv::Motorsend_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message::srv::Motorsend_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message::srv::Motorsend_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message__srv__Motorsend_Request
    std::shared_ptr<message::srv::Motorsend_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message__srv__Motorsend_Request
    std::shared_ptr<message::srv::Motorsend_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motorsend_Request_ & other) const
  {
    if (this->mode_0 != other.mode_0) {
      return false;
    }
    if (this->t_0 != other.t_0) {
      return false;
    }
    if (this->w_0 != other.w_0) {
      return false;
    }
    if (this->pos_0 != other.pos_0) {
      return false;
    }
    if (this->k_p_0 != other.k_p_0) {
      return false;
    }
    if (this->k_w_0 != other.k_w_0) {
      return false;
    }
    if (this->mode_1 != other.mode_1) {
      return false;
    }
    if (this->t_1 != other.t_1) {
      return false;
    }
    if (this->w_1 != other.w_1) {
      return false;
    }
    if (this->pos_1 != other.pos_1) {
      return false;
    }
    if (this->k_p_1 != other.k_p_1) {
      return false;
    }
    if (this->k_w_1 != other.k_w_1) {
      return false;
    }
    if (this->mode_2 != other.mode_2) {
      return false;
    }
    if (this->t_2 != other.t_2) {
      return false;
    }
    if (this->w_2 != other.w_2) {
      return false;
    }
    if (this->pos_2 != other.pos_2) {
      return false;
    }
    if (this->k_p_2 != other.k_p_2) {
      return false;
    }
    if (this->k_w_2 != other.k_w_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motorsend_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motorsend_Request_

// alias to use template instance with default allocator
using Motorsend_Request =
  message::srv::Motorsend_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace message

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__message__srv__Motorsend_Response __attribute__((deprecated))
#else
# define DEPRECATED__message__srv__Motorsend_Response __declspec(deprecated)
#endif

namespace message
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Motorsend_Response_
{
  using Type = Motorsend_Response_<ContainerAllocator>;

  explicit Motorsend_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_0 = 0ll;
      this->t_0 = 0.0;
      this->w_0 = 0.0;
      this->lw_0 = 0.0;
      this->acc_0 = 0ll;
      this->pos_0 = 0.0;
      this->gyro_0_x = 0.0;
      this->gyro_0_y = 0.0;
      this->gyro_0_z = 0.0;
      this->acc_0_x = 0.0;
      this->acc_0_y = 0.0;
      this->acc_0_z = 0.0;
      this->temp_1 = 0ll;
      this->t_1 = 0.0;
      this->w_1 = 0.0;
      this->lw_1 = 0.0;
      this->acc_1 = 0ll;
      this->pos_1 = 0.0;
      this->gyro_1_x = 0.0;
      this->gyro_1_y = 0.0;
      this->gyro_1_z = 0.0;
      this->acc_1_x = 0.0;
      this->acc_1_y = 0.0;
      this->acc_1_z = 0.0;
      this->temp_2 = 0ll;
      this->t_2 = 0.0;
      this->w_2 = 0.0;
      this->lw_2 = 0.0;
      this->acc_2 = 0ll;
      this->pos_2 = 0.0;
      this->gyro_2_x = 0.0;
      this->gyro_2_y = 0.0;
      this->gyro_2_z = 0.0;
      this->acc_2_x = 0.0;
      this->acc_2_y = 0.0;
      this->acc_2_z = 0.0;
    }
  }

  explicit Motorsend_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_0 = 0ll;
      this->t_0 = 0.0;
      this->w_0 = 0.0;
      this->lw_0 = 0.0;
      this->acc_0 = 0ll;
      this->pos_0 = 0.0;
      this->gyro_0_x = 0.0;
      this->gyro_0_y = 0.0;
      this->gyro_0_z = 0.0;
      this->acc_0_x = 0.0;
      this->acc_0_y = 0.0;
      this->acc_0_z = 0.0;
      this->temp_1 = 0ll;
      this->t_1 = 0.0;
      this->w_1 = 0.0;
      this->lw_1 = 0.0;
      this->acc_1 = 0ll;
      this->pos_1 = 0.0;
      this->gyro_1_x = 0.0;
      this->gyro_1_y = 0.0;
      this->gyro_1_z = 0.0;
      this->acc_1_x = 0.0;
      this->acc_1_y = 0.0;
      this->acc_1_z = 0.0;
      this->temp_2 = 0ll;
      this->t_2 = 0.0;
      this->w_2 = 0.0;
      this->lw_2 = 0.0;
      this->acc_2 = 0ll;
      this->pos_2 = 0.0;
      this->gyro_2_x = 0.0;
      this->gyro_2_y = 0.0;
      this->gyro_2_z = 0.0;
      this->acc_2_x = 0.0;
      this->acc_2_y = 0.0;
      this->acc_2_z = 0.0;
    }
  }

  // field types and members
  using _temp_0_type =
    int64_t;
  _temp_0_type temp_0;
  using _t_0_type =
    double;
  _t_0_type t_0;
  using _w_0_type =
    double;
  _w_0_type w_0;
  using _lw_0_type =
    double;
  _lw_0_type lw_0;
  using _acc_0_type =
    int64_t;
  _acc_0_type acc_0;
  using _pos_0_type =
    double;
  _pos_0_type pos_0;
  using _gyro_0_x_type =
    double;
  _gyro_0_x_type gyro_0_x;
  using _gyro_0_y_type =
    double;
  _gyro_0_y_type gyro_0_y;
  using _gyro_0_z_type =
    double;
  _gyro_0_z_type gyro_0_z;
  using _acc_0_x_type =
    double;
  _acc_0_x_type acc_0_x;
  using _acc_0_y_type =
    double;
  _acc_0_y_type acc_0_y;
  using _acc_0_z_type =
    double;
  _acc_0_z_type acc_0_z;
  using _temp_1_type =
    int64_t;
  _temp_1_type temp_1;
  using _t_1_type =
    double;
  _t_1_type t_1;
  using _w_1_type =
    double;
  _w_1_type w_1;
  using _lw_1_type =
    double;
  _lw_1_type lw_1;
  using _acc_1_type =
    int64_t;
  _acc_1_type acc_1;
  using _pos_1_type =
    double;
  _pos_1_type pos_1;
  using _gyro_1_x_type =
    double;
  _gyro_1_x_type gyro_1_x;
  using _gyro_1_y_type =
    double;
  _gyro_1_y_type gyro_1_y;
  using _gyro_1_z_type =
    double;
  _gyro_1_z_type gyro_1_z;
  using _acc_1_x_type =
    double;
  _acc_1_x_type acc_1_x;
  using _acc_1_y_type =
    double;
  _acc_1_y_type acc_1_y;
  using _acc_1_z_type =
    double;
  _acc_1_z_type acc_1_z;
  using _temp_2_type =
    int64_t;
  _temp_2_type temp_2;
  using _t_2_type =
    double;
  _t_2_type t_2;
  using _w_2_type =
    double;
  _w_2_type w_2;
  using _lw_2_type =
    double;
  _lw_2_type lw_2;
  using _acc_2_type =
    int64_t;
  _acc_2_type acc_2;
  using _pos_2_type =
    double;
  _pos_2_type pos_2;
  using _gyro_2_x_type =
    double;
  _gyro_2_x_type gyro_2_x;
  using _gyro_2_y_type =
    double;
  _gyro_2_y_type gyro_2_y;
  using _gyro_2_z_type =
    double;
  _gyro_2_z_type gyro_2_z;
  using _acc_2_x_type =
    double;
  _acc_2_x_type acc_2_x;
  using _acc_2_y_type =
    double;
  _acc_2_y_type acc_2_y;
  using _acc_2_z_type =
    double;
  _acc_2_z_type acc_2_z;

  // setters for named parameter idiom
  Type & set__temp_0(
    const int64_t & _arg)
  {
    this->temp_0 = _arg;
    return *this;
  }
  Type & set__t_0(
    const double & _arg)
  {
    this->t_0 = _arg;
    return *this;
  }
  Type & set__w_0(
    const double & _arg)
  {
    this->w_0 = _arg;
    return *this;
  }
  Type & set__lw_0(
    const double & _arg)
  {
    this->lw_0 = _arg;
    return *this;
  }
  Type & set__acc_0(
    const int64_t & _arg)
  {
    this->acc_0 = _arg;
    return *this;
  }
  Type & set__pos_0(
    const double & _arg)
  {
    this->pos_0 = _arg;
    return *this;
  }
  Type & set__gyro_0_x(
    const double & _arg)
  {
    this->gyro_0_x = _arg;
    return *this;
  }
  Type & set__gyro_0_y(
    const double & _arg)
  {
    this->gyro_0_y = _arg;
    return *this;
  }
  Type & set__gyro_0_z(
    const double & _arg)
  {
    this->gyro_0_z = _arg;
    return *this;
  }
  Type & set__acc_0_x(
    const double & _arg)
  {
    this->acc_0_x = _arg;
    return *this;
  }
  Type & set__acc_0_y(
    const double & _arg)
  {
    this->acc_0_y = _arg;
    return *this;
  }
  Type & set__acc_0_z(
    const double & _arg)
  {
    this->acc_0_z = _arg;
    return *this;
  }
  Type & set__temp_1(
    const int64_t & _arg)
  {
    this->temp_1 = _arg;
    return *this;
  }
  Type & set__t_1(
    const double & _arg)
  {
    this->t_1 = _arg;
    return *this;
  }
  Type & set__w_1(
    const double & _arg)
  {
    this->w_1 = _arg;
    return *this;
  }
  Type & set__lw_1(
    const double & _arg)
  {
    this->lw_1 = _arg;
    return *this;
  }
  Type & set__acc_1(
    const int64_t & _arg)
  {
    this->acc_1 = _arg;
    return *this;
  }
  Type & set__pos_1(
    const double & _arg)
  {
    this->pos_1 = _arg;
    return *this;
  }
  Type & set__gyro_1_x(
    const double & _arg)
  {
    this->gyro_1_x = _arg;
    return *this;
  }
  Type & set__gyro_1_y(
    const double & _arg)
  {
    this->gyro_1_y = _arg;
    return *this;
  }
  Type & set__gyro_1_z(
    const double & _arg)
  {
    this->gyro_1_z = _arg;
    return *this;
  }
  Type & set__acc_1_x(
    const double & _arg)
  {
    this->acc_1_x = _arg;
    return *this;
  }
  Type & set__acc_1_y(
    const double & _arg)
  {
    this->acc_1_y = _arg;
    return *this;
  }
  Type & set__acc_1_z(
    const double & _arg)
  {
    this->acc_1_z = _arg;
    return *this;
  }
  Type & set__temp_2(
    const int64_t & _arg)
  {
    this->temp_2 = _arg;
    return *this;
  }
  Type & set__t_2(
    const double & _arg)
  {
    this->t_2 = _arg;
    return *this;
  }
  Type & set__w_2(
    const double & _arg)
  {
    this->w_2 = _arg;
    return *this;
  }
  Type & set__lw_2(
    const double & _arg)
  {
    this->lw_2 = _arg;
    return *this;
  }
  Type & set__acc_2(
    const int64_t & _arg)
  {
    this->acc_2 = _arg;
    return *this;
  }
  Type & set__pos_2(
    const double & _arg)
  {
    this->pos_2 = _arg;
    return *this;
  }
  Type & set__gyro_2_x(
    const double & _arg)
  {
    this->gyro_2_x = _arg;
    return *this;
  }
  Type & set__gyro_2_y(
    const double & _arg)
  {
    this->gyro_2_y = _arg;
    return *this;
  }
  Type & set__gyro_2_z(
    const double & _arg)
  {
    this->gyro_2_z = _arg;
    return *this;
  }
  Type & set__acc_2_x(
    const double & _arg)
  {
    this->acc_2_x = _arg;
    return *this;
  }
  Type & set__acc_2_y(
    const double & _arg)
  {
    this->acc_2_y = _arg;
    return *this;
  }
  Type & set__acc_2_z(
    const double & _arg)
  {
    this->acc_2_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message::srv::Motorsend_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const message::srv::Motorsend_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message::srv::Motorsend_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message::srv::Motorsend_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message::srv::Motorsend_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message::srv::Motorsend_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message::srv::Motorsend_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message::srv::Motorsend_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message::srv::Motorsend_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message::srv::Motorsend_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message__srv__Motorsend_Response
    std::shared_ptr<message::srv::Motorsend_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message__srv__Motorsend_Response
    std::shared_ptr<message::srv::Motorsend_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motorsend_Response_ & other) const
  {
    if (this->temp_0 != other.temp_0) {
      return false;
    }
    if (this->t_0 != other.t_0) {
      return false;
    }
    if (this->w_0 != other.w_0) {
      return false;
    }
    if (this->lw_0 != other.lw_0) {
      return false;
    }
    if (this->acc_0 != other.acc_0) {
      return false;
    }
    if (this->pos_0 != other.pos_0) {
      return false;
    }
    if (this->gyro_0_x != other.gyro_0_x) {
      return false;
    }
    if (this->gyro_0_y != other.gyro_0_y) {
      return false;
    }
    if (this->gyro_0_z != other.gyro_0_z) {
      return false;
    }
    if (this->acc_0_x != other.acc_0_x) {
      return false;
    }
    if (this->acc_0_y != other.acc_0_y) {
      return false;
    }
    if (this->acc_0_z != other.acc_0_z) {
      return false;
    }
    if (this->temp_1 != other.temp_1) {
      return false;
    }
    if (this->t_1 != other.t_1) {
      return false;
    }
    if (this->w_1 != other.w_1) {
      return false;
    }
    if (this->lw_1 != other.lw_1) {
      return false;
    }
    if (this->acc_1 != other.acc_1) {
      return false;
    }
    if (this->pos_1 != other.pos_1) {
      return false;
    }
    if (this->gyro_1_x != other.gyro_1_x) {
      return false;
    }
    if (this->gyro_1_y != other.gyro_1_y) {
      return false;
    }
    if (this->gyro_1_z != other.gyro_1_z) {
      return false;
    }
    if (this->acc_1_x != other.acc_1_x) {
      return false;
    }
    if (this->acc_1_y != other.acc_1_y) {
      return false;
    }
    if (this->acc_1_z != other.acc_1_z) {
      return false;
    }
    if (this->temp_2 != other.temp_2) {
      return false;
    }
    if (this->t_2 != other.t_2) {
      return false;
    }
    if (this->w_2 != other.w_2) {
      return false;
    }
    if (this->lw_2 != other.lw_2) {
      return false;
    }
    if (this->acc_2 != other.acc_2) {
      return false;
    }
    if (this->pos_2 != other.pos_2) {
      return false;
    }
    if (this->gyro_2_x != other.gyro_2_x) {
      return false;
    }
    if (this->gyro_2_y != other.gyro_2_y) {
      return false;
    }
    if (this->gyro_2_z != other.gyro_2_z) {
      return false;
    }
    if (this->acc_2_x != other.acc_2_x) {
      return false;
    }
    if (this->acc_2_y != other.acc_2_y) {
      return false;
    }
    if (this->acc_2_z != other.acc_2_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motorsend_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motorsend_Response_

// alias to use template instance with default allocator
using Motorsend_Response =
  message::srv::Motorsend_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace message

namespace message
{

namespace srv
{

struct Motorsend
{
  using Request = message::srv::Motorsend_Request;
  using Response = message::srv::Motorsend_Response;
};

}  // namespace srv

}  // namespace message

#endif  // MESSAGE__SRV__MOTORSEND__STRUCT_HPP_
