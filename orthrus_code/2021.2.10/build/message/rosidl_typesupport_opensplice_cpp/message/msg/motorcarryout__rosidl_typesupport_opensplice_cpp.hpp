// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef MESSAGE__MSG__MOTORCARRYOUT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MESSAGE__MSG__MOTORCARRYOUT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "message/msg/motorcarryout__struct.hpp"
#include "message/msg/dds_opensplice/ccpp_Motorcarryout_.h"
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
extern void register_type__Motorcarryout(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void convert_ros_message_to_dds(
  const message::msg::Motorcarryout & ros_message,
  message::msg::dds_::Motorcarryout_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void publish__Motorcarryout(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void convert_dds_message_to_ros(
  const message::msg::dds_::Motorcarryout_ & dds_message,
  message::msg::Motorcarryout & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern bool take__Motorcarryout(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
serialize__Motorcarryout(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
deserialize__Motorcarryout(
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
  Motorcarryout)();

#ifdef __cplusplus
}
#endif
#endif  // MESSAGE__MSG__MOTORCARRYOUT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
