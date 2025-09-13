// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crtk_msgs:msg/CartesianImpedance.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__TRAITS_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crtk_msgs/msg/detail/cartesian_impedance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'force_orientation'
// Member 'torque_orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'force_position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'position_positive'
// Member 'position_negative'
// Member 'orientation_positive'
// Member 'orientation_negative'
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__traits.hpp"

namespace crtk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CartesianImpedance & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: force_orientation
  {
    out << "force_orientation: ";
    to_flow_style_yaml(msg.force_orientation, out);
    out << ", ";
  }

  // member: force_position
  {
    out << "force_position: ";
    to_flow_style_yaml(msg.force_position, out);
    out << ", ";
  }

  // member: torque_orientation
  {
    out << "torque_orientation: ";
    to_flow_style_yaml(msg.torque_orientation, out);
    out << ", ";
  }

  // member: position_positive
  {
    out << "position_positive: ";
    to_flow_style_yaml(msg.position_positive, out);
    out << ", ";
  }

  // member: position_negative
  {
    out << "position_negative: ";
    to_flow_style_yaml(msg.position_negative, out);
    out << ", ";
  }

  // member: orientation_positive
  {
    out << "orientation_positive: ";
    to_flow_style_yaml(msg.orientation_positive, out);
    out << ", ";
  }

  // member: orientation_negative
  {
    out << "orientation_negative: ";
    to_flow_style_yaml(msg.orientation_negative, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianImpedance & msg,
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

  // member: force_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_orientation:\n";
    to_block_style_yaml(msg.force_orientation, out, indentation + 2);
  }

  // member: force_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_position:\n";
    to_block_style_yaml(msg.force_position, out, indentation + 2);
  }

  // member: torque_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_orientation:\n";
    to_block_style_yaml(msg.torque_orientation, out, indentation + 2);
  }

  // member: position_positive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_positive:\n";
    to_block_style_yaml(msg.position_positive, out, indentation + 2);
  }

  // member: position_negative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_negative:\n";
    to_block_style_yaml(msg.position_negative, out, indentation + 2);
  }

  // member: orientation_positive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_positive:\n";
    to_block_style_yaml(msg.orientation_positive, out, indentation + 2);
  }

  // member: orientation_negative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_negative:\n";
    to_block_style_yaml(msg.orientation_negative, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianImpedance & msg, bool use_flow_style = false)
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
  const crtk_msgs::msg::CartesianImpedance & msg,
  std::ostream & out, size_t indentation = 0)
{
  crtk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crtk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const crtk_msgs::msg::CartesianImpedance & msg)
{
  return crtk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crtk_msgs::msg::CartesianImpedance>()
{
  return "crtk_msgs::msg::CartesianImpedance";
}

template<>
inline const char * name<crtk_msgs::msg::CartesianImpedance>()
{
  return "crtk_msgs/msg/CartesianImpedance";
}

template<>
struct has_fixed_size<crtk_msgs::msg::CartesianImpedance>
  : std::integral_constant<bool, has_fixed_size<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<crtk_msgs::msg::CartesianImpedance>
  : std::integral_constant<bool, has_bounded_size<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<crtk_msgs::msg::CartesianImpedance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__TRAITS_HPP_
