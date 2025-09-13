// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cisst_msgs:srv/ConvertFloat64Array.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__STRUCT_H_
#define CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ConvertFloat64Array in the package cisst_msgs.
typedef struct cisst_msgs__srv__ConvertFloat64Array_Request
{
  rosidl_runtime_c__double__Sequence input;
} cisst_msgs__srv__ConvertFloat64Array_Request;

// Struct for a sequence of cisst_msgs__srv__ConvertFloat64Array_Request.
typedef struct cisst_msgs__srv__ConvertFloat64Array_Request__Sequence
{
  cisst_msgs__srv__ConvertFloat64Array_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cisst_msgs__srv__ConvertFloat64Array_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ConvertFloat64Array in the package cisst_msgs.
typedef struct cisst_msgs__srv__ConvertFloat64Array_Response
{
  rosidl_runtime_c__double__Sequence output;
} cisst_msgs__srv__ConvertFloat64Array_Response;

// Struct for a sequence of cisst_msgs__srv__ConvertFloat64Array_Response.
typedef struct cisst_msgs__srv__ConvertFloat64Array_Response__Sequence
{
  cisst_msgs__srv__ConvertFloat64Array_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cisst_msgs__srv__ConvertFloat64Array_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__STRUCT_H_
