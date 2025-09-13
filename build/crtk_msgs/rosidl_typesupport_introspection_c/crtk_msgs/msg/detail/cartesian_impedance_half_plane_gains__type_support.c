// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crtk_msgs:msg/CartesianImpedanceHalfPlaneGains.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__rosidl_typesupport_introspection_c.h"
#include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__functions.h"
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__struct.h"


// Include directives for member types
// Member `p`
// Member `d`
// Member `bias`
// Member `deadband`
#include "geometry_msgs/msg/vector3.h"
// Member `p`
// Member `d`
// Member `bias`
// Member `deadband`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(message_memory);
}

void crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_fini_function(void * message_memory)
{
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_member_array[4] = {
  {
    "p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains, p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains, d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains, bias),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "deadband",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains, deadband),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_members = {
  "crtk_msgs__msg",  // message namespace
  "CartesianImpedanceHalfPlaneGains",  // message name
  4,  // number of fields
  sizeof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains),
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_member_array,  // message members
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_init_function,  // function to initialize message memory (memory has to be allocated)
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_type_support_handle = {
  0,
  &crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, CartesianImpedanceHalfPlaneGains)() {
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_type_support_handle.typesupport_identifier) {
    crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__rosidl_typesupport_introspection_c__CartesianImpedanceHalfPlaneGains_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
