// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motion_controller_msgs:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice

#ifndef MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__STRUCT_HPP_
#define MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__motion_controller_msgs__msg__RoboclawCommand __attribute__((deprecated))
#else
# define DEPRECATED__motion_controller_msgs__msg__RoboclawCommand __declspec(deprecated)
#endif

namespace motion_controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoboclawCommand_
{
  using Type = RoboclawCommand_<ContainerAllocator>;

  explicit RoboclawCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1 = 0.0f;
      this->m2 = 0.0f;
    }
  }

  explicit RoboclawCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1 = 0.0f;
      this->m2 = 0.0f;
    }
  }

  // field types and members
  using _m1_type =
    float;
  _m1_type m1;
  using _m2_type =
    float;
  _m2_type m2;

  // setters for named parameter idiom
  Type & set__m1(
    const float & _arg)
  {
    this->m1 = _arg;
    return *this;
  }
  Type & set__m2(
    const float & _arg)
  {
    this->m2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motion_controller_msgs__msg__RoboclawCommand
    std::shared_ptr<motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motion_controller_msgs__msg__RoboclawCommand
    std::shared_ptr<motion_controller_msgs::msg::RoboclawCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoboclawCommand_ & other) const
  {
    if (this->m1 != other.m1) {
      return false;
    }
    if (this->m2 != other.m2) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoboclawCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoboclawCommand_

// alias to use template instance with default allocator
using RoboclawCommand =
  motion_controller_msgs::msg::RoboclawCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motion_controller_msgs

#endif  // MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__STRUCT_HPP_
