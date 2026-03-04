// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Vector4.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VECTOR4__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__VECTOR4__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Vector4 in the package custom_interfaces.
/**
  * this is a four vector in free space
 */
typedef struct custom_interfaces__msg__Vector4
{
  double x;
  double y;
  double z;
  double u;
} custom_interfaces__msg__Vector4;

// Struct for a sequence of custom_interfaces__msg__Vector4.
typedef struct custom_interfaces__msg__Vector4__Sequence
{
  custom_interfaces__msg__Vector4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Vector4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VECTOR4__STRUCT_H_
