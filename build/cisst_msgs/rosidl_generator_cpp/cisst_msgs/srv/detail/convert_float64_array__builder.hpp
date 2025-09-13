// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cisst_msgs:srv/ConvertFloat64Array.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__BUILDER_HPP_
#define CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cisst_msgs/srv/detail/convert_float64_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cisst_msgs
{

namespace srv
{

namespace builder
{

class Init_ConvertFloat64Array_Request_input
{
public:
  Init_ConvertFloat64Array_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cisst_msgs::srv::ConvertFloat64Array_Request input(::cisst_msgs::srv::ConvertFloat64Array_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cisst_msgs::srv::ConvertFloat64Array_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cisst_msgs::srv::ConvertFloat64Array_Request>()
{
  return cisst_msgs::srv::builder::Init_ConvertFloat64Array_Request_input();
}

}  // namespace cisst_msgs


namespace cisst_msgs
{

namespace srv
{

namespace builder
{

class Init_ConvertFloat64Array_Response_output
{
public:
  Init_ConvertFloat64Array_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cisst_msgs::srv::ConvertFloat64Array_Response output(::cisst_msgs::srv::ConvertFloat64Array_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cisst_msgs::srv::ConvertFloat64Array_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cisst_msgs::srv::ConvertFloat64Array_Response>()
{
  return cisst_msgs::srv::builder::Init_ConvertFloat64Array_Response_output();
}

}  // namespace cisst_msgs

#endif  // CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__BUILDER_HPP_
