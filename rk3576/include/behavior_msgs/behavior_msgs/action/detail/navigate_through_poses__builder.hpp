// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_msgs:action/NavigateThroughPoses.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__ACTION__DETAIL__NAVIGATE_THROUGH_POSES__BUILDER_HPP_
#define BEHAVIOR_MSGS__ACTION__DETAIL__NAVIGATE_THROUGH_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_msgs/action/detail/navigate_through_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateThroughPoses_Goal_loop_goals
{
public:
  explicit Init_NavigateThroughPoses_Goal_loop_goals(::behavior_msgs::action::NavigateThroughPoses_Goal & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::NavigateThroughPoses_Goal loop_goals(::behavior_msgs::action::NavigateThroughPoses_Goal::_loop_goals_type arg)
  {
    msg_.loop_goals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Goal msg_;
};

class Init_NavigateThroughPoses_Goal_behavior_tree
{
public:
  explicit Init_NavigateThroughPoses_Goal_behavior_tree(::behavior_msgs::action::NavigateThroughPoses_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigateThroughPoses_Goal_loop_goals behavior_tree(::behavior_msgs::action::NavigateThroughPoses_Goal::_behavior_tree_type arg)
  {
    msg_.behavior_tree = std::move(arg);
    return Init_NavigateThroughPoses_Goal_loop_goals(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Goal msg_;
};

class Init_NavigateThroughPoses_Goal_map_version
{
public:
  explicit Init_NavigateThroughPoses_Goal_map_version(::behavior_msgs::action::NavigateThroughPoses_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigateThroughPoses_Goal_behavior_tree map_version(::behavior_msgs::action::NavigateThroughPoses_Goal::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_NavigateThroughPoses_Goal_behavior_tree(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Goal msg_;
};

class Init_NavigateThroughPoses_Goal_task_id
{
public:
  explicit Init_NavigateThroughPoses_Goal_task_id(::behavior_msgs::action::NavigateThroughPoses_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigateThroughPoses_Goal_map_version task_id(::behavior_msgs::action::NavigateThroughPoses_Goal::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_NavigateThroughPoses_Goal_map_version(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Goal msg_;
};

class Init_NavigateThroughPoses_Goal_goal_pose
{
public:
  explicit Init_NavigateThroughPoses_Goal_goal_pose(::behavior_msgs::action::NavigateThroughPoses_Goal & msg)
  : msg_(msg)
  {}
  Init_NavigateThroughPoses_Goal_task_id goal_pose(::behavior_msgs::action::NavigateThroughPoses_Goal::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return Init_NavigateThroughPoses_Goal_task_id(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Goal msg_;
};

class Init_NavigateThroughPoses_Goal_goals
{
public:
  Init_NavigateThroughPoses_Goal_goals()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateThroughPoses_Goal_goal_pose goals(::behavior_msgs::action::NavigateThroughPoses_Goal::_goals_type arg)
  {
    msg_.goals = std::move(arg);
    return Init_NavigateThroughPoses_Goal_goal_pose(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::NavigateThroughPoses_Goal>()
{
  return behavior_msgs::action::builder::Init_NavigateThroughPoses_Goal_goals();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateThroughPoses_Result_error_msg
{
public:
  explicit Init_NavigateThroughPoses_Result_error_msg(::behavior_msgs::action::NavigateThroughPoses_Result & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::NavigateThroughPoses_Result error_msg(::behavior_msgs::action::NavigateThroughPoses_Result::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Result msg_;
};

class Init_NavigateThroughPoses_Result_error_code
{
public:
  Init_NavigateThroughPoses_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateThroughPoses_Result_error_msg error_code(::behavior_msgs::action::NavigateThroughPoses_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_NavigateThroughPoses_Result_error_msg(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::NavigateThroughPoses_Result>()
{
  return behavior_msgs::action::builder::Init_NavigateThroughPoses_Result_error_code();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateThroughPoses_Feedback_number_of_goal_remaining
{
public:
  explicit Init_NavigateThroughPoses_Feedback_number_of_goal_remaining(::behavior_msgs::action::NavigateThroughPoses_Feedback & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::NavigateThroughPoses_Feedback number_of_goal_remaining(::behavior_msgs::action::NavigateThroughPoses_Feedback::_number_of_goal_remaining_type arg)
  {
    msg_.number_of_goal_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Feedback msg_;
};

class Init_NavigateThroughPoses_Feedback_number_of_recoveries
{
public:
  explicit Init_NavigateThroughPoses_Feedback_number_of_recoveries(::behavior_msgs::action::NavigateThroughPoses_Feedback & msg)
  : msg_(msg)
  {}
  Init_NavigateThroughPoses_Feedback_number_of_goal_remaining number_of_recoveries(::behavior_msgs::action::NavigateThroughPoses_Feedback::_number_of_recoveries_type arg)
  {
    msg_.number_of_recoveries = std::move(arg);
    return Init_NavigateThroughPoses_Feedback_number_of_goal_remaining(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Feedback msg_;
};

class Init_NavigateThroughPoses_Feedback_navigation_time
{
public:
  Init_NavigateThroughPoses_Feedback_navigation_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateThroughPoses_Feedback_number_of_recoveries navigation_time(::behavior_msgs::action::NavigateThroughPoses_Feedback::_navigation_time_type arg)
  {
    msg_.navigation_time = std::move(arg);
    return Init_NavigateThroughPoses_Feedback_number_of_recoveries(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::NavigateThroughPoses_Feedback>()
{
  return behavior_msgs::action::builder::Init_NavigateThroughPoses_Feedback_navigation_time();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateThroughPoses_SendGoal_Request_goal
{
public:
  explicit Init_NavigateThroughPoses_SendGoal_Request_goal(::behavior_msgs::action::NavigateThroughPoses_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::NavigateThroughPoses_SendGoal_Request goal(::behavior_msgs::action::NavigateThroughPoses_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_SendGoal_Request msg_;
};

class Init_NavigateThroughPoses_SendGoal_Request_goal_id
{
public:
  Init_NavigateThroughPoses_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateThroughPoses_SendGoal_Request_goal goal_id(::behavior_msgs::action::NavigateThroughPoses_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateThroughPoses_SendGoal_Request_goal(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::NavigateThroughPoses_SendGoal_Request>()
{
  return behavior_msgs::action::builder::Init_NavigateThroughPoses_SendGoal_Request_goal_id();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateThroughPoses_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateThroughPoses_SendGoal_Response_stamp(::behavior_msgs::action::NavigateThroughPoses_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::NavigateThroughPoses_SendGoal_Response stamp(::behavior_msgs::action::NavigateThroughPoses_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_SendGoal_Response msg_;
};

class Init_NavigateThroughPoses_SendGoal_Response_accepted
{
public:
  Init_NavigateThroughPoses_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateThroughPoses_SendGoal_Response_stamp accepted(::behavior_msgs::action::NavigateThroughPoses_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateThroughPoses_SendGoal_Response_stamp(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::NavigateThroughPoses_SendGoal_Response>()
{
  return behavior_msgs::action::builder::Init_NavigateThroughPoses_SendGoal_Response_accepted();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateThroughPoses_GetResult_Request_goal_id
{
public:
  Init_NavigateThroughPoses_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_msgs::action::NavigateThroughPoses_GetResult_Request goal_id(::behavior_msgs::action::NavigateThroughPoses_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::NavigateThroughPoses_GetResult_Request>()
{
  return behavior_msgs::action::builder::Init_NavigateThroughPoses_GetResult_Request_goal_id();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateThroughPoses_GetResult_Response_result
{
public:
  explicit Init_NavigateThroughPoses_GetResult_Response_result(::behavior_msgs::action::NavigateThroughPoses_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::NavigateThroughPoses_GetResult_Response result(::behavior_msgs::action::NavigateThroughPoses_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_GetResult_Response msg_;
};

class Init_NavigateThroughPoses_GetResult_Response_status
{
public:
  Init_NavigateThroughPoses_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateThroughPoses_GetResult_Response_result status(::behavior_msgs::action::NavigateThroughPoses_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateThroughPoses_GetResult_Response_result(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::NavigateThroughPoses_GetResult_Response>()
{
  return behavior_msgs::action::builder::Init_NavigateThroughPoses_GetResult_Response_status();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_NavigateThroughPoses_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateThroughPoses_FeedbackMessage_feedback(::behavior_msgs::action::NavigateThroughPoses_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::NavigateThroughPoses_FeedbackMessage feedback(::behavior_msgs::action::NavigateThroughPoses_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_FeedbackMessage msg_;
};

class Init_NavigateThroughPoses_FeedbackMessage_goal_id
{
public:
  Init_NavigateThroughPoses_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateThroughPoses_FeedbackMessage_feedback goal_id(::behavior_msgs::action::NavigateThroughPoses_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateThroughPoses_FeedbackMessage_feedback(msg_);
  }

private:
  ::behavior_msgs::action::NavigateThroughPoses_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::NavigateThroughPoses_FeedbackMessage>()
{
  return behavior_msgs::action::builder::Init_NavigateThroughPoses_FeedbackMessage_goal_id();
}

}  // namespace behavior_msgs

#endif  // BEHAVIOR_MSGS__ACTION__DETAIL__NAVIGATE_THROUGH_POSES__BUILDER_HPP_
