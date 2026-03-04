// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/Hardwarestatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__HARDWARESTATUS__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__HARDWARESTATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__Hardwarestatus __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__Hardwarestatus __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Hardwarestatus_
{
  using Type = Hardwarestatus_<ContainerAllocator>;

  explicit Hardwarestatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ledstatus = false;
      this->temperature = 0.0;
      this->debug_msg = "";
    }
  }

  explicit Hardwarestatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ledstatus = false;
      this->temperature = 0.0;
      this->debug_msg = "";
    }
  }

  // field types and members
  using _ledstatus_type =
    bool;
  _ledstatus_type ledstatus;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _debug_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _debug_msg_type debug_msg;

  // setters for named parameter idiom
  Type & set__ledstatus(
    const bool & _arg)
  {
    this->ledstatus = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__debug_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->debug_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::Hardwarestatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::Hardwarestatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::Hardwarestatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::Hardwarestatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Hardwarestatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Hardwarestatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Hardwarestatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Hardwarestatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::Hardwarestatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::Hardwarestatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__Hardwarestatus
    std::shared_ptr<custom_interfaces::msg::Hardwarestatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__Hardwarestatus
    std::shared_ptr<custom_interfaces::msg::Hardwarestatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Hardwarestatus_ & other) const
  {
    if (this->ledstatus != other.ledstatus) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->debug_msg != other.debug_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const Hardwarestatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Hardwarestatus_

// alias to use template instance with default allocator
using Hardwarestatus =
  custom_interfaces::msg::Hardwarestatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__HARDWARESTATUS__STRUCT_HPP_
