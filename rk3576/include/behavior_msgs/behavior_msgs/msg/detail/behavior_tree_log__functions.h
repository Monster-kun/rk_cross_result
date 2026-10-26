// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from behavior_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__FUNCTIONS_H_
#define BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "behavior_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "behavior_msgs/msg/detail/behavior_tree_log__struct.h"

/// Initialize msg/BehaviorTreeLog message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__msg__BehaviorTreeLog
 * )) before or use
 * behavior_msgs__msg__BehaviorTreeLog__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__msg__BehaviorTreeLog__init(behavior_msgs__msg__BehaviorTreeLog * msg);

/// Finalize msg/BehaviorTreeLog message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__msg__BehaviorTreeLog__fini(behavior_msgs__msg__BehaviorTreeLog * msg);

/// Create msg/BehaviorTreeLog message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__msg__BehaviorTreeLog__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__msg__BehaviorTreeLog *
behavior_msgs__msg__BehaviorTreeLog__create();

/// Destroy msg/BehaviorTreeLog message.
/**
 * It calls
 * behavior_msgs__msg__BehaviorTreeLog__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__msg__BehaviorTreeLog__destroy(behavior_msgs__msg__BehaviorTreeLog * msg);

/// Check for msg/BehaviorTreeLog message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__msg__BehaviorTreeLog__are_equal(const behavior_msgs__msg__BehaviorTreeLog * lhs, const behavior_msgs__msg__BehaviorTreeLog * rhs);

/// Copy a msg/BehaviorTreeLog message.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__msg__BehaviorTreeLog__copy(
  const behavior_msgs__msg__BehaviorTreeLog * input,
  behavior_msgs__msg__BehaviorTreeLog * output);

/// Initialize array of msg/BehaviorTreeLog messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__msg__BehaviorTreeLog__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__msg__BehaviorTreeLog__Sequence__init(behavior_msgs__msg__BehaviorTreeLog__Sequence * array, size_t size);

/// Finalize array of msg/BehaviorTreeLog messages.
/**
 * It calls
 * behavior_msgs__msg__BehaviorTreeLog__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__msg__BehaviorTreeLog__Sequence__fini(behavior_msgs__msg__BehaviorTreeLog__Sequence * array);

/// Create array of msg/BehaviorTreeLog messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__msg__BehaviorTreeLog__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__msg__BehaviorTreeLog__Sequence *
behavior_msgs__msg__BehaviorTreeLog__Sequence__create(size_t size);

/// Destroy array of msg/BehaviorTreeLog messages.
/**
 * It calls
 * behavior_msgs__msg__BehaviorTreeLog__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__msg__BehaviorTreeLog__Sequence__destroy(behavior_msgs__msg__BehaviorTreeLog__Sequence * array);

/// Check for msg/BehaviorTreeLog message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__msg__BehaviorTreeLog__Sequence__are_equal(const behavior_msgs__msg__BehaviorTreeLog__Sequence * lhs, const behavior_msgs__msg__BehaviorTreeLog__Sequence * rhs);

/// Copy an array of msg/BehaviorTreeLog messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__msg__BehaviorTreeLog__Sequence__copy(
  const behavior_msgs__msg__BehaviorTreeLog__Sequence * input,
  behavior_msgs__msg__BehaviorTreeLog__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__FUNCTIONS_H_
