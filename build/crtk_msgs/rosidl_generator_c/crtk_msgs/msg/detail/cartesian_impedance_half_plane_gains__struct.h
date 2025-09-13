// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:msg/CartesianImpedanceHalfPlaneGains.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__STRUCT_H_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'p'
// Member 'd'
// Member 'bias'
// Member 'deadband'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/CartesianImpedanceHalfPlaneGains in the package crtk_msgs.
typedef struct crtk_msgs__msg__CartesianImpedanceHalfPlaneGains
{
  geometry_msgs__msg__Vector3 p;
  geometry_msgs__msg__Vector3 d;
  geometry_msgs__msg__Vector3 bias;
  geometry_msgs__msg__Vector3 deadband;
} crtk_msgs__msg__CartesianImpedanceHalfPlaneGains;

// Struct for a sequence of crtk_msgs__msg__CartesianImpedanceHalfPlaneGains.
typedef struct crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence
{
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__STRUCT_H_
