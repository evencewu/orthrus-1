// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message:srv/Motorsend.idl
// generated code does not contain a copyright notice
#include "message/srv/motorsend__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message/srv/motorsend__struct.h"
#include "message/srv/motorsend__functions.h"
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


using _Motorsend_Request__ros_msg_type = message__srv__Motorsend_Request;

static bool _Motorsend_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Motorsend_Request__ros_msg_type * ros_message = static_cast<const _Motorsend_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode_0
  {
    cdr << ros_message->mode_0;
  }

  // Field name: t_0
  {
    cdr << ros_message->t_0;
  }

  // Field name: w_0
  {
    cdr << ros_message->w_0;
  }

  // Field name: pos_0
  {
    cdr << ros_message->pos_0;
  }

  // Field name: k_p_0
  {
    cdr << ros_message->k_p_0;
  }

  // Field name: k_w_0
  {
    cdr << ros_message->k_w_0;
  }

  // Field name: mode_1
  {
    cdr << ros_message->mode_1;
  }

  // Field name: t_1
  {
    cdr << ros_message->t_1;
  }

  // Field name: w_1
  {
    cdr << ros_message->w_1;
  }

  // Field name: pos_1
  {
    cdr << ros_message->pos_1;
  }

  // Field name: k_p_1
  {
    cdr << ros_message->k_p_1;
  }

  // Field name: k_w_1
  {
    cdr << ros_message->k_w_1;
  }

  // Field name: mode_2
  {
    cdr << ros_message->mode_2;
  }

  // Field name: t_2
  {
    cdr << ros_message->t_2;
  }

  // Field name: w_2
  {
    cdr << ros_message->w_2;
  }

  // Field name: pos_2
  {
    cdr << ros_message->pos_2;
  }

  // Field name: k_p_2
  {
    cdr << ros_message->k_p_2;
  }

  // Field name: k_w_2
  {
    cdr << ros_message->k_w_2;
  }

  return true;
}

