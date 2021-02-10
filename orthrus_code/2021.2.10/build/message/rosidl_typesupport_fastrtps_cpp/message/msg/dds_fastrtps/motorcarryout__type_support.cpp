// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message:msg/Motorcarryout.idl
// generated code does not contain a copyright notice
#include "message/msg/motorcarryout__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message/msg/motorcarryout__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace message
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
cdr_serialize(
  const message::msg::Motorcarryout & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mode_lf_1
  cdr << ros_message.mode_lf_1;
  // Member: t_lf_1
  cdr << ros_message.t_lf_1;
  // Member: w_lf_1
  cdr << ros_message.w_lf_1;
  // Member: pos_lf_1
  cdr << ros_message.pos_lf_1;
  // Member: k_p_lf_1
  cdr << ros_message.k_p_lf_1;
  // Member: k_w_lf_1
  cdr << ros_message.k_w_lf_1;
  // Member: mode_lf_2
  cdr << ros_message.mode_lf_2;
  // Member: t_lf_2
  cdr << ros_message.t_lf_2;
  // Member: w_lf_2
  cdr << ros_message.w_lf_2;
  // Member: pos_lf_2
  cdr << ros_message.pos_lf_2;
  // Member: k_p_lf_2
  cdr << ros_message.k_p_lf_2;
  // Member: k_w_lf_2
  cdr << ros_message.k_w_lf_2;
  // Member: mode_lf_3
  cdr << ros_message.mode_lf_3;
  // Member: t_lf_3
  cdr << ros_message.t_lf_3;
  // Member: w_lf_3
  cdr << ros_message.w_lf_3;
  // Member: pos_lf_3
  cdr << ros_message.pos_lf_3;
  // Member: k_p_lf_3
  cdr << ros_message.k_p_lf_3;
  // Member: k_w_lf_3
  cdr << ros_message.k_w_lf_3;
  // Member: mode_rf_1
  cdr << ros_message.mode_rf_1;
  // Member: t_rf_1
  cdr << ros_message.t_rf_1;
  // Member: w_rf_1
  cdr << ros_message.w_rf_1;
  // Member: pos_rf_1
  cdr << ros_message.pos_rf_1;
  // Member: k_p_rf_1
  cdr << ros_message.k_p_rf_1;
  // Member: k_w_rf_1
  cdr << ros_message.k_w_rf_1;
  // Member: mode_rf_2
  cdr << ros_message.mode_rf_2;
  // Member: t_rf_2
  cdr << ros_message.t_rf_2;
  // Member: w_rf_2
  cdr << ros_message.w_rf_2;
  // Member: pos_rf_2
  cdr << ros_message.pos_rf_2;
  // Member: k_p_rf_2
  cdr << ros_message.k_p_rf_2;
  // Member: k_w_rf_2
  cdr << ros_message.k_w_rf_2;
  // Member: mode_rf_3
  cdr << ros_message.mode_rf_3;
  // Member: t_rf_3
  cdr << ros_message.t_rf_3;
  // Member: w_rf_3
  cdr << ros_message.w_rf_3;
  // Member: pos_rf_3
  cdr << ros_message.pos_rf_3;
  // Member: k_p_rf_3
  cdr << ros_message.k_p_rf_3;
  // Member: k_w_rf_3
  cdr << ros_message.k_w_rf_3;
  // Member: mode_lb_1
  cdr << ros_message.mode_lb_1;
  // Member: t_lb_1
  cdr << ros_message.t_lb_1;
  // Member: w_lb_1
  cdr << ros_message.w_lb_1;
  // Member: pos_lb_1
  cdr << ros_message.pos_lb_1;
  // Member: k_p_lb_1
  cdr << ros_message.k_p_lb_1;
  // Member: k_w_lb_1
  cdr << ros_message.k_w_lb_1;
  // Member: mode_lb_2
  cdr << ros_message.mode_lb_2;
  // Member: t_lb_2
  cdr << ros_message.t_lb_2;
  // Member: w_lb_2
  cdr << ros_message.w_lb_2;
  // Member: pos_lb_2
  cdr << ros_message.pos_lb_2;
  // Member: k_p_lb_2
  cdr << ros_message.k_p_lb_2;
  // Member: k_w_lb_2
  cdr << ros_message.k_w_lb_2;
  // Member: mode_lb_3
  cdr << ros_message.mode_lb_3;
  // Member: t_lb_3
  cdr << ros_message.t_lb_3;
  // Member: w_lb_3
  cdr << ros_message.w_lb_3;
  // Member: pos_lb_3
  cdr << ros_message.pos_lb_3;
  // Member: k_p_lb_3
  cdr << ros_message.k_p_lb_3;
  // Member: k_w_lb_3
  cdr << ros_message.k_w_lb_3;
  // Member: mode_rb_1
  cdr << ros_message.mode_rb_1;
  // Member: t_rb_1
  cdr << ros_message.t_rb_1;
  // Member: w_rb_1
  cdr << ros_message.w_rb_1;
  // Member: pos_rb_1
  cdr << ros_message.pos_rb_1;
  // Member: k_p_rb_1
  cdr << ros_message.k_p_rb_1;
  // Member: k_w_rb_1
  cdr << ros_message.k_w_rb_1;
  // Member: mode_rb_2
  cdr << ros_message.mode_rb_2;
  // Member: t_rb_2
  cdr << ros_message.t_rb_2;
  // Member: w_rb_2
  cdr << ros_message.w_rb_2;
  // Member: pos_rb_2
  cdr << ros_message.pos_rb_2;
  // Member: k_p_rb_2
  cdr << ros_message.k_p_rb_2;
  // Member: k_w_rb_2
  cdr << ros_message.k_w_rb_2;
  // Member: mode_rb_3
  cdr << ros_message.mode_rb_3;
  // Member: t_rb_3
  cdr << ros_message.t_rb_3;
  // Member: w_rb_3
  cdr << ros_message.w_rb_3;
  // Member: pos_rb_3
  cdr << ros_message.pos_rb_3;
  // Member: k_p_rb_3
  cdr << ros_message.k_p_rb_3;
  // Member: k_w_rb_3
  cdr << ros_message.k_w_rb_3;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message::msg::Motorcarryout & ros_message)
{
  // Member: mode_lf_1
  cdr >> ros_message.mode_lf_1;

  // Member: t_lf_1
  cdr >> ros_message.t_lf_1;

  // Member: w_lf_1
  cdr >> ros_message.w_lf_1;

  // Member: pos_lf_1
  cdr >> ros_message.pos_lf_1;

  // Member: k_p_lf_1
  cdr >> ros_message.k_p_lf_1;

  // Member: k_w_lf_1
  cdr >> ros_message.k_w_lf_1;

  // Member: mode_lf_2
  cdr >> ros_message.mode_lf_2;

  // Member: t_lf_2
  cdr >> ros_message.t_lf_2;

  // Member: w_lf_2
  cdr >> ros_message.w_lf_2;

  // Member: pos_lf_2
  cdr >> ros_message.pos_lf_2;

  // Member: k_p_lf_2
  cdr >> ros_message.k_p_lf_2;

  // Member: k_w_lf_2
  cdr >> ros_message.k_w_lf_2;

  // Member: mode_lf_3
  cdr >> ros_message.mode_lf_3;

  // Member: t_lf_3
  cdr >> ros_message.t_lf_3;

  // Member: w_lf_3
  cdr >> ros_message.w_lf_3;

  // Member: pos_lf_3
  cdr >> ros_message.pos_lf_3;

  // Member: k_p_lf_3
  cdr >> ros_message.k_p_lf_3;

  // Member: k_w_lf_3
  cdr >> ros_message.k_w_lf_3;

  // Member: mode_rf_1
  cdr >> ros_message.mode_rf_1;

  // Member: t_rf_1
  cdr >> ros_message.t_rf_1;

  // Member: w_rf_1
  cdr >> ros_message.w_rf_1;

  // Member: pos_rf_1
  cdr >> ros_message.pos_rf_1;

  // Member: k_p_rf_1
  cdr >> ros_message.k_p_rf_1;

  // Member: k_w_rf_1
  cdr >> ros_message.k_w_rf_1;

  // Member: mode_rf_2
  cdr >> ros_message.mode_rf_2;

  // Member: t_rf_2
  cdr >> ros_message.t_rf_2;

  // Member: w_rf_2
  cdr >> ros_message.w_rf_2;

  // Member: pos_rf_2
  cdr >> ros_message.pos_rf_2;

  // Member: k_p_rf_2
  cdr >> ros_message.k_p_rf_2;

  // Member: k_w_rf_2
  cdr >> ros_message.k_w_rf_2;

  // Member: mode_rf_3
  cdr >> ros_message.mode_rf_3;

  // Member: t_rf_3
  cdr >> ros_message.t_rf_3;

  // Member: w_rf_3
  cdr >> ros_message.w_rf_3;

  // Member: pos_rf_3
  cdr >> ros_message.pos_rf_3;

  // Member: k_p_rf_3
  cdr >> ros_message.k_p_rf_3;

  // Member: k_w_rf_3
  cdr >> ros_message.k_w_rf_3;

  // Member: mode_lb_1
  cdr >> ros_message.mode_lb_1;

  // Member: t_lb_1
  cdr >> ros_message.t_lb_1;

  // Member: w_lb_1
  cdr >> ros_message.w_lb_1;

  // Member: pos_lb_1
  cdr >> ros_message.pos_lb_1;

  // Member: k_p_lb_1
  cdr >> ros_message.k_p_lb_1;

  // Member: k_w_lb_1
  cdr >> ros_message.k_w_lb_1;

  // Member: mode_lb_2
  cdr >> ros_message.mode_lb_2;

  // Member: t_lb_2
  cdr >> ros_message.t_lb_2;

  // Member: w_lb_2
  cdr >> ros_message.w_lb_2;

  // Member: pos_lb_2
  cdr >> ros_message.pos_lb_2;

  // Member: k_p_lb_2
  cdr >> ros_message.k_p_lb_2;

  // Member: k_w_lb_2
  cdr >> ros_message.k_w_lb_2;

  // Member: mode_lb_3
  cdr >> ros_message.mode_lb_3;

  // Member: t_lb_3
  cdr >> ros_message.t_lb_3;

  // Member: w_lb_3
  cdr >> ros_message.w_lb_3;

  // Member: pos_lb_3
  cdr >> ros_message.pos_lb_3;

  // Member: k_p_lb_3
  cdr >> ros_message.k_p_lb_3;

  // Member: k_w_lb_3
  cdr >> ros_message.k_w_lb_3;

  // Member: mode_rb_1
  cdr >> ros_message.mode_rb_1;

  // Member: t_rb_1
  cdr >> ros_message.t_rb_1;

  // Member: w_rb_1
  cdr >> ros_message.w_rb_1;

  // Member: pos_rb_1
  cdr >> ros_message.pos_rb_1;

  // Member: k_p_rb_1
  cdr >> ros_message.k_p_rb_1;

  // Member: k_w_rb_1
  cdr >> ros_message.k_w_rb_1;

  // Member: mode_rb_2
  cdr >> ros_message.mode_rb_2;

  // Member: t_rb_2
  cdr >> ros_message.t_rb_2;

  // Member: w_rb_2
  cdr >> ros_message.w_rb_2;

  // Member: pos_rb_2
  cdr >> ros_message.pos_rb_2;

  // Member: k_p_rb_2
  cdr >> ros_message.k_p_rb_2;

  // Member: k_w_rb_2
  cdr >> ros_message.k_w_rb_2;

  // Member: mode_rb_3
  cdr >> ros_message.mode_rb_3;

  // Member: t_rb_3
  cdr >> ros_message.t_rb_3;

  // Member: w_rb_3
  cdr >> ros_message.w_rb_3;

  // Member: pos_rb_3
  cdr >> ros_message.pos_rb_3;

  // Member: k_p_rb_3
  cdr >> ros_message.k_p_rb_3;

  // Member: k_w_rb_3
  cdr >> ros_message.k_w_rb_3;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
get_serialized_size(
  const message::msg::Motorcarryout & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mode_lf_1
  {
    size_t item_size = sizeof(ros_message.mode_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_lf_1
  {
    size_t item_size = sizeof(ros_message.t_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_lf_1
  {
    size_t item_size = sizeof(ros_message.w_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_lf_1
  {
    size_t item_size = sizeof(ros_message.pos_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_lf_1
  {
    size_t item_size = sizeof(ros_message.k_p_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_lf_1
  {
    size_t item_size = sizeof(ros_message.k_w_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_lf_2
  {
    size_t item_size = sizeof(ros_message.mode_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_lf_2
  {
    size_t item_size = sizeof(ros_message.t_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_lf_2
  {
    size_t item_size = sizeof(ros_message.w_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_lf_2
  {
    size_t item_size = sizeof(ros_message.pos_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_lf_2
  {
    size_t item_size = sizeof(ros_message.k_p_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_lf_2
  {
    size_t item_size = sizeof(ros_message.k_w_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_lf_3
  {
    size_t item_size = sizeof(ros_message.mode_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_lf_3
  {
    size_t item_size = sizeof(ros_message.t_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_lf_3
  {
    size_t item_size = sizeof(ros_message.w_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_lf_3
  {
    size_t item_size = sizeof(ros_message.pos_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_lf_3
  {
    size_t item_size = sizeof(ros_message.k_p_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_lf_3
  {
    size_t item_size = sizeof(ros_message.k_w_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_rf_1
  {
    size_t item_size = sizeof(ros_message.mode_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_rf_1
  {
    size_t item_size = sizeof(ros_message.t_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_rf_1
  {
    size_t item_size = sizeof(ros_message.w_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_rf_1
  {
    size_t item_size = sizeof(ros_message.pos_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_rf_1
  {
    size_t item_size = sizeof(ros_message.k_p_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_rf_1
  {
    size_t item_size = sizeof(ros_message.k_w_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_rf_2
  {
    size_t item_size = sizeof(ros_message.mode_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_rf_2
  {
    size_t item_size = sizeof(ros_message.t_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_rf_2
  {
    size_t item_size = sizeof(ros_message.w_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_rf_2
  {
    size_t item_size = sizeof(ros_message.pos_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_rf_2
  {
    size_t item_size = sizeof(ros_message.k_p_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_rf_2
  {
    size_t item_size = sizeof(ros_message.k_w_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_rf_3
  {
    size_t item_size = sizeof(ros_message.mode_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_rf_3
  {
    size_t item_size = sizeof(ros_message.t_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_rf_3
  {
    size_t item_size = sizeof(ros_message.w_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_rf_3
  {
    size_t item_size = sizeof(ros_message.pos_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_rf_3
  {
    size_t item_size = sizeof(ros_message.k_p_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_rf_3
  {
    size_t item_size = sizeof(ros_message.k_w_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_lb_1
  {
    size_t item_size = sizeof(ros_message.mode_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_lb_1
  {
    size_t item_size = sizeof(ros_message.t_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_lb_1
  {
    size_t item_size = sizeof(ros_message.w_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_lb_1
  {
    size_t item_size = sizeof(ros_message.pos_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_lb_1
  {
    size_t item_size = sizeof(ros_message.k_p_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_lb_1
  {
    size_t item_size = sizeof(ros_message.k_w_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_lb_2
  {
    size_t item_size = sizeof(ros_message.mode_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_lb_2
  {
    size_t item_size = sizeof(ros_message.t_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_lb_2
  {
    size_t item_size = sizeof(ros_message.w_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_lb_2
  {
    size_t item_size = sizeof(ros_message.pos_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_lb_2
  {
    size_t item_size = sizeof(ros_message.k_p_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_lb_2
  {
    size_t item_size = sizeof(ros_message.k_w_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_lb_3
  {
    size_t item_size = sizeof(ros_message.mode_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_lb_3
  {
    size_t item_size = sizeof(ros_message.t_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_lb_3
  {
    size_t item_size = sizeof(ros_message.w_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_lb_3
  {
    size_t item_size = sizeof(ros_message.pos_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_lb_3
  {
    size_t item_size = sizeof(ros_message.k_p_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_lb_3
  {
    size_t item_size = sizeof(ros_message.k_w_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_rb_1
  {
    size_t item_size = sizeof(ros_message.mode_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_rb_1
  {
    size_t item_size = sizeof(ros_message.t_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_rb_1
  {
    size_t item_size = sizeof(ros_message.w_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_rb_1
  {
    size_t item_size = sizeof(ros_message.pos_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_rb_1
  {
    size_t item_size = sizeof(ros_message.k_p_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_rb_1
  {
    size_t item_size = sizeof(ros_message.k_w_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_rb_2
  {
    size_t item_size = sizeof(ros_message.mode_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_rb_2
  {
    size_t item_size = sizeof(ros_message.t_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_rb_2
  {
    size_t item_size = sizeof(ros_message.w_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_rb_2
  {
    size_t item_size = sizeof(ros_message.pos_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_rb_2
  {
    size_t item_size = sizeof(ros_message.k_p_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_rb_2
  {
    size_t item_size = sizeof(ros_message.k_w_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_rb_3
  {
    size_t item_size = sizeof(ros_message.mode_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_rb_3
  {
    size_t item_size = sizeof(ros_message.t_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_rb_3
  {
    size_t item_size = sizeof(ros_message.w_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_rb_3
  {
    size_t item_size = sizeof(ros_message.pos_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_rb_3
  {
    size_t item_size = sizeof(ros_message.k_p_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_rb_3
  {
    size_t item_size = sizeof(ros_message.k_w_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
max_serialized_size_Motorcarryout(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: mode_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_p_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: k_w_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Motorcarryout__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message::msg::Motorcarryout *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Motorcarryout__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message::msg::Motorcarryout *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Motorcarryout__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message::msg::Motorcarryout *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Motorcarryout__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Motorcarryout(full_bounded, 0);
}

static message_type_support_callbacks_t _Motorcarryout__callbacks = {
  "message::msg",
  "Motorcarryout",
  _Motorcarryout__cdr_serialize,
  _Motorcarryout__cdr_deserialize,
  _Motorcarryout__get_serialized_size,
  _Motorcarryout__max_serialized_size
};

static rosidl_message_type_support_t _Motorcarryout__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Motorcarryout__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace message

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_message
const rosidl_message_type_support_t *
get_message_type_support_handle<message::msg::Motorcarryout>()
{
  return &message::msg::typesupport_fastrtps_cpp::_Motorcarryout__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message, msg, Motorcarryout)() {
  return &message::msg::typesupport_fastrtps_cpp::_Motorcarryout__handle;
}

#ifdef __cplusplus
}
#endif
