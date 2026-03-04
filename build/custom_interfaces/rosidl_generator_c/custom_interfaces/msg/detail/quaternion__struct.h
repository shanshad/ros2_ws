// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__QUATERNION__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__QUATERNION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Quaternion in the package custom_interfaces.
/**
  * This represents an orientation in free space in quaternion form.
 */
typedef struct custom_interfaces__msg__Quaternion
{
  double x;
  double y;
  double z;
  double w;
} custom_interfaces__msg__Quaternion;

// Struct for a sequence of custom_interfaces__msg__Quaternion.
typedef struct custom_interfaces__msg__Quaternion__Sequence
{
  custom_interfaces__msg__Quaternion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Quaternion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__QUATERNION__STRUCT_H_
