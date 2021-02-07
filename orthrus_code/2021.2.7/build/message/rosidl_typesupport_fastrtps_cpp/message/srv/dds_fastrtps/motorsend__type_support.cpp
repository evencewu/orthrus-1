// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message:srv/Motorsend.idl
// generated code does not contain a copyright notice
#include "message/srv/motorsend__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message/srv/motorsend__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
cdr_serialize(
  const message::srv::Motorsend_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mode_0
  cdr << ros_message.mode_0;
  // Member: t_0
  cdr << ros_message.t_0;
  // Member: w_0
  cdr << ros_message.w_0;
  // Member: pos_0
  cdr << ros_message.pos_0;
  // Member: k_p_0
  cdr << ros_message.k_p_0;
  // Member: k_w_0
  cdr << ros_message.k_w_0;
  // Member: mode_1
  cdr << ros_message.mode_1;
  // Member: t_1
  cdr << ros_message.t_1;
  // Member: w_1
  cdr << ros_message.w_1;
  // Member: pos_1
  cdr << ros_message.pos_1;
  // Member: k_p_1
  cdr << ros_message.k_p_1;
  // Member: k_w_1
  cdr << ros_message.k_w_1;
  // Member: mode_2
  cdr << ros_message.mode_2;
  // Member: t_2
  cdr << ros_message.t_2;
  // Member: w_2
  cdr << ros_message.w_2;
  // Member: pos_2
  cdr << ros_message.pos_2;
  // Member: k_p_2
  cdr << ros_message.k_p_2;
  // Member: k_w_2
  cdr << ros_message.k_w_2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message::srv::Motorsend_Request & ros_message)
{
  // Member: mode_0
  cdr >> ros_message.mode_0;

  // Member: t_0
  cdr >> ros_message.t_0;

  // Member: w_0
  cdr >> ros_message.w_0;

  // Member: pos_0
  cdr >> ros_message.pos_0;

  // Member: k_p_0
  cdr >> ros_message.k_p_0;

  // Member: k_w_0
  cdr >> ros_message.k_w_0;

  // Member: mode_1
  cdr >> ros_message.mode_1;

  // Member: t_1
  cdr >> ros_message.t_1;

  // Member: w_1
  cdr >> ros_message.w_1;

  // Member: pos_1
  cdr >> ros_message.pos_1;

  // Member: k_p_1
  cdr >> ros_message.k_p_1;

  // Member: k_w_1
  cdr >> ros_message.k_w_1;

  // Member: mode_2
  cdr >> ros_message.mode_2;

  // Member: t_2
  cdr >> ros_message.t_2;

  // Member: w_2
  cdr >> ros_message.w_2;

  // Member: pos_2
  cdr >> ros_message.pos_2;

  // Member: k_p_2
  cdr >> ros_message.k_p_2;

  // Member: k_w_2
  cdr >> ros_message.k_w_2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
get_serialized_size(
  const message::srv::Motorsend_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mode_0
  {
    size_t item_size = sizeof(ros_message.mode_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_0
  {
    size_t item_size = sizeof(ros_message.t_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_0
  {
    size_t item_size = sizeof(ros_message.w_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_0
  {
    size_t item_size = sizeof(ros_message.pos_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_0
  {
    size_t item_size = sizeof(ros_message.k_p_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_0
  {
    size_t item_size = sizeof(ros_message.k_w_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_1
  {
    size_t item_size = sizeof(ros_message.mode_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_1
  {
    size_t item_size = sizeof(ros_message.t_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_1
  {
    size_t item_size = sizeof(ros_message.w_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_1
  {
    size_t item_size = sizeof(ros_message.pos_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_1
  {
    size_t item_size = sizeof(ros_message.k_p_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_1
  {
    size_t item_size = sizeof(ros_message.k_w_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_2
  {
    size_t item_size = sizeof(ros_message.mode_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_2
  {
    size_t item_size = sizeof(ros_message.t_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_2
  {
    size_t item_size = sizeof(ros_message.w_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_2
  {
    size_t item_size = sizeof(ros_message.pos_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_p_2
  {
    size_t item_size = sizeof(ros_message.k_p_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_w_2
  {
    size_t item_size = sizeof(ros_message.k_w_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
max_serialized_size_Motorsend_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: mode_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: t_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k_p_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k_w_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mode_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: t_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k_p_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k_w_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mode_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: t_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k_p_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k_w_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Motorsend_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message::srv::Motorsend_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Motorsend_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message::srv::Motorsend_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Motorsend_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message::srv::Motorsend_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Motorsend_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Motorsend_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Motorsend_Request__callbacks = {
  "message::srv",
  "Motorsend_Request",
  _Motorsend_Request__cdr_serialize,
  _Motorsend_Request__cdr_deserialize,
  _Motorsend_Request__get_serialized_size,
  _Motorsend_Request__max_serialized_size
};

static rosidl_message_type_support_t _Motorsend_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Motorsend_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace message

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_message
const rosidl_message_type_support_t *
get_message_type_support_handle<message::srv::Motorsend_Request>()
{
  return &message::srv::typesupport_fastrtps_cpp::_Motorsend_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message, srv, Motorsend_Request)() {
  return &message::srv::typesupport_fastrtps_cpp::_Motorsend_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace message
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
cdr_serialize(
  const message::srv::Motorsend_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temp_0
  cdr << ros_message.temp_0;
  // Member: t_0
  cdr << ros_message.t_0;
  // Member: w_0
  cdr << ros_message.w_0;
  // Member: lw_0
  cdr << ros_message.lw_0;
  // Member: acc_0
  cdr << ros_message.acc_0;
  // Member: pos_0
  cdr << ros_message.pos_0;
  // Member: gyro_0_x
  cdr << ros_message.gyro_0_x;
  // Member: gyro_0_y
  cdr << ros_message.gyro_0_y;
  // Member: gyro_0_z
  cdr << ros_message.gyro_0_z;
  // Member: acc_0_x
  cdr << ros_message.acc_0_x;
  // Member: acc_0_y
  cdr << ros_message.acc_0_y;
  // Member: acc_0_z
  cdr << ros_message.acc_0_z;
  // Member: temp_1
  cdr << ros_message.temp_1;
  // Member: t_1
  cdr << ros_message.t_1;
  // Member: w_1
  cdr << ros_message.w_1;
  // Member: lw_1
  cdr << ros_message.lw_1;
  // Member: acc_1
  cdr << ros_message.acc_1;
  // Member: pos_1
  cdr << ros_message.pos_1;
  // Member: gyro_1_x
  cdr << ros_message.gyro_1_x;
  // Member: gyro_1_y
  cdr << ros_message.gyro_1_y;
  // Member: gyro_1_z
  cdr << ros_message.gyro_1_z;
  // Member: acc_1_x
  cdr << ros_message.acc_1_x;
  // Member: acc_1_y
  cdr << ros_message.acc_1_y;
  // Member: acc_1_z
  cdr << ros_message.acc_1_z;
  // Member: temp_2
  cdr << ros_message.temp_2;
  // Member: t_2
  cdr << ros_message.t_2;
  // Member: w_2
  cdr << ros_message.w_2;
  // Member: lw_2
  cdr << ros_message.lw_2;
  // Member: acc_2
  cdr << ros_message.acc_2;
  // Member: pos_2
  cdr << ros_message.pos_2;
  // Member: gyro_2_x
  cdr << ros_message.gyro_2_x;
  // Member: gyro_2_y
  cdr << ros_message.gyro_2_y;
  // Member: gyro_2_z
  cdr << ros_message.gyro_2_z;
  // Member: acc_2_x
  cdr << ros_message.acc_2_x;
  // Member: acc_2_y
  cdr << ros_message.acc_2_y;
  // Member: acc_2_z
  cdr << ros_message.acc_2_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message::srv::Motorsend_Response & ros_message)
{
  // Member: temp_0
  cdr >> ros_message.temp_0;

  // Member: t_0
  cdr >> ros_message.t_0;

  // Member: w_0
  cdr >> ros_message.w_0;

  // Member: lw_0
  cdr >> ros_message.lw_0;

  // Member: acc_0
  cdr >> ros_message.acc_0;

  // Member: pos_0
  cdr >> ros_message.pos_0;

  // Member: gyro_0_x
  cdr >> ros_message.gyro_0_x;

  // Member: gyro_0_y
  cdr >> ros_message.gyro_0_y;

  // Member: gyro_0_z
  cdr >> ros_message.gyro_0_z;

  // Member: acc_0_x
  cdr >> ros_message.acc_0_x;

  // Member: acc_0_y
  cdr >> ros_message.acc_0_y;

  // Member: acc_0_z
  cdr >> ros_message.acc_0_z;

  // Member: temp_1
  cdr >> ros_message.temp_1;

  // Member: t_1
  cdr >> ros_message.t_1;

  // Member: w_1
  cdr >> ros_message.w_1;

  // Member: lw_1
  cdr >> ros_message.lw_1;

  // Member: acc_1
  cdr >> ros_message.acc_1;

  // Member: pos_1
  cdr >> ros_message.pos_1;

  // Member: gyro_1_x
  cdr >> ros_message.gyro_1_x;

  // Member: gyro_1_y
  cdr >> ros_message.gyro_1_y;

  // Member: gyro_1_z
  cdr >> ros_message.gyro_1_z;

  // Member: acc_1_x
  cdr >> ros_message.acc_1_x;

  // Member: acc_1_y
  cdr >> ros_message.acc_1_y;

  // Member: acc_1_z
  cdr >> ros_message.acc_1_z;

  // Member: temp_2
  cdr >> ros_message.temp_2;

  // Member: t_2
  cdr >> ros_message.t_2;

  // Member: w_2
  cdr >> ros_message.w_2;

  // Member: lw_2
  cdr >> ros_message.lw_2;

  // Member: acc_2
  cdr >> ros_message.acc_2;

  // Member: pos_2
  cdr >> ros_message.pos_2;

  // Member: gyro_2_x
  cdr >> ros_message.gyro_2_x;

  // Member: gyro_2_y
  cdr >> ros_message.gyro_2_y;

  // Member: gyro_2_z
  cdr >> ros_message.gyro_2_z;

  // Member: acc_2_x
  cdr >> ros_message.acc_2_x;

  // Member: acc_2_y
  cdr >> ros_message.acc_2_y;

  // Member: acc_2_z
  cdr >> ros_message.acc_2_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
get_serialized_size(
  const message::srv::Motorsend_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temp_0
  {
    size_t item_size = sizeof(ros_message.temp_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_0
  {
    size_t item_size = sizeof(ros_message.t_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_0
  {
    size_t item_size = sizeof(ros_message.w_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lw_0
  {
    size_t item_size = sizeof(ros_message.lw_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_0
  {
    size_t item_size = sizeof(ros_message.acc_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_0
  {
    size_t item_size = sizeof(ros_message.pos_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_0_x
  {
    size_t item_size = sizeof(ros_message.gyro_0_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_0_y
  {
    size_t item_size = sizeof(ros_message.gyro_0_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_0_z
  {
    size_t item_size = sizeof(ros_message.gyro_0_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_0_x
  {
    size_t item_size = sizeof(ros_message.acc_0_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_0_y
  {
    size_t item_size = sizeof(ros_message.acc_0_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_0_z
  {
    size_t item_size = sizeof(ros_message.acc_0_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp_1
  {
    size_t item_size = sizeof(ros_message.temp_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_1
  {
    size_t item_size = sizeof(ros_message.t_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_1
  {
    size_t item_size = sizeof(ros_message.w_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lw_1
  {
    size_t item_size = sizeof(ros_message.lw_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_1
  {
    size_t item_size = sizeof(ros_message.acc_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_1
  {
    size_t item_size = sizeof(ros_message.pos_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_1_x
  {
    size_t item_size = sizeof(ros_message.gyro_1_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_1_y
  {
    size_t item_size = sizeof(ros_message.gyro_1_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_1_z
  {
    size_t item_size = sizeof(ros_message.gyro_1_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_1_x
  {
    size_t item_size = sizeof(ros_message.acc_1_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_1_y
  {
    size_t item_size = sizeof(ros_message.acc_1_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_1_z
  {
    size_t item_size = sizeof(ros_message.acc_1_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temp_2
  {
    size_t item_size = sizeof(ros_message.temp_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_2
  {
    size_t item_size = sizeof(ros_message.t_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_2
  {
    size_t item_size = sizeof(ros_message.w_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lw_2
  {
    size_t item_size = sizeof(ros_message.lw_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_2
  {
    size_t item_size = sizeof(ros_message.acc_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_2
  {
    size_t item_size = sizeof(ros_message.pos_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_2_x
  {
    size_t item_size = sizeof(ros_message.gyro_2_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_2_y
  {
    size_t item_size = sizeof(ros_message.gyro_2_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_2_z
  {
    size_t item_size = sizeof(ros_message.gyro_2_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_2_x
  {
    size_t item_size = sizeof(ros_message.acc_2_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_2_y
  {
    size_t item_size = sizeof(ros_message.acc_2_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_2_z
  {
    size_t item_size = sizeof(ros_message.acc_2_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
max_serialized_size_Motorsend_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: temp_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: t_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lw_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_0_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_0_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_0_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_0_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_0_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_0_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temp_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: t_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lw_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_1_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_1_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_1_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_1_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_1_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_1_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temp_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: t_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lw_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pos_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_2_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_2_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_2_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_2_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_2_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_2_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Motorsend_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message::srv::Motorsend_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Motorsend_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message::srv::Motorsend_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Motorsend_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message::srv::Motorsend_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Motorsend_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Motorsend_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Motorsend_Response__callbacks = {
  "message::srv",
  "Motorsend_Response",
  _Motorsend_Response__cdr_serialize,
  _Motorsend_Response__cdr_deserialize,
  _Motorsend_Response__get_serialized_size,
  _Motorsend_Response__max_serialized_size
};

static rosidl_message_type_support_t _Motorsend_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Motorsend_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace message

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_message
const rosidl_message_type_support_t *
get_message_type_support_handle<message::srv::Motorsend_Response>()
{
  return &message::srv::typesupport_fastrtps_cpp::_Motorsend_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message, srv, Motorsend_Response)() {
  return &message::srv::typesupport_fastrtps_cpp::_Motorsend_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace message
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Motorsend__callbacks = {
  "message::srv",
  "Motorsend",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message, srv, Motorsend_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message, srv, Motorsend_Response)(),
};

static rosidl_service_type_support_t _Motorsend__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Motorsend__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace message

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_message
const rosidl_service_type_support_t *
get_service_type_support_handle<message::srv::Motorsend>()
{
  return &message::srv::typesupport_fastrtps_cpp::_Motorsend__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message, srv, Motorsend)() {
  return &message::srv::typesupport_fastrtps_cpp::_Motorsend__handle;
}

#ifdef __cplusplus
}
#endif
