// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cisst_msgs:msg/IntervalStatistics.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__TRAITS_HPP_
#define CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cisst_msgs/msg/detail/interval_statistics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace cisst_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntervalStatistics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: period_avg
  {
    out << "period_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.period_avg, out);
    out << ", ";
  }

  // member: period_std_dev
  {
    out << "period_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.period_std_dev, out);
    out << ", ";
  }

  // member: period_min
  {
    out << "period_min: ";
    rosidl_generator_traits::value_to_yaml(msg.period_min, out);
    out << ", ";
  }

  // member: period_max
  {
    out << "period_max: ";
    rosidl_generator_traits::value_to_yaml(msg.period_max, out);
    out << ", ";
  }

  // member: compute_time_avg
  {
    out << "compute_time_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.compute_time_avg, out);
    out << ", ";
  }

  // member: compute_time_std_dev
  {
    out << "compute_time_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.compute_time_std_dev, out);
    out << ", ";
  }

  // member: compute_time_min
  {
    out << "compute_time_min: ";
    rosidl_generator_traits::value_to_yaml(msg.compute_time_min, out);
    out << ", ";
  }

  // member: compute_time_max
  {
    out << "compute_time_max: ";
    rosidl_generator_traits::value_to_yaml(msg.compute_time_max, out);
    out << ", ";
  }

  // member: number_of_samples
  {
    out << "number_of_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_samples, out);
    out << ", ";
  }

  // member: number_of_overruns
  {
    out << "number_of_overruns: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_overruns, out);
    out << ", ";
  }

  // member: statistics_interval
  {
    out << "statistics_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.statistics_interval, out);
    out << ", ";
  }

  // member: user_data
  {
    out << "user_data: ";
    rosidl_generator_traits::value_to_yaml(msg.user_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntervalStatistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: period_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.period_avg, out);
    out << "\n";
  }

  // member: period_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.period_std_dev, out);
    out << "\n";
  }

  // member: period_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_min: ";
    rosidl_generator_traits::value_to_yaml(msg.period_min, out);
    out << "\n";
  }

  // member: period_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_max: ";
    rosidl_generator_traits::value_to_yaml(msg.period_max, out);
    out << "\n";
  }

  // member: compute_time_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "compute_time_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.compute_time_avg, out);
    out << "\n";
  }

  // member: compute_time_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "compute_time_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.compute_time_std_dev, out);
    out << "\n";
  }

  // member: compute_time_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "compute_time_min: ";
    rosidl_generator_traits::value_to_yaml(msg.compute_time_min, out);
    out << "\n";
  }

  // member: compute_time_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "compute_time_max: ";
    rosidl_generator_traits::value_to_yaml(msg.compute_time_max, out);
    out << "\n";
  }

  // member: number_of_samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_samples, out);
    out << "\n";
  }

  // member: number_of_overruns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_overruns: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_overruns, out);
    out << "\n";
  }

  // member: statistics_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "statistics_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.statistics_interval, out);
    out << "\n";
  }

  // member: user_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_data: ";
    rosidl_generator_traits::value_to_yaml(msg.user_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntervalStatistics & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cisst_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cisst_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cisst_msgs::msg::IntervalStatistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  cisst_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cisst_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cisst_msgs::msg::IntervalStatistics & msg)
{
  return cisst_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cisst_msgs::msg::IntervalStatistics>()
{
  return "cisst_msgs::msg::IntervalStatistics";
}

template<>
inline const char * name<cisst_msgs::msg::IntervalStatistics>()
{
  return "cisst_msgs/msg/IntervalStatistics";
}

template<>
struct has_fixed_size<cisst_msgs::msg::IntervalStatistics>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<cisst_msgs::msg::IntervalStatistics>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<cisst_msgs::msg::IntervalStatistics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__TRAITS_HPP_
