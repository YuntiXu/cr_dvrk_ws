// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:msg/StringStamped.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__STRING_STAMPED__STRUCT_H_
#define CRTK_MSGS__MSG__DETAIL__STRING_STAMPED__STRUCT_H_

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
// Member 'string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StringStamped in the package crtk_msgs.
typedef struct crtk_msgs__msg__StringStamped
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String string;
} crtk_msgs__msg__StringStamped;

// Struct for a sequence of crtk_msgs__msg__StringStamped.
typedef struct crtk_msgs__msg__StringStamped__Sequence
{
  crtk_msgs__msg__StringStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__msg__StringStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__MSG__DETAIL__STRING_STAMPED__STRUCT_H_
