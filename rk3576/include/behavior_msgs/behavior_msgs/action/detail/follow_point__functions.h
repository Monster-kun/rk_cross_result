// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from behavior_msgs:action/FollowPoint.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_POINT__FUNCTIONS_H_
#define BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "behavior_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "behavior_msgs/action/detail/follow_point__struct.h"

/// Initialize action/FollowPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__action__FollowPoint_Goal
 * )) before or use
 * behavior_msgs__action__FollowPoint_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Goal__init(behavior_msgs__action__FollowPoint_Goal * msg);

/// Finalize action/FollowPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Goal__fini(behavior_msgs__action__FollowPoint_Goal * msg);

/// Create action/FollowPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__action__FollowPoint_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_Goal *
behavior_msgs__action__FollowPoint_Goal__create();

/// Destroy action/FollowPoint message.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Goal__destroy(behavior_msgs__action__FollowPoint_Goal * msg);

/// Check for action/FollowPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Goal__are_equal(const behavior_msgs__action__FollowPoint_Goal * lhs, const behavior_msgs__action__FollowPoint_Goal * rhs);

/// Copy a action/FollowPoint message.
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
behavior_msgs__action__FollowPoint_Goal__copy(
  const behavior_msgs__action__FollowPoint_Goal * input,
  behavior_msgs__action__FollowPoint_Goal * output);

/// Initialize array of action/FollowPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__action__FollowPoint_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Goal__Sequence__init(behavior_msgs__action__FollowPoint_Goal__Sequence * array, size_t size);

/// Finalize array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Goal__Sequence__fini(behavior_msgs__action__FollowPoint_Goal__Sequence * array);

/// Create array of action/FollowPoint messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__action__FollowPoint_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_Goal__Sequence *
behavior_msgs__action__FollowPoint_Goal__Sequence__create(size_t size);

/// Destroy array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Goal__Sequence__destroy(behavior_msgs__action__FollowPoint_Goal__Sequence * array);

/// Check for action/FollowPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Goal__Sequence__are_equal(const behavior_msgs__action__FollowPoint_Goal__Sequence * lhs, const behavior_msgs__action__FollowPoint_Goal__Sequence * rhs);

/// Copy an array of action/FollowPoint messages.
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
behavior_msgs__action__FollowPoint_Goal__Sequence__copy(
  const behavior_msgs__action__FollowPoint_Goal__Sequence * input,
  behavior_msgs__action__FollowPoint_Goal__Sequence * output);

/// Initialize action/FollowPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__action__FollowPoint_Result
 * )) before or use
 * behavior_msgs__action__FollowPoint_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Result__init(behavior_msgs__action__FollowPoint_Result * msg);

/// Finalize action/FollowPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Result__fini(behavior_msgs__action__FollowPoint_Result * msg);

/// Create action/FollowPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__action__FollowPoint_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_Result *
behavior_msgs__action__FollowPoint_Result__create();

/// Destroy action/FollowPoint message.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Result__destroy(behavior_msgs__action__FollowPoint_Result * msg);

/// Check for action/FollowPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Result__are_equal(const behavior_msgs__action__FollowPoint_Result * lhs, const behavior_msgs__action__FollowPoint_Result * rhs);

/// Copy a action/FollowPoint message.
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
behavior_msgs__action__FollowPoint_Result__copy(
  const behavior_msgs__action__FollowPoint_Result * input,
  behavior_msgs__action__FollowPoint_Result * output);

/// Initialize array of action/FollowPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__action__FollowPoint_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Result__Sequence__init(behavior_msgs__action__FollowPoint_Result__Sequence * array, size_t size);

/// Finalize array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Result__Sequence__fini(behavior_msgs__action__FollowPoint_Result__Sequence * array);

/// Create array of action/FollowPoint messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__action__FollowPoint_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_Result__Sequence *
behavior_msgs__action__FollowPoint_Result__Sequence__create(size_t size);

/// Destroy array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Result__Sequence__destroy(behavior_msgs__action__FollowPoint_Result__Sequence * array);

