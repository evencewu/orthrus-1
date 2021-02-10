// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message:msg/Motorrecv.idl
// generated code does not contain a copyright notice
#include "message/msg/motorrecv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message/msg/motorrecv__struct.hpp"

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
  const message::msg::Motorrecv & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message::msg::Motorrecv & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
get_serialized_size(
  const message::msg::Motorrecv & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message
max_serialized_size_Motorrecv(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Motorrecv__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message::msg::Motorrecv *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Motorrecv__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message::msg::Motorrecv *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Motorrecv__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message::msg::Motorrecv *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Motorrecv__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Motorrecv(full_bounded, 0);
}

static message_type_support_callbacks_t _Motorrecv__callbacks = {
  "message::msg",
  "Motorrecv",
  _Motorrecv__cdr_serialize,
  _Motorrecv__cdr_deserialize,
  _Motorrecv__get_serialized_size,
  _Motorrecv__max_serialized_size
};

static rosidl_message_type_support_t _Motorrecv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Motorrecv__callbacks,
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
get_message_type_support_handle<message::msg::Motorrecv>()
{
  return &message::msg::typesupport_fastrtps_cpp::_Motorrecv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message, msg, Motorrecv)() {
  return &message::msg::typesupport_fastrtps_cpp::_Motorrecv__handle;
}

#ifdef __cplusplus
}
#endif
