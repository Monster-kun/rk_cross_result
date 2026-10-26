// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mapping_msgs:msg/HADMapBin.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mapping_msgs/msg/detail/had_map_bin__rosidl_typesupport_introspection_c.h"
#include "mapping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mapping_msgs/msg/detail/had_map_bin__functions.h"
#include "mapping_msgs/msg/detail/had_map_bin__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `format_version`
// Member `map_version`
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mapping_msgs__msg__HADMapBin__init(message_memory);
}

void mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_fini_function(void * message_memory)
{
  mapping_msgs__msg__HADMapBin__fini(message_memory);
}

size_t mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__size_function__HADMapBin__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__get_const_function__HADMapBin__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__get_function__HADMapBin__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__fetch_function__HADMapBin__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__get_const_function__HADMapBin__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__assign_function__HADMapBin__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__get_function__HADMapBin__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__resize_function__HADMapBin__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__HADMapBin, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__HADMapBin, map_format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "format_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__HADMapBin, format_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__HADMapBin, map_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__HADMapBin, map_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__HADMapBin, data),  // bytes offset in struct
    NULL,  // default value
    mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__size_function__HADMapBin__data,  // size() function pointer
    mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__get_const_function__HADMapBin__data,  // get_const(index) function pointer
    mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__get_function__HADMapBin__data,  // get(index) function pointer
    mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__fetch_function__HADMapBin__data,  // fetch(index, &value) function pointer
    mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__assign_function__HADMapBin__data,  // assign(index, value) function pointer
    mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__resize_function__HADMapBin__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_members = {
  "mapping_msgs__msg",  // message namespace
  "HADMapBin",  // message name
  6,  // number of fields
  sizeof(mapping_msgs__msg__HADMapBin),
  mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_member_array,  // message members
  mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_init_function,  // function to initialize message memory (memory has to be allocated)
  mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_type_support_handle = {
  0,
  &mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_msgs, msg, HADMapBin)() {
  mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_type_support_handle.typesupport_identifier) {
    mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mapping_msgs__msg__HADMapBin__rosidl_typesupport_introspection_c__HADMapBin_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
