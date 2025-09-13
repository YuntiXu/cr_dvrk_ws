// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cisst_msgs:msg/IntervalStatistics.idl
// generated code does not contain a copyright notice
#include "cisst_msgs/msg/detail/interval_statistics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cisst_msgs/msg/detail/interval_statistics__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace cisst_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cisst_msgs
cdr_serialize(
  const cisst_msgs::msg::IntervalStatistics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: period_avg
  cdr << ros_message.period_avg;
  // Member: period_std_dev
  cdr << ros_message.period_std_dev;
  // Member: period_min
  cdr << ros_message.period_min;
  // Member: period_max
  cdr << ros_message.period_max;
  // Member: compute_time_avg
  cdr << ros_message.compute_time_avg;
  // Member: compute_time_std_dev
  cdr << ros_message.compute_time_std_dev;
  // Member: compute_time_min
  cdr << ros_message.compute_time_min;
  // Member: compute_time_max
  cdr << ros_message.compute_time_max;
  // Member: number_of_samples
  cdr << ros_message.number_of_samples;
  // Member: number_of_overruns
  cdr << ros_message.number_of_overruns;
  // Member: statistics_interval
  cdr << ros_message.statistics_interval;
  // Member: user_data
  cdr << ros_message.user_data;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cisst_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cisst_msgs::msg::IntervalStatistics & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: period_avg
  cdr >> ros_message.period_avg;

  // Member: period_std_dev
  cdr >> ros_message.period_std_dev;

  // Member: period_min
  cdr >> ros_message.period_min;

  // Member: period_max
  cdr >> ros_message.period_max;

  // Member: compute_time_avg
  cdr >> ros_message.compute_time_avg;

  // Member: compute_time_std_dev
  cdr >> ros_message.compute_time_std_dev;

  // Member: compute_time_min
  cdr >> ros_message.compute_time_min;

  // Member: compute_time_max
  cdr >> ros_message.compute_time_max;

  // Member: number_of_samples
  cdr >> ros_message.number_of_samples;

  // Member: number_of_overruns
  cdr >> ros_message.number_of_overruns;

  // Member: statistics_interval
  cdr >> ros_message.statistics_interval;

  // Member: user_data
  cdr >> ros_message.user_data;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cisst_msgs
get_serialized_size(
  const cisst_msgs::msg::IntervalStatistics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: period_avg
  {
    size_t item_size = sizeof(ros_message.period_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: period_std_dev
  {
    size_t item_size = sizeof(ros_message.period_std_dev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: period_min
  {
    size_t item_size = sizeof(ros_message.period_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: period_max
  {
    size_t item_size = sizeof(ros_message.period_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: compute_time_avg
  {
    size_t item_size = sizeof(ros_message.compute_time_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: compute_time_std_dev
  {
    size_t item_size = sizeof(ros_message.compute_time_std_dev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: compute_time_min
  {
    size_t item_size = sizeof(ros_message.compute_time_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: compute_time_max
  {
    size_t item_size = sizeof(ros_message.compute_time_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: number_of_samples
  {
    size_t item_size = sizeof(ros_message.number_of_samples);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: number_of_overruns
  {
    size_t item_size = sizeof(ros_message.number_of_overruns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: statistics_interval
  {
    size_t item_size = sizeof(ros_message.statistics_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_data
  {
    size_t item_size = sizeof(ros_message.user_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cisst_msgs
max_serialized_size_IntervalStatistics(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: period_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: period_std_dev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: period_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: period_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: compute_time_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: compute_time_std_dev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: compute_time_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: compute_time_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: number_of_samples
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: number_of_overruns
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: statistics_interval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: user_data
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
    using DataType = cisst_msgs::msg::IntervalStatistics;
    is_plain =
      (
      offsetof(DataType, user_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IntervalStatistics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cisst_msgs::msg::IntervalStatistics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IntervalStatistics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cisst_msgs::msg::IntervalStatistics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IntervalStatistics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cisst_msgs::msg::IntervalStatistics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IntervalStatistics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IntervalStatistics(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IntervalStatistics__callbacks = {
  "cisst_msgs::msg",
  "IntervalStatistics",
  _IntervalStatistics__cdr_serialize,
  _IntervalStatistics__cdr_deserialize,
  _IntervalStatistics__get_serialized_size,
  _IntervalStatistics__max_serialized_size
};

static rosidl_message_type_support_t _IntervalStatistics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IntervalStatistics__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cisst_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cisst_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cisst_msgs::msg::IntervalStatistics>()
{
  return &cisst_msgs::msg::typesupport_fastrtps_cpp::_IntervalStatistics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cisst_msgs, msg, IntervalStatistics)() {
  return &cisst_msgs::msg::typesupport_fastrtps_cpp::_IntervalStatistics__handle;
}

#ifdef __cplusplus
}
#endif
