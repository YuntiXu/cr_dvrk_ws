// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:srv/QueryForwardKinematics.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__SRV__DETAIL__QUERY_FORWARD_KINEMATICS__BUILDER_HPP_
#define CRTK_MSGS__SRV__DETAIL__QUERY_FORWARD_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/srv/detail/query_forward_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace srv
{

namespace builder
{

class Init_QueryForwardKinematics_Request_cp
{
public:
  explicit Init_QueryForwardKinematics_Request_cp(::crtk_msgs::srv::QueryForwardKinematics_Request & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::srv::QueryForwardKinematics_Request cp(::crtk_msgs::srv::QueryForwardKinematics_Request::_cp_type arg)
  {
    msg_.cp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::srv::QueryForwardKinematics_Request msg_;
};

class Init_QueryForwardKinematics_Request_jp
{
public:
  Init_QueryForwardKinematics_Request_jp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryForwardKinematics_Request_cp jp(::crtk_msgs::srv::QueryForwardKinematics_Request::_jp_type arg)
  {
    msg_.jp = std::move(arg);
    return Init_QueryForwardKinematics_Request_cp(msg_);
  }

private:
  ::crtk_msgs::srv::QueryForwardKinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::srv::QueryForwardKinematics_Request>()
{
  return crtk_msgs::srv::builder::Init_QueryForwardKinematics_Request_jp();
}

}  // namespace crtk_msgs


namespace crtk_msgs
{

namespace srv
{

namespace builder
{

class Init_QueryForwardKinematics_Response_message
{
public:
  explicit Init_QueryForwardKinematics_Response_message(::crtk_msgs::srv::QueryForwardKinematics_Response & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::srv::QueryForwardKinematics_Response message(::crtk_msgs::srv::QueryForwardKinematics_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::srv::QueryForwardKinematics_Response msg_;
};

class Init_QueryForwardKinematics_Response_result
{
public:
  explicit Init_QueryForwardKinematics_Response_result(::crtk_msgs::srv::QueryForwardKinematics_Response & msg)
  : msg_(msg)
  {}
  Init_QueryForwardKinematics_Response_message result(::crtk_msgs::srv::QueryForwardKinematics_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_QueryForwardKinematics_Response_message(msg_);
  }

private:
  ::crtk_msgs::srv::QueryForwardKinematics_Response msg_;
};

class Init_QueryForwardKinematics_Response_cp
{
public:
  Init_QueryForwardKinematics_Response_cp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryForwardKinematics_Response_result cp(::crtk_msgs::srv::QueryForwardKinematics_Response::_cp_type arg)
  {
    msg_.cp = std::move(arg);
    return Init_QueryForwardKinematics_Response_result(msg_);
  }

private:
  ::crtk_msgs::srv::QueryForwardKinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::srv::QueryForwardKinematics_Response>()
{
  return crtk_msgs::srv::builder::Init_QueryForwardKinematics_Response_cp();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__SRV__DETAIL__QUERY_FORWARD_KINEMATICS__BUILDER_HPP_
