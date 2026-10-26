// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planning_msgs:msg/GlobalPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planning_msgs/msg/detail/global_path__rosidl_typesupport_introspection_c.h"
#include "planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planning_msgs/msg/detail/global_path__functions.h"
#include "planning_msgs/msg/detail/global_path__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `main_trajectory`
#include "planning_msgs/msg/trajectory.h"
// Member `main_trajectory`
#include "planning_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"
// Member `left_bound`
// Member `right_bound`
#include "geometry_msgs/msg/point.h"
// Member `left_bound`
// Member `right_bound`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `left_bound_s`
// Member `right_bound_s`
// Member `checkpoint_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_msgs__msg__GlobalPath__init(message_memory);
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_fini_function(void * message_memory)
{
  planning_msgs__msg__GlobalPath__fini(message_memory);
}

size_t planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__left_bound(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__left_bound(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__left_bound(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__left_bound(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__left_bound(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__left_bound(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__left_bound(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__left_bound(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__right_bound(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__right_bound(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__right_bound(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__right_bound(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__right_bound(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__right_bound(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__right_bound(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__right_bound(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__left_bound_s(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__left_bound_s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__left_bound_s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__left_bound_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__left_bound_s(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__left_bound_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__left_bound_s(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__left_bound_s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__right_bound_s(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__right_bound_s(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__right_bound_s(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__right_bound_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__right_bound_s(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__right_bound_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__right_bound_s(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__right_bound_s(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__checkpoint_indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__checkpoint_indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__checkpoint_indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__checkpoint_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__checkpoint_indices(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__checkpoint_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__checkpoint_indices(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__checkpoint_indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "main_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, main_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, left_bound),  // bytes offset in struct
    NULL,  // default value
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__left_bound,  // size() function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__left_bound,  // get_const(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__left_bound,  // get(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__left_bound,  // fetch(index, &value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__left_bound,  // assign(index, value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__left_bound  // resize(index) function pointer
  },
  {
    "right_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, right_bound),  // bytes offset in struct
    NULL,  // default value
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__right_bound,  // size() function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__right_bound,  // get_const(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__right_bound,  // get(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__right_bound,  // fetch(index, &value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__right_bound,  // assign(index, value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__right_bound  // resize(index) function pointer
  },
  {
    "left_bound_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, left_bound_s),  // bytes offset in struct
    NULL,  // default value
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__left_bound_s,  // size() function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__left_bound_s,  // get_const(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__left_bound_s,  // get(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__left_bound_s,  // fetch(index, &value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__left_bound_s,  // assign(index, value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__left_bound_s  // resize(index) function pointer
  },
  {
    "right_bound_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, right_bound_s),  // bytes offset in struct
    NULL,  // default value
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__right_bound_s,  // size() function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__right_bound_s,  // get_const(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__right_bound_s,  // get(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__right_bound_s,  // fetch(index, &value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__right_bound_s,  // assign(index, value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__right_bound_s  // resize(index) function pointer
  },
  {
    "checkpoint_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, checkpoint_indices),  // bytes offset in struct
    NULL,  // default value
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__size_function__GlobalPath__checkpoint_indices,  // size() function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_const_function__GlobalPath__checkpoint_indices,  // get_const(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__get_function__GlobalPath__checkpoint_indices,  // get(index) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__fetch_function__GlobalPath__checkpoint_indices,  // fetch(index, &value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__assign_function__GlobalPath__checkpoint_indices,  // assign(index, value) function pointer
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__resize_function__GlobalPath__checkpoint_indices  // resize(index) function pointer
  },
  {
    "loop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, loop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_start_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, loop_start_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_left_bound_start_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, loop_left_bound_start_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_right_bound_start_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__GlobalPath, loop_right_bound_start_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_members = {
  "planning_msgs__msg",  // message namespace
  "GlobalPath",  // message name
  11,  // number of fields
  sizeof(planning_msgs__msg__GlobalPath),
  planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_member_array,  // message members
  planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_init_function,  // function to initialize message memory (memory has to be allocated)
  planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_type_support_handle = {
  0,
  &planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_msgs, msg, GlobalPath)() {
  planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_msgs, msg, Trajectory)();
  planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_type_support_handle.typesupport_identifier) {
    planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planning_msgs__msg__GlobalPath__rosidl_typesupport_introspection_c__GlobalPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
