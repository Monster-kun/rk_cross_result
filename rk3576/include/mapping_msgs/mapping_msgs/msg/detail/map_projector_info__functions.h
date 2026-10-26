// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mapping_msgs:msg/MapProjectorInfo.idl
// generated code does not contain a copyright notice

#ifndef MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__FUNCTIONS_H_
#define MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mapping_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mapping_msgs/msg/detail/map_projector_info__struct.h"

/// Initialize msg/MapProjectorInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mapping_msgs__msg__MapProjectorInfo
 * )) before or use
 * mapping_msgs__msg__MapProjectorInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
bool
mapping_msgs__msg__MapProjectorInfo__init(mapping_msgs__msg__MapProjectorInfo * msg);

/// Finalize msg/MapProjectorInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
void
mapping_msgs__msg__MapProjectorInfo__fini(mapping_msgs__msg__MapProjectorInfo * msg);

/// Create msg/MapProjectorInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mapping_msgs__msg__MapProjectorInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
mapping_msgs__msg__MapProjectorInfo *
mapping_msgs__msg__MapProjectorInfo__create();

/// Destroy msg/MapProjectorInfo message.
/**
 * It calls
 * mapping_msgs__msg__MapProjectorInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
void
mapping_msgs__msg__MapProjectorInfo__destroy(mapping_msgs__msg__MapProjectorInfo * msg);

/// Check for msg/MapProjectorInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
bool
mapping_msgs__msg__MapProjectorInfo__are_equal(const mapping_msgs__msg__MapProjectorInfo * lhs, const mapping_msgs__msg__MapProjectorInfo * rhs);

/// Copy a msg/MapProjectorInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
bool
mapping_msgs__msg__MapProjectorInfo__copy(
  const mapping_msgs__msg__MapProjectorInfo * input,
  mapping_msgs__msg__MapProjectorInfo * output);

/// Initialize array of msg/MapProjectorInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * mapping_msgs__msg__MapProjectorInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
bool
mapping_msgs__msg__MapProjectorInfo__Sequence__init(mapping_msgs__msg__MapProjectorInfo__Sequence * array, size_t size);

/// Finalize array of msg/MapProjectorInfo messages.
/**
 * It calls
 * mapping_msgs__msg__MapProjectorInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
void
mapping_msgs__msg__MapProjectorInfo__Sequence__fini(mapping_msgs__msg__MapProjectorInfo__Sequence * array);

/// Create array of msg/MapProjectorInfo messages.
/**
 * It allocates the memory for the array and calls
 * mapping_msgs__msg__MapProjectorInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
mapping_msgs__msg__MapProjectorInfo__Sequence *
mapping_msgs__msg__MapProjectorInfo__Sequence__create(size_t size);

/// Destroy array of msg/MapProjectorInfo messages.
/**
 * It calls
 * mapping_msgs__msg__MapProjectorInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
void
mapping_msgs__msg__MapProjectorInfo__Sequence__destroy(mapping_msgs__msg__MapProjectorInfo__Sequence * array);

/// Check for msg/MapProjectorInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
bool
mapping_msgs__msg__MapProjectorInfo__Sequence__are_equal(const mapping_msgs__msg__MapProjectorInfo__Sequence * lhs, const mapping_msgs__msg__MapProjectorInfo__Sequence * rhs);

/// Copy an array of msg/MapProjectorInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mapping_msgs
bool
mapping_msgs__msg__MapProjectorInfo__Sequence__copy(
  const mapping_msgs__msg__MapProjectorInfo__Sequence * input,
  mapping_msgs__msg__MapProjectorInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__FUNCTIONS_H_
