// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cisst_msgs:srv/ConvertFloat64Array.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cisst_msgs/srv/detail/convert_float64_array__rosidl_typesupport_introspection_c.h"
#include "cisst_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cisst_msgs/srv/detail/convert_float64_array__functions.h"
#include "cisst_msgs/srv/detail/convert_float64_array__struct.h"


// Include directives for member types
// Member `input`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cisst_msgs__srv__ConvertFloat64Array_Request__init(message_memory);
}

void cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_fini_function(void * message_memory)
{
  cisst_msgs__srv__ConvertFloat64Array_Request__fini(message_memory);
}

size_t cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__size_function__ConvertFloat64Array_Request__input(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__get_const_function__ConvertFloat64Array_Request__input(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__get_function__ConvertFloat64Array_Request__input(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__fetch_function__ConvertFloat64Array_Request__input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__get_const_function__ConvertFloat64Array_Request__input(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__assign_function__ConvertFloat64Array_Request__input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__get_function__ConvertFloat64Array_Request__input(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__resize_function__ConvertFloat64Array_Request__input(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_message_member_array[1] = {
  {
    "input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cisst_msgs__srv__ConvertFloat64Array_Request, input),  // bytes offset in struct
    NULL,  // default value
    cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__size_function__ConvertFloat64Array_Request__input,  // size() function pointer
    cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__get_const_function__ConvertFloat64Array_Request__input,  // get_const(index) function pointer
    cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__get_function__ConvertFloat64Array_Request__input,  // get(index) function pointer
    cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__fetch_function__ConvertFloat64Array_Request__input,  // fetch(index, &value) function pointer
    cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__assign_function__ConvertFloat64Array_Request__input,  // assign(index, value) function pointer
    cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__resize_function__ConvertFloat64Array_Request__input  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_message_members = {
  "cisst_msgs__srv",  // message namespace
  "ConvertFloat64Array_Request",  // message name
  1,  // number of fields
  sizeof(cisst_msgs__srv__ConvertFloat64Array_Request),
  cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_message_member_array,  // message members
  cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_message_type_support_handle = {
  0,
  &cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cisst_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cisst_msgs, srv, ConvertFloat64Array_Request)() {
  if (!cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_message_type_support_handle.typesupport_identifier) {
    cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cisst_msgs__srv__ConvertFloat64Array_Request__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cisst_msgs/srv/detail/convert_float64_array__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cisst_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cisst_msgs/srv/detail/convert_float64_array__functions.h"
// already included above
// #include "cisst_msgs/srv/detail/convert_float64_array__struct.h"


// Include directives for member types
// Member `output`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cisst_msgs__srv__ConvertFloat64Array_Response__init(message_memory);
}

void cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_fini_function(void * message_memory)
{
  cisst_msgs__srv__ConvertFloat64Array_Response__fini(message_memory);
}

size_t cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__size_function__ConvertFloat64Array_Response__output(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__get_const_function__ConvertFloat64Array_Response__output(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__get_function__ConvertFloat64Array_Response__output(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__fetch_function__ConvertFloat64Array_Response__output(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__get_const_function__ConvertFloat64Array_Response__output(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__assign_function__ConvertFloat64Array_Response__output(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__get_function__ConvertFloat64Array_Response__output(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__resize_function__ConvertFloat64Array_Response__output(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_message_member_array[1] = {
  {
    "output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cisst_msgs__srv__ConvertFloat64Array_Response, output),  // bytes offset in struct
    NULL,  // default value
    cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__size_function__ConvertFloat64Array_Response__output,  // size() function pointer
    cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__get_const_function__ConvertFloat64Array_Response__output,  // get_const(index) function pointer
    cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__get_function__ConvertFloat64Array_Response__output,  // get(index) function pointer
    cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__fetch_function__ConvertFloat64Array_Response__output,  // fetch(index, &value) function pointer
    cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__assign_function__ConvertFloat64Array_Response__output,  // assign(index, value) function pointer
    cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__resize_function__ConvertFloat64Array_Response__output  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_message_members = {
  "cisst_msgs__srv",  // message namespace
  "ConvertFloat64Array_Response",  // message name
  1,  // number of fields
  sizeof(cisst_msgs__srv__ConvertFloat64Array_Response),
  cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_message_member_array,  // message members
  cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_message_type_support_handle = {
  0,
  &cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cisst_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cisst_msgs, srv, ConvertFloat64Array_Response)() {
  if (!cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_message_type_support_handle.typesupport_identifier) {
    cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cisst_msgs__srv__ConvertFloat64Array_Response__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cisst_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cisst_msgs/srv/detail/convert_float64_array__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cisst_msgs__srv__detail__convert_float64_array__rosidl_typesupport_introspection_c__ConvertFloat64Array_service_members = {
  "cisst_msgs__srv",  // service namespace
  "ConvertFloat64Array",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cisst_msgs__srv__detail__convert_float64_array__rosidl_typesupport_introspection_c__ConvertFloat64Array_Request_message_type_support_handle,
  NULL  // response message
  // cisst_msgs__srv__detail__convert_float64_array__rosidl_typesupport_introspection_c__ConvertFloat64Array_Response_message_type_support_handle
};

static rosidl_service_type_support_t cisst_msgs__srv__detail__convert_float64_array__rosidl_typesupport_introspection_c__ConvertFloat64Array_service_type_support_handle = {
  0,
  &cisst_msgs__srv__detail__convert_float64_array__rosidl_typesupport_introspection_c__ConvertFloat64Array_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cisst_msgs, srv, ConvertFloat64Array_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cisst_msgs, srv, ConvertFloat64Array_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cisst_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cisst_msgs, srv, ConvertFloat64Array)() {
  if (!cisst_msgs__srv__detail__convert_float64_array__rosidl_typesupport_introspection_c__ConvertFloat64Array_service_type_support_handle.typesupport_identifier) {
    cisst_msgs__srv__detail__convert_float64_array__rosidl_typesupport_introspection_c__ConvertFloat64Array_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cisst_msgs__srv__detail__convert_float64_array__rosidl_typesupport_introspection_c__ConvertFloat64Array_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cisst_msgs, srv, ConvertFloat64Array_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cisst_msgs, srv, ConvertFloat64Array_Response)()->data;
  }

  return &cisst_msgs__srv__detail__convert_float64_array__rosidl_typesupport_introspection_c__ConvertFloat64Array_service_type_support_handle;
}
