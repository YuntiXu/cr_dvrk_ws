// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:msg/OperatingState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__BUILDER_HPP_
#define CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/msg/detail/operating_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace msg
{

namespace builder
{

class Init_OperatingState_is_busy
{
public:
  explicit Init_OperatingState_is_busy(::crtk_msgs::msg::OperatingState & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::msg::OperatingState is_busy(::crtk_msgs::msg::OperatingState::_is_busy_type arg)
  {
    msg_.is_busy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::msg::OperatingState msg_;
};

class Init_OperatingState_is_homed
{
public:
  explicit Init_OperatingState_is_homed(::crtk_msgs::msg::OperatingState & msg)
  : msg_(msg)
  {}
  Init_OperatingState_is_busy is_homed(::crtk_msgs::msg::OperatingState::_is_homed_type arg)
  {
    msg_.is_homed = std::move(arg);
    return Init_OperatingState_is_busy(msg_);
  }

private:
  ::crtk_msgs::msg::OperatingState msg_;
};

class Init_OperatingState_state
{
public:
  explicit Init_OperatingState_state(::crtk_msgs::msg::OperatingState & msg)
  : msg_(msg)
  {}
  Init_OperatingState_is_homed state(::crtk_msgs::msg::OperatingState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_OperatingState_is_homed(msg_);
  }

private:
  ::crtk_msgs::msg::OperatingState msg_;
};

class Init_OperatingState_header
{
public:
  Init_OperatingState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperatingState_state header(::crtk_msgs::msg::OperatingState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OperatingState_state(msg_);
  }

private:
  ::crtk_msgs::msg::OperatingState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::msg::OperatingState>()
{
  return crtk_msgs::msg::builder::Init_OperatingState_header();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__BUILDER_HPP_
