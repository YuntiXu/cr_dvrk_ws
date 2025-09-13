// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:msg/CartesianImpedance.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__STRUCT_H_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'force_orientation'
// Member 'torque_orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'force_position'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'position_positive'
// Member 'position_negative'
// Member 'orientation_positive'
// Member 'orientation_negative'
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__struct.h"

/// Struct defined in msg/CartesianImpedance in the package crtk_msgs.
typedef struct crtk_msgs__msg__CartesianImpedance
{
  std_msgs__msg__Header header;
  /// vf pos & ori
  geometry_msgs__msg__Quaternion force_orientation;
  geometry_msgs__msg__Vector3 force_position;
  geometry_msgs__msg__Quaternion torque_orientation;
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains position_positive;
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains position_negative;
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains orientation_positive;
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains orientation_negative;
} crtk_msgs__msg__CartesianImpedance;

// Struct for a sequence of crtk_msgs__msg__CartesianImpedance.
typedef struct crtk_msgs__msg__CartesianImpedance__Sequence
{
  crtk_msgs__msg__CartesianImpedance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__msg__CartesianImpedance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__STRUCT_H_
