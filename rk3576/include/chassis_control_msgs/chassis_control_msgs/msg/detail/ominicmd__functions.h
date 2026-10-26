// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from chassis_control_msgs:msg/Ominicmd.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__FUNCTIONS_H_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "chassis_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "chassis_control_msgs/msg/detail/ominicmd__struct.h"

/// Initialize msg/Ominicmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * chassis_control_msgs__msg__Ominicmd
 * )) before or use
 * chassis_control_msgs__msg__Ominicmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
bool
chassis_control_msgs__msg__Ominicmd__init(chassis_control_msgs__msg__Ominicmd * msg);

/// Finalize msg/Ominicmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
void
chassis_control_msgs__msg__Ominicmd__fini(chassis_control_msgs__msg__Ominicmd * msg);

/// Create msg/Ominicmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * chassis_control_msgs__msg__Ominicmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
chassis_control_msgs__msg__Ominicmd *
chassis_control_msgs__msg__Ominicmd__create();

/// Destroy msg/Ominicmd message.
/**
 * It calls
 * chassis_control_msgs__msg__Ominicmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
void
chassis_control_msgs__msg__Ominicmd__destroy(chassis_control_msgs__msg__Ominicmd * msg);

/// Check for msg/Ominicmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
bool
chassis_control_msgs__msg__Ominicmd__are_equal(const chassis_control_msgs__msg__Ominicmd * lhs, const chassis_control_msgs__msg__Ominicmd * rhs);

/// Copy a msg/Ominicmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
bool
chassis_control_msgs__msg__Ominicmd__copy(
  const chassis_control_msgs__msg__Ominicmd * input,
  chassis_control_msgs__msg__Ominicmd * output);

/// Initialize array of msg/Ominicmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * chassis_control_msgs__msg__Ominicmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
bool
chassis_control_msgs__msg__Ominicmd__Sequence__init(chassis_control_msgs__msg__Ominicmd__Sequence * array, size_t size);

/// Finalize array of msg/Ominicmd messages.
/**
 * It calls
 * chassis_control_msgs__msg__Ominicmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
void
chassis_control_msgs__msg__Ominicmd__Sequence__fini(chassis_control_msgs__msg__Ominicmd__Sequence * array);

/// Create array of msg/Ominicmd messages.
/**
 * It allocates the memory for the array and calls
 * chassis_control_msgs__msg__Ominicmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
chassis_control_msgs__msg__Ominicmd__Sequence *
chassis_control_msgs__msg__Ominicmd__Sequence__create(size_t size);

/// Destroy array of msg/Ominicmd messages.
/**
 * It calls
 * chassis_control_msgs__msg__Ominicmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
void
chassis_control_msgs__msg__Ominicmd__Sequence__destroy(chassis_control_msgs__msg__Ominicmd__Sequence * array);

/// Check for msg/Ominicmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
bool
chassis_control_msgs__msg__Ominicmd__Sequence__are_equal(const chassis_control_msgs__msg__Ominicmd__Sequence * lhs, const chassis_control_msgs__msg__Ominicmd__Sequence * rhs);

/// Copy an array of msg/Ominicmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_control_msgs
bool
chassis_control_msgs__msg__Ominicmd__Sequence__copy(
  const chassis_control_msgs__msg__Ominicmd__Sequence * input,
  chassis_control_msgs__msg__Ominicmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__OMINICMD__FUNCTIONS_H_
