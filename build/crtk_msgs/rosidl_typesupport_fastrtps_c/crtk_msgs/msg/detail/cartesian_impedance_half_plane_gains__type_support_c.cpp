// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from crtk_msgs:msg/CartesianImpedanceHalfPlaneGains.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "crtk_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__struct.h"
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // bias, d, deadband, p

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crtk_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crtk_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_crtk_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _CartesianImpedanceHalfPlaneGains__ros_msg_type = crtk_msgs__msg__CartesianImpedanceHalfPlaneGains;

static bool _CartesianImpedanceHalfPlaneGains__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartesianImpedanceHalfPlaneGains__ros_msg_type * ros_message = static_cast<const _CartesianImpedanceHalfPlaneGains__ros_msg_type *>(untyped_ros_message);
  // Field name: p
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->p, cdr))
    {
      return false;
    }
  }

  // Field name: d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->d, cdr))
    {
      return false;
    }
  }

  // Field name: bias
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bias, cdr))
    {
      return false;
    }
  }

  // Field name: deadband
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->deadband, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CartesianImpedanceHalfPlaneGains__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartesianImpedanceHalfPlaneGains__ros_msg_type * ros_message = static_cast<_CartesianImpedanceHalfPlaneGains__ros_msg_type *>(untyped_ros_message);
  // Field name: p
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->p))
    {
      return false;
    }
  }

  // Field name: d
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->d))
    {
      return false;
    }
  }

  // Field name: bias
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bias))
    {
      return false;
    }
  }

  // Field name: deadband
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->deadband))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crtk_msgs
size_t get_serialized_size_crtk_msgs__msg__CartesianImpedanceHalfPlaneGains(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianImpedanceHalfPlaneGains__ros_msg_type * ros_message = static_cast<const _CartesianImpedanceHalfPlaneGains__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name p

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->p), current_alignment);
  // field.name d

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->d), current_alignment);
  // field.name bias

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->bias), current_alignment);
  // field.name deadband

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->deadband), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CartesianImpedanceHalfPlaneGains__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_crtk_msgs__msg__CartesianImpedanceHalfPlaneGains(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_crtk_msgs
size_t max_serialized_size_crtk_msgs__msg__CartesianImpedanceHalfPlaneGains(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: p
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: d
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bias
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: deadband
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = crtk_msgs__msg__CartesianImpedanceHalfPlaneGains;
    is_plain =
      (
      offsetof(DataType, deadband) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CartesianImpedanceHalfPlaneGains__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_crtk_msgs__msg__CartesianImpedanceHalfPlaneGains(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CartesianImpedanceHalfPlaneGains = {
  "crtk_msgs::msg",
  "CartesianImpedanceHalfPlaneGains",
  _CartesianImpedanceHalfPlaneGains__cdr_serialize,
  _CartesianImpedanceHalfPlaneGains__cdr_deserialize,
  _CartesianImpedanceHalfPlaneGains__get_serialized_size,
  _CartesianImpedanceHalfPlaneGains__max_serialized_size
};

static rosidl_message_type_support_t _CartesianImpedanceHalfPlaneGains__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianImpedanceHalfPlaneGains,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crtk_msgs, msg, CartesianImpedanceHalfPlaneGains)() {
  return &_CartesianImpedanceHalfPlaneGains__type_support;
}

#if defined(__cplusplus)
}
#endif
