// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from realsense_msgs:msg/IMUInfo.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE_MSGS__MSG__DETAIL__IMU_INFO__BUILDER_HPP_
#define REALSENSE_MSGS__MSG__DETAIL__IMU_INFO__BUILDER_HPP_

#include "realsense_msgs/msg/detail/imu_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace realsense_msgs
{

namespace msg
{

namespace builder
{

class Init_IMUInfo_bias_variances
{
public:
  explicit Init_IMUInfo_bias_variances(::realsense_msgs::msg::IMUInfo & msg)
  : msg_(msg)
  {}
  ::realsense_msgs::msg::IMUInfo bias_variances(::realsense_msgs::msg::IMUInfo::_bias_variances_type arg)
  {
    msg_.bias_variances = std::move(arg);
    return std::move(msg_);
  }

private:
  ::realsense_msgs::msg::IMUInfo msg_;
};

class Init_IMUInfo_noise_variances
{
public:
  explicit Init_IMUInfo_noise_variances(::realsense_msgs::msg::IMUInfo & msg)
  : msg_(msg)
  {}
  Init_IMUInfo_bias_variances noise_variances(::realsense_msgs::msg::IMUInfo::_noise_variances_type arg)
  {
    msg_.noise_variances = std::move(arg);
    return Init_IMUInfo_bias_variances(msg_);
  }

private:
  ::realsense_msgs::msg::IMUInfo msg_;
};

class Init_IMUInfo_data
{
public:
  explicit Init_IMUInfo_data(::realsense_msgs::msg::IMUInfo & msg)
  : msg_(msg)
  {}
  Init_IMUInfo_noise_variances data(::realsense_msgs::msg::IMUInfo::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_IMUInfo_noise_variances(msg_);
  }

private:
  ::realsense_msgs::msg::IMUInfo msg_;
};

class Init_IMUInfo_header
{
public:
  Init_IMUInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUInfo_data header(::realsense_msgs::msg::IMUInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IMUInfo_data(msg_);
  }

private:
  ::realsense_msgs::msg::IMUInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::realsense_msgs::msg::IMUInfo>()
{
  return realsense_msgs::msg::builder::Init_IMUInfo_header();
}

}  // namespace realsense_msgs

#endif  // REALSENSE_MSGS__MSG__DETAIL__IMU_INFO__BUILDER_HPP_
