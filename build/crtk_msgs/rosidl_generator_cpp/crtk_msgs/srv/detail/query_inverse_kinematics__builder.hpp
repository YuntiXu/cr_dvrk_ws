// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:srv/QueryInverseKinematics.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__SRV__DETAIL__QUERY_INVERSE_KINEMATICS__BUILDER_HPP_
#define CRTK_MSGS__SRV__DETAIL__QUERY_INVERSE_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/srv/detail/query_inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace srv
{

namespace builder
{

class Init_QueryInverseKinematics_Request_jp
{
public:
  explicit Init_QueryInverseKinematics_Request_jp(::crtk_msgs::srv::QueryInverseKinematics_Request & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::srv::QueryInverseKinematics_Request jp(::crtk_msgs::srv::QueryInverseKinematics_Request::_jp_type arg)
  {
    msg_.jp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::srv::QueryInverseKinematics_Request msg_;
};

class Init_QueryInverseKinematics_Request_cp
{
public:
  Init_QueryInverseKinematics_Request_cp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryInverseKinematics_Request_jp cp(::crtk_msgs::srv::QueryInverseKinematics_Request::_cp_type arg)
  {
    msg_.cp = std::move(arg);
    return Init_QueryInverseKinematics_Request_jp(msg_);
  }

private:
  ::crtk_msgs::srv::QueryInverseKinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::srv::QueryInverseKinematics_Request>()
{
  return crtk_msgs::srv::builder::Init_QueryInverseKinematics_Request_cp();
}

}  // namespace crtk_msgs


namespace crtk_msgs
{

namespace srv
{

namespace builder
{

class Init_QueryInverseKinematics_Response_message
{
public:
  explicit Init_QueryInverseKinematics_Response_message(::crtk_msgs::srv::QueryInverseKinematics_Response & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::srv::QueryInverseKinematics_Response message(::crtk_msgs::srv::QueryInverseKinematics_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::srv::QueryInverseKinematics_Response msg_;
};

class Init_QueryInverseKinematics_Response_result
{
public:
  explicit Init_QueryInverseKinematics_Response_result(::crtk_msgs::srv::QueryInverseKinematics_Response & msg)
  : msg_(msg)
  {}
  Init_QueryInverseKinematics_Response_message result(::crtk_msgs::srv::QueryInverseKinematics_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_QueryInverseKinematics_Response_message(msg_);
  }

private:
  ::crtk_msgs::srv::QueryInverseKinematics_Response msg_;
};

class Init_QueryInverseKinematics_Response_jp
{
public:
  Init_QueryInverseKinematics_Response_jp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QueryInverseKinematics_Response_result jp(::crtk_msgs::srv::QueryInverseKinematics_Response::_jp_type arg)
  {
    msg_.jp = std::move(arg);
    return Init_QueryInverseKinematics_Response_result(msg_);
  }

private:
  ::crtk_msgs::srv::QueryInverseKinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::srv::QueryInverseKinematics_Response>()
{
  return crtk_msgs::srv::builder::Init_QueryInverseKinematics_Response_jp();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__SRV__DETAIL__QUERY_INVERSE_KINEMATICS__BUILDER_HPP_
