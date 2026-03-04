// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/Dotproduct.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/dotproduct__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'v1'
// Member 'v2'
#include "custom_interfaces/msg/detail/vector4__traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Dotproduct_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: v1
  {
    out << "v1: ";
    to_flow_style_yaml(msg.v1, out);
    out << ", ";
  }

  // member: v2
  {
    out << "v2: ";
    to_flow_style_yaml(msg.v2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dotproduct_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: v1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v1:\n";
    to_block_style_yaml(msg.v1, out, indentation + 2);
  }

  // member: v2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v2:\n";
    to_block_style_yaml(msg.v2, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dotproduct_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::Dotproduct_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::Dotproduct_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::Dotproduct_Request>()
{
  return "custom_interfaces::srv::Dotproduct_Request";
}

template<>
inline const char * name<custom_interfaces::srv::Dotproduct_Request>()
{
  return "custom_interfaces/srv/Dotproduct_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Dotproduct_Request>
  : std::integral_constant<bool, has_fixed_size<custom_interfaces::msg::Vector4>::value> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Dotproduct_Request>
  : std::integral_constant<bool, has_bounded_size<custom_interfaces::msg::Vector4>::value> {};

template<>
struct is_message<custom_interfaces::srv::Dotproduct_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Dotproduct_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: dp
  {
    out << "dp: ";
    rosidl_generator_traits::value_to_yaml(msg.dp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dotproduct_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dp: ";
    rosidl_generator_traits::value_to_yaml(msg.dp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dotproduct_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::Dotproduct_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::Dotproduct_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::Dotproduct_Response>()
{
  return "custom_interfaces::srv::Dotproduct_Response";
}

template<>
inline const char * name<custom_interfaces::srv::Dotproduct_Response>()
{
  return "custom_interfaces/srv/Dotproduct_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Dotproduct_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::Dotproduct_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::Dotproduct_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::Dotproduct>()
{
  return "custom_interfaces::srv::Dotproduct";
}

template<>
inline const char * name<custom_interfaces::srv::Dotproduct>()
{
  return "custom_interfaces/srv/Dotproduct";
}

template<>
struct has_fixed_size<custom_interfaces::srv::Dotproduct>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::Dotproduct_Request>::value &&
    has_fixed_size<custom_interfaces::srv::Dotproduct_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::Dotproduct>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::Dotproduct_Request>::value &&
    has_bounded_size<custom_interfaces::srv::Dotproduct_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::Dotproduct>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::Dotproduct_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::Dotproduct_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__TRAITS_HPP_
