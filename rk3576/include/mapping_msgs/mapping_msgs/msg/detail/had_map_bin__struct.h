// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mapping_msgs:msg/HADMapBin.idl
// generated code does not contain a copyright notice

#ifndef MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__STRUCT_H_
#define MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAP_FORMAT_LANELET2'.
enum
{
  mapping_msgs__msg__HADMapBin__MAP_FORMAT_LANELET2 = 0
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'format_version'
// Member 'map_version'
// Member 'map_name'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/HADMapBin in the package mapping_msgs.
/**
  * HADMap contents in binary blob format
 */
typedef struct mapping_msgs__msg__HADMapBin
{
  std_msgs__msg__Header header;
  /// HADMap format identifier, allows supporting multiple map formats
  uint8_t map_format;
  /// Version of map format. Keep as empty string if unnecssary
  rosidl_runtime_c__String format_version;
  /// Version of map. Keep as empty empty if unnecessary
  rosidl_runtime_c__String map_version;
  /// Stable deployment map name; content revisions retain this name
  rosidl_runtime_c__String map_name;
  /// Binary map data
  rosidl_runtime_c__uint8__Sequence data;
} mapping_msgs__msg__HADMapBin;

// Struct for a sequence of mapping_msgs__msg__HADMapBin.
typedef struct mapping_msgs__msg__HADMapBin__Sequence
{
  mapping_msgs__msg__HADMapBin * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapping_msgs__msg__HADMapBin__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__STRUCT_H_
