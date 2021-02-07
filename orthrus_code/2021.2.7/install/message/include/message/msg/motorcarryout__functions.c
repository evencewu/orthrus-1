// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message:msg/Motorcarryout.idl
// generated code does not contain a copyright notice
#include "message/msg/motorcarryout__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"

bool
message__msg__Motorcarryout__init(message__msg__Motorcarryout * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    message__msg__Motorcarryout__fini(msg);
    return false;
  }
  return true;
}

void
message__msg__Motorcarryout__fini(message__msg__Motorcarryout * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // name
  rosidl_generator_c__String__fini(&msg->name);
}

message__msg__Motorcarryout *
message__msg__Motorcarryout__create()
{
  message__msg__Motorcarryout * msg = (message__msg__Motorcarryout *)malloc(sizeof(message__msg__Motorcarryout));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__msg__Motorcarryout));
  bool success = message__msg__Motorcarryout__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message__msg__Motorcarryout__destroy(message__msg__Motorcarryout * msg)
{
  if (msg) {
    message__msg__Motorcarryout__fini(msg);
  }
  free(msg);
}


bool
message__msg__Motorcarryout__Sequence__init(message__msg__Motorcarryout__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message__msg__Motorcarryout * data = NULL;
  if (size) {
    data = (message__msg__Motorcarryout *)calloc(size, sizeof(message__msg__Motorcarryout));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__msg__Motorcarryout__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__msg__Motorcarryout__fini(&data[i - 1]);
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
message__msg__Motorcarryout__Sequence__fini(message__msg__Motorcarryout__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message__msg__Motorcarryout__fini(&array->data[i]);
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

message__msg__Motorcarryout__Sequence *
message__msg__Motorcarryout__Sequence__create(size_t size)
{
  message__msg__Motorcarryout__Sequence * array = (message__msg__Motorcarryout__Sequence *)malloc(sizeof(message__msg__Motorcarryout__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message__msg__Motorcarryout__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message__msg__Motorcarryout__Sequence__destroy(message__msg__Motorcarryout__Sequence * array)
{
  if (array) {
    message__msg__Motorcarryout__Sequence__fini(array);
  }
  free(array);
}
