// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/Dotproduct.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'v1'
// Member 'v2'
#include "custom_interfaces/msg/detail/vector4__struct.h"

/// Struct defined in srv/Dotproduct in the package custom_interfaces.
typedef struct custom_interfaces__srv__Dotproduct_Request
{
  custom_interfaces__msg__Vector4 v1;
  custom_interfaces__msg__Vector4 v2;
} custom_interfaces__srv__Dotproduct_Request;

// Struct for a sequence of custom_interfaces__srv__Dotproduct_Request.
typedef struct custom_interfaces__srv__Dotproduct_Request__Sequence
{
  custom_interfaces__srv__Dotproduct_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Dotproduct_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Dotproduct in the package custom_interfaces.
typedef struct custom_interfaces__srv__Dotproduct_Response
{
  double dp;
} custom_interfaces__srv__Dotproduct_Response;

// Struct for a sequence of custom_interfaces__srv__Dotproduct_Response.
typedef struct custom_interfaces__srv__Dotproduct_Response__Sequence
{
  custom_interfaces__srv__Dotproduct_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__Dotproduct_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__DOTPRODUCT__STRUCT_H_
