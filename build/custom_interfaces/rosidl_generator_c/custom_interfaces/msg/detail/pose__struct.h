// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__POSE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "custom_interfaces/msg/detail/point__struct.h"
// Member 'orientation'
#include "custom_interfaces/msg/detail/quaternion__struct.h"

/// Struct defined in msg/Pose in the package custom_interfaces.
/**
  * A representation of pose in free space, composed of position and orientation.
 */
typedef struct custom_interfaces__msg__Pose
{
  custom_interfaces__msg__Point position;
  custom_interfaces__msg__Quaternion orientation;
} custom_interfaces__msg__Pose;

// Struct for a sequence of custom_interfaces__msg__Pose.
typedef struct custom_interfaces__msg__Pose__Sequence
{
  custom_interfaces__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__POSE__STRUCT_H_
