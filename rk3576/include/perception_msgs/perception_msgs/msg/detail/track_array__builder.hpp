// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_msgs:msg/TrackArray.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__TRACK_ARRAY__BUILDER_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__TRACK_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_msgs/msg/detail/track_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackArray_tracks
{
public:
  explicit Init_TrackArray_tracks(::perception_msgs::msg::TrackArray & msg)
  : msg_(msg)
  {}
  ::perception_msgs::msg::TrackArray tracks(::perception_msgs::msg::TrackArray::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_msgs::msg::TrackArray msg_;
};

class Init_TrackArray_header
{
public:
  Init_TrackArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackArray_tracks header(::perception_msgs::msg::TrackArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackArray_tracks(msg_);
  }

private:
  ::perception_msgs::msg::TrackArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_msgs::msg::TrackArray>()
{
  return perception_msgs::msg::builder::Init_TrackArray_header();
}

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__MSG__DETAIL__TRACK_ARRAY__BUILDER_HPP_
