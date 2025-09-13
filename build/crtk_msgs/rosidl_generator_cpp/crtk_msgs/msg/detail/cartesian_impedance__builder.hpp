// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:msg/CartesianImpedance.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__BUILDER_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/msg/detail/cartesian_impedance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianImpedance_orientation_negative
{
public:
  explicit Init_CartesianImpedance_orientation_negative(::crtk_msgs::msg::CartesianImpedance & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::msg::CartesianImpedance orientation_negative(::crtk_msgs::msg::CartesianImpedance::_orientation_negative_type arg)
  {
    msg_.orientation_negative = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedance msg_;
};

class Init_CartesianImpedance_orientation_positive
{
public:
  explicit Init_CartesianImpedance_orientation_positive(::crtk_msgs::msg::CartesianImpedance & msg)
  : msg_(msg)
  {}
  Init_CartesianImpedance_orientation_negative orientation_positive(::crtk_msgs::msg::CartesianImpedance::_orientation_positive_type arg)
  {
    msg_.orientation_positive = std::move(arg);
    return Init_CartesianImpedance_orientation_negative(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedance msg_;
};

class Init_CartesianImpedance_position_negative
{
public:
  explicit Init_CartesianImpedance_position_negative(::crtk_msgs::msg::CartesianImpedance & msg)
  : msg_(msg)
  {}
  Init_CartesianImpedance_orientation_positive position_negative(::crtk_msgs::msg::CartesianImpedance::_position_negative_type arg)
  {
    msg_.position_negative = std::move(arg);
    return Init_CartesianImpedance_orientation_positive(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedance msg_;
};

class Init_CartesianImpedance_position_positive
{
public:
  explicit Init_CartesianImpedance_position_positive(::crtk_msgs::msg::CartesianImpedance & msg)
  : msg_(msg)
  {}
  Init_CartesianImpedance_position_negative position_positive(::crtk_msgs::msg::CartesianImpedance::_position_positive_type arg)
  {
    msg_.position_positive = std::move(arg);
    return Init_CartesianImpedance_position_negative(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedance msg_;
};

class Init_CartesianImpedance_torque_orientation
{
public:
  explicit Init_CartesianImpedance_torque_orientation(::crtk_msgs::msg::CartesianImpedance & msg)
  : msg_(msg)
  {}
  Init_CartesianImpedance_position_positive torque_orientation(::crtk_msgs::msg::CartesianImpedance::_torque_orientation_type arg)
  {
    msg_.torque_orientation = std::move(arg);
    return Init_CartesianImpedance_position_positive(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedance msg_;
};

class Init_CartesianImpedance_force_position
{
public:
  explicit Init_CartesianImpedance_force_position(::crtk_msgs::msg::CartesianImpedance & msg)
  : msg_(msg)
  {}
  Init_CartesianImpedance_torque_orientation force_position(::crtk_msgs::msg::CartesianImpedance::_force_position_type arg)
  {
    msg_.force_position = std::move(arg);
    return Init_CartesianImpedance_torque_orientation(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedance msg_;
};

class Init_CartesianImpedance_force_orientation
{
public:
  explicit Init_CartesianImpedance_force_orientation(::crtk_msgs::msg::CartesianImpedance & msg)
  : msg_(msg)
  {}
  Init_CartesianImpedance_force_position force_orientation(::crtk_msgs::msg::CartesianImpedance::_force_orientation_type arg)
  {
    msg_.force_orientation = std::move(arg);
    return Init_CartesianImpedance_force_position(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedance msg_;
};

class Init_CartesianImpedance_header
{
public:
  Init_CartesianImpedance_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianImpedance_force_orientation header(::crtk_msgs::msg::CartesianImpedance::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CartesianImpedance_force_orientation(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::msg::CartesianImpedance>()
{
  return crtk_msgs::msg::builder::Init_CartesianImpedance_header();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__BUILDER_HPP_
