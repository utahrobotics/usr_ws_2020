// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motion_controller_msgs:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice

#ifndef MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__TRAITS_HPP_
#define MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__TRAITS_HPP_

#include "motion_controller_msgs/msg/detail/roboclaw_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motion_controller_msgs::msg::RoboclawCommand>()
{
  return "motion_controller_msgs::msg::RoboclawCommand";
}

template<>
inline const char * name<motion_controller_msgs::msg::RoboclawCommand>()
{
  return "motion_controller_msgs/msg/RoboclawCommand";
}

template<>
struct has_fixed_size<motion_controller_msgs::msg::RoboclawCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motion_controller_msgs::msg::RoboclawCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motion_controller_msgs::msg::RoboclawCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__TRAITS_HPP_
