// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cisst_msgs:msg/BoolStamped.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__MSG__DETAIL__BOOL_STAMPED__TRAITS_HPP_
#define CISST_MSGS__MSG__DETAIL__BOOL_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cisst_msgs/msg/detail/bool_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace cisst_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoolStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoolStamped & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoolStamped & msg, bool use_flow_style = false)
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
  const cisst_msgs::msg::BoolStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  cisst_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cisst_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cisst_msgs::msg::BoolStamped & msg)
{
  return cisst_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cisst_msgs::msg::BoolStamped>()
{
  return "cisst_msgs::msg::BoolStamped";
}

template<>
inline const char * name<cisst_msgs::msg::BoolStamped>()
{
  return "cisst_msgs/msg/BoolStamped";
}

template<>
struct has_fixed_size<cisst_msgs::msg::BoolStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<cisst_msgs::msg::BoolStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<cisst_msgs::msg::BoolStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CISST_MSGS__MSG__DETAIL__BOOL_STAMPED__TRAITS_HPP_
