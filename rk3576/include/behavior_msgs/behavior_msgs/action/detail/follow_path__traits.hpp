// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_msgs:action/FollowPath.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_PATH__TRAITS_HPP_
#define BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_msgs/action/detail/follow_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "planning_msgs/msg/detail/global_path__traits.hpp"

namespace behavior_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: local_planner_id
  {
    out << "local_planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.local_planner_id, out);
    out << ", ";
  }

  // member: plan_once
  {
    out << "plan_once: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_once, out);
    out << ", ";
  }

  // member: keep_running
  {
    out << "keep_running: ";
    rosidl_generator_traits::value_to_yaml(msg.keep_running, out);
    out << ", ";
  }

  // member: progress_checking_mode
  {
    out << "progress_checking_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_checking_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: local_planner_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.local_planner_id, out);
    out << "\n";
  }

  // member: plan_once
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_once: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_once, out);
    out << "\n";
  }

  // member: keep_running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keep_running: ";
    rosidl_generator_traits::value_to_yaml(msg.keep_running, out);
    out << "\n";
  }

  // member: progress_checking_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress_checking_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_checking_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::action::FollowPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::action::FollowPath_Goal & msg)
{
  return behavior_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_Goal>()
{
  return "behavior_msgs::action::FollowPath_Goal";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_Goal>()
{
  return "behavior_msgs/action/FollowPath_Goal";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_msgs::action::FollowPath_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace behavior_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_msg
  {
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: error_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::action::FollowPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::action::FollowPath_Result & msg)
{
  return behavior_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_Result>()
{
  return "behavior_msgs::action::FollowPath_Result";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_Result>()
{
  return "behavior_msgs/action/FollowPath_Result";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_msgs::action::FollowPath_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_to_goal
  {
    out << "distance_to_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_to_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_goal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::action::FollowPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::action::FollowPath_Feedback & msg)
{
  return behavior_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_Feedback>()
{
  return "behavior_msgs::action::FollowPath_Feedback";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_Feedback>()
{
  return "behavior_msgs/action/FollowPath_Feedback";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<behavior_msgs::action::FollowPath_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "behavior_msgs/action/detail/follow_path__traits.hpp"

namespace behavior_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::action::FollowPath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::action::FollowPath_SendGoal_Request & msg)
{
  return behavior_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_SendGoal_Request>()
{
  return "behavior_msgs::action::FollowPath_SendGoal_Request";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_SendGoal_Request>()
{
  return "behavior_msgs/action/FollowPath_SendGoal_Request";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<behavior_msgs::action::FollowPath_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<behavior_msgs::action::FollowPath_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<behavior_msgs::action::FollowPath_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace behavior_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::action::FollowPath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::action::FollowPath_SendGoal_Response & msg)
{
  return behavior_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_SendGoal_Response>()
{
  return "behavior_msgs::action::FollowPath_SendGoal_Response";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_SendGoal_Response>()
{
  return "behavior_msgs/action/FollowPath_SendGoal_Response";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<behavior_msgs::action::FollowPath_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_SendGoal>()
{
  return "behavior_msgs::action::FollowPath_SendGoal";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_SendGoal>()
{
  return "behavior_msgs/action/FollowPath_SendGoal";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_msgs::action::FollowPath_SendGoal_Request>::value &&
    has_fixed_size<behavior_msgs::action::FollowPath_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_msgs::action::FollowPath_SendGoal_Request>::value &&
    has_bounded_size<behavior_msgs::action::FollowPath_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<behavior_msgs::action::FollowPath_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_msgs::action::FollowPath_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_msgs::action::FollowPath_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace behavior_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::action::FollowPath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::action::FollowPath_GetResult_Request & msg)
{
  return behavior_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_GetResult_Request>()
{
  return "behavior_msgs::action::FollowPath_GetResult_Request";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_GetResult_Request>()
{
  return "behavior_msgs/action/FollowPath_GetResult_Request";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<behavior_msgs::action::FollowPath_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_msgs/action/detail/follow_path__traits.hpp"

namespace behavior_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::action::FollowPath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::action::FollowPath_GetResult_Response & msg)
{
  return behavior_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_GetResult_Response>()
{
  return "behavior_msgs::action::FollowPath_GetResult_Response";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_GetResult_Response>()
{
  return "behavior_msgs/action/FollowPath_GetResult_Response";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<behavior_msgs::action::FollowPath_Result>::value> {};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<behavior_msgs::action::FollowPath_Result>::value> {};

template<>
struct is_message<behavior_msgs::action::FollowPath_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_GetResult>()
{
  return "behavior_msgs::action::FollowPath_GetResult";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_GetResult>()
{
  return "behavior_msgs/action/FollowPath_GetResult";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_msgs::action::FollowPath_GetResult_Request>::value &&
    has_fixed_size<behavior_msgs::action::FollowPath_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_msgs::action::FollowPath_GetResult_Request>::value &&
    has_bounded_size<behavior_msgs::action::FollowPath_GetResult_Response>::value
  >
{
};

template<>
struct is_service<behavior_msgs::action::FollowPath_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_msgs::action::FollowPath_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_msgs::action::FollowPath_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "behavior_msgs/action/detail/follow_path__traits.hpp"

namespace behavior_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace behavior_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_msgs::action::FollowPath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_msgs::action::FollowPath_FeedbackMessage & msg)
{
  return behavior_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_msgs::action::FollowPath_FeedbackMessage>()
{
  return "behavior_msgs::action::FollowPath_FeedbackMessage";
}

template<>
inline const char * name<behavior_msgs::action::FollowPath_FeedbackMessage>()
{
  return "behavior_msgs/action/FollowPath_FeedbackMessage";
}

template<>
struct has_fixed_size<behavior_msgs::action::FollowPath_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<behavior_msgs::action::FollowPath_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<behavior_msgs::action::FollowPath_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<behavior_msgs::action::FollowPath_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<behavior_msgs::action::FollowPath_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<behavior_msgs::action::FollowPath>
  : std::true_type
{
};

template<>
struct is_action_goal<behavior_msgs::action::FollowPath_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<behavior_msgs::action::FollowPath_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<behavior_msgs::action::FollowPath_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_PATH__TRAITS_HPP_
