// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Vector4.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VECTOR4__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__VECTOR4__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/vector4__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Vector4_u
{
public:
  explicit Init_Vector4_u(::custom_interfaces::msg::Vector4 & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Vector4 u(::custom_interfaces::msg::Vector4::_u_type arg)
  {
    msg_.u = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Vector4 msg_;
};

class Init_Vector4_z
{
public:
  explicit Init_Vector4_z(::custom_interfaces::msg::Vector4 & msg)
  : msg_(msg)
  {}
  Init_Vector4_u z(::custom_interfaces::msg::Vector4::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Vector4_u(msg_);
  }

private:
  ::custom_interfaces::msg::Vector4 msg_;
};

class Init_Vector4_y
{
public:
  explicit Init_Vector4_y(::custom_interfaces::msg::Vector4 & msg)
  : msg_(msg)
  {}
  Init_Vector4_z y(::custom_interfaces::msg::Vector4::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Vector4_z(msg_);
  }

private:
  ::custom_interfaces::msg::Vector4 msg_;
};

class Init_Vector4_x
{
public:
  Init_Vector4_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector4_y x(::custom_interfaces::msg::Vector4::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector4_y(msg_);
  }

private:
  ::custom_interfaces::msg::Vector4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Vector4>()
{
  return custom_interfaces::msg::builder::Init_Vector4_x();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VECTOR4__BUILDER_HPP_
