// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef MESSAGE__SRV__MOTORSEND__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MESSAGE__SRV__MOTORSEND__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "message/srv/motorsend__struct.hpp"
#include "message/srv/dds_opensplice/ccpp_Motorsend_.h"
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
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void register_type__Motorsend_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void convert_ros_message_to_dds(
  const message::srv::Motorsend_Request & ros_message,
  message::srv::dds_::Motorsend_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void publish__Motorsend_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void convert_dds_message_to_ros(
  const message::srv::dds_::Motorsend_Request_ & dds_message,
  message::srv::Motorsend_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern bool take__Motorsend_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
serialize__Motorsend_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
deserialize__Motorsend_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  message, srv,
  Motorsend_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "message/srv/motorsend__struct.hpp"
// already included above
// #include "message/srv/dds_opensplice/ccpp_Motorsend_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "message/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace message
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void register_type__Motorsend_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void convert_ros_message_to_dds(
  const message::srv::Motorsend_Response & ros_message,
  message::srv::dds_::Motorsend_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void publish__Motorsend_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern void convert_dds_message_to_ros(
  const message::srv::dds_::Motorsend_Response_ & dds_message,
  message::srv::Motorsend_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
extern bool take__Motorsend_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
serialize__Motorsend_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
deserialize__Motorsend_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  message, srv,
  Motorsend_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "message/srv/motorsend__struct.hpp"
// already included above
// #include "message/srv/dds_opensplice/ccpp_Motorsend_.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "message/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  message, srv,
  Motorsend)();

#ifdef __cplusplus
}
#endif
#endif  // MESSAGE__SRV__MOTORSEND__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
