// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_msgs:action/NavigateThroughPoses.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__ACTION__DETAIL__NAVIGATE_THROUGH_POSES__STRUCT_H_
#define BEHAVIOR_MSGS__ACTION__DETAIL__NAVIGATE_THROUGH_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goals'
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'task_id'
// Member 'map_version'
// Member 'behavior_tree'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateThroughPoses in the package behavior_msgs.
typedef struct behavior_msgs__action__NavigateThroughPoses_Goal
{
  geometry_msgs__msg__PoseStamped__Sequence goals;
  geometry_msgs__msg__PoseStamped goal_pose;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String behavior_tree;
  bool loop_goals;
} behavior_msgs__action__NavigateThroughPoses_Goal;

// Struct for a sequence of behavior_msgs__action__NavigateThroughPoses_Goal.
typedef struct behavior_msgs__action__NavigateThroughPoses_Goal__Sequence
{
  behavior_msgs__action__NavigateThroughPoses_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__NavigateThroughPoses_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  behavior_msgs__action__NavigateThroughPoses_Result__NONE = 0
};

// Include directives for member types
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateThroughPoses in the package behavior_msgs.
typedef struct behavior_msgs__action__NavigateThroughPoses_Result
{
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} behavior_msgs__action__NavigateThroughPoses_Result;

// Struct for a sequence of behavior_msgs__action__NavigateThroughPoses_Result.
typedef struct behavior_msgs__action__NavigateThroughPoses_Result__Sequence
{
  behavior_msgs__action__NavigateThroughPoses_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__NavigateThroughPoses_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'navigation_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/NavigateThroughPoses in the package behavior_msgs.
typedef struct behavior_msgs__action__NavigateThroughPoses_Feedback
{
  builtin_interfaces__msg__Duration navigation_time;
  int16_t number_of_recoveries;
  int16_t number_of_goal_remaining;
} behavior_msgs__action__NavigateThroughPoses_Feedback;

// Struct for a sequence of behavior_msgs__action__NavigateThroughPoses_Feedback.
typedef struct behavior_msgs__action__NavigateThroughPoses_Feedback__Sequence
{
  behavior_msgs__action__NavigateThroughPoses_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__NavigateThroughPoses_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_msgs/action/detail/navigate_through_poses__struct.h"

/// Struct defined in action/NavigateThroughPoses in the package behavior_msgs.
typedef struct behavior_msgs__action__NavigateThroughPoses_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_msgs__action__NavigateThroughPoses_Goal goal;
} behavior_msgs__action__NavigateThroughPoses_SendGoal_Request;

// Struct for a sequence of behavior_msgs__action__NavigateThroughPoses_SendGoal_Request.
typedef struct behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__Sequence
{
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateThroughPoses in the package behavior_msgs.
typedef struct behavior_msgs__action__NavigateThroughPoses_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_msgs__action__NavigateThroughPoses_SendGoal_Response;

// Struct for a sequence of behavior_msgs__action__NavigateThroughPoses_SendGoal_Response.
typedef struct behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__Sequence
{
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateThroughPoses in the package behavior_msgs.
typedef struct behavior_msgs__action__NavigateThroughPoses_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_msgs__action__NavigateThroughPoses_GetResult_Request;

// Struct for a sequence of behavior_msgs__action__NavigateThroughPoses_GetResult_Request.
typedef struct behavior_msgs__action__NavigateThroughPoses_GetResult_Request__Sequence
{
  behavior_msgs__action__NavigateThroughPoses_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__NavigateThroughPoses_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__struct.h"

/// Struct defined in action/NavigateThroughPoses in the package behavior_msgs.
typedef struct behavior_msgs__action__NavigateThroughPoses_GetResult_Response
{
  int8_t status;
  behavior_msgs__action__NavigateThroughPoses_Result result;
} behavior_msgs__action__NavigateThroughPoses_GetResult_Response;

// Struct for a sequence of behavior_msgs__action__NavigateThroughPoses_GetResult_Response.
typedef struct behavior_msgs__action__NavigateThroughPoses_GetResult_Response__Sequence
{
  behavior_msgs__action__NavigateThroughPoses_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__NavigateThroughPoses_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__struct.h"

/// Struct defined in action/NavigateThroughPoses in the package behavior_msgs.
typedef struct behavior_msgs__action__NavigateThroughPoses_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_msgs__action__NavigateThroughPoses_Feedback feedback;
} behavior_msgs__action__NavigateThroughPoses_FeedbackMessage;

// Struct for a sequence of behavior_msgs__action__NavigateThroughPoses_FeedbackMessage.
typedef struct behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__Sequence
{
  behavior_msgs__action__NavigateThroughPoses_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__ACTION__DETAIL__NAVIGATE_THROUGH_POSES__STRUCT_H_
