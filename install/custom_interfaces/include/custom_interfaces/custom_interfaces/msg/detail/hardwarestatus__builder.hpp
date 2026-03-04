// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Hardwarestatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__HARDWARESTATUS__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__HARDWARESTATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/hardwarestatus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Hardwarestatus_debug_msg
{
public:
  explicit Init_Hardwarestatus_debug_msg(::custom_interfaces::msg::Hardwarestatus & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Hardwarestatus debug_msg(::custom_interfaces::msg::Hardwarestatus::_debug_msg_type arg)
  {
    msg_.debug_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Hardwarestatus msg_;
};

class Init_Hardwarestatus_temperature
{
public:
  explicit Init_Hardwarestatus_temperature(::custom_interfaces::msg::Hardwarestatus & msg)
  : msg_(msg)
  {}
  Init_Hardwarestatus_debug_msg temperature(::custom_interfaces::msg::Hardwarestatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Hardwarestatus_debug_msg(msg_);
  }

private:
  ::custom_interfaces::msg::Hardwarestatus msg_;
};

class Init_Hardwarestatus_ledstatus
{
public:
  Init_Hardwarestatus_ledstatus()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hardwarestatus_temperature ledstatus(::custom_interfaces::msg::Hardwarestatus::_ledstatus_type arg)
  {
    msg_.ledstatus = std::move(arg);
    return Init_Hardwarestatus_temperature(msg_);
  }

private:
  ::custom_interfaces::msg::Hardwarestatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Hardwarestatus>()
{
  return custom_interfaces::msg::builder::Init_Hardwarestatus_ledstatus();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__HARDWARESTATUS__BUILDER_HPP_
