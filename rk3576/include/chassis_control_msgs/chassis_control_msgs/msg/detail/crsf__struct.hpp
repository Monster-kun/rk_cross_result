// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chassis_control_msgs:msg/Crsf.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__CRSF__STRUCT_HPP_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__CRSF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chassis_control_msgs__msg__Crsf __attribute__((deprecated))
#else
# define DEPRECATED__chassis_control_msgs__msg__Crsf __declspec(deprecated)
#endif

namespace chassis_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Crsf_
{
  using Type = Crsf_<ContainerAllocator>;

  explicit Crsf_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ch1 = 0;
      this->ch2 = 0;
      this->ch3 = 0;
      this->ch4 = 0;
      this->ch5 = 0;
      this->ch6 = 0;
      this->ch7 = 0;
      this->ch8 = 0;
      this->ch9 = 0;
      this->ch10 = 0;
      this->ch11 = 0;
      this->ch12 = 0;
      this->ch13 = 0;
      this->ch14 = 0;
      this->ch15 = 0;
      this->ch16 = 0;
    }
  }

  explicit Crsf_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ch1 = 0;
      this->ch2 = 0;
      this->ch3 = 0;
      this->ch4 = 0;
      this->ch5 = 0;
      this->ch6 = 0;
      this->ch7 = 0;
      this->ch8 = 0;
      this->ch9 = 0;
      this->ch10 = 0;
      this->ch11 = 0;
      this->ch12 = 0;
      this->ch13 = 0;
      this->ch14 = 0;
      this->ch15 = 0;
      this->ch16 = 0;
    }
  }

  // field types and members
  using _ch1_type =
    int16_t;
  _ch1_type ch1;
  using _ch2_type =
    int16_t;
  _ch2_type ch2;
  using _ch3_type =
    int16_t;
  _ch3_type ch3;
  using _ch4_type =
    int16_t;
  _ch4_type ch4;
  using _ch5_type =
    int16_t;
  _ch5_type ch5;
  using _ch6_type =
    int16_t;
  _ch6_type ch6;
  using _ch7_type =
    int16_t;
  _ch7_type ch7;
  using _ch8_type =
    int16_t;
  _ch8_type ch8;
  using _ch9_type =
    int16_t;
  _ch9_type ch9;
  using _ch10_type =
    int16_t;
  _ch10_type ch10;
  using _ch11_type =
    int16_t;
  _ch11_type ch11;
  using _ch12_type =
    int16_t;
  _ch12_type ch12;
  using _ch13_type =
    int16_t;
  _ch13_type ch13;
  using _ch14_type =
    int16_t;
  _ch14_type ch14;
  using _ch15_type =
    int16_t;
  _ch15_type ch15;
  using _ch16_type =
    int16_t;
  _ch16_type ch16;

  // setters for named parameter idiom
  Type & set__ch1(
    const int16_t & _arg)
  {
    this->ch1 = _arg;
    return *this;
  }
  Type & set__ch2(
    const int16_t & _arg)
  {
    this->ch2 = _arg;
    return *this;
  }
  Type & set__ch3(
    const int16_t & _arg)
  {
    this->ch3 = _arg;
    return *this;
  }
  Type & set__ch4(
    const int16_t & _arg)
  {
    this->ch4 = _arg;
    return *this;
  }
  Type & set__ch5(
    const int16_t & _arg)
  {
    this->ch5 = _arg;
    return *this;
  }
  Type & set__ch6(
    const int16_t & _arg)
  {
    this->ch6 = _arg;
    return *this;
  }
  Type & set__ch7(
    const int16_t & _arg)
  {
    this->ch7 = _arg;
    return *this;
  }
  Type & set__ch8(
    const int16_t & _arg)
  {
    this->ch8 = _arg;
    return *this;
  }
  Type & set__ch9(
    const int16_t & _arg)
  {
    this->ch9 = _arg;
    return *this;
  }
  Type & set__ch10(
    const int16_t & _arg)
  {
    this->ch10 = _arg;
    return *this;
  }
  Type & set__ch11(
    const int16_t & _arg)
  {
    this->ch11 = _arg;
    return *this;
  }
  Type & set__ch12(
    const int16_t & _arg)
  {
    this->ch12 = _arg;
    return *this;
  }
  Type & set__ch13(
    const int16_t & _arg)
  {
    this->ch13 = _arg;
    return *this;
  }
  Type & set__ch14(
    const int16_t & _arg)
  {
    this->ch14 = _arg;
    return *this;
  }
  Type & set__ch15(
    const int16_t & _arg)
  {
    this->ch15 = _arg;
    return *this;
  }
  Type & set__ch16(
    const int16_t & _arg)
  {
    this->ch16 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chassis_control_msgs::msg::Crsf_<ContainerAllocator> *;
  using ConstRawPtr =
    const chassis_control_msgs::msg::Crsf_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Crsf_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chassis_control_msgs::msg::Crsf_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Crsf_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Crsf_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chassis_control_msgs::msg::Crsf_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chassis_control_msgs::msg::Crsf_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Crsf_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chassis_control_msgs::msg::Crsf_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chassis_control_msgs__msg__Crsf
    std::shared_ptr<chassis_control_msgs::msg::Crsf_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chassis_control_msgs__msg__Crsf
    std::shared_ptr<chassis_control_msgs::msg::Crsf_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Crsf_ & other) const
  {
    if (this->ch1 != other.ch1) {
      return false;
    }
    if (this->ch2 != other.ch2) {
      return false;
    }
    if (this->ch3 != other.ch3) {
      return false;
    }
    if (this->ch4 != other.ch4) {
      return false;
    }
    if (this->ch5 != other.ch5) {
      return false;
    }
    if (this->ch6 != other.ch6) {
      return false;
    }
    if (this->ch7 != other.ch7) {
      return false;
    }
    if (this->ch8 != other.ch8) {
      return false;
    }
    if (this->ch9 != other.ch9) {
      return false;
    }
    if (this->ch10 != other.ch10) {
      return false;
    }
    if (this->ch11 != other.ch11) {
      return false;
    }
    if (this->ch12 != other.ch12) {
      return false;
    }
    if (this->ch13 != other.ch13) {
      return false;
    }
    if (this->ch14 != other.ch14) {
      return false;
    }
    if (this->ch15 != other.ch15) {
      return false;
    }
    if (this->ch16 != other.ch16) {
      return false;
    }
    return true;
  }
  bool operator!=(const Crsf_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Crsf_

// alias to use template instance with default allocator
using Crsf =
  chassis_control_msgs::msg::Crsf_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace chassis_control_msgs

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__CRSF__STRUCT_HPP_
