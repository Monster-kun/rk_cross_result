// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from localization_msgs:srv/Relocation.idl
// generated code does not contain a copyright notice

#ifndef LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__FUNCTIONS_H_
#define LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "localization_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "localization_msgs/srv/detail/relocation__struct.h"

/// Initialize srv/Relocation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * localization_msgs__srv__Relocation_Request
 * )) before or use
 * localization_msgs__srv__Relocation_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Request__init(localization_msgs__srv__Relocation_Request * msg);

/// Finalize srv/Relocation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
void
localization_msgs__srv__Relocation_Request__fini(localization_msgs__srv__Relocation_Request * msg);

/// Create srv/Relocation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * localization_msgs__srv__Relocation_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
localization_msgs__srv__Relocation_Request *
localization_msgs__srv__Relocation_Request__create();

/// Destroy srv/Relocation message.
/**
 * It calls
 * localization_msgs__srv__Relocation_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
void
localization_msgs__srv__Relocation_Request__destroy(localization_msgs__srv__Relocation_Request * msg);

/// Check for srv/Relocation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Request__are_equal(const localization_msgs__srv__Relocation_Request * lhs, const localization_msgs__srv__Relocation_Request * rhs);

/// Copy a srv/Relocation message.
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
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Request__copy(
  const localization_msgs__srv__Relocation_Request * input,
  localization_msgs__srv__Relocation_Request * output);

/// Initialize array of srv/Relocation messages.
/**
 * It allocates the memory for the number of elements and calls
 * localization_msgs__srv__Relocation_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Request__Sequence__init(localization_msgs__srv__Relocation_Request__Sequence * array, size_t size);

/// Finalize array of srv/Relocation messages.
/**
 * It calls
 * localization_msgs__srv__Relocation_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
void
localization_msgs__srv__Relocation_Request__Sequence__fini(localization_msgs__srv__Relocation_Request__Sequence * array);

/// Create array of srv/Relocation messages.
/**
 * It allocates the memory for the array and calls
 * localization_msgs__srv__Relocation_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
localization_msgs__srv__Relocation_Request__Sequence *
localization_msgs__srv__Relocation_Request__Sequence__create(size_t size);

/// Destroy array of srv/Relocation messages.
/**
 * It calls
 * localization_msgs__srv__Relocation_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
void
localization_msgs__srv__Relocation_Request__Sequence__destroy(localization_msgs__srv__Relocation_Request__Sequence * array);

/// Check for srv/Relocation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Request__Sequence__are_equal(const localization_msgs__srv__Relocation_Request__Sequence * lhs, const localization_msgs__srv__Relocation_Request__Sequence * rhs);

/// Copy an array of srv/Relocation messages.
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
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Request__Sequence__copy(
  const localization_msgs__srv__Relocation_Request__Sequence * input,
  localization_msgs__srv__Relocation_Request__Sequence * output);

/// Initialize srv/Relocation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * localization_msgs__srv__Relocation_Response
 * )) before or use
 * localization_msgs__srv__Relocation_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Response__init(localization_msgs__srv__Relocation_Response * msg);

/// Finalize srv/Relocation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
void
localization_msgs__srv__Relocation_Response__fini(localization_msgs__srv__Relocation_Response * msg);

/// Create srv/Relocation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * localization_msgs__srv__Relocation_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
localization_msgs__srv__Relocation_Response *
localization_msgs__srv__Relocation_Response__create();

/// Destroy srv/Relocation message.
/**
 * It calls
 * localization_msgs__srv__Relocation_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
void
localization_msgs__srv__Relocation_Response__destroy(localization_msgs__srv__Relocation_Response * msg);

/// Check for srv/Relocation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Response__are_equal(const localization_msgs__srv__Relocation_Response * lhs, const localization_msgs__srv__Relocation_Response * rhs);

/// Copy a srv/Relocation message.
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
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Response__copy(
  const localization_msgs__srv__Relocation_Response * input,
  localization_msgs__srv__Relocation_Response * output);

/// Initialize array of srv/Relocation messages.
/**
 * It allocates the memory for the number of elements and calls
 * localization_msgs__srv__Relocation_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Response__Sequence__init(localization_msgs__srv__Relocation_Response__Sequence * array, size_t size);

/// Finalize array of srv/Relocation messages.
/**
 * It calls
 * localization_msgs__srv__Relocation_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
void
localization_msgs__srv__Relocation_Response__Sequence__fini(localization_msgs__srv__Relocation_Response__Sequence * array);

/// Create array of srv/Relocation messages.
/**
 * It allocates the memory for the array and calls
 * localization_msgs__srv__Relocation_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
localization_msgs__srv__Relocation_Response__Sequence *
localization_msgs__srv__Relocation_Response__Sequence__create(size_t size);

/// Destroy array of srv/Relocation messages.
/**
 * It calls
 * localization_msgs__srv__Relocation_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
void
localization_msgs__srv__Relocation_Response__Sequence__destroy(localization_msgs__srv__Relocation_Response__Sequence * array);

/// Check for srv/Relocation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Response__Sequence__are_equal(const localization_msgs__srv__Relocation_Response__Sequence * lhs, const localization_msgs__srv__Relocation_Response__Sequence * rhs);

/// Copy an array of srv/Relocation messages.
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
ROSIDL_GENERATOR_C_PUBLIC_localization_msgs
bool
localization_msgs__srv__Relocation_Response__Sequence__copy(
  const localization_msgs__srv__Relocation_Response__Sequence * input,
  localization_msgs__srv__Relocation_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__FUNCTIONS_H_
