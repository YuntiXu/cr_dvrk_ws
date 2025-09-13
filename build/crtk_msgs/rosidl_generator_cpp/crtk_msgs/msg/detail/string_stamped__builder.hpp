// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:msg/StringStamped.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_
#define CRTK_MSGS__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/msg/detail/string_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace msg
{

namespace builder
{

class Init_StringStamped_string
{
public:
  explicit Init_StringStamped_string(::crtk_msgs::msg::StringStamped & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::msg::StringStamped string(::crtk_msgs::msg::StringStamped::_string_type arg)
  {
    msg_.string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::msg::StringStamped msg_;
};

class Init_StringStamped_header
{
public:
  Init_StringStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StringStamped_string header(::crtk_msgs::msg::StringStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StringStamped_string(msg_);
  }

private:
  ::crtk_msgs::msg::StringStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::msg::StringStamped>()
{
  return crtk_msgs::msg::builder::Init_StringStamped_header();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_
