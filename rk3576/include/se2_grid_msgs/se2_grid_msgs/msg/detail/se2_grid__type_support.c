// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from se2_grid_msgs:msg/SE2Grid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "se2_grid_msgs/msg/detail/se2_grid__rosidl_typesupport_introspection_c.h"
#include "se2_grid_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "se2_grid_msgs/msg/detail/se2_grid__functions.h"
#include "se2_grid_msgs/msg/detail/se2_grid__struct.h"


// Include directives for member types
// Member `info`
#include "se2_grid_msgs/msg/se2_grid_info.h"
// Member `info`
#include "se2_grid_msgs/msg/detail/se2_grid_info__rosidl_typesupport_introspection_c.h"
// Member `layers`
#include "rosidl_runtime_c/string_functions.h"
// Member `has_so2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `data`
#include "std_msgs/msg/float32_multi_array.h"
// Member `data`
#include "std_msgs/msg/detail/float32_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  se2_grid_msgs__msg__SE2Grid__init(message_memory);
}

void se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_fini_function(void * message_memory)
{
  se2_grid_msgs__msg__SE2Grid__fini(message_memory);
}

size_t se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__size_function__SE2Grid__layers(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_const_function__SE2Grid__layers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_function__SE2Grid__layers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__fetch_function__SE2Grid__layers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_const_function__SE2Grid__layers(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__assign_function__SE2Grid__layers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_function__SE2Grid__layers(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__resize_function__SE2Grid__layers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__size_function__SE2Grid__has_so2(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_const_function__SE2Grid__has_so2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_function__SE2Grid__has_so2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__fetch_function__SE2Grid__has_so2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_const_function__SE2Grid__has_so2(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__assign_function__SE2Grid__has_so2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_function__SE2Grid__has_so2(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__resize_function__SE2Grid__has_so2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__size_function__SE2Grid__data(
  const void * untyped_member)
{
  const std_msgs__msg__Float32MultiArray__Sequence * member =
    (const std_msgs__msg__Float32MultiArray__Sequence *)(untyped_member);
  return member->size;
}

const void * se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_const_function__SE2Grid__data(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__Float32MultiArray__Sequence * member =
    (const std_msgs__msg__Float32MultiArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_function__SE2Grid__data(
  void * untyped_member, size_t index)
{
  std_msgs__msg__Float32MultiArray__Sequence * member =
    (std_msgs__msg__Float32MultiArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__fetch_function__SE2Grid__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__Float32MultiArray * item =
    ((const std_msgs__msg__Float32MultiArray *)
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_const_function__SE2Grid__data(untyped_member, index));
  std_msgs__msg__Float32MultiArray * value =
    (std_msgs__msg__Float32MultiArray *)(untyped_value);
  *value = *item;
}

void se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__assign_function__SE2Grid__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__Float32MultiArray * item =
    ((std_msgs__msg__Float32MultiArray *)
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_function__SE2Grid__data(untyped_member, index));
  const std_msgs__msg__Float32MultiArray * value =
    (const std_msgs__msg__Float32MultiArray *)(untyped_value);
  *item = *value;
}

bool se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__resize_function__SE2Grid__data(
  void * untyped_member, size_t size)
{
  std_msgs__msg__Float32MultiArray__Sequence * member =
    (std_msgs__msg__Float32MultiArray__Sequence *)(untyped_member);
  std_msgs__msg__Float32MultiArray__Sequence__fini(member);
  return std_msgs__msg__Float32MultiArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_member_array[6] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2Grid, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2Grid, layers),  // bytes offset in struct
    NULL,  // default value
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__size_function__SE2Grid__layers,  // size() function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_const_function__SE2Grid__layers,  // get_const(index) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_function__SE2Grid__layers,  // get(index) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__fetch_function__SE2Grid__layers,  // fetch(index, &value) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__assign_function__SE2Grid__layers,  // assign(index, value) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__resize_function__SE2Grid__layers  // resize(index) function pointer
  },
  {
    "has_so2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2Grid, has_so2),  // bytes offset in struct
    NULL,  // default value
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__size_function__SE2Grid__has_so2,  // size() function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_const_function__SE2Grid__has_so2,  // get_const(index) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_function__SE2Grid__has_so2,  // get(index) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__fetch_function__SE2Grid__has_so2,  // fetch(index, &value) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__assign_function__SE2Grid__has_so2,  // assign(index, value) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__resize_function__SE2Grid__has_so2  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2Grid, data),  // bytes offset in struct
    NULL,  // default value
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__size_function__SE2Grid__data,  // size() function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_const_function__SE2Grid__data,  // get_const(index) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__get_function__SE2Grid__data,  // get(index) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__fetch_function__SE2Grid__data,  // fetch(index, &value) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__assign_function__SE2Grid__data,  // assign(index, value) function pointer
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__resize_function__SE2Grid__data  // resize(index) function pointer
  },
  {
    "start_index_row",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2Grid, start_index_row),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_index_col",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2Grid, start_index_col),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_members = {
  "se2_grid_msgs__msg",  // message namespace
  "SE2Grid",  // message name
  6,  // number of fields
  sizeof(se2_grid_msgs__msg__SE2Grid),
  se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_member_array,  // message members
  se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_init_function,  // function to initialize message memory (memory has to be allocated)
  se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_type_support_handle = {
  0,
  &se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_se2_grid_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, se2_grid_msgs, msg, SE2Grid)() {
  se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, se2_grid_msgs, msg, SE2GridInfo)();
  se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32MultiArray)();
  if (!se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_type_support_handle.typesupport_identifier) {
    se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &se2_grid_msgs__msg__SE2Grid__rosidl_typesupport_introspection_c__SE2Grid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
