// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mapping_msgs:msg/MapProjectorInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mapping_msgs/msg/detail/map_projector_info__rosidl_typesupport_introspection_c.h"
#include "mapping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mapping_msgs/msg/detail/map_projector_info__functions.h"
#include "mapping_msgs/msg/detail/map_projector_info__struct.h"


// Include directives for member types
// Member `type`
// Member `mgrs_grid`
#include "rosidl_runtime_c/string_functions.h"
// Member `map_origin`
#include "geographic_msgs/msg/geo_point.h"
// Member `map_origin`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mapping_msgs__msg__MapProjectorInfo__init(message_memory);
}

void mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_fini_function(void * message_memory)
{
  mapping_msgs__msg__MapProjectorInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__MapProjectorInfo, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mgrs_grid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__MapProjectorInfo, mgrs_grid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_origin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__MapProjectorInfo, map_origin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_message_members = {
  "mapping_msgs__msg",  // message namespace
  "MapProjectorInfo",  // message name
  3,  // number of fields
  sizeof(mapping_msgs__msg__MapProjectorInfo),
  mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_message_member_array,  // message members
  mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_message_type_support_handle = {
  0,
  &mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_msgs, msg, MapProjectorInfo)() {
  mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  if (!mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_message_type_support_handle.typesupport_identifier) {
    mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mapping_msgs__msg__MapProjectorInfo__rosidl_typesupport_introspection_c__MapProjectorInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