static bool _Motorsend_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Motorsend_Request__ros_msg_type * ros_message = static_cast<_Motorsend_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode_0
  {
    cdr >> ros_message->mode_0;
  }

  // Field name: t_0
  {
    cdr >> ros_message->t_0;
  }

  // Field name: w_0
  {
    cdr >> ros_message->w_0;
  }

  // Field name: pos_0
  {
    cdr >> ros_message->pos_0;
  }

  // Field name: k_p_0
  {
    cdr >> ros_message->k_p_0;
  }

  // Field name: k_w_0
  {
    cdr >> ros_message->k_w_0;
  }

  // Field name: mode_1
  {
    cdr >> ros_message->mode_1;
  }

  // Field name: t_1
  {
    cdr >> ros_message->t_1;
  }

  // Field name: w_1
  {
    cdr >> ros_message->w_1;
  }

  // Field name: pos_1
  {
    cdr >> ros_message->pos_1;
  }

  // Field name: k_p_1
  {
    cdr >> ros_message->k_p_1;
  }

  // Field name: k_w_1
  {
    cdr >> ros_message->k_w_1;
  }

  // Field name: mode_2
  {
    cdr >> ros_message->mode_2;
  }

  // Field name: t_2
  {
    cdr >> ros_message->t_2;
  }

  // Field name: w_2
  {
    cdr >> ros_message->w_2;
  }

  // Field name: pos_2
  {
    cdr >> ros_message->pos_2;
  }

  // Field name: k_p_2
  {
    cdr >> ros_message->k_p_2;
  }

  // Field name: k_w_2
  {
    cdr >> ros_message->k_w_2;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message
size_t get_serialized_size_message__srv__Motorsend_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Motorsend_Request__ros_msg_type * ros_message = static_cast<const _Motorsend_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode_0
  {
    size_t item_size = sizeof(ros_message->mode_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_0
  {
    size_t item_size = sizeof(ros_message->t_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_0
  {
    size_t item_size = sizeof(ros_message->w_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_0
  {
    size_t item_size = sizeof(ros_message->pos_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_0
  {
    size_t item_size = sizeof(ros_message->k_p_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_0
  {
    size_t item_size = sizeof(ros_message->k_w_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_1
  {
    size_t item_size = sizeof(ros_message->mode_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_1
  {
    size_t item_size = sizeof(ros_message->t_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_1
  {
    size_t item_size = sizeof(ros_message->w_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_1
  {
    size_t item_size = sizeof(ros_message->pos_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_1
  {
    size_t item_size = sizeof(ros_message->k_p_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_1
  {
    size_t item_size = sizeof(ros_message->k_w_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_2
  {
    size_t item_size = sizeof(ros_message->mode_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_2
  {
    size_t item_size = sizeof(ros_message->t_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_2
  {
    size_t item_size = sizeof(ros_message->w_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_2
  {
    size_t item_size = sizeof(ros_message->pos_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_p_2
  {
    size_t item_size = sizeof(ros_message->k_p_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_w_2
  {
    size_t item_size = sizeof(ros_message->k_w_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Motorsend_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message__srv__Motorsend_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message
size_t max_serialized_size_message__srv__Motorsend_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: k_p_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: k_w_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mode_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: k_p_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: k_w_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mode_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: k_p_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: k_w_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Motorsend_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message__srv__Motorsend_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Motorsend_Request = {
  "message::srv",
  "Motorsend_Request",
  _Motorsend_Request__cdr_serialize,
  _Motorsend_Request__cdr_deserialize,
  _Motorsend_Request__get_serialized_size,
  _Motorsend_Request__max_serialized_size
};

static rosidl_message_type_support_t _Motorsend_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Motorsend_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message, srv, Motorsend_Request)() {
  return &_Motorsend_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "message/srv/motorsend__struct.h"
// already included above
// #include "message/srv/motorsend__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _Motorsend_Response__ros_msg_type = message__srv__Motorsend_Response;

static bool _Motorsend_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Motorsend_Response__ros_msg_type * ros_message = static_cast<const _Motorsend_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: temp_0
  {
    cdr << ros_message->temp_0;
  }

  // Field name: t_0
  {
    cdr << ros_message->t_0;
  }

  // Field name: w_0
  {
    cdr << ros_message->w_0;
  }

  // Field name: lw_0
  {
    cdr << ros_message->lw_0;
  }

  // Field name: acc_0
  {
    cdr << ros_message->acc_0;
  }

  // Field name: pos_0
  {
    cdr << ros_message->pos_0;
  }

  // Field name: gyro_0_x
  {
    cdr << ros_message->gyro_0_x;
  }

  // Field name: gyro_0_y
  {
    cdr << ros_message->gyro_0_y;
  }

  // Field name: gyro_0_z
  {
    cdr << ros_message->gyro_0_z;
  }

  // Field name: acc_0_x
  {
    cdr << ros_message->acc_0_x;
  }

  // Field name: acc_0_y
  {
    cdr << ros_message->acc_0_y;
  }

  // Field name: acc_0_z
  {
    cdr << ros_message->acc_0_z;
  }

  // Field name: temp_1
  {
    cdr << ros_message->temp_1;
  }

  // Field name: t_1
  {
    cdr << ros_message->t_1;
  }

  // Field name: w_1
  {
    cdr << ros_message->w_1;
  }

  // Field name: lw_1
  {
    cdr << ros_message->lw_1;
  }

  // Field name: acc_1
  {
    cdr << ros_message->acc_1;
  }

  // Field name: pos_1
  {
    cdr << ros_message->pos_1;
  }

  // Field name: gyro_1_x
  {
    cdr << ros_message->gyro_1_x;
  }

  // Field name: gyro_1_y
  {
    cdr << ros_message->gyro_1_y;
  }

  // Field name: gyro_1_z
  {
    cdr << ros_message->gyro_1_z;
  }

  // Field name: acc_1_x
  {
    cdr << ros_message->acc_1_x;
  }

  // Field name: acc_1_y
  {
    cdr << ros_message->acc_1_y;
  }

  // Field name: acc_1_z
  {
    cdr << ros_message->acc_1_z;
  }

  // Field name: temp_2
  {
    cdr << ros_message->temp_2;
  }

  // Field name: t_2
  {
    cdr << ros_message->t_2;
  }

  // Field name: w_2
  {
    cdr << ros_message->w_2;
  }

  // Field name: lw_2
  {
    cdr << ros_message->lw_2;
  }

  // Field name: acc_2
  {
    cdr << ros_message->acc_2;
  }

  // Field name: pos_2
  {
    cdr << ros_message->pos_2;
  }

  // Field name: gyro_2_x
  {
    cdr << ros_message->gyro_2_x;
  }

  // Field name: gyro_2_y
  {
    cdr << ros_message->gyro_2_y;
  }

  // Field name: gyro_2_z
  {
    cdr << ros_message->gyro_2_z;
  }

  // Field name: acc_2_x
  {
    cdr << ros_message->acc_2_x;
  }

  // Field name: acc_2_y
  {
    cdr << ros_message->acc_2_y;
  }

  // Field name: acc_2_z
  {
    cdr << ros_message->acc_2_z;
  }

  return true;
}

static bool _Motorsend_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Motorsend_Response__ros_msg_type * ros_message = static_cast<_Motorsend_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: temp_0
  {
    cdr >> ros_message->temp_0;
  }

  // Field name: t_0
  {
    cdr >> ros_message->t_0;
  }

  // Field name: w_0
  {
    cdr >> ros_message->w_0;
  }

  // Field name: lw_0
  {
    cdr >> ros_message->lw_0;
  }

  // Field name: acc_0
  {
    cdr >> ros_message->acc_0;
  }

  // Field name: pos_0
  {
    cdr >> ros_message->pos_0;
  }

  // Field name: gyro_0_x
  {
    cdr >> ros_message->gyro_0_x;
  }

  // Field name: gyro_0_y
  {
    cdr >> ros_message->gyro_0_y;
  }

  // Field name: gyro_0_z
  {
    cdr >> ros_message->gyro_0_z;
  }

  // Field name: acc_0_x
  {
    cdr >> ros_message->acc_0_x;
  }

  // Field name: acc_0_y
  {
    cdr >> ros_message->acc_0_y;
  }

  // Field name: acc_0_z
  {
    cdr >> ros_message->acc_0_z;
  }

  // Field name: temp_1
  {
    cdr >> ros_message->temp_1;
  }

  // Field name: t_1
  {
    cdr >> ros_message->t_1;
  }

  // Field name: w_1
  {
    cdr >> ros_message->w_1;
  }

  // Field name: lw_1
  {
    cdr >> ros_message->lw_1;
  }

  // Field name: acc_1
  {
    cdr >> ros_message->acc_1;
  }

  // Field name: pos_1
  {
    cdr >> ros_message->pos_1;
  }

  // Field name: gyro_1_x
  {
    cdr >> ros_message->gyro_1_x;
  }

  // Field name: gyro_1_y
  {
    cdr >> ros_message->gyro_1_y;
  }

  // Field name: gyro_1_z
  {
    cdr >> ros_message->gyro_1_z;
  }

  // Field name: acc_1_x
  {
    cdr >> ros_message->acc_1_x;
  }

  // Field name: acc_1_y
  {
    cdr >> ros_message->acc_1_y;
  }

  // Field name: acc_1_z
  {
    cdr >> ros_message->acc_1_z;
  }

  // Field name: temp_2
  {
    cdr >> ros_message->temp_2;
  }

  // Field name: t_2
  {
    cdr >> ros_message->t_2;
  }

  // Field name: w_2
  {
    cdr >> ros_message->w_2;
  }

  // Field name: lw_2
  {
    cdr >> ros_message->lw_2;
  }

  // Field name: acc_2
  {
    cdr >> ros_message->acc_2;
  }

  // Field name: pos_2
  {
    cdr >> ros_message->pos_2;
  }

  // Field name: gyro_2_x
  {
    cdr >> ros_message->gyro_2_x;
  }

  // Field name: gyro_2_y
  {
    cdr >> ros_message->gyro_2_y;
  }

  // Field name: gyro_2_z
  {
    cdr >> ros_message->gyro_2_z;
  }

  // Field name: acc_2_x
  {
    cdr >> ros_message->acc_2_x;
  }

  // Field name: acc_2_y
  {
    cdr >> ros_message->acc_2_y;
  }

  // Field name: acc_2_z
  {
    cdr >> ros_message->acc_2_z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message
size_t get_serialized_size_message__srv__Motorsend_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Motorsend_Response__ros_msg_type * ros_message = static_cast<const _Motorsend_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name temp_0
  {
    size_t item_size = sizeof(ros_message->temp_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_0
  {
    size_t item_size = sizeof(ros_message->t_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_0
  {
    size_t item_size = sizeof(ros_message->w_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lw_0
  {
    size_t item_size = sizeof(ros_message->lw_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_0
  {
    size_t item_size = sizeof(ros_message->acc_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_0
  {
    size_t item_size = sizeof(ros_message->pos_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_0_x
  {
    size_t item_size = sizeof(ros_message->gyro_0_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_0_y
  {
    size_t item_size = sizeof(ros_message->gyro_0_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_0_z
  {
    size_t item_size = sizeof(ros_message->gyro_0_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_0_x
  {
    size_t item_size = sizeof(ros_message->acc_0_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_0_y
  {
    size_t item_size = sizeof(ros_message->acc_0_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_0_z
  {
    size_t item_size = sizeof(ros_message->acc_0_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp_1
  {
    size_t item_size = sizeof(ros_message->temp_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_1
  {
    size_t item_size = sizeof(ros_message->t_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_1
  {
    size_t item_size = sizeof(ros_message->w_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lw_1
  {
    size_t item_size = sizeof(ros_message->lw_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_1
  {
    size_t item_size = sizeof(ros_message->acc_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_1
  {
    size_t item_size = sizeof(ros_message->pos_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_1_x
  {
    size_t item_size = sizeof(ros_message->gyro_1_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_1_y
  {
    size_t item_size = sizeof(ros_message->gyro_1_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_1_z
  {
    size_t item_size = sizeof(ros_message->gyro_1_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_1_x
  {
    size_t item_size = sizeof(ros_message->acc_1_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_1_y
  {
    size_t item_size = sizeof(ros_message->acc_1_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_1_z
  {
    size_t item_size = sizeof(ros_message->acc_1_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp_2
  {
    size_t item_size = sizeof(ros_message->temp_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_2
  {
    size_t item_size = sizeof(ros_message->t_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_2
  {
    size_t item_size = sizeof(ros_message->w_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lw_2
  {
    size_t item_size = sizeof(ros_message->lw_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_2
  {
    size_t item_size = sizeof(ros_message->acc_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_2
  {
    size_t item_size = sizeof(ros_message->pos_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_2_x
  {
    size_t item_size = sizeof(ros_message->gyro_2_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_2_y
  {
    size_t item_size = sizeof(ros_message->gyro_2_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_2_z
  {
    size_t item_size = sizeof(ros_message->gyro_2_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_2_x
  {
    size_t item_size = sizeof(ros_message->acc_2_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_2_y
  {
    size_t item_size = sizeof(ros_message->acc_2_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_2_z
  {
    size_t item_size = sizeof(ros_message->acc_2_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Motorsend_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message__srv__Motorsend_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message
size_t max_serialized_size_message__srv__Motorsend_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: temp_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lw_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_0_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_0_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_0_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_0_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_0_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_0_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: temp_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lw_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_1_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_1_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_1_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_1_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_1_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_1_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: temp_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lw_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_2_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_2_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro_2_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_2_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_2_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_2_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Motorsend_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message__srv__Motorsend_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Motorsend_Response = {
  "message::srv",
  "Motorsend_Response",
  _Motorsend_Response__cdr_serialize,
  _Motorsend_Response__cdr_deserialize,
  _Motorsend_Response__get_serialized_size,
  _Motorsend_Response__max_serialized_size
};

static rosidl_message_type_support_t _Motorsend_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Motorsend_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message, srv, Motorsend_Response)() {
  return &_Motorsend_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message/srv/motorsend.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Motorsend__callbacks = {
  "message::srv",
  "Motorsend",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message, srv, Motorsend_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message, srv, Motorsend_Response)(),
};

static rosidl_service_type_support_t Motorsend__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Motorsend__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message, srv, Motorsend)() {
  return &Motorsend__handle;
}

#if defined(__cplusplus)
}
#endif
