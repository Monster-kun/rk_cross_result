// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from web_navigation_msgs:msg/RvizGoalFeedback.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__FUNCTIONS_H_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "web_navigation_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "web_navigation_msgs/msg/detail/rviz_goal_feedback__struct.h"

/// Initialize msg/RvizGoalFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * web_navigation_msgs__msg__RvizGoalFeedback
 * )) before or use
 * web_navigation_msgs__msg__RvizGoalFeedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__RvizGoalFeedback__init(web_navigation_msgs__msg__RvizGoalFeedback * msg);

/// Finalize msg/RvizGoalFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
void
web_navigation_msgs__msg__RvizGoalFeedback__fini(web_navigation_msgs__msg__RvizGoalFeedback * msg);

/// Create msg/RvizGoalFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * web_navigation_msgs__msg__RvizGoalFeedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
web_navigation_msgs__msg__RvizGoalFeedback *
web_navigation_msgs__msg__RvizGoalFeedback__create();

/// Destroy msg/RvizGoalFeedback message.
/**
 * It calls
 * web_navigation_msgs__msg__RvizGoalFeedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
void
web_navigation_msgs__msg__RvizGoalFeedback__destroy(web_navigation_msgs__msg__RvizGoalFeedback * msg);

/// Check for msg/RvizGoalFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__RvizGoalFeedback__are_equal(const web_navigation_msgs__msg__RvizGoalFeedback * lhs, const web_navigation_msgs__msg__RvizGoalFeedback * rhs);

/// Copy a msg/RvizGoalFeedback message.
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
web_navigation_msgs__msg__RvizGoalFeedback__copy(
  const web_navigation_msgs__msg__RvizGoalFeedback * input,
  web_navigation_msgs__msg__RvizGoalFeedback * output);

/// Initialize array of msg/RvizGoalFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * web_navigation_msgs__msg__RvizGoalFeedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__init(web_navigation_msgs__msg__RvizGoalFeedback__Sequence * array, size_t size);

/// Finalize array of msg/RvizGoalFeedback messages.
/**
 * It calls
 * web_navigation_msgs__msg__RvizGoalFeedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
void
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__fini(web_navigation_msgs__msg__RvizGoalFeedback__Sequence * array);

/// Create array of msg/RvizGoalFeedback messages.
/**
 * It allocates the memory for the array and calls
 * web_navigation_msgs__msg__RvizGoalFeedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
web_navigation_msgs__msg__RvizGoalFeedback__Sequence *
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__create(size_t size);

/// Destroy array of msg/RvizGoalFeedback messages.
/**
 * It calls
 * web_navigation_msgs__msg__RvizGoalFeedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
void
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__destroy(web_navigation_msgs__msg__RvizGoalFeedback__Sequence * array);

/// Check for msg/RvizGoalFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_web_navigation_msgs
bool
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__are_equal(const web_navigation_msgs__msg__RvizGoalFeedback__Sequence * lhs, const web_navigation_msgs__msg__RvizGoalFeedback__Sequence * rhs);

/// Copy an array of msg/RvizGoalFeedback messages.
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
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__copy(
  const web_navigation_msgs__msg__RvizGoalFeedback__Sequence * input,
  web_navigation_msgs__msg__RvizGoalFeedback__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__FUNCTIONS_H_
