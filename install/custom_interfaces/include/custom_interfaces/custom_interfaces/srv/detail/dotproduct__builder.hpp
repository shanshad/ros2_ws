// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/Dotproduct.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/dotproduct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Dotproduct_Request_v2
{
public:
  explicit Init_Dotproduct_Request_v2(::custom_interfaces::srv::Dotproduct_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::Dotproduct_Request v2(::custom_interfaces::srv::Dotproduct_Request::_v2_type arg)
  {
    msg_.v2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Dotproduct_Request msg_;
};

class Init_Dotproduct_Request_v1
{
public:
  Init_Dotproduct_Request_v1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dotproduct_Request_v2 v1(::custom_interfaces::srv::Dotproduct_Request::_v1_type arg)
  {
    msg_.v1 = std::move(arg);
    return Init_Dotproduct_Request_v2(msg_);
  }

private:
  ::custom_interfaces::srv::Dotproduct_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Dotproduct_Request>()
{
  return custom_interfaces::srv::builder::Init_Dotproduct_Request_v1();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Dotproduct_Response_dp
{
public:
  Init_Dotproduct_Response_dp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::Dotproduct_Response dp(::custom_interfaces::srv::Dotproduct_Response::_dp_type arg)
  {
    msg_.dp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Dotproduct_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Dotproduct_Response>()
{
  return custom_interfaces::srv::builder::Init_Dotproduct_Response_dp();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__BUILDER_HPP_
