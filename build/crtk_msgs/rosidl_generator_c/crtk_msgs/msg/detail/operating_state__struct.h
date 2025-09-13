// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:msg/OperatingState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__STRUCT_H_
#define CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__STRUCT_H_

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
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OperatingState in the package crtk_msgs.
/**
  * See https://github.com/collaborative-robotics/documentation/wiki/Robot-API-status
  *
  * Standard states include DISABLED, ENABLED, PAUSED and FAULT
 */
typedef struct crtk_msgs__msg__OperatingState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String state;
  bool is_homed;
  bool is_busy;
} crtk_msgs__msg__OperatingState;

// Struct for a sequence of crtk_msgs__msg__OperatingState.
typedef struct crtk_msgs__msg__OperatingState__Sequence
{
  crtk_msgs__msg__OperatingState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__msg__OperatingState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__STRUCT_H_
