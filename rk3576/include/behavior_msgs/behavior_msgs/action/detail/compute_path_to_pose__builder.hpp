// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_msgs:action/ComputePathToPose.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__BUILDER_HPP_
#define BEHAVIOR_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_msgs/action/detail/compute_path_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_Goal_planning_attempt_id
{
public:
  explicit Init_ComputePathToPose_Goal_planning_attempt_id(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::ComputePathToPose_Goal planning_attempt_id(::behavior_msgs::action::ComputePathToPose_Goal::_planning_attempt_id_type arg)
  {
    msg_.planning_attempt_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_map_version
{
public:
  explicit Init_ComputePathToPose_Goal_map_version(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_planning_attempt_id map_version(::behavior_msgs::action::ComputePathToPose_Goal::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_ComputePathToPose_Goal_planning_attempt_id(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_ros_goal_uuid
{
public:
  explicit Init_ComputePathToPose_Goal_ros_goal_uuid(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_map_version ros_goal_uuid(::behavior_msgs::action::ComputePathToPose_Goal::_ros_goal_uuid_type arg)
  {
    msg_.ros_goal_uuid = std::move(arg);
    return Init_ComputePathToPose_Goal_map_version(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_task_id
{
public:
  explicit Init_ComputePathToPose_Goal_task_id(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_ros_goal_uuid task_id(::behavior_msgs::action::ComputePathToPose_Goal::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_ComputePathToPose_Goal_ros_goal_uuid(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_global_planner_id
{
public:
  explicit Init_ComputePathToPose_Goal_global_planner_id(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_task_id global_planner_id(::behavior_msgs::action::ComputePathToPose_Goal::_global_planner_id_type arg)
  {
    msg_.global_planner_id = std::move(arg);
    return Init_ComputePathToPose_Goal_task_id(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_loop_goals
{
public:
  explicit Init_ComputePathToPose_Goal_loop_goals(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_global_planner_id loop_goals(::behavior_msgs::action::ComputePathToPose_Goal::_loop_goals_type arg)
  {
    msg_.loop_goals = std::move(arg);
    return Init_ComputePathToPose_Goal_global_planner_id(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_through_goals
{
public:
  explicit Init_ComputePathToPose_Goal_through_goals(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_loop_goals through_goals(::behavior_msgs::action::ComputePathToPose_Goal::_through_goals_type arg)
  {
    msg_.through_goals = std::move(arg);
    return Init_ComputePathToPose_Goal_loop_goals(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_defer_publication
{
public:
  explicit Init_ComputePathToPose_Goal_defer_publication(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_through_goals defer_publication(::behavior_msgs::action::ComputePathToPose_Goal::_defer_publication_type arg)
  {
    msg_.defer_publication = std::move(arg);
    return Init_ComputePathToPose_Goal_through_goals(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_use_start
{
public:
  explicit Init_ComputePathToPose_Goal_use_start(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_defer_publication use_start(::behavior_msgs::action::ComputePathToPose_Goal::_use_start_type arg)
  {
    msg_.use_start = std::move(arg);
    return Init_ComputePathToPose_Goal_defer_publication(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_start
{
public:
  explicit Init_ComputePathToPose_Goal_start(::behavior_msgs::action::ComputePathToPose_Goal & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Goal_use_start start(::behavior_msgs::action::ComputePathToPose_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_ComputePathToPose_Goal_use_start(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

class Init_ComputePathToPose_Goal_goal
{
public:
  Init_ComputePathToPose_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_Goal_start goal(::behavior_msgs::action::ComputePathToPose_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_ComputePathToPose_Goal_start(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::ComputePathToPose_Goal>()
{
  return behavior_msgs::action::builder::Init_ComputePathToPose_Goal_goal();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_Result_error_msg
{
public:
  explicit Init_ComputePathToPose_Result_error_msg(::behavior_msgs::action::ComputePathToPose_Result & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::ComputePathToPose_Result error_msg(::behavior_msgs::action::ComputePathToPose_Result::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Result msg_;
};

class Init_ComputePathToPose_Result_error_code
{
public:
  explicit Init_ComputePathToPose_Result_error_code(::behavior_msgs::action::ComputePathToPose_Result & msg)
  : msg_(msg)
  {}
  Init_ComputePathToPose_Result_error_msg error_code(::behavior_msgs::action::ComputePathToPose_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ComputePathToPose_Result_error_msg(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Result msg_;
};

class Init_ComputePathToPose_Result_path
{
public:
  Init_ComputePathToPose_Result_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_Result_error_code path(::behavior_msgs::action::ComputePathToPose_Result::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_ComputePathToPose_Result_error_code(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::ComputePathToPose_Result>()
{
  return behavior_msgs::action::builder::Init_ComputePathToPose_Result_path();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::ComputePathToPose_Feedback>()
{
  return ::behavior_msgs::action::ComputePathToPose_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_SendGoal_Request_goal
{
public:
  explicit Init_ComputePathToPose_SendGoal_Request_goal(::behavior_msgs::action::ComputePathToPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::ComputePathToPose_SendGoal_Request goal(::behavior_msgs::action::ComputePathToPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_SendGoal_Request msg_;
};

class Init_ComputePathToPose_SendGoal_Request_goal_id
{
public:
  Init_ComputePathToPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_SendGoal_Request_goal goal_id(::behavior_msgs::action::ComputePathToPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePathToPose_SendGoal_Request_goal(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::ComputePathToPose_SendGoal_Request>()
{
  return behavior_msgs::action::builder::Init_ComputePathToPose_SendGoal_Request_goal_id();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_SendGoal_Response_stamp
{
public:
  explicit Init_ComputePathToPose_SendGoal_Response_stamp(::behavior_msgs::action::ComputePathToPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::ComputePathToPose_SendGoal_Response stamp(::behavior_msgs::action::ComputePathToPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_SendGoal_Response msg_;
};

class Init_ComputePathToPose_SendGoal_Response_accepted
{
public:
  Init_ComputePathToPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_SendGoal_Response_stamp accepted(::behavior_msgs::action::ComputePathToPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ComputePathToPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::ComputePathToPose_SendGoal_Response>()
{
  return behavior_msgs::action::builder::Init_ComputePathToPose_SendGoal_Response_accepted();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_GetResult_Request_goal_id
{
public:
  Init_ComputePathToPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_msgs::action::ComputePathToPose_GetResult_Request goal_id(::behavior_msgs::action::ComputePathToPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::ComputePathToPose_GetResult_Request>()
{
  return behavior_msgs::action::builder::Init_ComputePathToPose_GetResult_Request_goal_id();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_GetResult_Response_result
{
public:
  explicit Init_ComputePathToPose_GetResult_Response_result(::behavior_msgs::action::ComputePathToPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::ComputePathToPose_GetResult_Response result(::behavior_msgs::action::ComputePathToPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_GetResult_Response msg_;
};

class Init_ComputePathToPose_GetResult_Response_status
{
public:
  Init_ComputePathToPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_GetResult_Response_result status(::behavior_msgs::action::ComputePathToPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComputePathToPose_GetResult_Response_result(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::ComputePathToPose_GetResult_Response>()
{
  return behavior_msgs::action::builder::Init_ComputePathToPose_GetResult_Response_status();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_ComputePathToPose_FeedbackMessage_feedback
{
public:
  explicit Init_ComputePathToPose_FeedbackMessage_feedback(::behavior_msgs::action::ComputePathToPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::ComputePathToPose_FeedbackMessage feedback(::behavior_msgs::action::ComputePathToPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_FeedbackMessage msg_;
};

class Init_ComputePathToPose_FeedbackMessage_goal_id
{
public:
  Init_ComputePathToPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputePathToPose_FeedbackMessage_feedback goal_id(::behavior_msgs::action::ComputePathToPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComputePathToPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::behavior_msgs::action::ComputePathToPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::ComputePathToPose_FeedbackMessage>()
{
  return behavior_msgs::action::builder::Init_ComputePathToPose_FeedbackMessage_goal_id();
}

}  // namespace behavior_msgs

#endif  // BEHAVIOR_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__BUILDER_HPP_
