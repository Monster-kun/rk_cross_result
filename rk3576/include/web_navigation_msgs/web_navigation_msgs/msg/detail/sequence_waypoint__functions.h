// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from web_navigation_msgs:msg/SequenceWaypoint.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__FUNCTIONS_H_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "web_navigation_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "web_navigation_msgs/msg/detail/sequence_waypoint__struct.h"

/// Initialize msg/SequenceWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * web_navigation_msgs__msg__SequenceWaypoint
 * )) before or use
 * web_navigation_msgs__msg__SequenceWaypoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__SequenceWaypoint__init(web_navigation_msgs__msg__SequenceWaypoint * msg);

/// Finalize msg/SequenceWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
void
web_navigation_msgs__msg__SequenceWaypoint__fini(web_navigation_msgs__msg__SequenceWaypoint * msg);

/// Create msg/SequenceWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * web_navigation_msgs__msg__SequenceWaypoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
web_navigation_msgs__msg__SequenceWaypoint *
web_navigation_msgs__msg__SequenceWaypoint__create();

/// Destroy msg/SequenceWaypoint message.
/**
 * It calls
 * web_navigation_msgs__msg__SequenceWaypoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
void
web_navigation_msgs__msg__SequenceWaypoint__destroy(web_navigation_msgs__msg__SequenceWaypoint * msg);

/// Check for msg/SequenceWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__SequenceWaypoint__are_equal(const web_navigation_msgs__msg__SequenceWaypoint * lhs, const web_navigation_msgs__msg__SequenceWaypoint * rhs);

/// Copy a msg/SequenceWaypoint message.
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
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__SequenceWaypoint__copy(
  const web_navigation_msgs__msg__SequenceWaypoint * input,
  web_navigation_msgs__msg__SequenceWaypoint * output);

/// Initialize array of msg/SequenceWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * web_navigation_msgs__msg__SequenceWaypoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__SequenceWaypoint__Sequence__init(web_navigation_msgs__msg__SequenceWaypoint__Sequence * array, size_t size);

/// Finalize array of msg/SequenceWaypoint messages.
/**
 * It calls
 * web_navigation_msgs__msg__SequenceWaypoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
void
web_navigation_msgs__msg__SequenceWaypoint__Sequence__fini(web_navigation_msgs__msg__SequenceWaypoint__Sequence * array);

/// Create array of msg/SequenceWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * web_navigation_msgs__msg__SequenceWaypoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
web_navigation_msgs__msg__SequenceWaypoint__Sequence *
web_navigation_msgs__msg__SequenceWaypoint__Sequence__create(size_t size);

/// Destroy array of msg/SequenceWaypoint messages.
/**
 * It calls
 * web_navigation_msgs__msg__SequenceWaypoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
void
web_navigation_msgs__msg__SequenceWaypoint__Sequence__destroy(web_navigation_msgs__msg__SequenceWaypoint__Sequence * array);

/// Check for msg/SequenceWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__SequenceWaypoint__Sequence__are_equal(const web_navigation_msgs__msg__SequenceWaypoint__Sequence * lhs, const web_navigation_msgs__msg__SequenceWaypoint__Sequence * rhs);

/// Copy an array of msg/SequenceWaypoint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__SequenceWaypoint__Sequence__copy(
  const web_navigation_msgs__msg__SequenceWaypoint__Sequence * input,
  web_navigation_msgs__msg__SequenceWaypoint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__FUNCTIONS_H_
