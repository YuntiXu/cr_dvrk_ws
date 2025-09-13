// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:srv/QueryForwardKinematics.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__SRV__DETAIL__QUERY_FORWARD_KINEMATICS__STRUCT_H_
#define CRTK_MSGS__SRV__DETAIL__QUERY_FORWARD_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'jp'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'cp'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/QueryForwardKinematics in the package crtk_msgs.
typedef struct crtk_msgs__srv__QueryForwardKinematics_Request
{
  rosidl_runtime_c__double__Sequence jp;
  geometry_msgs__msg__Pose cp;
} crtk_msgs__srv__QueryForwardKinematics_Request;

// Struct for a sequence of crtk_msgs__srv__QueryForwardKinematics_Request.
typedef struct crtk_msgs__srv__QueryForwardKinematics_Request__Sequence
{
  crtk_msgs__srv__QueryForwardKinematics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__srv__QueryForwardKinematics_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cp'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/QueryForwardKinematics in the package crtk_msgs.
typedef struct crtk_msgs__srv__QueryForwardKinematics_Response
{
  geometry_msgs__msg__Pose cp;
  bool result;
  rosidl_runtime_c__String message;
} crtk_msgs__srv__QueryForwardKinematics_Response;

// Struct for a sequence of crtk_msgs__srv__QueryForwardKinematics_Response.
typedef struct crtk_msgs__srv__QueryForwardKinematics_Response__Sequence
{
  crtk_msgs__srv__QueryForwardKinematics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__srv__QueryForwardKinematics_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__SRV__DETAIL__QUERY_FORWARD_KINEMATICS__STRUCT_H_
