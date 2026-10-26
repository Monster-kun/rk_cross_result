// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_msgs:action/FollowPoint.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_POINT__STRUCT_H_
#define BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_POINT__STRUCT_H_

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
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'local_planner_id'
// Member 'progress_checking_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/FollowPoint in the package behavior_msgs.
typedef struct behavior_msgs__action__FollowPoint_Goal
{
  geometry_msgs__msg__PoseStamped goal;
  rosidl_runtime_c__String local_planner_id;
  bool plan_once;
  /// "distance" or "angle" or "all"
  rosidl_runtime_c__String progress_checking_mode;
} behavior_msgs__action__FollowPoint_Goal;

// Struct for a sequence of behavior_msgs__action__FollowPoint_Goal.
typedef struct behavior_msgs__action__FollowPoint_Goal__Sequence
{
  behavior_msgs__action__FollowPoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__FollowPoint_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  behavior_msgs__action__FollowPoint_Result__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  behavior_msgs__action__FollowPoint_Result__UNKNOWN = 100
};

/// Constant 'INVALID_PLANNER'.
enum
{
  behavior_msgs__action__FollowPoint_Result__INVALID_PLANNER = 101
};

/// Constant 'INVALID_PATH'.
enum
{
  behavior_msgs__action__FollowPoint_Result__INVALID_PATH = 102
};

/// Constant 'PATIENCE_EXCEEDED'.
enum
{
  behavior_msgs__action__FollowPoint_Result__PATIENCE_EXCEEDED = 103
};

/// Constant 'FAILED_TO_MAKE_PROGRESS'.
enum
{
  behavior_msgs__action__FollowPoint_Result__FAILED_TO_MAKE_PROGRESS = 104
};

/// Constant 'NO_VALID_PLAN'.
enum
{
  behavior_msgs__action__FollowPoint_Result__NO_VALID_PLAN = 105
};

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/empty__struct.h"
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/FollowPoint in the package behavior_msgs.
typedef struct behavior_msgs__action__FollowPoint_Result
{
  /// result
  std_msgs__msg__Empty result;
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} behavior_msgs__action__FollowPoint_Result;

// Struct for a sequence of behavior_msgs__action__FollowPoint_Result.
typedef struct behavior_msgs__action__FollowPoint_Result__Sequence
{
  behavior_msgs__action__FollowPoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__FollowPoint_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/FollowPoint in the package behavior_msgs.
typedef struct behavior_msgs__action__FollowPoint_Feedback
{
  float distance_to_goal;
} behavior_msgs__action__FollowPoint_Feedback;

// Struct for a sequence of behavior_msgs__action__FollowPoint_Feedback.
typedef struct behavior_msgs__action__FollowPoint_Feedback__Sequence
{
  behavior_msgs__action__FollowPoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__FollowPoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_msgs/action/detail/follow_point__struct.h"

/// Struct defined in action/FollowPoint in the package behavior_msgs.
typedef struct behavior_msgs__action__FollowPoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_msgs__action__FollowPoint_Goal goal;
} behavior_msgs__action__FollowPoint_SendGoal_Request;

// Struct for a sequence of behavior_msgs__action__FollowPoint_SendGoal_Request.
typedef struct behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence
{
  behavior_msgs__action__FollowPoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__FollowPoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FollowPoint in the package behavior_msgs.
typedef struct behavior_msgs__action__FollowPoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_msgs__action__FollowPoint_SendGoal_Response;

// Struct for a sequence of behavior_msgs__action__FollowPoint_SendGoal_Response.
typedef struct behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence
{
  behavior_msgs__action__FollowPoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__FollowPoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FollowPoint in the package behavior_msgs.
typedef struct behavior_msgs__action__FollowPoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_msgs__action__FollowPoint_GetResult_Request;

// Struct for a sequence of behavior_msgs__action__FollowPoint_GetResult_Request.
typedef struct behavior_msgs__action__FollowPoint_GetResult_Request__Sequence
{
  behavior_msgs__action__FollowPoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__FollowPoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_msgs/action/detail/follow_point__struct.h"

/// Struct defined in action/FollowPoint in the package behavior_msgs.
typedef struct behavior_msgs__action__FollowPoint_GetResult_Response
{
  int8_t status;
  behavior_msgs__action__FollowPoint_Result result;
} behavior_msgs__action__FollowPoint_GetResult_Response;

// Struct for a sequence of behavior_msgs__action__FollowPoint_GetResult_Response.
typedef struct behavior_msgs__action__FollowPoint_GetResult_Response__Sequence
{
  behavior_msgs__action__FollowPoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__FollowPoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_msgs/action/detail/follow_point__struct.h"

/// Struct defined in action/FollowPoint in the package behavior_msgs.
typedef struct behavior_msgs__action__FollowPoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_msgs__action__FollowPoint_Feedback feedback;
} behavior_msgs__action__FollowPoint_FeedbackMessage;

// Struct for a sequence of behavior_msgs__action__FollowPoint_FeedbackMessage.
typedef struct behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence
{
  behavior_msgs__action__FollowPoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__action__FollowPoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_POINT__STRUCT_H_
