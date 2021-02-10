// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message:msg/Motorrecv.idl
// generated code does not contain a copyright notice
#include "message/msg/motorrecv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
message__msg__Motorrecv__init(message__msg__Motorrecv * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
message__msg__Motorrecv__fini(message__msg__Motorrecv * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

message__msg__Motorrecv *
message__msg__Motorrecv__create()
{
  message__msg__Motorrecv * msg = (message__msg__Motorrecv *)malloc(sizeof(message__msg__Motorrecv));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__msg__Motorrecv));
  bool success = message__msg__Motorrecv__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message__msg__Motorrecv__destroy(message__msg__Motorrecv * msg)
{
  if (msg) {
    message__msg__Motorrecv__fini(msg);
  }
  free(msg);
}


bool
message__msg__Motorrecv__Sequence__init(message__msg__Motorrecv__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message__msg__Motorrecv * data = NULL;
  if (size) {
    data = (message__msg__Motorrecv *)calloc(size, sizeof(message__msg__Motorrecv));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__msg__Motorrecv__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__msg__Motorrecv__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
message__msg__Motorrecv__Sequence__fini(message__msg__Motorrecv__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message__msg__Motorrecv__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

message__msg__Motorrecv__Sequence *
message__msg__Motorrecv__Sequence__create(size_t size)
{
  message__msg__Motorrecv__Sequence * array = (message__msg__Motorrecv__Sequence *)malloc(sizeof(message__msg__Motorrecv__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message__msg__Motorrecv__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message__msg__Motorrecv__Sequence__destroy(message__msg__Motorrecv__Sequence * array)
{
  if (array) {
    message__msg__Motorrecv__Sequence__fini(array);
  }
  free(array);
}
