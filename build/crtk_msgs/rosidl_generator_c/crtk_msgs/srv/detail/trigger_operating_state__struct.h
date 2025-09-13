// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:srv/TriggerOperatingState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__STRUCT_H_
#define CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TriggerOperatingState in the package crtk_msgs.
typedef struct crtk_msgs__srv__TriggerOperatingState_Request
{
  uint8_t structure_needs_at_least_one_member;
} crtk_msgs__srv__TriggerOperatingState_Request;

// Struct for a sequence of crtk_msgs__srv__TriggerOperatingState_Request.
typedef struct crtk_msgs__srv__TriggerOperatingState_Request__Sequence
{
  crtk_msgs__srv__TriggerOperatingState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__srv__TriggerOperatingState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'operating_state'
#include "crtk_msgs/msg/detail/operating_state__struct.h"

/// Struct defined in srv/TriggerOperatingState in the package crtk_msgs.
typedef struct crtk_msgs__srv__TriggerOperatingState_Response
{
  crtk_msgs__msg__OperatingState operating_state;
} crtk_msgs__srv__TriggerOperatingState_Response;

// Struct for a sequence of crtk_msgs__srv__TriggerOperatingState_Response.
typedef struct crtk_msgs__srv__TriggerOperatingState_Response__Sequence
{
  crtk_msgs__srv__TriggerOperatingState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__srv__TriggerOperatingState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__STRUCT_H_
