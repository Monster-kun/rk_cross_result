// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from system_msgs:srv/NeedSlowDown.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__FUNCTIONS_H_
#define SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "system_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "system_msgs/srv/detail/need_slow_down__struct.h"

/// Initialize srv/NeedSlowDown message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * system_msgs__srv__NeedSlowDown_Request
 * )) before or use
 * system_msgs__srv__NeedSlowDown_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Request__init(system_msgs__srv__NeedSlowDown_Request * msg);

/// Finalize srv/NeedSlowDown message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
void
system_msgs__srv__NeedSlowDown_Request__fini(system_msgs__srv__NeedSlowDown_Request * msg);

/// Create srv/NeedSlowDown message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * system_msgs__srv__NeedSlowDown_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
system_msgs__srv__NeedSlowDown_Request *
system_msgs__srv__NeedSlowDown_Request__create();

/// Destroy srv/NeedSlowDown message.
/**
 * It calls
 * system_msgs__srv__NeedSlowDown_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
void
system_msgs__srv__NeedSlowDown_Request__destroy(system_msgs__srv__NeedSlowDown_Request * msg);

/// Check for srv/NeedSlowDown message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Request__are_equal(const system_msgs__srv__NeedSlowDown_Request * lhs, const system_msgs__srv__NeedSlowDown_Request * rhs);

/// Copy a srv/NeedSlowDown message.
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
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Request__copy(
  const system_msgs__srv__NeedSlowDown_Request * input,
  system_msgs__srv__NeedSlowDown_Request * output);

/// Initialize array of srv/NeedSlowDown messages.
/**
 * It allocates the memory for the number of elements and calls
 * system_msgs__srv__NeedSlowDown_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Request__Sequence__init(system_msgs__srv__NeedSlowDown_Request__Sequence * array, size_t size);

/// Finalize array of srv/NeedSlowDown messages.
/**
 * It calls
 * system_msgs__srv__NeedSlowDown_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
void
system_msgs__srv__NeedSlowDown_Request__Sequence__fini(system_msgs__srv__NeedSlowDown_Request__Sequence * array);

/// Create array of srv/NeedSlowDown messages.
/**
 * It allocates the memory for the array and calls
 * system_msgs__srv__NeedSlowDown_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
system_msgs__srv__NeedSlowDown_Request__Sequence *
system_msgs__srv__NeedSlowDown_Request__Sequence__create(size_t size);

/// Destroy array of srv/NeedSlowDown messages.
/**
 * It calls
 * system_msgs__srv__NeedSlowDown_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
void
system_msgs__srv__NeedSlowDown_Request__Sequence__destroy(system_msgs__srv__NeedSlowDown_Request__Sequence * array);

/// Check for srv/NeedSlowDown message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Request__Sequence__are_equal(const system_msgs__srv__NeedSlowDown_Request__Sequence * lhs, const system_msgs__srv__NeedSlowDown_Request__Sequence * rhs);

/// Copy an array of srv/NeedSlowDown messages.
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
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Request__Sequence__copy(
  const system_msgs__srv__NeedSlowDown_Request__Sequence * input,
  system_msgs__srv__NeedSlowDown_Request__Sequence * output);

/// Initialize srv/NeedSlowDown message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * system_msgs__srv__NeedSlowDown_Response
 * )) before or use
 * system_msgs__srv__NeedSlowDown_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Response__init(system_msgs__srv__NeedSlowDown_Response * msg);

/// Finalize srv/NeedSlowDown message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
void
system_msgs__srv__NeedSlowDown_Response__fini(system_msgs__srv__NeedSlowDown_Response * msg);

/// Create srv/NeedSlowDown message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * system_msgs__srv__NeedSlowDown_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
system_msgs__srv__NeedSlowDown_Response *
system_msgs__srv__NeedSlowDown_Response__create();

/// Destroy srv/NeedSlowDown message.
/**
 * It calls
 * system_msgs__srv__NeedSlowDown_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
void
system_msgs__srv__NeedSlowDown_Response__destroy(system_msgs__srv__NeedSlowDown_Response * msg);

/// Check for srv/NeedSlowDown message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Response__are_equal(const system_msgs__srv__NeedSlowDown_Response * lhs, const system_msgs__srv__NeedSlowDown_Response * rhs);

/// Copy a srv/NeedSlowDown message.
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
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Response__copy(
  const system_msgs__srv__NeedSlowDown_Response * input,
  system_msgs__srv__NeedSlowDown_Response * output);

/// Initialize array of srv/NeedSlowDown messages.
/**
 * It allocates the memory for the number of elements and calls
 * system_msgs__srv__NeedSlowDown_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Response__Sequence__init(system_msgs__srv__NeedSlowDown_Response__Sequence * array, size_t size);

/// Finalize array of srv/NeedSlowDown messages.
/**
 * It calls
 * system_msgs__srv__NeedSlowDown_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
void
system_msgs__srv__NeedSlowDown_Response__Sequence__fini(system_msgs__srv__NeedSlowDown_Response__Sequence * array);

/// Create array of srv/NeedSlowDown messages.
/**
 * It allocates the memory for the array and calls
 * system_msgs__srv__NeedSlowDown_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
system_msgs__srv__NeedSlowDown_Response__Sequence *
system_msgs__srv__NeedSlowDown_Response__Sequence__create(size_t size);

/// Destroy array of srv/NeedSlowDown messages.
/**
 * It calls
 * system_msgs__srv__NeedSlowDown_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
void
system_msgs__srv__NeedSlowDown_Response__Sequence__destroy(system_msgs__srv__NeedSlowDown_Response__Sequence * array);

/// Check for srv/NeedSlowDown message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Response__Sequence__are_equal(const system_msgs__srv__NeedSlowDown_Response__Sequence * lhs, const system_msgs__srv__NeedSlowDown_Response__Sequence * rhs);

/// Copy an array of srv/NeedSlowDown messages.
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
ROSIDL_GENERATOR_C_PUBLIC_system_msgs
bool
system_msgs__srv__NeedSlowDown_Response__Sequence__copy(
  const system_msgs__srv__NeedSlowDown_Response__Sequence * input,
  system_msgs__srv__NeedSlowDown_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__FUNCTIONS_H_
