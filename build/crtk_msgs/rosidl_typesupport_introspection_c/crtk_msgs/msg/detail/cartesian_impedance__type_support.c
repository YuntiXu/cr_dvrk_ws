// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crtk_msgs:msg/CartesianImpedance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crtk_msgs/msg/detail/cartesian_impedance__rosidl_typesupport_introspection_c.h"
#include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crtk_msgs/msg/detail/cartesian_impedance__functions.h"
#include "crtk_msgs/msg/detail/cartesian_impedance__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `force_orientation`
// Member `torque_orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `force_orientation`
// Member `torque_orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `force_position`
#include "geometry_msgs/msg/vector3.h"
// Member `force_position`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `position_positive`
// Member `position_negative`
// Member `orientation_positive`
// Member `orientation_negative`
#include "crtk_msgs/msg/cartesian_impedance_half_plane_gains.h"
// Member `position_positive`
// Member `position_negative`
// Member `orientation_positive`
// Member `orientation_negative`
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crtk_msgs__msg__CartesianImpedance__init(message_memory);
}

void crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_fini_function(void * message_memory)
{
  crtk_msgs__msg__CartesianImpedance__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedance, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedance, force_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedance, force_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedance, torque_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_positive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedance, position_positive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_negative",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedance, position_negative),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_positive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedance, orientation_positive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_negative",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianImpedance, orientation_negative),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_members = {
  "crtk_msgs__msg",  // message namespace
  "CartesianImpedance",  // message name
  8,  // number of fields
  sizeof(crtk_msgs__msg__CartesianImpedance),
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array,  // message members
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_init_function,  // function to initialize message memory (memory has to be allocated)
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_type_support_handle = {
  0,
  &crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, CartesianImpedance)() {
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, CartesianImpedanceHalfPlaneGains)();
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, CartesianImpedanceHalfPlaneGains)();
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, CartesianImpedanceHalfPlaneGains)();
  crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, CartesianImpedanceHalfPlaneGains)();
  if (!crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_type_support_handle.typesupport_identifier) {
    crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crtk_msgs__msg__CartesianImpedance__rosidl_typesupport_introspection_c__CartesianImpedance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
