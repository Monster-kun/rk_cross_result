// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from localization_msgs:srv/Relocation.idl
// generated code does not contain a copyright notice

#ifndef LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__STRUCT_H_
#define LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'map_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Relocation in the package localization_msgs.
typedef struct localization_msgs__srv__Relocation_Request
{
  sensor_msgs__msg__PointCloud2 cloud;
  rosidl_runtime_c__String map_name;
  int64_t relocation_method;
} localization_msgs__srv__Relocation_Request;

// Struct for a sequence of localization_msgs__srv__Relocation_Request.
typedef struct localization_msgs__srv__Relocation_Request__Sequence
{
  localization_msgs__srv__Relocation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} localization_msgs__srv__Relocation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'init_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/Relocation in the package localization_msgs.
typedef struct localization_msgs__srv__Relocation_Response
{
  geometry_msgs__msg__PoseStamped init_pose;
  bool success;
} localization_msgs__srv__Relocation_Response;

// Struct for a sequence of localization_msgs__srv__Relocation_Response.
typedef struct localization_msgs__srv__Relocation_Response__Sequence
{
  localization_msgs__srv__Relocation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} localization_msgs__srv__Relocation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__STRUCT_H_
