// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cisst_msgs:msg/DoubleVec.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__MSG__DETAIL__DOUBLE_VEC__BUILDER_HPP_
#define CISST_MSGS__MSG__DETAIL__DOUBLE_VEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cisst_msgs/msg/detail/double_vec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cisst_msgs
{

namespace msg
{

namespace builder
{

class Init_DoubleVec_data
{
public:
  explicit Init_DoubleVec_data(::cisst_msgs::msg::DoubleVec & msg)
  : msg_(msg)
  {}
  ::cisst_msgs::msg::DoubleVec data(::cisst_msgs::msg::DoubleVec::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cisst_msgs::msg::DoubleVec msg_;
};

class Init_DoubleVec_header
{
public:
  Init_DoubleVec_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoubleVec_data header(::cisst_msgs::msg::DoubleVec::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DoubleVec_data(msg_);
  }

private:
  ::cisst_msgs::msg::DoubleVec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cisst_msgs::msg::DoubleVec>()
{
  return cisst_msgs::msg::builder::Init_DoubleVec_header();
}

}  // namespace cisst_msgs

#endif  // CISST_MSGS__MSG__DETAIL__DOUBLE_VEC__BUILDER_HPP_
