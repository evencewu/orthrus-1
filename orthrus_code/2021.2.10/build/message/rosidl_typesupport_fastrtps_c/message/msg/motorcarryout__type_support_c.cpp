// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message:msg/Motorcarryout.idl
// generated code does not contain a copyright notice
#include "message/msg/motorcarryout__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message/msg/motorcarryout__struct.h"
#include "message/msg/motorcarryout__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Motorcarryout__ros_msg_type = message__msg__Motorcarryout;

static bool _Motorcarryout__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Motorcarryout__ros_msg_type * ros_message = static_cast<const _Motorcarryout__ros_msg_type *>(untyped_ros_message);
  // Field name: mode_lf_1
  {
    cdr << ros_message->mode_lf_1;
  }

  // Field name: t_lf_1
  {
    cdr << ros_message->t_lf_1;
  }

  // Field name: w_lf_1
  {
    cdr << ros_message->w_lf_1;
  }

  // Field name: pos_lf_1
  {
    cdr << ros_message->pos_lf_1;
  }

  // Field name: k_p_lf_1
  {
    cdr << ros_message->k_p_lf_1;
  }

  // Field name: k_w_lf_1
  {
    cdr << ros_message->k_w_lf_1;
  }

  // Field name: mode_lf_2
  {
    cdr << ros_message->mode_lf_2;
  }

  // Field name: t_lf_2
  {
    cdr << ros_message->t_lf_2;
  }

  // Field name: w_lf_2
  {
    cdr << ros_message->w_lf_2;
  }

  // Field name: pos_lf_2
  {
    cdr << ros_message->pos_lf_2;
  }

  // Field name: k_p_lf_2
  {
    cdr << ros_message->k_p_lf_2;
  }

  // Field name: k_w_lf_2
  {
    cdr << ros_message->k_w_lf_2;
  }

  // Field name: mode_lf_3
  {
    cdr << ros_message->mode_lf_3;
  }

  // Field name: t_lf_3
  {
    cdr << ros_message->t_lf_3;
  }

  // Field name: w_lf_3
  {
    cdr << ros_message->w_lf_3;
  }

  // Field name: pos_lf_3
  {
    cdr << ros_message->pos_lf_3;
  }

  // Field name: k_p_lf_3
  {
    cdr << ros_message->k_p_lf_3;
  }

  // Field name: k_w_lf_3
  {
    cdr << ros_message->k_w_lf_3;
  }

  // Field name: mode_rf_1
  {
    cdr << ros_message->mode_rf_1;
  }

  // Field name: t_rf_1
  {
    cdr << ros_message->t_rf_1;
  }

  // Field name: w_rf_1
  {
    cdr << ros_message->w_rf_1;
  }

  // Field name: pos_rf_1
  {
    cdr << ros_message->pos_rf_1;
  }

  // Field name: k_p_rf_1
  {
    cdr << ros_message->k_p_rf_1;
  }

  // Field name: k_w_rf_1
  {
    cdr << ros_message->k_w_rf_1;
  }

  // Field name: mode_rf_2
  {
    cdr << ros_message->mode_rf_2;
  }

  // Field name: t_rf_2
  {
    cdr << ros_message->t_rf_2;
  }

  // Field name: w_rf_2
  {
    cdr << ros_message->w_rf_2;
  }

  // Field name: pos_rf_2
  {
    cdr << ros_message->pos_rf_2;
  }

  // Field name: k_p_rf_2
  {
    cdr << ros_message->k_p_rf_2;
  }

  // Field name: k_w_rf_2
  {
    cdr << ros_message->k_w_rf_2;
  }

  // Field name: mode_rf_3
  {
    cdr << ros_message->mode_rf_3;
  }

  // Field name: t_rf_3
  {
    cdr << ros_message->t_rf_3;
  }

  // Field name: w_rf_3
  {
    cdr << ros_message->w_rf_3;
  }

  // Field name: pos_rf_3
  {
    cdr << ros_message->pos_rf_3;
  }

  // Field name: k_p_rf_3
  {
    cdr << ros_message->k_p_rf_3;
  }

  // Field name: k_w_rf_3
  {
    cdr << ros_message->k_w_rf_3;
  }

  // Field name: mode_lb_1
  {
    cdr << ros_message->mode_lb_1;
  }

  // Field name: t_lb_1
  {
    cdr << ros_message->t_lb_1;
  }

  // Field name: w_lb_1
  {
    cdr << ros_message->w_lb_1;
  }

  // Field name: pos_lb_1
  {
    cdr << ros_message->pos_lb_1;
  }

  // Field name: k_p_lb_1
  {
    cdr << ros_message->k_p_lb_1;
  }

  // Field name: k_w_lb_1
  {
    cdr << ros_message->k_w_lb_1;
  }

  // Field name: mode_lb_2
  {
    cdr << ros_message->mode_lb_2;
  }

  // Field name: t_lb_2
  {
    cdr << ros_message->t_lb_2;
  }

  // Field name: w_lb_2
  {
    cdr << ros_message->w_lb_2;
  }

  // Field name: pos_lb_2
  {
    cdr << ros_message->pos_lb_2;
  }

  // Field name: k_p_lb_2
  {
    cdr << ros_message->k_p_lb_2;
  }

  // Field name: k_w_lb_2
  {
    cdr << ros_message->k_w_lb_2;
  }

  // Field name: mode_lb_3
  {
    cdr << ros_message->mode_lb_3;
  }

  // Field name: t_lb_3
  {
    cdr << ros_message->t_lb_3;
  }

  // Field name: w_lb_3
  {
    cdr << ros_message->w_lb_3;
  }

  // Field name: pos_lb_3
  {
    cdr << ros_message->pos_lb_3;
  }

  // Field name: k_p_lb_3
  {
    cdr << ros_message->k_p_lb_3;
  }

  // Field name: k_w_lb_3
  {
    cdr << ros_message->k_w_lb_3;
  }

  // Field name: mode_rb_1
  {
    cdr << ros_message->mode_rb_1;
  }

  // Field name: t_rb_1
  {
    cdr << ros_message->t_rb_1;
  }

  // Field name: w_rb_1
  {
    cdr << ros_message->w_rb_1;
  }

  // Field name: pos_rb_1
  {
    cdr << ros_message->pos_rb_1;
  }

  // Field name: k_p_rb_1
  {
    cdr << ros_message->k_p_rb_1;
  }

  // Field name: k_w_rb_1
  {
    cdr << ros_message->k_w_rb_1;
  }

  // Field name: mode_rb_2
  {
    cdr << ros_message->mode_rb_2;
  }

  // Field name: t_rb_2
  {
    cdr << ros_message->t_rb_2;
  }

  // Field name: w_rb_2
  {
    cdr << ros_message->w_rb_2;
  }

  // Field name: pos_rb_2
  {
    cdr << ros_message->pos_rb_2;
  }

  // Field name: k_p_rb_2
  {
    cdr << ros_message->k_p_rb_2;
  }

  // Field name: k_w_rb_2
  {
    cdr << ros_message->k_w_rb_2;
  }

  // Field name: mode_rb_3
  {
    cdr << ros_message->mode_rb_3;
  }

  // Field name: t_rb_3
  {
    cdr << ros_message->t_rb_3;
  }

  // Field name: w_rb_3
  {
    cdr << ros_message->w_rb_3;
  }

  // Field name: pos_rb_3
  {
    cdr << ros_message->pos_rb_3;
  }

  // Field name: k_p_rb_3
  {
    cdr << ros_message->k_p_rb_3;
  }

  // Field name: k_w_rb_3
  {
    cdr << ros_message->k_w_rb_3;
  }

  return true;
}

