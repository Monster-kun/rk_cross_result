// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_msgs:action/ComputePathToPose.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__STRUCT_H_
#define BEHAVIOR_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal'
// Member 'start'
// Member 'through_goals'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'global_planner_id'
// Member 'task_id'
// Member 'ros_goal_uuid'
// Member 'map_version'
// Member 'planning_attempt_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComputePathToPose in the package behavior_msgs.
typedef struct behavior_msgs__action__ComputePathToPose_Goal
{
  geometry_msgs__msg__PoseStamped goal;
  /// Optional fixed start for planning the next leg before reaching its start.
  geometry_msgs__msg__PoseStamped start;
  bool use_start;
  /// Return a private prefetched leg; its caller publishes the active reference.
  bool defer_publication;
  geometry_msgs__msg__PoseStamped__Sequence through_goals;
  bool loop_goals;
  rosidl_runtime_c__String global_planner_id;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String ros_goal_uuid;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String planning_attempt_id;
} behavior_msgs__action__ComputePathToPose_Goal;

// Struct for a sequence of behavior_msgs__action__ComputePathToPose_Goal.
typedef struct behavior_msgs__action__ComputePathToPose_Goal__Sequence
{
  behavior_msgs__action__ComputePathToPose_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__ComputePathToPose_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "planning_msgs/msg/detail/global_path__struct.h"
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComputePathToPose in the package behavior_msgs.
typedef struct behavior_msgs__action__ComputePathToPose_Result
{
  planning_msgs__msg__GlobalPath path;
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} behavior_msgs__action__ComputePathToPose_Result;

// Struct for a sequence of behavior_msgs__action__ComputePathToPose_Result.
typedef struct behavior_msgs__action__ComputePathToPose_Result__Sequence
{
  behavior_msgs__action__ComputePathToPose_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__ComputePathToPose_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ComputePathToPose in the package behavior_msgs.
typedef struct behavior_msgs__action__ComputePathToPose_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} behavior_msgs__action__ComputePathToPose_Feedback;

// Struct for a sequence of behavior_msgs__action__ComputePathToPose_Feedback.
typedef struct behavior_msgs__action__ComputePathToPose_Feedback__Sequence
{
  behavior_msgs__action__ComputePathToPose_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__ComputePathToPose_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_msgs/action/detail/compute_path_to_pose__struct.h"

/// Struct defined in action/ComputePathToPose in the package behavior_msgs.
typedef struct behavior_msgs__action__ComputePathToPose_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_msgs__action__ComputePathToPose_Goal goal;
} behavior_msgs__action__ComputePathToPose_SendGoal_Request;

// Struct for a sequence of behavior_msgs__action__ComputePathToPose_SendGoal_Request.
typedef struct behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence
{
  behavior_msgs__action__ComputePathToPose_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComputePathToPose in the package behavior_msgs.
typedef struct behavior_msgs__action__ComputePathToPose_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_msgs__action__ComputePathToPose_SendGoal_Response;

// Struct for a sequence of behavior_msgs__action__ComputePathToPose_SendGoal_Response.
typedef struct behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence
{
  behavior_msgs__action__ComputePathToPose_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComputePathToPose in the package behavior_msgs.
typedef struct behavior_msgs__action__ComputePathToPose_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_msgs__action__ComputePathToPose_GetResult_Request;

// Struct for a sequence of behavior_msgs__action__ComputePathToPose_GetResult_Request.
typedef struct behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence
{
  behavior_msgs__action__ComputePathToPose_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_msgs/action/detail/compute_path_to_pose__struct.h"

/// Struct defined in action/ComputePathToPose in the package behavior_msgs.
typedef struct behavior_msgs__action__ComputePathToPose_GetResult_Response
{
  int8_t status;
  behavior_msgs__action__ComputePathToPose_Result result;
} behavior_msgs__action__ComputePathToPose_GetResult_Response;

// Struct for a sequence of behavior_msgs__action__ComputePathToPose_GetResult_Response.
typedef struct behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence
{
  behavior_msgs__action__ComputePathToPose_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_msgs/action/detail/compute_path_to_pose__struct.h"

/// Struct defined in action/ComputePathToPose in the package behavior_msgs.
typedef struct behavior_msgs__action__ComputePathToPose_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_msgs__action__ComputePathToPose_Feedback feedback;
} behavior_msgs__action__ComputePathToPose_FeedbackMessage;

// Struct for a sequence of behavior_msgs__action__ComputePathToPose_FeedbackMessage.
typedef struct behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence
{
  behavior_msgs__action__ComputePathToPose_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__STRUCT_H_
