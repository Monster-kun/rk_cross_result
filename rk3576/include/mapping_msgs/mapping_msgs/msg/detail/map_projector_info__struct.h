// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mapping_msgs:msg/MapProjectorInfo.idl
// generated code does not contain a copyright notice

#ifndef MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__STRUCT_H_
#define MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'mgrs_grid'
#include "rosidl_runtime_c/string.h"
// Member 'map_origin'
#include "geographic_msgs/msg/detail/geo_point__struct.h"

/// Struct defined in msg/MapProjectorInfo in the package mapping_msgs.
/**
  * define map_projector_type
  * UTM, MGRS, local
 */
typedef struct mapping_msgs__msg__MapProjectorInfo
{
  rosidl_runtime_c__String type;
  /// Used for MGRS map
  rosidl_runtime_c__String mgrs_grid;
  /// Used for UTM map
  geographic_msgs__msg__GeoPoint map_origin;
} mapping_msgs__msg__MapProjectorInfo;

// Struct for a sequence of mapping_msgs__msg__MapProjectorInfo.
typedef struct mapping_msgs__msg__MapProjectorInfo__Sequence
{
  mapping_msgs__msg__MapProjectorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapping_msgs__msg__MapProjectorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__STRUCT_H_
