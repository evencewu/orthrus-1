// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message:msg/Motorcarryout.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__MOTORCARRYOUT__FUNCTIONS_H_
#define MESSAGE__MSG__MOTORCARRYOUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "message/msg/rosidl_generator_c__visibility_control.h"

#include "message/msg/motorcarryout__struct.h"

/// Initialize msg/Motorcarryout message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * message__msg__Motorcarryout
 * )) before or use
 * message__msg__Motorcarryout__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_message
bool
message__msg__Motorcarryout__init(message__msg__Motorcarryout * msg);

/// Finalize msg/Motorcarryout message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
void
message__msg__Motorcarryout__fini(message__msg__Motorcarryout * msg);

/// Create msg/Motorcarryout message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * message__msg__Motorcarryout__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message
message__msg__Motorcarryout *
message__msg__Motorcarryout__create();

/// Destroy msg/Motorcarryout message.
/**
 * It calls
 * message__msg__Motorcarryout__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
void
message__msg__Motorcarryout__destroy(message__msg__Motorcarryout * msg);


/// Initialize array of msg/Motorcarryout messages.
/**
 * It allocates the memory for the number of elements and calls
 * message__msg__Motorcarryout__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
bool
message__msg__Motorcarryout__Sequence__init(message__msg__Motorcarryout__Sequence * array, size_t size);

/// Finalize array of msg/Motorcarryout messages.
/**
 * It calls
 * message__msg__Motorcarryout__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
void
message__msg__Motorcarryout__Sequence__fini(message__msg__Motorcarryout__Sequence * array);

/// Create array of msg/Motorcarryout messages.
/**
 * It allocates the memory for the array and calls
 * message__msg__Motorcarryout__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message
message__msg__Motorcarryout__Sequence *
message__msg__Motorcarryout__Sequence__create(size_t size);

/// Destroy array of msg/Motorcarryout messages.
/**
 * It calls
 * message__msg__Motorcarryout__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message
void
message__msg__Motorcarryout__Sequence__destroy(message__msg__Motorcarryout__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE__MSG__MOTORCARRYOUT__FUNCTIONS_H_
