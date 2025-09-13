// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crtk_msgs:srv/QueryForwardKinematics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crtk_msgs/srv/detail/query_forward_kinematics__rosidl_typesupport_introspection_c.h"
#include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crtk_msgs/srv/detail/query_forward_kinematics__functions.h"
#include "crtk_msgs/srv/detail/query_forward_kinematics__struct.h"


// Include directives for member types
// Member `jp`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `cp`
#include "geometry_msgs/msg/pose.h"
// Member `cp`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crtk_msgs__srv__QueryForwardKinematics_Request__init(message_memory);
}

void crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_fini_function(void * message_memory)
{
  crtk_msgs__srv__QueryForwardKinematics_Request__fini(message_memory);
}

size_t crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__size_function__QueryForwardKinematics_Request__jp(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__get_const_function__QueryForwardKinematics_Request__jp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__get_function__QueryForwardKinematics_Request__jp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__fetch_function__QueryForwardKinematics_Request__jp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__get_const_function__QueryForwardKinematics_Request__jp(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__assign_function__QueryForwardKinematics_Request__jp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__get_function__QueryForwardKinematics_Request__jp(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__resize_function__QueryForwardKinematics_Request__jp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_member_array[2] = {
  {
    "jp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__srv__QueryForwardKinematics_Request, jp),  // bytes offset in struct
    NULL,  // default value
    crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__size_function__QueryForwardKinematics_Request__jp,  // size() function pointer
    crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__get_const_function__QueryForwardKinematics_Request__jp,  // get_const(index) function pointer
    crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__get_function__QueryForwardKinematics_Request__jp,  // get(index) function pointer
    crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__fetch_function__QueryForwardKinematics_Request__jp,  // fetch(index, &value) function pointer
    crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__assign_function__QueryForwardKinematics_Request__jp,  // assign(index, value) function pointer
    crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__resize_function__QueryForwardKinematics_Request__jp  // resize(index) function pointer
  },
  {
    "cp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__srv__QueryForwardKinematics_Request, cp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_members = {
  "crtk_msgs__srv",  // message namespace
  "QueryForwardKinematics_Request",  // message name
  2,  // number of fields
  sizeof(crtk_msgs__srv__QueryForwardKinematics_Request),
  crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_member_array,  // message members
  crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_type_support_handle = {
  0,
  &crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, QueryForwardKinematics_Request)() {
  crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_type_support_handle.typesupport_identifier) {
    crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crtk_msgs__srv__QueryForwardKinematics_Request__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "crtk_msgs/srv/detail/query_forward_kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "crtk_msgs/srv/detail/query_forward_kinematics__functions.h"
// already included above
// #include "crtk_msgs/srv/detail/query_forward_kinematics__struct.h"


// Include directives for member types
// Member `cp`
// already included above
// #include "geometry_msgs/msg/pose.h"
// Member `cp`
// already included above
// #include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crtk_msgs__srv__QueryForwardKinematics_Response__init(message_memory);
}

void crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_fini_function(void * message_memory)
{
  crtk_msgs__srv__QueryForwardKinematics_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_member_array[3] = {
  {
    "cp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__srv__QueryForwardKinematics_Response, cp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__srv__QueryForwardKinematics_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__srv__QueryForwardKinematics_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_members = {
  "crtk_msgs__srv",  // message namespace
  "QueryForwardKinematics_Response",  // message name
  3,  // number of fields
  sizeof(crtk_msgs__srv__QueryForwardKinematics_Response),
  crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_member_array,  // message members
  crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_type_support_handle = {
  0,
  &crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, QueryForwardKinematics_Response)() {
  crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_type_support_handle.typesupport_identifier) {
    crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crtk_msgs__srv__QueryForwardKinematics_Response__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "crtk_msgs/srv/detail/query_forward_kinematics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers crtk_msgs__srv__detail__query_forward_kinematics__rosidl_typesupport_introspection_c__QueryForwardKinematics_service_members = {
  "crtk_msgs__srv",  // service namespace
  "QueryForwardKinematics",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // crtk_msgs__srv__detail__query_forward_kinematics__rosidl_typesupport_introspection_c__QueryForwardKinematics_Request_message_type_support_handle,
  NULL  // response message
  // crtk_msgs__srv__detail__query_forward_kinematics__rosidl_typesupport_introspection_c__QueryForwardKinematics_Response_message_type_support_handle
};

static rosidl_service_type_support_t crtk_msgs__srv__detail__query_forward_kinematics__rosidl_typesupport_introspection_c__QueryForwardKinematics_service_type_support_handle = {
  0,
  &crtk_msgs__srv__detail__query_forward_kinematics__rosidl_typesupport_introspection_c__QueryForwardKinematics_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, QueryForwardKinematics_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, QueryForwardKinematics_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, QueryForwardKinematics)() {
  if (!crtk_msgs__srv__detail__query_forward_kinematics__rosidl_typesupport_introspection_c__QueryForwardKinematics_service_type_support_handle.typesupport_identifier) {
    crtk_msgs__srv__detail__query_forward_kinematics__rosidl_typesupport_introspection_c__QueryForwardKinematics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)crtk_msgs__srv__detail__query_forward_kinematics__rosidl_typesupport_introspection_c__QueryForwardKinematics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, QueryForwardKinematics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, QueryForwardKinematics_Response)()->data;
  }

  return &crtk_msgs__srv__detail__query_forward_kinematics__rosidl_typesupport_introspection_c__QueryForwardKinematics_service_type_support_handle;
}
