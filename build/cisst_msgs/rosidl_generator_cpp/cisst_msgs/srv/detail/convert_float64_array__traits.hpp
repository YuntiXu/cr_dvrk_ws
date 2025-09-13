// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cisst_msgs:srv/ConvertFloat64Array.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__TRAITS_HPP_
#define CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cisst_msgs/srv/detail/convert_float64_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cisst_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConvertFloat64Array_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    if (msg.input.size() == 0) {
      out << "input: []";
    } else {
      out << "input: [";
      size_t pending_items = msg.input.size();
      for (auto item : msg.input) {
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
  const ConvertFloat64Array_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input.size() == 0) {
      out << "input: []\n";
    } else {
      out << "input:\n";
      for (auto item : msg.input) {
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

inline std::string to_yaml(const ConvertFloat64Array_Request & msg, bool use_flow_style = false)
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

}  // namespace cisst_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cisst_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cisst_msgs::srv::ConvertFloat64Array_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cisst_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cisst_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cisst_msgs::srv::ConvertFloat64Array_Request & msg)
{
  return cisst_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cisst_msgs::srv::ConvertFloat64Array_Request>()
{
  return "cisst_msgs::srv::ConvertFloat64Array_Request";
}

template<>
inline const char * name<cisst_msgs::srv::ConvertFloat64Array_Request>()
{
  return "cisst_msgs/srv/ConvertFloat64Array_Request";
}

template<>
struct has_fixed_size<cisst_msgs::srv::ConvertFloat64Array_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cisst_msgs::srv::ConvertFloat64Array_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cisst_msgs::srv::ConvertFloat64Array_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cisst_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConvertFloat64Array_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: output
  {
    if (msg.output.size() == 0) {
      out << "output: []";
    } else {
      out << "output: [";
      size_t pending_items = msg.output.size();
      for (auto item : msg.output) {
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
  const ConvertFloat64Array_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output.size() == 0) {
      out << "output: []\n";
    } else {
      out << "output:\n";
      for (auto item : msg.output) {
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

inline std::string to_yaml(const ConvertFloat64Array_Response & msg, bool use_flow_style = false)
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

}  // namespace cisst_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cisst_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cisst_msgs::srv::ConvertFloat64Array_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cisst_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cisst_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cisst_msgs::srv::ConvertFloat64Array_Response & msg)
{
  return cisst_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cisst_msgs::srv::ConvertFloat64Array_Response>()
{
  return "cisst_msgs::srv::ConvertFloat64Array_Response";
}

template<>
inline const char * name<cisst_msgs::srv::ConvertFloat64Array_Response>()
{
  return "cisst_msgs/srv/ConvertFloat64Array_Response";
}

template<>
struct has_fixed_size<cisst_msgs::srv::ConvertFloat64Array_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cisst_msgs::srv::ConvertFloat64Array_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cisst_msgs::srv::ConvertFloat64Array_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cisst_msgs::srv::ConvertFloat64Array>()
{
  return "cisst_msgs::srv::ConvertFloat64Array";
}

template<>
inline const char * name<cisst_msgs::srv::ConvertFloat64Array>()
{
  return "cisst_msgs/srv/ConvertFloat64Array";
}

template<>
struct has_fixed_size<cisst_msgs::srv::ConvertFloat64Array>
  : std::integral_constant<
    bool,
    has_fixed_size<cisst_msgs::srv::ConvertFloat64Array_Request>::value &&
    has_fixed_size<cisst_msgs::srv::ConvertFloat64Array_Response>::value
  >
{
};

template<>
struct has_bounded_size<cisst_msgs::srv::ConvertFloat64Array>
  : std::integral_constant<
    bool,
    has_bounded_size<cisst_msgs::srv::ConvertFloat64Array_Request>::value &&
    has_bounded_size<cisst_msgs::srv::ConvertFloat64Array_Response>::value
  >
{
};

template<>
struct is_service<cisst_msgs::srv::ConvertFloat64Array>
  : std::true_type
{
};

template<>
struct is_service_request<cisst_msgs::srv::ConvertFloat64Array_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cisst_msgs::srv::ConvertFloat64Array_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__TRAITS_HPP_
