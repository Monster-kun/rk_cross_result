// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:msg/NavigationState.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/msg/detail/navigation_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigationState_sequence_loop
{
public:
  explicit Init_NavigationState_sequence_loop(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  ::web_navigation_msgs::msg::NavigationState sequence_loop(::web_navigation_msgs::msg::NavigationState::_sequence_loop_type arg)
  {
    msg_.sequence_loop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_sequence_state
{
public:
  explicit Init_NavigationState_sequence_state(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_sequence_loop sequence_state(::web_navigation_msgs::msg::NavigationState::_sequence_state_type arg)
  {
    msg_.sequence_state = std::move(arg);
    return Init_NavigationState_sequence_loop(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_sequence_index
{
public:
  explicit Init_NavigationState_sequence_index(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_sequence_state sequence_index(::web_navigation_msgs::msg::NavigationState::_sequence_index_type arg)
  {
    msg_.sequence_index = std::move(arg);
    return Init_NavigationState_sequence_state(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_sequence
{
public:
  explicit Init_NavigationState_sequence(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_sequence_index sequence(::web_navigation_msgs::msg::NavigationState::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_NavigationState_sequence_index(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_error_message
{
public:
  explicit Init_NavigationState_error_message(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_sequence error_message(::web_navigation_msgs::msg::NavigationState::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_NavigationState_sequence(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_error_code
{
public:
  explicit Init_NavigationState_error_code(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_error_message error_code(::web_navigation_msgs::msg::NavigationState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_NavigationState_error_message(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_route
{
public:
  explicit Init_NavigationState_route(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_error_code route(::web_navigation_msgs::msg::NavigationState::_route_type arg)
  {
    msg_.route = std::move(arg);
    return Init_NavigationState_error_code(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_path_revision
{
public:
  explicit Init_NavigationState_path_revision(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_route path_revision(::web_navigation_msgs::msg::NavigationState::_path_revision_type arg)
  {
    msg_.path_revision = std::move(arg);
    return Init_NavigationState_route(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_effective_endpoint
{
public:
  explicit Init_NavigationState_effective_endpoint(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_path_revision effective_endpoint(::web_navigation_msgs::msg::NavigationState::_effective_endpoint_type arg)
  {
    msg_.effective_endpoint = std::move(arg);
    return Init_NavigationState_path_revision(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_requested_y
{
public:
  explicit Init_NavigationState_requested_y(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_effective_endpoint requested_y(::web_navigation_msgs::msg::NavigationState::_requested_y_type arg)
  {
    msg_.requested_y = std::move(arg);
    return Init_NavigationState_effective_endpoint(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_requested_x
{
public:
  explicit Init_NavigationState_requested_x(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_requested_y requested_x(::web_navigation_msgs::msg::NavigationState::_requested_x_type arg)
  {
    msg_.requested_x = std::move(arg);
    return Init_NavigationState_requested_y(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_task_device_label
{
public:
  explicit Init_NavigationState_task_device_label(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_requested_x task_device_label(::web_navigation_msgs::msg::NavigationState::_task_device_label_type arg)
  {
    msg_.task_device_label = std::move(arg);
    return Init_NavigationState_requested_x(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_request_id
{
public:
  explicit Init_NavigationState_request_id(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_task_device_label request_id(::web_navigation_msgs::msg::NavigationState::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_NavigationState_task_device_label(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_task_status_text
{
public:
  explicit Init_NavigationState_task_status_text(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_request_id task_status_text(::web_navigation_msgs::msg::NavigationState::_task_status_text_type arg)
  {
    msg_.task_status_text = std::move(arg);
    return Init_NavigationState_request_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_task_status
{
public:
  explicit Init_NavigationState_task_status(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_task_status_text task_status(::web_navigation_msgs::msg::NavigationState::_task_status_type arg)
  {
    msg_.task_status = std::move(arg);
    return Init_NavigationState_task_status_text(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_ros_goal_uuid
{
public:
  explicit Init_NavigationState_ros_goal_uuid(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_task_status ros_goal_uuid(::web_navigation_msgs::msg::NavigationState::_ros_goal_uuid_type arg)
  {
    msg_.ros_goal_uuid = std::move(arg);
    return Init_NavigationState_task_status(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_task_id
{
public:
  explicit Init_NavigationState_task_id(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_ros_goal_uuid task_id(::web_navigation_msgs::msg::NavigationState::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_NavigationState_ros_goal_uuid(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_control_epoch
{
public:
  explicit Init_NavigationState_control_epoch(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_task_id control_epoch(::web_navigation_msgs::msg::NavigationState::_control_epoch_type arg)
  {
    msg_.control_epoch = std::move(arg);
    return Init_NavigationState_task_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_control_owner_label
{
public:
  explicit Init_NavigationState_control_owner_label(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_control_epoch control_owner_label(::web_navigation_msgs::msg::NavigationState::_control_owner_label_type arg)
  {
    msg_.control_owner_label = std::move(arg);
    return Init_NavigationState_control_epoch(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_control_held
{
public:
  explicit Init_NavigationState_control_held(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_control_owner_label control_held(::web_navigation_msgs::msg::NavigationState::_control_held_type arg)
  {
    msg_.control_held = std::move(arg);
    return Init_NavigationState_control_owner_label(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_navigation_synchronized
{
public:
  explicit Init_NavigationState_navigation_synchronized(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_control_held navigation_synchronized(::web_navigation_msgs::msg::NavigationState::_navigation_synchronized_type arg)
  {
    msg_.navigation_synchronized = std::move(arg);
    return Init_NavigationState_control_held(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_pose_fresh
{
public:
  explicit Init_NavigationState_pose_fresh(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_navigation_synchronized pose_fresh(::web_navigation_msgs::msg::NavigationState::_pose_fresh_type arg)
  {
    msg_.pose_fresh = std::move(arg);
    return Init_NavigationState_navigation_synchronized(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_angular_velocity
{
public:
  explicit Init_NavigationState_angular_velocity(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_pose_fresh angular_velocity(::web_navigation_msgs::msg::NavigationState::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_NavigationState_pose_fresh(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_linear_velocity
{
public:
  explicit Init_NavigationState_linear_velocity(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_angular_velocity linear_velocity(::web_navigation_msgs::msg::NavigationState::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_NavigationState_angular_velocity(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_vehicle_pose
{
public:
  explicit Init_NavigationState_vehicle_pose(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_linear_velocity vehicle_pose(::web_navigation_msgs::msg::NavigationState::_vehicle_pose_type arg)
  {
    msg_.vehicle_pose = std::move(arg);
    return Init_NavigationState_linear_velocity(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_frame_id
{
public:
  explicit Init_NavigationState_frame_id(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_vehicle_pose frame_id(::web_navigation_msgs::msg::NavigationState::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_NavigationState_vehicle_pose(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_map_name
{
public:
  explicit Init_NavigationState_map_name(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_frame_id map_name(::web_navigation_msgs::msg::NavigationState::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_NavigationState_frame_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_map_version
{
public:
  explicit Init_NavigationState_map_version(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_map_name map_version(::web_navigation_msgs::msg::NavigationState::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_NavigationState_map_name(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_map_ready
{
public:
  explicit Init_NavigationState_map_ready(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_map_version map_ready(::web_navigation_msgs::msg::NavigationState::_map_ready_type arg)
  {
    msg_.map_ready = std::move(arg);
    return Init_NavigationState_map_version(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_state_revision
{
public:
  explicit Init_NavigationState_state_revision(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_map_ready state_revision(::web_navigation_msgs::msg::NavigationState::_state_revision_type arg)
  {
    msg_.state_revision = std::move(arg);
    return Init_NavigationState_map_ready(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_manager_boot_id
{
public:
  explicit Init_NavigationState_manager_boot_id(::web_navigation_msgs::msg::NavigationState & msg)
  : msg_(msg)
  {}
  Init_NavigationState_state_revision manager_boot_id(::web_navigation_msgs::msg::NavigationState::_manager_boot_id_type arg)
  {
    msg_.manager_boot_id = std::move(arg);
    return Init_NavigationState_state_revision(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

class Init_NavigationState_header
{
public:
  Init_NavigationState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationState_manager_boot_id header(::web_navigation_msgs::msg::NavigationState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavigationState_manager_boot_id(msg_);
  }

private:
  ::web_navigation_msgs::msg::NavigationState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::msg::NavigationState>()
{
  return web_navigation_msgs::msg::builder::Init_NavigationState_header();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__BUILDER_HPP_
