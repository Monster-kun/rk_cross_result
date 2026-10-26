// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_msgs:action/FollowPoint.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_POINT__BUILDER_HPP_
#define BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_msgs/action/detail/follow_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPoint_Goal_progress_checking_mode
{
public:
  explicit Init_FollowPoint_Goal_progress_checking_mode(::behavior_msgs::action::FollowPoint_Goal & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::FollowPoint_Goal progress_checking_mode(::behavior_msgs::action::FollowPoint_Goal::_progress_checking_mode_type arg)
  {
    msg_.progress_checking_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_Goal msg_;
};

class Init_FollowPoint_Goal_plan_once
{
public:
  explicit Init_FollowPoint_Goal_plan_once(::behavior_msgs::action::FollowPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_FollowPoint_Goal_progress_checking_mode plan_once(::behavior_msgs::action::FollowPoint_Goal::_plan_once_type arg)
  {
    msg_.plan_once = std::move(arg);
    return Init_FollowPoint_Goal_progress_checking_mode(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_Goal msg_;
};

class Init_FollowPoint_Goal_local_planner_id
{
public:
  explicit Init_FollowPoint_Goal_local_planner_id(::behavior_msgs::action::FollowPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_FollowPoint_Goal_plan_once local_planner_id(::behavior_msgs::action::FollowPoint_Goal::_local_planner_id_type arg)
  {
    msg_.local_planner_id = std::move(arg);
    return Init_FollowPoint_Goal_plan_once(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_Goal msg_;
};

class Init_FollowPoint_Goal_goal
{
public:
  Init_FollowPoint_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPoint_Goal_local_planner_id goal(::behavior_msgs::action::FollowPoint_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_FollowPoint_Goal_local_planner_id(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::FollowPoint_Goal>()
{
  return behavior_msgs::action::builder::Init_FollowPoint_Goal_goal();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPoint_Result_error_msg
{
public:
  explicit Init_FollowPoint_Result_error_msg(::behavior_msgs::action::FollowPoint_Result & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::FollowPoint_Result error_msg(::behavior_msgs::action::FollowPoint_Result::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_Result msg_;
};

class Init_FollowPoint_Result_error_code
{
public:
  explicit Init_FollowPoint_Result_error_code(::behavior_msgs::action::FollowPoint_Result & msg)
  : msg_(msg)
  {}
  Init_FollowPoint_Result_error_msg error_code(::behavior_msgs::action::FollowPoint_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_FollowPoint_Result_error_msg(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_Result msg_;
};

class Init_FollowPoint_Result_result
{
public:
  Init_FollowPoint_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPoint_Result_error_code result(::behavior_msgs::action::FollowPoint_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_FollowPoint_Result_error_code(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::FollowPoint_Result>()
{
  return behavior_msgs::action::builder::Init_FollowPoint_Result_result();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPoint_Feedback_distance_to_goal
{
public:
  Init_FollowPoint_Feedback_distance_to_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_msgs::action::FollowPoint_Feedback distance_to_goal(::behavior_msgs::action::FollowPoint_Feedback::_distance_to_goal_type arg)
  {
    msg_.distance_to_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::FollowPoint_Feedback>()
{
  return behavior_msgs::action::builder::Init_FollowPoint_Feedback_distance_to_goal();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPoint_SendGoal_Request_goal
{
public:
  explicit Init_FollowPoint_SendGoal_Request_goal(::behavior_msgs::action::FollowPoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::FollowPoint_SendGoal_Request goal(::behavior_msgs::action::FollowPoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_SendGoal_Request msg_;
};

class Init_FollowPoint_SendGoal_Request_goal_id
{
public:
  Init_FollowPoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPoint_SendGoal_Request_goal goal_id(::behavior_msgs::action::FollowPoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowPoint_SendGoal_Request_goal(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::FollowPoint_SendGoal_Request>()
{
  return behavior_msgs::action::builder::Init_FollowPoint_SendGoal_Request_goal_id();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPoint_SendGoal_Response_stamp
{
public:
  explicit Init_FollowPoint_SendGoal_Response_stamp(::behavior_msgs::action::FollowPoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::FollowPoint_SendGoal_Response stamp(::behavior_msgs::action::FollowPoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_SendGoal_Response msg_;
};

class Init_FollowPoint_SendGoal_Response_accepted
{
public:
  Init_FollowPoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPoint_SendGoal_Response_stamp accepted(::behavior_msgs::action::FollowPoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowPoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::FollowPoint_SendGoal_Response>()
{
  return behavior_msgs::action::builder::Init_FollowPoint_SendGoal_Response_accepted();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPoint_GetResult_Request_goal_id
{
public:
  Init_FollowPoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_msgs::action::FollowPoint_GetResult_Request goal_id(::behavior_msgs::action::FollowPoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::FollowPoint_GetResult_Request>()
{
  return behavior_msgs::action::builder::Init_FollowPoint_GetResult_Request_goal_id();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPoint_GetResult_Response_result
{
public:
  explicit Init_FollowPoint_GetResult_Response_result(::behavior_msgs::action::FollowPoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::FollowPoint_GetResult_Response result(::behavior_msgs::action::FollowPoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_GetResult_Response msg_;
};

class Init_FollowPoint_GetResult_Response_status
{
public:
  Init_FollowPoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPoint_GetResult_Response_result status(::behavior_msgs::action::FollowPoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowPoint_GetResult_Response_result(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::FollowPoint_GetResult_Response>()
{
  return behavior_msgs::action::builder::Init_FollowPoint_GetResult_Response_status();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace action
{

namespace builder
{

class Init_FollowPoint_FeedbackMessage_feedback
{
public:
  explicit Init_FollowPoint_FeedbackMessage_feedback(::behavior_msgs::action::FollowPoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::action::FollowPoint_FeedbackMessage feedback(::behavior_msgs::action::FollowPoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_FeedbackMessage msg_;
};

class Init_FollowPoint_FeedbackMessage_goal_id
{
public:
  Init_FollowPoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPoint_FeedbackMessage_feedback goal_id(::behavior_msgs::action::FollowPoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowPoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::behavior_msgs::action::FollowPoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::action::FollowPoint_FeedbackMessage>()
{
  return behavior_msgs::action::builder::Init_FollowPoint_FeedbackMessage_goal_id();
}

}  // namespace behavior_msgs

#endif  // BEHAVIOR_MSGS__ACTION__DETAIL__FOLLOW_POINT__BUILDER_HPP_
