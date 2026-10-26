// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from behavior_msgs:srv/IsPathCollision.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_COLLISION__FUNCTIONS_H_
#define BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_COLLISION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "behavior_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "behavior_msgs/srv/detail/is_path_collision__struct.h"

/// Initialize srv/IsPathCollision message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__srv__IsPathCollision_Request
 * )) before or use
 * behavior_msgs__srv__IsPathCollision_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__srv__IsPathCollision_Request__init(behavior_msgs__srv__IsPathCollision_Request * msg);

/// Finalize srv/IsPathCollision message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__srv__IsPathCollision_Request__fini(behavior_msgs__srv__IsPathCollision_Request * msg);

/// Create srv/IsPathCollision message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__srv__IsPathCollision_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__srv__IsPathCollision_Request *
behavior_msgs__srv__IsPathCollision_Request__create();

/// Destroy srv/IsPathCollision message.
/**
 * It calls
 * behavior_msgs__srv__IsPathCollision_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__srv__IsPathCollision_Request__destroy(behavior_msgs__srv__IsPathCollision_Request * msg);

/// Check for srv/IsPathCollision message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__srv__IsPathCollision_Request__are_equal(const behavior_msgs__srv__IsPathCollision_Request * lhs, const behavior_msgs__srv__IsPathCollision_Request * rhs);

/// Copy a srv/IsPathCollision message.
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
behavior_msgs__srv__IsPathCollision_Request__copy(
  const behavior_msgs__srv__IsPathCollision_Request * input,
  behavior_msgs__srv__IsPathCollision_Request * output);

/// Initialize array of srv/IsPathCollision messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__srv__IsPathCollision_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__srv__IsPathCollision_Request__Sequence__init(behavior_msgs__srv__IsPathCollision_Request__Sequence * array, size_t size);

/// Finalize array of srv/IsPathCollision messages.
/**
 * It calls
 * behavior_msgs__srv__IsPathCollision_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__srv__IsPathCollision_Request__Sequence__fini(behavior_msgs__srv__IsPathCollision_Request__Sequence * array);

/// Create array of srv/IsPathCollision messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__srv__IsPathCollision_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__srv__IsPathCollision_Request__Sequence *
behavior_msgs__srv__IsPathCollision_Request__Sequence__create(size_t size);

/// Destroy array of srv/IsPathCollision messages.
/**
 * It calls
 * behavior_msgs__srv__IsPathCollision_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__srv__IsPathCollision_Request__Sequence__destroy(behavior_msgs__srv__IsPathCollision_Request__Sequence * array);

/// Check for srv/IsPathCollision message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__srv__IsPathCollision_Request__Sequence__are_equal(const behavior_msgs__srv__IsPathCollision_Request__Sequence * lhs, const behavior_msgs__srv__IsPathCollision_Request__Sequence * rhs);

/// Copy an array of srv/IsPathCollision messages.
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
behavior_msgs__srv__IsPathCollision_Request__Sequence__copy(
  const behavior_msgs__srv__IsPathCollision_Request__Sequence * input,
  behavior_msgs__srv__IsPathCollision_Request__Sequence * output);

/// Initialize srv/IsPathCollision message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_msgs__srv__IsPathCollision_Response
 * )) before or use
 * behavior_msgs__srv__IsPathCollision_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__srv__IsPathCollision_Response__init(behavior_msgs__srv__IsPathCollision_Response * msg);

/// Finalize srv/IsPathCollision message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__srv__IsPathCollision_Response__fini(behavior_msgs__srv__IsPathCollision_Response * msg);

/// Create srv/IsPathCollision message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_msgs__srv__IsPathCollision_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__srv__IsPathCollision_Response *
behavior_msgs__srv__IsPathCollision_Response__create();

/// Destroy srv/IsPathCollision message.
/**
 * It calls
 * behavior_msgs__srv__IsPathCollision_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__srv__IsPathCollision_Response__destroy(behavior_msgs__srv__IsPathCollision_Response * msg);

/// Check for srv/IsPathCollision message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__srv__IsPathCollision_Response__are_equal(const behavior_msgs__srv__IsPathCollision_Response * lhs, const behavior_msgs__srv__IsPathCollision_Response * rhs);

/// Copy a srv/IsPathCollision message.
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
behavior_msgs__srv__IsPathCollision_Response__copy(
  const behavior_msgs__srv__IsPathCollision_Response * input,
  behavior_msgs__srv__IsPathCollision_Response * output);

/// Initialize array of srv/IsPathCollision messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_msgs__srv__IsPathCollision_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__srv__IsPathCollision_Response__Sequence__init(behavior_msgs__srv__IsPathCollision_Response__Sequence * array, size_t size);

/// Finalize array of srv/IsPathCollision messages.
/**
 * It calls
 * behavior_msgs__srv__IsPathCollision_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__srv__IsPathCollision_Response__Sequence__fini(behavior_msgs__srv__IsPathCollision_Response__Sequence * array);

/// Create array of srv/IsPathCollision messages.
/**
 * It allocates the memory for the array and calls
 * behavior_msgs__srv__IsPathCollision_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
behavior_msgs__srv__IsPathCollision_Response__Sequence *
behavior_msgs__srv__IsPathCollision_Response__Sequence__create(size_t size);

/// Destroy array of srv/IsPathCollision messages.
/**
 * It calls
 * behavior_msgs__srv__IsPathCollision_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
void
behavior_msgs__srv__IsPathCollision_Response__Sequence__destroy(behavior_msgs__srv__IsPathCollision_Response__Sequence * array);

/// Check for srv/IsPathCollision message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_msgs
bool
behavior_msgs__srv__IsPathCollision_Response__Sequence__are_equal(const behavior_msgs__srv__IsPathCollision_Response__Sequence * lhs, const behavior_msgs__srv__IsPathCollision_Response__Sequence * rhs);

/// Copy an array of srv/IsPathCollision messages.
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
behavior_msgs__srv__IsPathCollision_Response__Sequence__copy(
  const behavior_msgs__srv__IsPathCollision_Response__Sequence * input,
  behavior_msgs__srv__IsPathCollision_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_COLLISION__FUNCTIONS_H_