/// Check for action/FollowPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Result__Sequence__are_equal(const behavior_msgs__action__FollowPoint_Result__Sequence * lhs, const behavior_msgs__action__FollowPoint_Result__Sequence * rhs);

/// Copy an array of action/FollowPoint messages.
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
behavior_msgs__action__FollowPoint_Result__Sequence__copy(
  const behavior_msgs__action__FollowPoint_Result__Sequence * input,
  behavior_msgs__action__FollowPoint_Result__Sequence * output);

/// Initialize action/FollowPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__action__FollowPoint_Feedback
 * )) before or use
 * behavior_msgs__action__FollowPoint_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Feedback__init(behavior_msgs__action__FollowPoint_Feedback * msg);

/// Finalize action/FollowPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Feedback__fini(behavior_msgs__action__FollowPoint_Feedback * msg);

/// Create action/FollowPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__action__FollowPoint_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_Feedback *
behavior_msgs__action__FollowPoint_Feedback__create();

/// Destroy action/FollowPoint message.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Feedback__destroy(behavior_msgs__action__FollowPoint_Feedback * msg);

/// Check for action/FollowPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Feedback__are_equal(const behavior_msgs__action__FollowPoint_Feedback * lhs, const behavior_msgs__action__FollowPoint_Feedback * rhs);

/// Copy a action/FollowPoint message.
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
behavior_msgs__action__FollowPoint_Feedback__copy(
  const behavior_msgs__action__FollowPoint_Feedback * input,
  behavior_msgs__action__FollowPoint_Feedback * output);

/// Initialize array of action/FollowPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__action__FollowPoint_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Feedback__Sequence__init(behavior_msgs__action__FollowPoint_Feedback__Sequence * array, size_t size);

/// Finalize array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Feedback__Sequence__fini(behavior_msgs__action__FollowPoint_Feedback__Sequence * array);

/// Create array of action/FollowPoint messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__action__FollowPoint_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_Feedback__Sequence *
behavior_msgs__action__FollowPoint_Feedback__Sequence__create(size_t size);

/// Destroy array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_Feedback__Sequence__destroy(behavior_msgs__action__FollowPoint_Feedback__Sequence * array);

/// Check for action/FollowPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_Feedback__Sequence__are_equal(const behavior_msgs__action__FollowPoint_Feedback__Sequence * lhs, const behavior_msgs__action__FollowPoint_Feedback__Sequence * rhs);

/// Copy an array of action/FollowPoint messages.
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
behavior_msgs__action__FollowPoint_Feedback__Sequence__copy(
  const behavior_msgs__action__FollowPoint_Feedback__Sequence * input,
  behavior_msgs__action__FollowPoint_Feedback__Sequence * output);

/// Initialize action/FollowPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__action__FollowPoint_SendGoal_Request
 * )) before or use
 * behavior_msgs__action__FollowPoint_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_SendGoal_Request__init(behavior_msgs__action__FollowPoint_SendGoal_Request * msg);

/// Finalize action/FollowPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_SendGoal_Request__fini(behavior_msgs__action__FollowPoint_SendGoal_Request * msg);

/// Create action/FollowPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__action__FollowPoint_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_SendGoal_Request *
behavior_msgs__action__FollowPoint_SendGoal_Request__create();

/// Destroy action/FollowPoint message.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_SendGoal_Request__destroy(behavior_msgs__action__FollowPoint_SendGoal_Request * msg);

/// Check for action/FollowPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_SendGoal_Request__are_equal(const behavior_msgs__action__FollowPoint_SendGoal_Request * lhs, const behavior_msgs__action__FollowPoint_SendGoal_Request * rhs);

/// Copy a action/FollowPoint message.
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
behavior_msgs__action__FollowPoint_SendGoal_Request__copy(
  const behavior_msgs__action__FollowPoint_SendGoal_Request * input,
  behavior_msgs__action__FollowPoint_SendGoal_Request * output);

