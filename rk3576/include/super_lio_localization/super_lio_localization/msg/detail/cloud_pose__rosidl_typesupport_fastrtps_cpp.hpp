// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from super_lio_localization:msg/CloudPose.idl
// generated code does not contain a copyright notice

#ifndef SUPER_LIO_LOCALIZATION__MSG__DETAIL__CLOUD_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SUPER_LIO_LOCALIZATION__MSG__DETAIL__CLOUD_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "super_lio_localization/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "super_lio_localization/msg/detail/cloud_pose__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace super_lio_localization
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_super_lio_localization
cdr_serialize(
  const super_lio_localization::msg::CloudPose & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_super_lio_localization
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  super_lio_localization::msg::CloudPose & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_super_lio_localization
get_serialized_size(
  const super_lio_localization::msg::CloudPose & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_super_lio_localization
max_serialized_size_CloudPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace super_lio_localization

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_super_lio_localization
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, super_lio_localization, msg, CloudPose)();

#ifdef __cplusplus
}
#endif

#endif  // SUPER_LIO_LOCALIZATION__MSG__DETAIL__CLOUD_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
