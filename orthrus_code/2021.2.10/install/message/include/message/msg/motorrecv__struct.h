// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message:msg/Motorrecv.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__MOTORRECV__STRUCT_H_
#define MESSAGE__MSG__MOTORRECV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Motorrecv in the package message.
typedef struct message__msg__Motorrecv
{
  uint8_t structure_needs_at_least_one_member;
} message__msg__Motorrecv;

// Struct for a sequence of message__msg__Motorrecv.
typedef struct message__msg__Motorrecv__Sequence
{
  message__msg__Motorrecv * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message__msg__Motorrecv__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE__MSG__MOTORRECV__STRUCT_H_
