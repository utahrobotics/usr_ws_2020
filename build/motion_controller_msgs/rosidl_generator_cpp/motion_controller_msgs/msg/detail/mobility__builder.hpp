// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motion_controller_msgs:msg/Mobility.idl
// generated code does not contain a copyright notice

#ifndef MOTION_CONTROLLER_MSGS__MSG__DETAIL__MOBILITY__BUILDER_HPP_
#define MOTION_CONTROLLER_MSGS__MSG__DETAIL__MOBILITY__BUILDER_HPP_

#include "motion_controller_msgs/msg/detail/mobility__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace motion_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_Mobility_rear_left
{
public:
  explicit Init_Mobility_rear_left(::motion_controller_msgs::msg::Mobility & msg)
  : msg_(msg)
  {}
  ::motion_controller_msgs::msg::Mobility rear_left(::motion_controller_msgs::msg::Mobility::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motion_controller_msgs::msg::Mobility msg_;
};

class Init_Mobility_rear_right
{
public:
  explicit Init_Mobility_rear_right(::motion_controller_msgs::msg::Mobility & msg)
  : msg_(msg)
  {}
  Init_Mobility_rear_left rear_right(::motion_controller_msgs::msg::Mobility::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return Init_Mobility_rear_left(msg_);
  }

private:
  ::motion_controller_msgs::msg::Mobility msg_;
};

class Init_Mobility_front_left
{
public:
  explicit Init_Mobility_front_left(::motion_controller_msgs::msg::Mobility & msg)
  : msg_(msg)
  {}
  Init_Mobility_rear_right front_left(::motion_controller_msgs::msg::Mobility::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_Mobility_rear_right(msg_);
  }

private:
  ::motion_controller_msgs::msg::Mobility msg_;
};

class Init_Mobility_front_right
{
public:
  Init_Mobility_front_right()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mobility_front_left front_right(::motion_controller_msgs::msg::Mobility::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_Mobility_front_left(msg_);
  }

private:
  ::motion_controller_msgs::msg::Mobility msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motion_controller_msgs::msg::Mobility>()
{
  return motion_controller_msgs::msg::builder::Init_Mobility_front_right();
}

}  // namespace motion_controller_msgs

#endif  // MOTION_CONTROLLER_MSGS__MSG__DETAIL__MOBILITY__BUILDER_HPP_
