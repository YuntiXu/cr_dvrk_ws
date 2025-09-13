// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crtk_msgs:srv/TriggerOperatingState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__TRAITS_HPP_
#define CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crtk_msgs/srv/detail/trigger_operating_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crtk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerOperatingState_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerOperatingState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerOperatingState_Request & msg, bool use_flow_style = false)
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
  const crtk_msgs::srv::TriggerOperatingState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  crtk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crtk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const crtk_msgs::srv::TriggerOperatingState_Request & msg)
{
  return crtk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crtk_msgs::srv::TriggerOperatingState_Request>()
{
  return "crtk_msgs::srv::TriggerOperatingState_Request";
}

template<>
inline const char * name<crtk_msgs::srv::TriggerOperatingState_Request>()
{
  return "crtk_msgs/srv/TriggerOperatingState_Request";
}

template<>
struct has_fixed_size<crtk_msgs::srv::TriggerOperatingState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crtk_msgs::srv::TriggerOperatingState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crtk_msgs::srv::TriggerOperatingState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'operating_state'
#include "crtk_msgs/msg/detail/operating_state__traits.hpp"

namespace crtk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerOperatingState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: operating_state
  {
    out << "operating_state: ";
    to_flow_style_yaml(msg.operating_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerOperatingState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: operating_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operating_state:\n";
    to_block_style_yaml(msg.operating_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerOperatingState_Response & msg, bool use_flow_style = false)
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
  const crtk_msgs::srv::TriggerOperatingState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  crtk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crtk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const crtk_msgs::srv::TriggerOperatingState_Response & msg)
{
  return crtk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crtk_msgs::srv::TriggerOperatingState_Response>()
{
  return "crtk_msgs::srv::TriggerOperatingState_Response";
}

template<>
inline const char * name<crtk_msgs::srv::TriggerOperatingState_Response>()
{
  return "crtk_msgs/srv/TriggerOperatingState_Response";
}

template<>
struct has_fixed_size<crtk_msgs::srv::TriggerOperatingState_Response>
  : std::integral_constant<bool, has_fixed_size<crtk_msgs::msg::OperatingState>::value> {};

template<>
struct has_bounded_size<crtk_msgs::srv::TriggerOperatingState_Response>
  : std::integral_constant<bool, has_bounded_size<crtk_msgs::msg::OperatingState>::value> {};

template<>
struct is_message<crtk_msgs::srv::TriggerOperatingState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crtk_msgs::srv::TriggerOperatingState>()
{
  return "crtk_msgs::srv::TriggerOperatingState";
}

template<>
inline const char * name<crtk_msgs::srv::TriggerOperatingState>()
{
  return "crtk_msgs/srv/TriggerOperatingState";
}

template<>
struct has_fixed_size<crtk_msgs::srv::TriggerOperatingState>
  : std::integral_constant<
    bool,
    has_fixed_size<crtk_msgs::srv::TriggerOperatingState_Request>::value &&
    has_fixed_size<crtk_msgs::srv::TriggerOperatingState_Response>::value
  >
{
};

template<>
struct has_bounded_size<crtk_msgs::srv::TriggerOperatingState>
  : std::integral_constant<
    bool,
    has_bounded_size<crtk_msgs::srv::TriggerOperatingState_Request>::value &&
    has_bounded_size<crtk_msgs::srv::TriggerOperatingState_Response>::value
  >
{
};

template<>
struct is_service<crtk_msgs::srv::TriggerOperatingState>
  : std::true_type
{
};

template<>
struct is_service_request<crtk_msgs::srv::TriggerOperatingState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crtk_msgs::srv::TriggerOperatingState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__TRAITS_HPP_
