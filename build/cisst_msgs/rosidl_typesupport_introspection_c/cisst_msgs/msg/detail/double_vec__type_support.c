// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cisst_msgs:msg/DoubleVec.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cisst_msgs/msg/detail/double_vec__rosidl_typesupport_introspection_c.h"
#include "cisst_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cisst_msgs/msg/detail/double_vec__functions.h"
#include "cisst_msgs/msg/detail/double_vec__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cisst_msgs__msg__DoubleVec__init(message_memory);
}

void cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_fini_function(void * message_memory)
{
  cisst_msgs__msg__DoubleVec__fini(message_memory);
}

size_t cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__size_function__DoubleVec__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__get_const_function__DoubleVec__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__get_function__DoubleVec__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__fetch_function__DoubleVec__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__get_const_function__DoubleVec__data(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__assign_function__DoubleVec__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__get_function__DoubleVec__data(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__resize_function__DoubleVec__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cisst_msgs__msg__DoubleVec, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cisst_msgs__msg__DoubleVec, data),  // bytes offset in struct
    NULL,  // default value
    cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__size_function__DoubleVec__data,  // size() function pointer
    cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__get_const_function__DoubleVec__data,  // get_const(index) function pointer
    cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__get_function__DoubleVec__data,  // get(index) function pointer
    cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__fetch_function__DoubleVec__data,  // fetch(index, &value) function pointer
    cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__assign_function__DoubleVec__data,  // assign(index, value) function pointer
    cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__resize_function__DoubleVec__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_message_members = {
  "cisst_msgs__msg",  // message namespace
  "DoubleVec",  // message name
  2,  // number of fields
  sizeof(cisst_msgs__msg__DoubleVec),
  cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_message_member_array,  // message members
  cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_init_function,  // function to initialize message memory (memory has to be allocated)
  cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_message_type_support_handle = {
  0,
  &cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cisst_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cisst_msgs, msg, DoubleVec)() {
  cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_message_type_support_handle.typesupport_identifier) {
    cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cisst_msgs__msg__DoubleVec__rosidl_typesupport_introspection_c__DoubleVec_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
