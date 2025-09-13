// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:srv/TriggerOperatingState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__BUILDER_HPP_
#define CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/srv/detail/trigger_operating_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::srv::TriggerOperatingState_Request>()
{
  return ::crtk_msgs::srv::TriggerOperatingState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace crtk_msgs


namespace crtk_msgs
{

namespace srv
{

namespace builder
{

class Init_TriggerOperatingState_Response_operating_state
{
public:
  Init_TriggerOperatingState_Response_operating_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crtk_msgs::srv::TriggerOperatingState_Response operating_state(::crtk_msgs::srv::TriggerOperatingState_Response::_operating_state_type arg)
  {
    msg_.operating_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::srv::TriggerOperatingState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::srv::TriggerOperatingState_Response>()
{
  return crtk_msgs::srv::builder::Init_TriggerOperatingState_Response_operating_state();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__BUILDER_HPP_
