// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/Dotproduct.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'v1'
// Member 'v2'
#include "custom_interfaces/msg/detail/vector4__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__Dotproduct_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__Dotproduct_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Dotproduct_Request_
{
  using Type = Dotproduct_Request_<ContainerAllocator>;

  explicit Dotproduct_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : v1(_init),
    v2(_init)
  {
    (void)_init;
  }

  explicit Dotproduct_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : v1(_alloc, _init),
    v2(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _v1_type =
    custom_interfaces::msg::Vector4_<ContainerAllocator>;
  _v1_type v1;
  using _v2_type =
    custom_interfaces::msg::Vector4_<ContainerAllocator>;
  _v2_type v2;

  // setters for named parameter idiom
  Type & set__v1(
    const custom_interfaces::msg::Vector4_<ContainerAllocator> & _arg)
  {
    this->v1 = _arg;
    return *this;
  }
  Type & set__v2(
    const custom_interfaces::msg::Vector4_<ContainerAllocator> & _arg)
  {
    this->v2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__Dotproduct_Request
    std::shared_ptr<custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__Dotproduct_Request
    std::shared_ptr<custom_interfaces::srv::Dotproduct_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dotproduct_Request_ & other) const
  {
    if (this->v1 != other.v1) {
      return false;
    }
    if (this->v2 != other.v2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dotproduct_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dotproduct_Request_

// alias to use template instance with default allocator
using Dotproduct_Request =
  custom_interfaces::srv::Dotproduct_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__Dotproduct_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__Dotproduct_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Dotproduct_Response_
{
  using Type = Dotproduct_Response_<ContainerAllocator>;

  explicit Dotproduct_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dp = 0.0;
    }
  }

  explicit Dotproduct_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dp = 0.0;
    }
  }

  // field types and members
  using _dp_type =
    double;
  _dp_type dp;

  // setters for named parameter idiom
  Type & set__dp(
    const double & _arg)
  {
    this->dp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__Dotproduct_Response
    std::shared_ptr<custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__Dotproduct_Response
    std::shared_ptr<custom_interfaces::srv::Dotproduct_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dotproduct_Response_ & other) const
  {
    if (this->dp != other.dp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dotproduct_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dotproduct_Response_

// alias to use template instance with default allocator
using Dotproduct_Response =
  custom_interfaces::srv::Dotproduct_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct Dotproduct
{
  using Request = custom_interfaces::srv::Dotproduct_Request;
  using Response = custom_interfaces::srv::Dotproduct_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__STRUCT_HPP_