/// Initialize array of action/FollowPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__action__FollowPoint_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__init(behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__fini(behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence * array);

/// Create array of action/FollowPoint messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence *
behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__destroy(behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence * array);

/// Check for action/FollowPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__are_equal(const behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence * lhs, const behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/FollowPoint messages.
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
behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence__copy(
  const behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence * input,
  behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence * output);

/// Initialize action/FollowPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__action__FollowPoint_SendGoal_Response
 * )) before or use
 * behavior_msgs__action__FollowPoint_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_SendGoal_Response__init(behavior_msgs__action__FollowPoint_SendGoal_Response * msg);

/// Finalize action/FollowPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_SendGoal_Response__fini(behavior_msgs__action__FollowPoint_SendGoal_Response * msg);

/// Create action/FollowPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__action__FollowPoint_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_SendGoal_Response *
behavior_msgs__action__FollowPoint_SendGoal_Response__create();

/// Destroy action/FollowPoint message.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_SendGoal_Response__destroy(behavior_msgs__action__FollowPoint_SendGoal_Response * msg);

/// Check for action/FollowPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_SendGoal_Response__are_equal(const behavior_msgs__action__FollowPoint_SendGoal_Response * lhs, const behavior_msgs__action__FollowPoint_SendGoal_Response * rhs);

/// Copy a action/FollowPoint message.
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
behavior_msgs__action__FollowPoint_SendGoal_Response__copy(
  const behavior_msgs__action__FollowPoint_SendGoal_Response * input,
  behavior_msgs__action__FollowPoint_SendGoal_Response * output);

/// Initialize array of action/FollowPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__action__FollowPoint_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__init(behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__fini(behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence * array);

/// Create array of action/FollowPoint messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence *
behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__destroy(behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence * array);

/// Check for action/FollowPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__are_equal(const behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence * lhs, const behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/FollowPoint messages.
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
behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence__copy(
  const behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence * input,
  behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence * output);

/// Initialize action/FollowPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__action__FollowPoint_GetResult_Request
 * )) before or use
 * behavior_msgs__action__FollowPoint_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_GetResult_Request__init(behavior_msgs__action__FollowPoint_GetResult_Request * msg);

/// Finalize action/FollowPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_GetResult_Request__fini(behavior_msgs__action__FollowPoint_GetResult_Request * msg);

/// Create action/FollowPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__action__FollowPoint_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_GetResult_Request *
behavior_msgs__action__FollowPoint_GetResult_Request__create();

/// Destroy action/FollowPoint message.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_GetResult_Request__destroy(behavior_msgs__action__FollowPoint_GetResult_Request * msg);

/// Check for action/FollowPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_GetResult_Request__are_equal(const behavior_msgs__action__FollowPoint_GetResult_Request * lhs, const behavior_msgs__action__FollowPoint_GetResult_Request * rhs);

/// Copy a action/FollowPoint message.
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
behavior_msgs__action__FollowPoint_GetResult_Request__copy(
  const behavior_msgs__action__FollowPoint_GetResult_Request * input,
  behavior_msgs__action__FollowPoint_GetResult_Request * output);

/// Initialize array of action/FollowPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__action__FollowPoint_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__init(behavior_msgs__action__FollowPoint_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__fini(behavior_msgs__action__FollowPoint_GetResult_Request__Sequence * array);

/// Create array of action/FollowPoint messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_GetResult_Request__Sequence *
behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__destroy(behavior_msgs__action__FollowPoint_GetResult_Request__Sequence * array);

/// Check for action/FollowPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__are_equal(const behavior_msgs__action__FollowPoint_GetResult_Request__Sequence * lhs, const behavior_msgs__action__FollowPoint_GetResult_Request__Sequence * rhs);

