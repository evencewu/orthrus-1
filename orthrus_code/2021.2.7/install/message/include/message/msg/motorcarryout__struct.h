// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message:msg/Motorcarryout.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__MOTORCARRYOUT__STRUCT_H_
#define MESSAGE__MSG__MOTORCARRYOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/Motorcarryout in the package message.
typedef struct message__msg__Motorcarryout
{
  int32_t mode;
  rosidl_generator_c__String name;
} message__msg__Motorcarryout;

// Struct for a sequence of message__msg__Motorcarryout.
typedef struct message__msg__Motorcarryout__Sequence
{
  message__msg__Motorcarryout * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message__msg__Motorcarryout__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE__MSG__MOTORCARRYOUT__STRUCT_H_
