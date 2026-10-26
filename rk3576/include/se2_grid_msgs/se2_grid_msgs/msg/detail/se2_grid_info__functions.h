// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from se2_grid_msgs:msg/SE2GridInfo.idl
// generated code does not contain a copyright notice

#ifndef SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__FUNCTIONS_H_
#define SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "se2_grid_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "se2_grid_msgs/msg/detail/se2_grid_info__struct.h"

/// Initialize msg/SE2GridInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * se2_grid_msgs__msg__SE2GridInfo
 * )) before or use
 * se2_grid_msgs__msg__SE2GridInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
bool
se2_grid_msgs__msg__SE2GridInfo__init(se2_grid_msgs__msg__SE2GridInfo * msg);

/// Finalize msg/SE2GridInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
void
se2_grid_msgs__msg__SE2GridInfo__fini(se2_grid_msgs__msg__SE2GridInfo * msg);

/// Create msg/SE2GridInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * se2_grid_msgs__msg__SE2GridInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
se2_grid_msgs__msg__SE2GridInfo *
se2_grid_msgs__msg__SE2GridInfo__create();

/// Destroy msg/SE2GridInfo message.
/**
 * It calls
 * se2_grid_msgs__msg__SE2GridInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
void
se2_grid_msgs__msg__SE2GridInfo__destroy(se2_grid_msgs__msg__SE2GridInfo * msg);

/// Check for msg/SE2GridInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
bool
se2_grid_msgs__msg__SE2GridInfo__are_equal(const se2_grid_msgs__msg__SE2GridInfo * lhs, const se2_grid_msgs__msg__SE2GridInfo * rhs);

/// Copy a msg/SE2GridInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
bool
se2_grid_msgs__msg__SE2GridInfo__copy(
  const se2_grid_msgs__msg__SE2GridInfo * input,
  se2_grid_msgs__msg__SE2GridInfo * output);

/// Initialize array of msg/SE2GridInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * se2_grid_msgs__msg__SE2GridInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
bool
se2_grid_msgs__msg__SE2GridInfo__Sequence__init(se2_grid_msgs__msg__SE2GridInfo__Sequence * array, size_t size);

/// Finalize array of msg/SE2GridInfo messages.
/**
 * It calls
 * se2_grid_msgs__msg__SE2GridInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
void
se2_grid_msgs__msg__SE2GridInfo__Sequence__fini(se2_grid_msgs__msg__SE2GridInfo__Sequence * array);

/// Create array of msg/SE2GridInfo messages.
/**
 * It allocates the memory for the array and calls
 * se2_grid_msgs__msg__SE2GridInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
se2_grid_msgs__msg__SE2GridInfo__Sequence *
se2_grid_msgs__msg__SE2GridInfo__Sequence__create(size_t size);

/// Destroy array of msg/SE2GridInfo messages.
/**
 * It calls
 * se2_grid_msgs__msg__SE2GridInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
void
se2_grid_msgs__msg__SE2GridInfo__Sequence__destroy(se2_grid_msgs__msg__SE2GridInfo__Sequence * array);

/// Check for msg/SE2GridInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
bool
se2_grid_msgs__msg__SE2GridInfo__Sequence__are_equal(const se2_grid_msgs__msg__SE2GridInfo__Sequence * lhs, const se2_grid_msgs__msg__SE2GridInfo__Sequence * rhs);

/// Copy an array of msg/SE2GridInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_se2_grid_msgs
bool
se2_grid_msgs__msg__SE2GridInfo__Sequence__copy(
  const se2_grid_msgs__msg__SE2GridInfo__Sequence * input,
  se2_grid_msgs__msg__SE2GridInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__FUNCTIONS_H_
