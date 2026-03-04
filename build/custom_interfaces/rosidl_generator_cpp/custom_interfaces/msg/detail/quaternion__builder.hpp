// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__QUATERNION__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__QUATERNION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/quaternion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Quaternion_w
{
public:
  explicit Init_Quaternion_w(::custom_interfaces::msg::Quaternion & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Quaternion w(::custom_interfaces::msg::Quaternion::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Quaternion msg_;
};

class Init_Quaternion_z
{
public:
  explicit Init_Quaternion_z(::custom_interfaces::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_w z(::custom_interfaces::msg::Quaternion::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Quaternion_w(msg_);
  }

private:
  ::custom_interfaces::msg::Quaternion msg_;
};

class Init_Quaternion_y
{
public:
  explicit Init_Quaternion_y(::custom_interfaces::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_z y(::custom_interfaces::msg::Quaternion::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Quaternion_z(msg_);
  }

private:
  ::custom_interfaces::msg::Quaternion msg_;
};

class Init_Quaternion_x
{
public:
  Init_Quaternion_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quaternion_y x(::custom_interfaces::msg::Quaternion::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Quaternion_y(msg_);
  }

private:
  ::custom_interfaces::msg::Quaternion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Quaternion>()
{
  return custom_interfaces::msg::builder::Init_Quaternion_x();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__QUATERNION__BUILDER_HPP_
