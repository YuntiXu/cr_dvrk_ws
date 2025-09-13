// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crtk_msgs:srv/TriggerOperatingState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crtk_msgs/srv/detail/trigger_operating_state__rosidl_typesupport_introspection_c.h"
#include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crtk_msgs/srv/detail/trigger_operating_state__functions.h"
#include "crtk_msgs/srv/detail/trigger_operating_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crtk_msgs__srv__TriggerOperatingState_Request__init(message_memory);
}

void crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_fini_function(void * message_memory)
{
  crtk_msgs__srv__TriggerOperatingState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__srv__TriggerOperatingState_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_message_members = {
  "crtk_msgs__srv",  // message namespace
  "TriggerOperatingState_Request",  // message name
  1,  // number of fields
  sizeof(crtk_msgs__srv__TriggerOperatingState_Request),
  crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_message_member_array,  // message members
  crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_message_type_support_handle = {
  0,
  &crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, TriggerOperatingState_Request)() {
  if (!crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_message_type_support_handle.typesupport_identifier) {
    crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crtk_msgs__srv__TriggerOperatingState_Request__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "crtk_msgs/srv/detail/trigger_operating_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "crtk_msgs/srv/detail/trigger_operating_state__functions.h"
// already included above
// #include "crtk_msgs/srv/detail/trigger_operating_state__struct.h"


// Include directives for member types
// Member `operating_state`
#include "crtk_msgs/msg/operating_state.h"
// Member `operating_state`
#include "crtk_msgs/msg/detail/operating_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crtk_msgs__srv__TriggerOperatingState_Response__init(message_memory);
}

void crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_fini_function(void * message_memory)
{
  crtk_msgs__srv__TriggerOperatingState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_member_array[1] = {
  {
    "operating_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__srv__TriggerOperatingState_Response, operating_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_members = {
  "crtk_msgs__srv",  // message namespace
  "TriggerOperatingState_Response",  // message name
  1,  // number of fields
  sizeof(crtk_msgs__srv__TriggerOperatingState_Response),
  crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_member_array,  // message members
  crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_type_support_handle = {
  0,
  &crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, TriggerOperatingState_Response)() {
  crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, OperatingState)();
  if (!crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_type_support_handle.typesupport_identifier) {
    crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crtk_msgs__srv__TriggerOperatingState_Response__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "crtk_msgs/srv/detail/trigger_operating_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers crtk_msgs__srv__detail__trigger_operating_state__rosidl_typesupport_introspection_c__TriggerOperatingState_service_members = {
  "crtk_msgs__srv",  // service namespace
  "TriggerOperatingState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // crtk_msgs__srv__detail__trigger_operating_state__rosidl_typesupport_introspection_c__TriggerOperatingState_Request_message_type_support_handle,
  NULL  // response message
  // crtk_msgs__srv__detail__trigger_operating_state__rosidl_typesupport_introspection_c__TriggerOperatingState_Response_message_type_support_handle
};

static rosidl_service_type_support_t crtk_msgs__srv__detail__trigger_operating_state__rosidl_typesupport_introspection_c__TriggerOperatingState_service_type_support_handle = {
  0,
  &crtk_msgs__srv__detail__trigger_operating_state__rosidl_typesupport_introspection_c__TriggerOperatingState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, TriggerOperatingState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, TriggerOperatingState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, TriggerOperatingState)() {
  if (!crtk_msgs__srv__detail__trigger_operating_state__rosidl_typesupport_introspection_c__TriggerOperatingState_service_type_support_handle.typesupport_identifier) {
    crtk_msgs__srv__detail__trigger_operating_state__rosidl_typesupport_introspection_c__TriggerOperatingState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)crtk_msgs__srv__detail__trigger_operating_state__rosidl_typesupport_introspection_c__TriggerOperatingState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, TriggerOperatingState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, srv, TriggerOperatingState_Response)()->data;
  }

  return &crtk_msgs__srv__detail__trigger_operating_state__rosidl_typesupport_introspection_c__TriggerOperatingState_service_type_support_handle;
}
