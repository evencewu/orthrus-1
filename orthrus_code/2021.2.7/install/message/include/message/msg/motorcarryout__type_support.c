// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message:msg/Motorcarryout.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message/msg/motorcarryout__rosidl_typesupport_introspection_c.h"
#include "message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message/msg/motorcarryout__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Motorcarryout__rosidl_typesupport_introspection_c__Motorcarryout_message_member_array[2] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message__msg__Motorcarryout, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message__msg__Motorcarryout, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Motorcarryout__rosidl_typesupport_introspection_c__Motorcarryout_message_members = {
  "message__msg",  // message namespace
  "Motorcarryout",  // message name
  2,  // number of fields
  sizeof(message__msg__Motorcarryout),
  Motorcarryout__rosidl_typesupport_introspection_c__Motorcarryout_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Motorcarryout__rosidl_typesupport_introspection_c__Motorcarryout_message_type_support_handle = {
  0,
  &Motorcarryout__rosidl_typesupport_introspection_c__Motorcarryout_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, msg, Motorcarryout)() {
  if (!Motorcarryout__rosidl_typesupport_introspection_c__Motorcarryout_message_type_support_handle.typesupport_identifier) {
    Motorcarryout__rosidl_typesupport_introspection_c__Motorcarryout_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Motorcarryout__rosidl_typesupport_introspection_c__Motorcarryout_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
