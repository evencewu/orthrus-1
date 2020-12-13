// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message:srv/Motorsend.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__SRV__MOTORSEND__STRUCT_H_
#define MESSAGE__SRV__MOTORSEND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Motorsend in the package message.
typedef struct message__srv__Motorsend_Request
{
  double mode_0;
  double t_0;
  double w_0;
  double pos_0;
  double k_p_0;
  double k_w_0;
  double mode_1;
  double t_1;
  double w_1;
  double pos_1;
  double k_p_1;
  double k_w_1;
  double mode_2;
  double t_2;
  double w_2;
  double pos_2;
  double k_p_2;
  double k_w_2;
} message__srv__Motorsend_Request;

// Struct for a sequence of message__srv__Motorsend_Request.
typedef struct message__srv__Motorsend_Request__Sequence
{
  message__srv__Motorsend_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message__srv__Motorsend_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Motorsend in the package message.
typedef struct message__srv__Motorsend_Response
{
  int64_t temp_0;
  double t_0;
  double w_0;
  double lw_0;
  int64_t acc_0;
  double pos_0;
  double gyro_0_x;
  double gyro_0_y;
  double gyro_0_z;
  double acc_0_x;
  double acc_0_y;
  double acc_0_z;
  int64_t temp_1;
  double t_1;
  double w_1;
  double lw_1;
  int64_t acc_1;
  double pos_1;
  double gyro_1_x;
  double gyro_1_y;
  double gyro_1_z;
  double acc_1_x;
  double acc_1_y;
  double acc_1_z;
  int64_t temp_2;
  double t_2;
  double w_2;
  double lw_2;
  int64_t acc_2;
  double pos_2;
  double gyro_2_x;
  double gyro_2_y;
  double gyro_2_z;
  double acc_2_x;
  double acc_2_y;
  double acc_2_z;
} message__srv__Motorsend_Response;

// Struct for a sequence of message__srv__Motorsend_Response.
typedef struct message__srv__Motorsend_Response__Sequence
{
  message__srv__Motorsend_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message__srv__Motorsend_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE__SRV__MOTORSEND__STRUCT_H_
