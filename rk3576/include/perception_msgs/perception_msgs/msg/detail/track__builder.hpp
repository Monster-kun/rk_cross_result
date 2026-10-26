// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_msgs/msg/detail/track__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Track_associated
{
public:
  explicit Init_Track_associated(::perception_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  ::perception_msgs::msg::Track associated(::perception_msgs::msg::Track::_associated_type arg)
  {
    msg_.associated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_msgs::msg::Track msg_;
};

class Init_Track_vel_cov
{
public:
  explicit Init_Track_vel_cov(::perception_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_associated vel_cov(::perception_msgs::msg::Track::_vel_cov_type arg)
  {
    msg_.vel_cov = std::move(arg);
    return Init_Track_associated(msg_);
  }

private:
  ::perception_msgs::msg::Track msg_;
};

class Init_Track_pos_cov
{
public:
  explicit Init_Track_pos_cov(::perception_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_vel_cov pos_cov(::perception_msgs::msg::Track::_pos_cov_type arg)
  {
    msg_.pos_cov = std::move(arg);
    return Init_Track_vel_cov(msg_);
  }

private:
  ::perception_msgs::msg::Track msg_;
};

class Init_Track_vel
{
public:
  explicit Init_Track_vel(::perception_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_pos_cov vel(::perception_msgs::msg::Track::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_Track_pos_cov(msg_);
  }

private:
  ::perception_msgs::msg::Track msg_;
};

class Init_Track_pose
{
public:
  explicit Init_Track_pose(::perception_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_vel pose(::perception_msgs::msg::Track::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Track_vel(msg_);
  }

private:
  ::perception_msgs::msg::Track msg_;
};

class Init_Track_age
{
public:
  explicit Init_Track_age(::perception_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_pose age(::perception_msgs::msg::Track::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Track_pose(msg_);
  }

private:
  ::perception_msgs::msg::Track msg_;
};

class Init_Track_id
{
public:
  Init_Track_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Track_age id(::perception_msgs::msg::Track::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Track_age(msg_);
  }

private:
  ::perception_msgs::msg::Track msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_msgs::msg::Track>()
{
  return perception_msgs::msg::builder::Init_Track_id();
}

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_
