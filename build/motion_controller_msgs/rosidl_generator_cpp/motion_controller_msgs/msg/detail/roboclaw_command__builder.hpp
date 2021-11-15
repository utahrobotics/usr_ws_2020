// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motion_controller_msgs:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice

#ifndef MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__BUILDER_HPP_
#define MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__BUILDER_HPP_

#include "motion_controller_msgs/msg/detail/roboclaw_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace motion_controller_msgs
{

namespace msg
{

namespace builder
{

class Init_RoboclawCommand_m2
{
public:
  explicit Init_RoboclawCommand_m2(::motion_controller_msgs::msg::RoboclawCommand & msg)
  : msg_(msg)
  {}
  ::motion_controller_msgs::msg::RoboclawCommand m2(::motion_controller_msgs::msg::RoboclawCommand::_m2_type arg)
  {
    msg_.m2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motion_controller_msgs::msg::RoboclawCommand msg_;
};

class Init_RoboclawCommand_m1
{
public:
  Init_RoboclawCommand_m1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoboclawCommand_m2 m1(::motion_controller_msgs::msg::RoboclawCommand::_m1_type arg)
  {
    msg_.m1 = std::move(arg);
    return Init_RoboclawCommand_m2(msg_);
  }

private:
  ::motion_controller_msgs::msg::RoboclawCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motion_controller_msgs::msg::RoboclawCommand>()
{
  return motion_controller_msgs::msg::builder::Init_RoboclawCommand_m1();
}

}  // namespace motion_controller_msgs

#endif  // MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__BUILDER_HPP_
