// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef MESSAGE__MSG__MOTORRECV__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MESSAGE__MSG__MOTORRECV__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "message/msg/motorrecv__struct.hpp"
#include "message/msg/dds_opensplice/ccpp_Motorrecv_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "message/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace message
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void register_type__Motorrecv(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void convert_ros_message_to_dds(
  const message::msg::Motorrecv & ros_message,
  message::msg::dds_::Motorrecv_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void publish__Motorrecv(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void convert_dds_message_to_ros(
  const message::msg::dds_::Motorrecv_ & dds_message,
  message::msg::Motorrecv & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern bool take__Motorrecv(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
serialize__Motorrecv(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
deserialize__Motorrecv(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  message, msg,
  Motorrecv)();

#ifdef __cplusplus
}
#endif
#endif  // MESSAGE__MSG__MOTORRECV__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