static bool _Motorcarryout__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Motorcarryout__ros_msg_type * ros_message = static_cast<_Motorcarryout__ros_msg_type *>(untyped_ros_message);
  // Field name: mode_lf_1
  {
    cdr >> ros_message->mode_lf_1;
  }

  // Field name: t_lf_1
  {
    cdr >> ros_message->t_lf_1;
  }

  // Field name: w_lf_1
  {
    cdr >> ros_message->w_lf_1;
  }

  // Field name: pos_lf_1
  {
    cdr >> ros_message->pos_lf_1;
  }

  // Field name: k_p_lf_1
  {
    cdr >> ros_message->k_p_lf_1;
  }

  // Field name: k_w_lf_1
  {
    cdr >> ros_message->k_w_lf_1;
  }

  // Field name: mode_lf_2
  {
    cdr >> ros_message->mode_lf_2;
  }

  // Field name: t_lf_2
  {
    cdr >> ros_message->t_lf_2;
  }

  // Field name: w_lf_2
  {
    cdr >> ros_message->w_lf_2;
  }

  // Field name: pos_lf_2
  {
    cdr >> ros_message->pos_lf_2;
  }

  // Field name: k_p_lf_2
  {
    cdr >> ros_message->k_p_lf_2;
  }

  // Field name: k_w_lf_2
  {
    cdr >> ros_message->k_w_lf_2;
  }

  // Field name: mode_lf_3
  {
    cdr >> ros_message->mode_lf_3;
  }

  // Field name: t_lf_3
  {
    cdr >> ros_message->t_lf_3;
  }

  // Field name: w_lf_3
  {
    cdr >> ros_message->w_lf_3;
  }

  // Field name: pos_lf_3
  {
    cdr >> ros_message->pos_lf_3;
  }

  // Field name: k_p_lf_3
  {
    cdr >> ros_message->k_p_lf_3;
  }

  // Field name: k_w_lf_3
  {
    cdr >> ros_message->k_w_lf_3;
  }

  // Field name: mode_rf_1
  {
    cdr >> ros_message->mode_rf_1;
  }

  // Field name: t_rf_1
  {
    cdr >> ros_message->t_rf_1;
  }

  // Field name: w_rf_1
  {
    cdr >> ros_message->w_rf_1;
  }

  // Field name: pos_rf_1
  {
    cdr >> ros_message->pos_rf_1;
  }

  // Field name: k_p_rf_1
  {
    cdr >> ros_message->k_p_rf_1;
  }

  // Field name: k_w_rf_1
  {
    cdr >> ros_message->k_w_rf_1;
  }

  // Field name: mode_rf_2
  {
    cdr >> ros_message->mode_rf_2;
  }

  // Field name: t_rf_2
  {
    cdr >> ros_message->t_rf_2;
  }

  // Field name: w_rf_2
  {
    cdr >> ros_message->w_rf_2;
  }

  // Field name: pos_rf_2
  {
    cdr >> ros_message->pos_rf_2;
  }

  // Field name: k_p_rf_2
  {
    cdr >> ros_message->k_p_rf_2;
  }

  // Field name: k_w_rf_2
  {
    cdr >> ros_message->k_w_rf_2;
  }

  // Field name: mode_rf_3
  {
    cdr >> ros_message->mode_rf_3;
  }

  // Field name: t_rf_3
  {
    cdr >> ros_message->t_rf_3;
  }

  // Field name: w_rf_3
  {
    cdr >> ros_message->w_rf_3;
  }

  // Field name: pos_rf_3
  {
    cdr >> ros_message->pos_rf_3;
  }

  // Field name: k_p_rf_3
  {
    cdr >> ros_message->k_p_rf_3;
  }

  // Field name: k_w_rf_3
  {
    cdr >> ros_message->k_w_rf_3;
  }

  // Field name: mode_lb_1
  {
    cdr >> ros_message->mode_lb_1;
  }

  // Field name: t_lb_1
  {
    cdr >> ros_message->t_lb_1;
  }

  // Field name: w_lb_1
  {
    cdr >> ros_message->w_lb_1;
  }

  // Field name: pos_lb_1
  {
    cdr >> ros_message->pos_lb_1;
  }

  // Field name: k_p_lb_1
  {
    cdr >> ros_message->k_p_lb_1;
  }

  // Field name: k_w_lb_1
  {
    cdr >> ros_message->k_w_lb_1;
  }

  // Field name: mode_lb_2
  {
    cdr >> ros_message->mode_lb_2;
  }

  // Field name: t_lb_2
  {
    cdr >> ros_message->t_lb_2;
  }

  // Field name: w_lb_2
  {
    cdr >> ros_message->w_lb_2;
  }

  // Field name: pos_lb_2
  {
    cdr >> ros_message->pos_lb_2;
  }

  // Field name: k_p_lb_2
  {
    cdr >> ros_message->k_p_lb_2;
  }

  // Field name: k_w_lb_2
  {
    cdr >> ros_message->k_w_lb_2;
  }

  // Field name: mode_lb_3
  {
    cdr >> ros_message->mode_lb_3;
  }

  // Field name: t_lb_3
  {
    cdr >> ros_message->t_lb_3;
  }

  // Field name: w_lb_3
  {
    cdr >> ros_message->w_lb_3;
  }

  // Field name: pos_lb_3
  {
    cdr >> ros_message->pos_lb_3;
  }

  // Field name: k_p_lb_3
  {
    cdr >> ros_message->k_p_lb_3;
  }

  // Field name: k_w_lb_3
  {
    cdr >> ros_message->k_w_lb_3;
  }

  // Field name: mode_rb_1
  {
    cdr >> ros_message->mode_rb_1;
  }

  // Field name: t_rb_1
  {
    cdr >> ros_message->t_rb_1;
  }

  // Field name: w_rb_1
  {
    cdr >> ros_message->w_rb_1;
  }

  // Field name: pos_rb_1
  {
    cdr >> ros_message->pos_rb_1;
  }

  // Field name: k_p_rb_1
  {
    cdr >> ros_message->k_p_rb_1;
  }

  // Field name: k_w_rb_1
  {
    cdr >> ros_message->k_w_rb_1;
  }

  // Field name: mode_rb_2
  {
    cdr >> ros_message->mode_rb_2;
  }

  // Field name: t_rb_2
  {
    cdr >> ros_message->t_rb_2;
  }

  // Field name: w_rb_2
  {
    cdr >> ros_message->w_rb_2;
  }

  // Field name: pos_rb_2
  {
    cdr >> ros_message->pos_rb_2;
  }

  // Field name: k_p_rb_2
  {
    cdr >> ros_message->k_p_rb_2;
  }

  // Field name: k_w_rb_2
  {
    cdr >> ros_message->k_w_rb_2;
  }

  // Field name: mode_rb_3
  {
    cdr >> ros_message->mode_rb_3;
  }

  // Field name: t_rb_3
  {
    cdr >> ros_message->t_rb_3;
  }

  // Field name: w_rb_3
  {
    cdr >> ros_message->w_rb_3;
  }

  // Field name: pos_rb_3
  {
    cdr >> ros_message->pos_rb_3;
  }

  // Field name: k_p_rb_3
  {
    cdr >> ros_message->k_p_rb_3;
  }

  // Field name: k_w_rb_3
  {
    cdr >> ros_message->k_w_rb_3;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message
size_t get_serialized_size_message__msg__Motorcarryout(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Motorcarryout__ros_msg_type * ros_message = static_cast<const _Motorcarryout__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode_lf_1
  {
    size_t item_size = sizeof(ros_message->mode_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_lf_1
  {
    size_t item_size = sizeof(ros_message->t_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_lf_1
  {
    size_t item_size = sizeof(ros_message->w_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_lf_1
  {
    size_t item_size = sizeof(ros_message->pos_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_lf_1
  {
    size_t item_size = sizeof(ros_message->k_p_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_lf_1
  {
    size_t item_size = sizeof(ros_message->k_w_lf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_lf_2
  {
    size_t item_size = sizeof(ros_message->mode_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_lf_2
  {
    size_t item_size = sizeof(ros_message->t_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_lf_2
  {
    size_t item_size = sizeof(ros_message->w_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_lf_2
  {
    size_t item_size = sizeof(ros_message->pos_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_lf_2
  {
    size_t item_size = sizeof(ros_message->k_p_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_lf_2
  {
    size_t item_size = sizeof(ros_message->k_w_lf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_lf_3
  {
    size_t item_size = sizeof(ros_message->mode_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_lf_3
  {
    size_t item_size = sizeof(ros_message->t_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_lf_3
  {
    size_t item_size = sizeof(ros_message->w_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_lf_3
  {
    size_t item_size = sizeof(ros_message->pos_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_lf_3
  {
    size_t item_size = sizeof(ros_message->k_p_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_lf_3
  {
    size_t item_size = sizeof(ros_message->k_w_lf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_rf_1
  {
    size_t item_size = sizeof(ros_message->mode_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_rf_1
  {
    size_t item_size = sizeof(ros_message->t_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_rf_1
  {
    size_t item_size = sizeof(ros_message->w_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_rf_1
  {
    size_t item_size = sizeof(ros_message->pos_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_rf_1
  {
    size_t item_size = sizeof(ros_message->k_p_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_rf_1
  {
    size_t item_size = sizeof(ros_message->k_w_rf_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_rf_2
  {
    size_t item_size = sizeof(ros_message->mode_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_rf_2
  {
    size_t item_size = sizeof(ros_message->t_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_rf_2
  {
    size_t item_size = sizeof(ros_message->w_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_rf_2
  {
    size_t item_size = sizeof(ros_message->pos_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_rf_2
  {
    size_t item_size = sizeof(ros_message->k_p_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_rf_2
  {
    size_t item_size = sizeof(ros_message->k_w_rf_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_rf_3
  {
    size_t item_size = sizeof(ros_message->mode_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_rf_3
  {
    size_t item_size = sizeof(ros_message->t_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_rf_3
  {
    size_t item_size = sizeof(ros_message->w_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_rf_3
  {
    size_t item_size = sizeof(ros_message->pos_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_rf_3
  {
    size_t item_size = sizeof(ros_message->k_p_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_rf_3
  {
    size_t item_size = sizeof(ros_message->k_w_rf_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_lb_1
  {
    size_t item_size = sizeof(ros_message->mode_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_lb_1
  {
    size_t item_size = sizeof(ros_message->t_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_lb_1
  {
    size_t item_size = sizeof(ros_message->w_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_lb_1
  {
    size_t item_size = sizeof(ros_message->pos_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_lb_1
  {
    size_t item_size = sizeof(ros_message->k_p_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_lb_1
  {
    size_t item_size = sizeof(ros_message->k_w_lb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_lb_2
  {
    size_t item_size = sizeof(ros_message->mode_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_lb_2
  {
    size_t item_size = sizeof(ros_message->t_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_lb_2
  {
    size_t item_size = sizeof(ros_message->w_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_lb_2
  {
    size_t item_size = sizeof(ros_message->pos_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_lb_2
  {
    size_t item_size = sizeof(ros_message->k_p_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_lb_2
  {
    size_t item_size = sizeof(ros_message->k_w_lb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_lb_3
  {
    size_t item_size = sizeof(ros_message->mode_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_lb_3
  {
    size_t item_size = sizeof(ros_message->t_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_lb_3
  {
    size_t item_size = sizeof(ros_message->w_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_lb_3
  {
    size_t item_size = sizeof(ros_message->pos_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_lb_3
  {
    size_t item_size = sizeof(ros_message->k_p_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_lb_3
  {
    size_t item_size = sizeof(ros_message->k_w_lb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_rb_1
  {
    size_t item_size = sizeof(ros_message->mode_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_rb_1
  {
    size_t item_size = sizeof(ros_message->t_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_rb_1
  {
    size_t item_size = sizeof(ros_message->w_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_rb_1
  {
    size_t item_size = sizeof(ros_message->pos_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_rb_1
  {
    size_t item_size = sizeof(ros_message->k_p_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_rb_1
  {
    size_t item_size = sizeof(ros_message->k_w_rb_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_rb_2
  {
    size_t item_size = sizeof(ros_message->mode_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_rb_2
  {
    size_t item_size = sizeof(ros_message->t_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_rb_2
  {
    size_t item_size = sizeof(ros_message->w_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_rb_2
  {
    size_t item_size = sizeof(ros_message->pos_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_rb_2
  {
    size_t item_size = sizeof(ros_message->k_p_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_rb_2
  {
    size_t item_size = sizeof(ros_message->k_w_rb_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_rb_3
  {
    size_t item_size = sizeof(ros_message->mode_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_rb_3
  {
    size_t item_size = sizeof(ros_message->t_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_rb_3
  {
    size_t item_size = sizeof(ros_message->w_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_rb_3
  {
    size_t item_size = sizeof(ros_message->pos_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_rb_3
  {
    size_t item_size = sizeof(ros_message->k_p_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_rb_3
  {
    size_t item_size = sizeof(ros_message->k_w_rb_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Motorcarryout__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message__msg__Motorcarryout(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message
size_t max_serialized_size_message__msg__Motorcarryout(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_lf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_lf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_lf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_rf_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_rf_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_rf_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_lb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_lb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_lb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_rb_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_rb_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_p_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: k_w_rb_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Motorcarryout__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message__msg__Motorcarryout(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Motorcarryout = {
  "message::msg",
  "Motorcarryout",
  _Motorcarryout__cdr_serialize,
  _Motorcarryout__cdr_deserialize,
  _Motorcarryout__get_serialized_size,
  _Motorcarryout__max_serialized_size
};

static rosidl_message_type_support_t _Motorcarryout__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Motorcarryout,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message, msg, Motorcarryout)() {
  return &_Motorcarryout__type_support;
}

#if defined(__cplusplus)
}
#endif
