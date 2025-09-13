// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crtk_msgs:msg/CartesianImpedanceHalfPlaneGains.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__TRAITS_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'p'
// Member 'd'
// Member 'bias'
// Member 'deadband'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace crtk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CartesianImpedanceHalfPlaneGains & msg,
  std::ostream & out)
{
  out << "{";
  // member: p
  {
    out << "p: ";
    to_flow_style_yaml(msg.p, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    to_flow_style_yaml(msg.d, out);
    out << ", ";
  }

  // member: bias
  {
    out << "bias: ";
    to_flow_style_yaml(msg.bias, out);
    out << ", ";
  }

  // member: deadband
  {
    out << "deadband: ";
    to_flow_style_yaml(msg.deadband, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianImpedanceHalfPlaneGains & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p:\n";
    to_block_style_yaml(msg.p, out, indentation + 2);
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d:\n";
    to_block_style_yaml(msg.d, out, indentation + 2);
  }

  // member: bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bias:\n";
    to_block_style_yaml(msg.bias, out, indentation + 2);
  }

  // member: deadband
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deadband:\n";
    to_block_style_yaml(msg.deadband, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianImpedanceHalfPlaneGains & msg, bool use_flow_style = false)
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
  const crtk_msgs::msg::CartesianImpedanceHalfPlaneGains & msg,
  std::ostream & out, size_t indentation = 0)
{
  crtk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crtk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const crtk_msgs::msg::CartesianImpedanceHalfPlaneGains & msg)
{
  return crtk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains>()
{
  return "crtk_msgs::msg::CartesianImpedanceHalfPlaneGains";
}

template<>
inline const char * name<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains>()
{
  return "crtk_msgs/msg/CartesianImpedanceHalfPlaneGains";
}

template<>
struct has_fixed_size<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__TRAITS_HPP_
