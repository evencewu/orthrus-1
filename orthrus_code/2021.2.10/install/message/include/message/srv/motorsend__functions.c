// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message:srv/Motorsend.idl
// generated code does not contain a copyright notice
#include "message/srv/motorsend__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
message__srv__Motorsend_Request__init(message__srv__Motorsend_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode_0
  // t_0
  // w_0
  // pos_0
  // k_p_0
  // k_w_0
  // mode_1
  // t_1
  // w_1
  // pos_1
  // k_p_1
  // k_w_1
  // mode_2
  // t_2
  // w_2
  // pos_2
  // k_p_2
  // k_w_2
  return true;
}

void
message__srv__Motorsend_Request__fini(message__srv__Motorsend_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode_0
  // t_0
  // w_0
  // pos_0
  // k_p_0
  // k_w_0
  // mode_1
  // t_1
  // w_1
  // pos_1
  // k_p_1
  // k_w_1
  // mode_2
  // t_2
  // w_2
  // pos_2
  // k_p_2
  // k_w_2
}

message__srv__Motorsend_Request *
message__srv__Motorsend_Request__create()
{
  message__srv__Motorsend_Request * msg = (message__srv__Motorsend_Request *)malloc(sizeof(message__srv__Motorsend_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__srv__Motorsend_Request));
  bool success = message__srv__Motorsend_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message__srv__Motorsend_Request__destroy(message__srv__Motorsend_Request * msg)
{
  if (msg) {
    message__srv__Motorsend_Request__fini(msg);
  }
  free(msg);
}


bool
message__srv__Motorsend_Request__Sequence__init(message__srv__Motorsend_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message__srv__Motorsend_Request * data = NULL;
  if (size) {
    data = (message__srv__Motorsend_Request *)calloc(size, sizeof(message__srv__Motorsend_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__srv__Motorsend_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__srv__Motorsend_Request__fini(&data[i - 1]);
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
message__srv__Motorsend_Request__Sequence__fini(message__srv__Motorsend_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message__srv__Motorsend_Request__fini(&array->data[i]);
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

message__srv__Motorsend_Request__Sequence *
message__srv__Motorsend_Request__Sequence__create(size_t size)
{
  message__srv__Motorsend_Request__Sequence * array = (message__srv__Motorsend_Request__Sequence *)malloc(sizeof(message__srv__Motorsend_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message__srv__Motorsend_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message__srv__Motorsend_Request__Sequence__destroy(message__srv__Motorsend_Request__Sequence * array)
{
  if (array) {
    message__srv__Motorsend_Request__Sequence__fini(array);
  }
  free(array);
}


bool
message__srv__Motorsend_Response__init(message__srv__Motorsend_Response * msg)
{
  if (!msg) {
    return false;
  }
  // temp_0
  // t_0
  // w_0
  // lw_0
  // acc_0
  // pos_0
  // gyro_0_x
  // gyro_0_y
  // gyro_0_z
  // acc_0_x
  // acc_0_y
  // acc_0_z
  // temp_1
  // t_1
  // w_1
  // lw_1
  // acc_1
  // pos_1
  // gyro_1_x
  // gyro_1_y
  // gyro_1_z
  // acc_1_x
  // acc_1_y
  // acc_1_z
  // temp_2
  // t_2
  // w_2
  // lw_2
  // acc_2
  // pos_2
  // gyro_2_x
  // gyro_2_y
  // gyro_2_z
  // acc_2_x
  // acc_2_y
  // acc_2_z
  return true;
}

void
message__srv__Motorsend_Response__fini(message__srv__Motorsend_Response * msg)
{
  if (!msg) {
    return;
  }
  // temp_0
  // t_0
  // w_0
  // lw_0
  // acc_0
  // pos_0
  // gyro_0_x
  // gyro_0_y
  // gyro_0_z
  // acc_0_x
  // acc_0_y
  // acc_0_z
  // temp_1
  // t_1
  // w_1
  // lw_1
  // acc_1
  // pos_1
  // gyro_1_x
  // gyro_1_y
  // gyro_1_z
  // acc_1_x
  // acc_1_y
  // acc_1_z
  // temp_2
  // t_2
  // w_2
  // lw_2
  // acc_2
  // pos_2
  // gyro_2_x
  // gyro_2_y
  // gyro_2_z
  // acc_2_x
  // acc_2_y
  // acc_2_z
}

message__srv__Motorsend_Response *
message__srv__Motorsend_Response__create()
{
  message__srv__Motorsend_Response * msg = (message__srv__Motorsend_Response *)malloc(sizeof(message__srv__Motorsend_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message__srv__Motorsend_Response));
  bool success = message__srv__Motorsend_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message__srv__Motorsend_Response__destroy(message__srv__Motorsend_Response * msg)
{
  if (msg) {
    message__srv__Motorsend_Response__fini(msg);
  }
  free(msg);
}


bool
message__srv__Motorsend_Response__Sequence__init(message__srv__Motorsend_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message__srv__Motorsend_Response * data = NULL;
  if (size) {
    data = (message__srv__Motorsend_Response *)calloc(size, sizeof(message__srv__Motorsend_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message__srv__Motorsend_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message__srv__Motorsend_Response__fini(&data[i - 1]);
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
message__srv__Motorsend_Response__Sequence__fini(message__srv__Motorsend_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message__srv__Motorsend_Response__fini(&array->data[i]);
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

message__srv__Motorsend_Response__Sequence *
message__srv__Motorsend_Response__Sequence__create(size_t size)
{
  message__srv__Motorsend_Response__Sequence * array = (message__srv__Motorsend_Response__Sequence *)malloc(sizeof(message__srv__Motorsend_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message__srv__Motorsend_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message__srv__Motorsend_Response__Sequence__destroy(message__srv__Motorsend_Response__Sequence * array)
{
  if (array) {
    message__srv__Motorsend_Response__Sequence__fini(array);
  }
  free(array);
}
