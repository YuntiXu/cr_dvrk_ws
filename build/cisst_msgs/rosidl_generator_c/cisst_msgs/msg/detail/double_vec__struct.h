// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cisst_msgs:msg/DoubleVec.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__MSG__DETAIL__DOUBLE_VEC__STRUCT_H_
#define CISST_MSGS__MSG__DETAIL__DOUBLE_VEC__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DoubleVec in the package cisst_msgs.
typedef struct cisst_msgs__msg__DoubleVec
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__double__Sequence data;
} cisst_msgs__msg__DoubleVec;

// Struct for a sequence of cisst_msgs__msg__DoubleVec.
typedef struct cisst_msgs__msg__DoubleVec__Sequence
{
  cisst_msgs__msg__DoubleVec * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cisst_msgs__msg__DoubleVec__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CISST_MSGS__MSG__DETAIL__DOUBLE_VEC__STRUCT_H_
