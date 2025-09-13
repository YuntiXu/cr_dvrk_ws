// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crtk_msgs:srv/QueryInverseKinematics.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__SRV__DETAIL__QUERY_INVERSE_KINEMATICS__TRAITS_HPP_
#define CRTK_MSGS__SRV__DETAIL__QUERY_INVERSE_KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crtk_msgs/srv/detail/query_inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cp'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace crtk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const QueryInverseKinematics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cp
  {
    out << "cp: ";
    to_flow_style_yaml(msg.cp, out);
    out << ", ";
  }

  // member: jp
  {
    if (msg.jp.size() == 0) {
      out << "jp: []";
    } else {
      out << "jp: [";
      size_t pending_items = msg.jp.size();
      for (auto item : msg.jp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QueryInverseKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cp:\n";
    to_block_style_yaml(msg.cp, out, indentation + 2);
  }

  // member: jp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jp.size() == 0) {
      out << "jp: []\n";
    } else {
      out << "jp:\n";
      for (auto item : msg.jp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QueryInverseKinematics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace crtk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use crtk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crtk_msgs::srv::QueryInverseKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  crtk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crtk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const crtk_msgs::srv::QueryInverseKinematics_Request & msg)
{
  return crtk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crtk_msgs::srv::QueryInverseKinematics_Request>()
{
  return "crtk_msgs::srv::QueryInverseKinematics_Request";
}

template<>
inline const char * name<crtk_msgs::srv::QueryInverseKinematics_Request>()
{
  return "crtk_msgs/srv/QueryInverseKinematics_Request";
}

template<>
struct has_fixed_size<crtk_msgs::srv::QueryInverseKinematics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crtk_msgs::srv::QueryInverseKinematics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crtk_msgs::srv::QueryInverseKinematics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace crtk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const QueryInverseKinematics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: jp
  {
    if (msg.jp.size() == 0) {
      out << "jp: []";
    } else {
      out << "jp: [";
      size_t pending_items = msg.jp.size();
      for (auto item : msg.jp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QueryInverseKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: jp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jp.size() == 0) {
      out << "jp: []\n";
    } else {
      out << "jp:\n";
      for (auto item : msg.jp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QueryInverseKinematics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace crtk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use crtk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crtk_msgs::srv::QueryInverseKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  crtk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crtk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const crtk_msgs::srv::QueryInverseKinematics_Response & msg)
{
  return crtk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crtk_msgs::srv::QueryInverseKinematics_Response>()
{
  return "crtk_msgs::srv::QueryInverseKinematics_Response";
}

template<>
inline const char * name<crtk_msgs::srv::QueryInverseKinematics_Response>()
{
  return "crtk_msgs/srv/QueryInverseKinematics_Response";
}

template<>
struct has_fixed_size<crtk_msgs::srv::QueryInverseKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crtk_msgs::srv::QueryInverseKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crtk_msgs::srv::QueryInverseKinematics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crtk_msgs::srv::QueryInverseKinematics>()
{
  return "crtk_msgs::srv::QueryInverseKinematics";
}

template<>
inline const char * name<crtk_msgs::srv::QueryInverseKinematics>()
{
  return "crtk_msgs/srv/QueryInverseKinematics";
}

template<>
struct has_fixed_size<crtk_msgs::srv::QueryInverseKinematics>
  : std::integral_constant<
    bool,
    has_fixed_size<crtk_msgs::srv::QueryInverseKinematics_Request>::value &&
    has_fixed_size<crtk_msgs::srv::QueryInverseKinematics_Response>::value
  >
{
};

template<>
struct has_bounded_size<crtk_msgs::srv::QueryInverseKinematics>
  : std::integral_constant<
    bool,
    has_bounded_size<crtk_msgs::srv::QueryInverseKinematics_Request>::value &&
    has_bounded_size<crtk_msgs::srv::QueryInverseKinematics_Response>::value
  >
{
};

template<>
struct is_service<crtk_msgs::srv::QueryInverseKinematics>
  : std::true_type
{
};

template<>
struct is_service_request<crtk_msgs::srv::QueryInverseKinematics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crtk_msgs::srv::QueryInverseKinematics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRTK_MSGS__SRV__DETAIL__QUERY_INVERSE_KINEMATICS__TRAITS_HPP_
