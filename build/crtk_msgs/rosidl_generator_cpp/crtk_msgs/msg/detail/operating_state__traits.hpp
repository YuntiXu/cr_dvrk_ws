// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crtk_msgs:msg/OperatingState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__TRAITS_HPP_
#define CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crtk_msgs/msg/detail/operating_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace crtk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OperatingState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: is_homed
  {
    out << "is_homed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_homed, out);
    out << ", ";
  }

  // member: is_busy
  {
    out << "is_busy: ";
    rosidl_generator_traits::value_to_yaml(msg.is_busy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OperatingState & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: is_homed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_homed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_homed, out);
    out << "\n";
  }

  // member: is_busy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_busy: ";
    rosidl_generator_traits::value_to_yaml(msg.is_busy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OperatingState & msg, bool use_flow_style = false)
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

}  // namespace crtk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use crtk_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crtk_msgs::msg::OperatingState & msg,
  std::ostream & out, size_t indentation = 0)
{
  crtk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crtk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const crtk_msgs::msg::OperatingState & msg)
{
  return crtk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crtk_msgs::msg::OperatingState>()
{
  return "crtk_msgs::msg::OperatingState";
}

template<>
inline const char * name<crtk_msgs::msg::OperatingState>()
{
  return "crtk_msgs/msg/OperatingState";
}

template<>
struct has_fixed_size<crtk_msgs::msg::OperatingState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crtk_msgs::msg::OperatingState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crtk_msgs::msg::OperatingState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__TRAITS_HPP_