/// Copy an array of action/FollowPoint messages.
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
behavior_msgs__action__FollowPoint_GetResult_Request__Sequence__copy(
  const behavior_msgs__action__FollowPoint_GetResult_Request__Sequence * input,
  behavior_msgs__action__FollowPoint_GetResult_Request__Sequence * output);

/// Initialize action/FollowPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__action__FollowPoint_GetResult_Response
 * )) before or use
 * behavior_msgs__action__FollowPoint_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_GetResult_Response__init(behavior_msgs__action__FollowPoint_GetResult_Response * msg);

/// Finalize action/FollowPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_GetResult_Response__fini(behavior_msgs__action__FollowPoint_GetResult_Response * msg);

/// Create action/FollowPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__action__FollowPoint_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_GetResult_Response *
behavior_msgs__action__FollowPoint_GetResult_Response__create();

/// Destroy action/FollowPoint message.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_GetResult_Response__destroy(behavior_msgs__action__FollowPoint_GetResult_Response * msg);

/// Check for action/FollowPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_GetResult_Response__are_equal(const behavior_msgs__action__FollowPoint_GetResult_Response * lhs, const behavior_msgs__action__FollowPoint_GetResult_Response * rhs);

/// Copy a action/FollowPoint message.
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
behavior_msgs__action__FollowPoint_GetResult_Response__copy(
  const behavior_msgs__action__FollowPoint_GetResult_Response * input,
  behavior_msgs__action__FollowPoint_GetResult_Response * output);

/// Initialize array of action/FollowPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__action__FollowPoint_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__init(behavior_msgs__action__FollowPoint_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__fini(behavior_msgs__action__FollowPoint_GetResult_Response__Sequence * array);

/// Create array of action/FollowPoint messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_GetResult_Response__Sequence *
behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__destroy(behavior_msgs__action__FollowPoint_GetResult_Response__Sequence * array);

/// Check for action/FollowPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__are_equal(const behavior_msgs__action__FollowPoint_GetResult_Response__Sequence * lhs, const behavior_msgs__action__FollowPoint_GetResult_Response__Sequence * rhs);

/// Copy an array of action/FollowPoint messages.
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
behavior_msgs__action__FollowPoint_GetResult_Response__Sequence__copy(
  const behavior_msgs__action__FollowPoint_GetResult_Response__Sequence * input,
  behavior_msgs__action__FollowPoint_GetResult_Response__Sequence * output);

/// Initialize action/FollowPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__action__FollowPoint_FeedbackMessage
 * )) before or use
 * behavior_msgs__action__FollowPoint_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_FeedbackMessage__init(behavior_msgs__action__FollowPoint_FeedbackMessage * msg);

/// Finalize action/FollowPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_FeedbackMessage__fini(behavior_msgs__action__FollowPoint_FeedbackMessage * msg);

/// Create action/FollowPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__action__FollowPoint_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_FeedbackMessage *
behavior_msgs__action__FollowPoint_FeedbackMessage__create();

/// Destroy action/FollowPoint message.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_FeedbackMessage__destroy(behavior_msgs__action__FollowPoint_FeedbackMessage * msg);

/// Check for action/FollowPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_FeedbackMessage__are_equal(const behavior_msgs__action__FollowPoint_FeedbackMessage * lhs, const behavior_msgs__action__FollowPoint_FeedbackMessage * rhs);

/// Copy a action/FollowPoint message.
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
behavior_msgs__action__FollowPoint_FeedbackMessage__copy(
  const behavior_msgs__action__FollowPoint_FeedbackMessage * input,
  behavior_msgs__action__FollowPoint_FeedbackMessage * output);

/// Initialize array of action/FollowPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__action__FollowPoint_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__init(behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__fini(behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence * array);

/// Create array of action/FollowPoint messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence *
behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/FollowPoint messages.
/**
 * It calls
 * behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__destroy(behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence * array);

/// Check for action/FollowPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__are_equal(const behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence * lhs, const behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/FollowPoint messages.
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
behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence__copy(
  const behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence * input,
  behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_POINT__FUNCTIONS_H_
