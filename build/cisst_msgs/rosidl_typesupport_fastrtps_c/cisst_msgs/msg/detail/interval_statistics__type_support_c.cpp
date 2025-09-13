// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cisst_msgs:msg/IntervalStatistics.idl
// generated code does not contain a copyright notice
#include "cisst_msgs/msg/detail/interval_statistics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cisst_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cisst_msgs/msg/detail/interval_statistics__struct.h"
#include "cisst_msgs/msg/detail/interval_statistics__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cisst_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cisst_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cisst_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _IntervalStatistics__ros_msg_type = cisst_msgs__msg__IntervalStatistics;

static bool _IntervalStatistics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IntervalStatistics__ros_msg_type * ros_message = static_cast<const _IntervalStatistics__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: period_avg
  {
    cdr << ros_message->period_avg;
  }

  // Field name: period_std_dev
  {
    cdr << ros_message->period_std_dev;
  }

  // Field name: period_min
  {
    cdr << ros_message->period_min;
  }

  // Field name: period_max
  {
    cdr << ros_message->period_max;
  }

  // Field name: compute_time_avg
  {
    cdr << ros_message->compute_time_avg;
  }

  // Field name: compute_time_std_dev
  {
    cdr << ros_message->compute_time_std_dev;
  }

  // Field name: compute_time_min
  {
    cdr << ros_message->compute_time_min;
  }

  // Field name: compute_time_max
  {
    cdr << ros_message->compute_time_max;
  }

  // Field name: number_of_samples
  {
    cdr << ros_message->number_of_samples;
  }

  // Field name: number_of_overruns
  {
    cdr << ros_message->number_of_overruns;
  }

  // Field name: statistics_interval
  {
    cdr << ros_message->statistics_interval;
  }

  // Field name: user_data
  {
    cdr << ros_message->user_data;
  }

  return true;
}

static bool _IntervalStatistics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IntervalStatistics__ros_msg_type * ros_message = static_cast<_IntervalStatistics__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: period_avg
  {
    cdr >> ros_message->period_avg;
  }

  // Field name: period_std_dev
  {
    cdr >> ros_message->period_std_dev;
  }

  // Field name: period_min
  {
    cdr >> ros_message->period_min;
  }

  // Field name: period_max
  {
    cdr >> ros_message->period_max;
  }

  // Field name: compute_time_avg
  {
    cdr >> ros_message->compute_time_avg;
  }

  // Field name: compute_time_std_dev
  {
    cdr >> ros_message->compute_time_std_dev;
  }

  // Field name: compute_time_min
  {
    cdr >> ros_message->compute_time_min;
  }

  // Field name: compute_time_max
  {
    cdr >> ros_message->compute_time_max;
  }

  // Field name: number_of_samples
  {
    cdr >> ros_message->number_of_samples;
  }

  // Field name: number_of_overruns
  {
    cdr >> ros_message->number_of_overruns;
  }

  // Field name: statistics_interval
  {
    cdr >> ros_message->statistics_interval;
  }

  // Field name: user_data
  {
    cdr >> ros_message->user_data;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cisst_msgs
size_t get_serialized_size_cisst_msgs__msg__IntervalStatistics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IntervalStatistics__ros_msg_type * ros_message = static_cast<const _IntervalStatistics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name period_avg
  {
    size_t item_size = sizeof(ros_message->period_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name period_std_dev
  {
    size_t item_size = sizeof(ros_message->period_std_dev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name period_min
  {
    size_t item_size = sizeof(ros_message->period_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name period_max
  {
    size_t item_size = sizeof(ros_message->period_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compute_time_avg
  {
    size_t item_size = sizeof(ros_message->compute_time_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compute_time_std_dev
  {
    size_t item_size = sizeof(ros_message->compute_time_std_dev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compute_time_min
  {
    size_t item_size = sizeof(ros_message->compute_time_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compute_time_max
  {
    size_t item_size = sizeof(ros_message->compute_time_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_samples
  {
    size_t item_size = sizeof(ros_message->number_of_samples);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_overruns
  {
    size_t item_size = sizeof(ros_message->number_of_overruns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name statistics_interval
  {
    size_t item_size = sizeof(ros_message->statistics_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name user_data
  {
    size_t item_size = sizeof(ros_message->user_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IntervalStatistics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cisst_msgs__msg__IntervalStatistics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cisst_msgs
size_t max_serialized_size_cisst_msgs__msg__IntervalStatistics(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: period_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: period_std_dev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: period_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: period_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: compute_time_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: compute_time_std_dev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: compute_time_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: compute_time_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: number_of_samples
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: number_of_overruns
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: statistics_interval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: user_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cisst_msgs__msg__IntervalStatistics;
    is_plain =
      (
      offsetof(DataType, user_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _IntervalStatistics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cisst_msgs__msg__IntervalStatistics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IntervalStatistics = {
  "cisst_msgs::msg",
  "IntervalStatistics",
  _IntervalStatistics__cdr_serialize,
  _IntervalStatistics__cdr_deserialize,
  _IntervalStatistics__get_serialized_size,
  _IntervalStatistics__max_serialized_size
};

static rosidl_message_type_support_t _IntervalStatistics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IntervalStatistics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cisst_msgs, msg, IntervalStatistics)() {
  return &_IntervalStatistics__type_support;
}

#if defined(__cplusplus)
}
#endif
