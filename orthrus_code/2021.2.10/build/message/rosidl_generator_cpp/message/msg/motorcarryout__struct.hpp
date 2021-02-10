// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message:msg/Motorcarryout.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__MOTORCARRYOUT__STRUCT_HPP_
#define MESSAGE__MSG__MOTORCARRYOUT__STRUCT_HPP_

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
# define DEPRECATED__message__msg__Motorcarryout __attribute__((deprecated))
#else
# define DEPRECATED__message__msg__Motorcarryout __declspec(deprecated)
#endif

namespace message
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motorcarryout_
{
  using Type = Motorcarryout_<ContainerAllocator>;

  explicit Motorcarryout_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_lf_1 = 0l;
      this->t_lf_1 = 0.0f;
      this->w_lf_1 = 0.0f;
      this->pos_lf_1 = 0.0f;
      this->k_p_lf_1 = 0.0f;
      this->k_w_lf_1 = 0.0f;
      this->mode_lf_2 = 0l;
      this->t_lf_2 = 0.0f;
      this->w_lf_2 = 0.0f;
      this->pos_lf_2 = 0.0f;
      this->k_p_lf_2 = 0.0f;
      this->k_w_lf_2 = 0.0f;
      this->mode_lf_3 = 0l;
      this->t_lf_3 = 0.0f;
      this->w_lf_3 = 0.0f;
      this->pos_lf_3 = 0.0f;
      this->k_p_lf_3 = 0.0f;
      this->k_w_lf_3 = 0.0f;
      this->mode_rf_1 = 0l;
      this->t_rf_1 = 0.0f;
      this->w_rf_1 = 0.0f;
      this->pos_rf_1 = 0.0f;
      this->k_p_rf_1 = 0.0f;
      this->k_w_rf_1 = 0.0f;
      this->mode_rf_2 = 0l;
      this->t_rf_2 = 0.0f;
      this->w_rf_2 = 0.0f;
      this->pos_rf_2 = 0.0f;
      this->k_p_rf_2 = 0.0f;
      this->k_w_rf_2 = 0.0f;
      this->mode_rf_3 = 0l;
      this->t_rf_3 = 0.0f;
      this->w_rf_3 = 0.0f;
      this->pos_rf_3 = 0.0f;
      this->k_p_rf_3 = 0.0f;
      this->k_w_rf_3 = 0.0f;
      this->mode_lb_1 = 0l;
      this->t_lb_1 = 0.0f;
      this->w_lb_1 = 0.0f;
      this->pos_lb_1 = 0.0f;
      this->k_p_lb_1 = 0.0f;
      this->k_w_lb_1 = 0.0f;
      this->mode_lb_2 = 0l;
      this->t_lb_2 = 0.0f;
      this->w_lb_2 = 0.0f;
      this->pos_lb_2 = 0.0f;
      this->k_p_lb_2 = 0.0f;
      this->k_w_lb_2 = 0.0f;
      this->mode_lb_3 = 0l;
      this->t_lb_3 = 0.0f;
      this->w_lb_3 = 0.0f;
      this->pos_lb_3 = 0.0f;
      this->k_p_lb_3 = 0.0f;
      this->k_w_lb_3 = 0.0f;
      this->mode_rb_1 = 0l;
      this->t_rb_1 = 0.0f;
      this->w_rb_1 = 0.0f;
      this->pos_rb_1 = 0.0f;
      this->k_p_rb_1 = 0.0f;
      this->k_w_rb_1 = 0.0f;
      this->mode_rb_2 = 0l;
      this->t_rb_2 = 0.0f;
      this->w_rb_2 = 0.0f;
      this->pos_rb_2 = 0.0f;
      this->k_p_rb_2 = 0.0f;
      this->k_w_rb_2 = 0.0f;
      this->mode_rb_3 = 0l;
      this->t_rb_3 = 0.0f;
      this->w_rb_3 = 0.0f;
      this->pos_rb_3 = 0.0f;
      this->k_p_rb_3 = 0.0f;
      this->k_w_rb_3 = 0.0f;
    }
  }

  explicit Motorcarryout_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_lf_1 = 0l;
      this->t_lf_1 = 0.0f;
      this->w_lf_1 = 0.0f;
      this->pos_lf_1 = 0.0f;
      this->k_p_lf_1 = 0.0f;
      this->k_w_lf_1 = 0.0f;
      this->mode_lf_2 = 0l;
      this->t_lf_2 = 0.0f;
      this->w_lf_2 = 0.0f;
      this->pos_lf_2 = 0.0f;
      this->k_p_lf_2 = 0.0f;
      this->k_w_lf_2 = 0.0f;
      this->mode_lf_3 = 0l;
      this->t_lf_3 = 0.0f;
      this->w_lf_3 = 0.0f;
      this->pos_lf_3 = 0.0f;
      this->k_p_lf_3 = 0.0f;
      this->k_w_lf_3 = 0.0f;
      this->mode_rf_1 = 0l;
      this->t_rf_1 = 0.0f;
      this->w_rf_1 = 0.0f;
      this->pos_rf_1 = 0.0f;
      this->k_p_rf_1 = 0.0f;
      this->k_w_rf_1 = 0.0f;
      this->mode_rf_2 = 0l;
      this->t_rf_2 = 0.0f;
      this->w_rf_2 = 0.0f;
      this->pos_rf_2 = 0.0f;
      this->k_p_rf_2 = 0.0f;
      this->k_w_rf_2 = 0.0f;
      this->mode_rf_3 = 0l;
      this->t_rf_3 = 0.0f;
      this->w_rf_3 = 0.0f;
      this->pos_rf_3 = 0.0f;
      this->k_p_rf_3 = 0.0f;
      this->k_w_rf_3 = 0.0f;
      this->mode_lb_1 = 0l;
      this->t_lb_1 = 0.0f;
      this->w_lb_1 = 0.0f;
      this->pos_lb_1 = 0.0f;
      this->k_p_lb_1 = 0.0f;
      this->k_w_lb_1 = 0.0f;
      this->mode_lb_2 = 0l;
      this->t_lb_2 = 0.0f;
      this->w_lb_2 = 0.0f;
      this->pos_lb_2 = 0.0f;
      this->k_p_lb_2 = 0.0f;
      this->k_w_lb_2 = 0.0f;
      this->mode_lb_3 = 0l;
      this->t_lb_3 = 0.0f;
      this->w_lb_3 = 0.0f;
      this->pos_lb_3 = 0.0f;
      this->k_p_lb_3 = 0.0f;
      this->k_w_lb_3 = 0.0f;
      this->mode_rb_1 = 0l;
      this->t_rb_1 = 0.0f;
      this->w_rb_1 = 0.0f;
      this->pos_rb_1 = 0.0f;
      this->k_p_rb_1 = 0.0f;
      this->k_w_rb_1 = 0.0f;
      this->mode_rb_2 = 0l;
      this->t_rb_2 = 0.0f;
      this->w_rb_2 = 0.0f;
      this->pos_rb_2 = 0.0f;
      this->k_p_rb_2 = 0.0f;
      this->k_w_rb_2 = 0.0f;
      this->mode_rb_3 = 0l;
      this->t_rb_3 = 0.0f;
      this->w_rb_3 = 0.0f;
      this->pos_rb_3 = 0.0f;
      this->k_p_rb_3 = 0.0f;
      this->k_w_rb_3 = 0.0f;
    }
  }

  // field types and members
  using _mode_lf_1_type =
    int32_t;
  _mode_lf_1_type mode_lf_1;
  using _t_lf_1_type =
    float;
  _t_lf_1_type t_lf_1;
  using _w_lf_1_type =
    float;
  _w_lf_1_type w_lf_1;
  using _pos_lf_1_type =
    float;
  _pos_lf_1_type pos_lf_1;
  using _k_p_lf_1_type =
    float;
  _k_p_lf_1_type k_p_lf_1;
  using _k_w_lf_1_type =
    float;
  _k_w_lf_1_type k_w_lf_1;
  using _mode_lf_2_type =
    int32_t;
  _mode_lf_2_type mode_lf_2;
  using _t_lf_2_type =
    float;
  _t_lf_2_type t_lf_2;
  using _w_lf_2_type =
    float;
  _w_lf_2_type w_lf_2;
  using _pos_lf_2_type =
    float;
  _pos_lf_2_type pos_lf_2;
  using _k_p_lf_2_type =
    float;
  _k_p_lf_2_type k_p_lf_2;
  using _k_w_lf_2_type =
    float;
  _k_w_lf_2_type k_w_lf_2;
  using _mode_lf_3_type =
    int32_t;
  _mode_lf_3_type mode_lf_3;
  using _t_lf_3_type =
    float;
  _t_lf_3_type t_lf_3;
  using _w_lf_3_type =
    float;
  _w_lf_3_type w_lf_3;
  using _pos_lf_3_type =
    float;
  _pos_lf_3_type pos_lf_3;
  using _k_p_lf_3_type =
    float;
  _k_p_lf_3_type k_p_lf_3;
  using _k_w_lf_3_type =
    float;
  _k_w_lf_3_type k_w_lf_3;
  using _mode_rf_1_type =
    int32_t;
  _mode_rf_1_type mode_rf_1;
  using _t_rf_1_type =
    float;
  _t_rf_1_type t_rf_1;
  using _w_rf_1_type =
    float;
  _w_rf_1_type w_rf_1;
  using _pos_rf_1_type =
    float;
  _pos_rf_1_type pos_rf_1;
  using _k_p_rf_1_type =
    float;
  _k_p_rf_1_type k_p_rf_1;
  using _k_w_rf_1_type =
    float;
  _k_w_rf_1_type k_w_rf_1;
  using _mode_rf_2_type =
    int32_t;
  _mode_rf_2_type mode_rf_2;
  using _t_rf_2_type =
    float;
  _t_rf_2_type t_rf_2;
  using _w_rf_2_type =
    float;
  _w_rf_2_type w_rf_2;
  using _pos_rf_2_type =
    float;
  _pos_rf_2_type pos_rf_2;
  using _k_p_rf_2_type =
    float;
  _k_p_rf_2_type k_p_rf_2;
  using _k_w_rf_2_type =
    float;
  _k_w_rf_2_type k_w_rf_2;
  using _mode_rf_3_type =
    int32_t;
  _mode_rf_3_type mode_rf_3;
  using _t_rf_3_type =
    float;
  _t_rf_3_type t_rf_3;
  using _w_rf_3_type =
    float;
  _w_rf_3_type w_rf_3;
  using _pos_rf_3_type =
    float;
  _pos_rf_3_type pos_rf_3;
  using _k_p_rf_3_type =
    float;
  _k_p_rf_3_type k_p_rf_3;
  using _k_w_rf_3_type =
    float;
  _k_w_rf_3_type k_w_rf_3;
  using _mode_lb_1_type =
    int32_t;
  _mode_lb_1_type mode_lb_1;
  using _t_lb_1_type =
    float;
  _t_lb_1_type t_lb_1;
  using _w_lb_1_type =
    float;
  _w_lb_1_type w_lb_1;
  using _pos_lb_1_type =
    float;
  _pos_lb_1_type pos_lb_1;
  using _k_p_lb_1_type =
    float;
  _k_p_lb_1_type k_p_lb_1;
  using _k_w_lb_1_type =
    float;
  _k_w_lb_1_type k_w_lb_1;
  using _mode_lb_2_type =
    int32_t;
  _mode_lb_2_type mode_lb_2;
  using _t_lb_2_type =
    float;
  _t_lb_2_type t_lb_2;
  using _w_lb_2_type =
    float;
  _w_lb_2_type w_lb_2;
  using _pos_lb_2_type =
    float;
  _pos_lb_2_type pos_lb_2;
  using _k_p_lb_2_type =
    float;
  _k_p_lb_2_type k_p_lb_2;
  using _k_w_lb_2_type =
    float;
  _k_w_lb_2_type k_w_lb_2;
  using _mode_lb_3_type =
    int32_t;
  _mode_lb_3_type mode_lb_3;
  using _t_lb_3_type =
    float;
  _t_lb_3_type t_lb_3;
  using _w_lb_3_type =
    float;
  _w_lb_3_type w_lb_3;
  using _pos_lb_3_type =
    float;
  _pos_lb_3_type pos_lb_3;
  using _k_p_lb_3_type =
    float;
  _k_p_lb_3_type k_p_lb_3;
  using _k_w_lb_3_type =
    float;
  _k_w_lb_3_type k_w_lb_3;
  using _mode_rb_1_type =
    int32_t;
  _mode_rb_1_type mode_rb_1;
  using _t_rb_1_type =
    float;
  _t_rb_1_type t_rb_1;
  using _w_rb_1_type =
    float;
  _w_rb_1_type w_rb_1;
  using _pos_rb_1_type =
    float;
  _pos_rb_1_type pos_rb_1;
  using _k_p_rb_1_type =
    float;
  _k_p_rb_1_type k_p_rb_1;
  using _k_w_rb_1_type =
    float;
  _k_w_rb_1_type k_w_rb_1;
  using _mode_rb_2_type =
    int32_t;
  _mode_rb_2_type mode_rb_2;
  using _t_rb_2_type =
    float;
  _t_rb_2_type t_rb_2;
  using _w_rb_2_type =
    float;
  _w_rb_2_type w_rb_2;
  using _pos_rb_2_type =
    float;
  _pos_rb_2_type pos_rb_2;
  using _k_p_rb_2_type =
    float;
  _k_p_rb_2_type k_p_rb_2;
  using _k_w_rb_2_type =
    float;
  _k_w_rb_2_type k_w_rb_2;
  using _mode_rb_3_type =
    int32_t;
  _mode_rb_3_type mode_rb_3;
  using _t_rb_3_type =
    float;
  _t_rb_3_type t_rb_3;
  using _w_rb_3_type =
    float;
  _w_rb_3_type w_rb_3;
  using _pos_rb_3_type =
    float;
  _pos_rb_3_type pos_rb_3;
  using _k_p_rb_3_type =
    float;
  _k_p_rb_3_type k_p_rb_3;
  using _k_w_rb_3_type =
    float;
  _k_w_rb_3_type k_w_rb_3;

  // setters for named parameter idiom
  Type & set__mode_lf_1(
    const int32_t & _arg)
  {
    this->mode_lf_1 = _arg;
    return *this;
  }
  Type & set__t_lf_1(
    const float & _arg)
  {
    this->t_lf_1 = _arg;
    return *this;
  }
  Type & set__w_lf_1(
    const float & _arg)
  {
    this->w_lf_1 = _arg;
    return *this;
  }
  Type & set__pos_lf_1(
    const float & _arg)
  {
    this->pos_lf_1 = _arg;
    return *this;
  }
  Type & set__k_p_lf_1(
    const float & _arg)
  {
    this->k_p_lf_1 = _arg;
    return *this;
  }
  Type & set__k_w_lf_1(
    const float & _arg)
  {
    this->k_w_lf_1 = _arg;
    return *this;
  }
  Type & set__mode_lf_2(
    const int32_t & _arg)
  {
    this->mode_lf_2 = _arg;
    return *this;
  }
  Type & set__t_lf_2(
    const float & _arg)
  {
    this->t_lf_2 = _arg;
    return *this;
  }
  Type & set__w_lf_2(
    const float & _arg)
  {
    this->w_lf_2 = _arg;
    return *this;
  }
  Type & set__pos_lf_2(
    const float & _arg)
  {
    this->pos_lf_2 = _arg;
    return *this;
  }
  Type & set__k_p_lf_2(
    const float & _arg)
  {
    this->k_p_lf_2 = _arg;
    return *this;
  }
  Type & set__k_w_lf_2(
    const float & _arg)
  {
    this->k_w_lf_2 = _arg;
    return *this;
  }
  Type & set__mode_lf_3(
    const int32_t & _arg)
  {
    this->mode_lf_3 = _arg;
    return *this;
  }
  Type & set__t_lf_3(
    const float & _arg)
  {
    this->t_lf_3 = _arg;
    return *this;
  }
  Type & set__w_lf_3(
    const float & _arg)
  {
    this->w_lf_3 = _arg;
    return *this;
  }
  Type & set__pos_lf_3(
    const float & _arg)
  {
    this->pos_lf_3 = _arg;
    return *this;
  }
  Type & set__k_p_lf_3(
    const float & _arg)
  {
    this->k_p_lf_3 = _arg;
    return *this;
  }
  Type & set__k_w_lf_3(
    const float & _arg)
  {
    this->k_w_lf_3 = _arg;
    return *this;
  }
  Type & set__mode_rf_1(
    const int32_t & _arg)
  {
    this->mode_rf_1 = _arg;
    return *this;
  }
  Type & set__t_rf_1(
    const float & _arg)
  {
    this->t_rf_1 = _arg;
    return *this;
  }
  Type & set__w_rf_1(
    const float & _arg)
  {
    this->w_rf_1 = _arg;
    return *this;
  }
  Type & set__pos_rf_1(
    const float & _arg)
  {
    this->pos_rf_1 = _arg;
    return *this;
  }
  Type & set__k_p_rf_1(
    const float & _arg)
  {
    this->k_p_rf_1 = _arg;
    return *this;
  }
  Type & set__k_w_rf_1(
    const float & _arg)
  {
    this->k_w_rf_1 = _arg;
    return *this;
  }
  Type & set__mode_rf_2(
    const int32_t & _arg)
  {
    this->mode_rf_2 = _arg;
    return *this;
  }
  Type & set__t_rf_2(
    const float & _arg)
  {
    this->t_rf_2 = _arg;
    return *this;
  }
  Type & set__w_rf_2(
    const float & _arg)
  {
    this->w_rf_2 = _arg;
    return *this;
  }
  Type & set__pos_rf_2(
    const float & _arg)
  {
    this->pos_rf_2 = _arg;
    return *this;
  }
  Type & set__k_p_rf_2(
    const float & _arg)
  {
    this->k_p_rf_2 = _arg;
    return *this;
  }
  Type & set__k_w_rf_2(
    const float & _arg)
  {
    this->k_w_rf_2 = _arg;
    return *this;
  }
  Type & set__mode_rf_3(
    const int32_t & _arg)
  {
    this->mode_rf_3 = _arg;
    return *this;
  }
  Type & set__t_rf_3(
    const float & _arg)
  {
    this->t_rf_3 = _arg;
    return *this;
  }
  Type & set__w_rf_3(
    const float & _arg)
  {
    this->w_rf_3 = _arg;
    return *this;
  }
  Type & set__pos_rf_3(
    const float & _arg)
  {
    this->pos_rf_3 = _arg;
    return *this;
  }
  Type & set__k_p_rf_3(
    const float & _arg)
  {
    this->k_p_rf_3 = _arg;
    return *this;
  }
  Type & set__k_w_rf_3(
    const float & _arg)
  {
    this->k_w_rf_3 = _arg;
    return *this;
  }
  Type & set__mode_lb_1(
    const int32_t & _arg)
  {
    this->mode_lb_1 = _arg;
    return *this;
  }
  Type & set__t_lb_1(
    const float & _arg)
  {
    this->t_lb_1 = _arg;
    return *this;
  }
  Type & set__w_lb_1(
    const float & _arg)
  {
    this->w_lb_1 = _arg;
    return *this;
  }
  Type & set__pos_lb_1(
    const float & _arg)
  {
    this->pos_lb_1 = _arg;
    return *this;
  }
  Type & set__k_p_lb_1(
    const float & _arg)
  {
    this->k_p_lb_1 = _arg;
    return *this;
  }
  Type & set__k_w_lb_1(
    const float & _arg)
  {
    this->k_w_lb_1 = _arg;
    return *this;
  }
  Type & set__mode_lb_2(
    const int32_t & _arg)
  {
    this->mode_lb_2 = _arg;
    return *this;
  }
  Type & set__t_lb_2(
    const float & _arg)
  {
    this->t_lb_2 = _arg;
    return *this;
  }
  Type & set__w_lb_2(
    const float & _arg)
  {
    this->w_lb_2 = _arg;
    return *this;
  }
  Type & set__pos_lb_2(
    const float & _arg)
  {
    this->pos_lb_2 = _arg;
    return *this;
  }
  Type & set__k_p_lb_2(
    const float & _arg)
  {
    this->k_p_lb_2 = _arg;
    return *this;
  }
  Type & set__k_w_lb_2(
    const float & _arg)
  {
    this->k_w_lb_2 = _arg;
    return *this;
  }
  Type & set__mode_lb_3(
    const int32_t & _arg)
  {
    this->mode_lb_3 = _arg;
    return *this;
  }
  Type & set__t_lb_3(
    const float & _arg)
  {
    this->t_lb_3 = _arg;
    return *this;
  }
  Type & set__w_lb_3(
    const float & _arg)
  {
    this->w_lb_3 = _arg;
    return *this;
  }
  Type & set__pos_lb_3(
    const float & _arg)
  {
    this->pos_lb_3 = _arg;
    return *this;
  }
  Type & set__k_p_lb_3(
    const float & _arg)
  {
    this->k_p_lb_3 = _arg;
    return *this;
  }
  Type & set__k_w_lb_3(
    const float & _arg)
  {
    this->k_w_lb_3 = _arg;
    return *this;
  }
  Type & set__mode_rb_1(
    const int32_t & _arg)
  {
    this->mode_rb_1 = _arg;
    return *this;
  }
  Type & set__t_rb_1(
    const float & _arg)
  {
    this->t_rb_1 = _arg;
    return *this;
  }
  Type & set__w_rb_1(
    const float & _arg)
  {
    this->w_rb_1 = _arg;
    return *this;
  }
  Type & set__pos_rb_1(
    const float & _arg)
  {
    this->pos_rb_1 = _arg;
    return *this;
  }
  Type & set__k_p_rb_1(
    const float & _arg)
  {
    this->k_p_rb_1 = _arg;
    return *this;
  }
  Type & set__k_w_rb_1(
    const float & _arg)
  {
    this->k_w_rb_1 = _arg;
    return *this;
  }
  Type & set__mode_rb_2(
    const int32_t & _arg)
  {
    this->mode_rb_2 = _arg;
    return *this;
  }
  Type & set__t_rb_2(
    const float & _arg)
  {
    this->t_rb_2 = _arg;
    return *this;
  }
  Type & set__w_rb_2(
    const float & _arg)
  {
    this->w_rb_2 = _arg;
    return *this;
  }
  Type & set__pos_rb_2(
    const float & _arg)
  {
    this->pos_rb_2 = _arg;
    return *this;
  }
  Type & set__k_p_rb_2(
    const float & _arg)
  {
    this->k_p_rb_2 = _arg;
    return *this;
  }
  Type & set__k_w_rb_2(
    const float & _arg)
  {
    this->k_w_rb_2 = _arg;
    return *this;
  }
  Type & set__mode_rb_3(
    const int32_t & _arg)
  {
    this->mode_rb_3 = _arg;
    return *this;
  }
  Type & set__t_rb_3(
    const float & _arg)
  {
    this->t_rb_3 = _arg;
    return *this;
  }
  Type & set__w_rb_3(
    const float & _arg)
  {
    this->w_rb_3 = _arg;
    return *this;
  }
  Type & set__pos_rb_3(
    const float & _arg)
  {
    this->pos_rb_3 = _arg;
    return *this;
  }
  Type & set__k_p_rb_3(
    const float & _arg)
  {
    this->k_p_rb_3 = _arg;
    return *this;
  }
  Type & set__k_w_rb_3(
    const float & _arg)
  {
    this->k_w_rb_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message::msg::Motorcarryout_<ContainerAllocator> *;
  using ConstRawPtr =
    const message::msg::Motorcarryout_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message::msg::Motorcarryout_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message::msg::Motorcarryout_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message::msg::Motorcarryout_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message::msg::Motorcarryout_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message::msg::Motorcarryout_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message::msg::Motorcarryout_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message::msg::Motorcarryout_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message::msg::Motorcarryout_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message__msg__Motorcarryout
    std::shared_ptr<message::msg::Motorcarryout_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message__msg__Motorcarryout
    std::shared_ptr<message::msg::Motorcarryout_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motorcarryout_ & other) const
  {
    if (this->mode_lf_1 != other.mode_lf_1) {
      return false;
    }
    if (this->t_lf_1 != other.t_lf_1) {
      return false;
    }
    if (this->w_lf_1 != other.w_lf_1) {
      return false;
    }
    if (this->pos_lf_1 != other.pos_lf_1) {
      return false;
    }
    if (this->k_p_lf_1 != other.k_p_lf_1) {
      return false;
    }
    if (this->k_w_lf_1 != other.k_w_lf_1) {
      return false;
    }
    if (this->mode_lf_2 != other.mode_lf_2) {
      return false;
    }
    if (this->t_lf_2 != other.t_lf_2) {
      return false;
    }
    if (this->w_lf_2 != other.w_lf_2) {
      return false;
    }
    if (this->pos_lf_2 != other.pos_lf_2) {
      return false;
    }
    if (this->k_p_lf_2 != other.k_p_lf_2) {
      return false;
    }
    if (this->k_w_lf_2 != other.k_w_lf_2) {
      return false;
    }
    if (this->mode_lf_3 != other.mode_lf_3) {
      return false;
    }
    if (this->t_lf_3 != other.t_lf_3) {
      return false;
    }
    if (this->w_lf_3 != other.w_lf_3) {
      return false;
    }
    if (this->pos_lf_3 != other.pos_lf_3) {
      return false;
    }
    if (this->k_p_lf_3 != other.k_p_lf_3) {
      return false;
    }
    if (this->k_w_lf_3 != other.k_w_lf_3) {
      return false;
    }
    if (this->mode_rf_1 != other.mode_rf_1) {
      return false;
    }
    if (this->t_rf_1 != other.t_rf_1) {
      return false;
    }
    if (this->w_rf_1 != other.w_rf_1) {
      return false;
    }
    if (this->pos_rf_1 != other.pos_rf_1) {
      return false;
    }
    if (this->k_p_rf_1 != other.k_p_rf_1) {
      return false;
    }
    if (this->k_w_rf_1 != other.k_w_rf_1) {
      return false;
    }
    if (this->mode_rf_2 != other.mode_rf_2) {
      return false;
    }
    if (this->t_rf_2 != other.t_rf_2) {
      return false;
    }
    if (this->w_rf_2 != other.w_rf_2) {
      return false;
    }
    if (this->pos_rf_2 != other.pos_rf_2) {
      return false;
    }
    if (this->k_p_rf_2 != other.k_p_rf_2) {
      return false;
    }
    if (this->k_w_rf_2 != other.k_w_rf_2) {
      return false;
    }
    if (this->mode_rf_3 != other.mode_rf_3) {
      return false;
    }
    if (this->t_rf_3 != other.t_rf_3) {
      return false;
    }
    if (this->w_rf_3 != other.w_rf_3) {
      return false;
    }
    if (this->pos_rf_3 != other.pos_rf_3) {
      return false;
    }
    if (this->k_p_rf_3 != other.k_p_rf_3) {
      return false;
    }
    if (this->k_w_rf_3 != other.k_w_rf_3) {
      return false;
    }
    if (this->mode_lb_1 != other.mode_lb_1) {
      return false;
    }
    if (this->t_lb_1 != other.t_lb_1) {
      return false;
    }
    if (this->w_lb_1 != other.w_lb_1) {
      return false;
    }
    if (this->pos_lb_1 != other.pos_lb_1) {
      return false;
    }
    if (this->k_p_lb_1 != other.k_p_lb_1) {
      return false;
    }
    if (this->k_w_lb_1 != other.k_w_lb_1) {
      return false;
    }
    if (this->mode_lb_2 != other.mode_lb_2) {
      return false;
    }
    if (this->t_lb_2 != other.t_lb_2) {
      return false;
    }
    if (this->w_lb_2 != other.w_lb_2) {
      return false;
    }
    if (this->pos_lb_2 != other.pos_lb_2) {
      return false;
    }
    if (this->k_p_lb_2 != other.k_p_lb_2) {
      return false;
    }
    if (this->k_w_lb_2 != other.k_w_lb_2) {
      return false;
    }
    if (this->mode_lb_3 != other.mode_lb_3) {
      return false;
    }
    if (this->t_lb_3 != other.t_lb_3) {
      return false;
    }
    if (this->w_lb_3 != other.w_lb_3) {
      return false;
    }
    if (this->pos_lb_3 != other.pos_lb_3) {
      return false;
    }
    if (this->k_p_lb_3 != other.k_p_lb_3) {
      return false;
    }
    if (this->k_w_lb_3 != other.k_w_lb_3) {
      return false;
    }
    if (this->mode_rb_1 != other.mode_rb_1) {
      return false;
    }
    if (this->t_rb_1 != other.t_rb_1) {
      return false;
    }
    if (this->w_rb_1 != other.w_rb_1) {
      return false;
    }
    if (this->pos_rb_1 != other.pos_rb_1) {
      return false;
    }
    if (this->k_p_rb_1 != other.k_p_rb_1) {
      return false;
    }
    if (this->k_w_rb_1 != other.k_w_rb_1) {
      return false;
    }
    if (this->mode_rb_2 != other.mode_rb_2) {
      return false;
    }
    if (this->t_rb_2 != other.t_rb_2) {
      return false;
    }
    if (this->w_rb_2 != other.w_rb_2) {
      return false;
    }
    if (this->pos_rb_2 != other.pos_rb_2) {
      return false;
    }
    if (this->k_p_rb_2 != other.k_p_rb_2) {
      return false;
    }
    if (this->k_w_rb_2 != other.k_w_rb_2) {
      return false;
    }
    if (this->mode_rb_3 != other.mode_rb_3) {
      return false;
    }
    if (this->t_rb_3 != other.t_rb_3) {
      return false;
    }
    if (this->w_rb_3 != other.w_rb_3) {
      return false;
    }
    if (this->pos_rb_3 != other.pos_rb_3) {
      return false;
    }
    if (this->k_p_rb_3 != other.k_p_rb_3) {
      return false;
    }
    if (this->k_w_rb_3 != other.k_w_rb_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motorcarryout_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motorcarryout_

// alias to use template instance with default allocator
using Motorcarryout =
  message::msg::Motorcarryout_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message

#endif  // MESSAGE__MSG__MOTORCARRYOUT__STRUCT_HPP_
