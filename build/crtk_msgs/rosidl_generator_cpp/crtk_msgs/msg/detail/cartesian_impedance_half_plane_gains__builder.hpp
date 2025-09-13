// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:msg/CartesianImpedanceHalfPlaneGains.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__BUILDER_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianImpedanceHalfPlaneGains_deadband
{
public:
  explicit Init_CartesianImpedanceHalfPlaneGains_deadband(::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains deadband(::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains::_deadband_type arg)
  {
    msg_.deadband = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains msg_;
};

class Init_CartesianImpedanceHalfPlaneGains_bias
{
public:
  explicit Init_CartesianImpedanceHalfPlaneGains_bias(::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains & msg)
  : msg_(msg)
  {}
  Init_CartesianImpedanceHalfPlaneGains_deadband bias(::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains::_bias_type arg)
  {
    msg_.bias = std::move(arg);
    return Init_CartesianImpedanceHalfPlaneGains_deadband(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains msg_;
};

class Init_CartesianImpedanceHalfPlaneGains_d
{
public:
  explicit Init_CartesianImpedanceHalfPlaneGains_d(::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains & msg)
  : msg_(msg)
  {}
  Init_CartesianImpedanceHalfPlaneGains_bias d(::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_CartesianImpedanceHalfPlaneGains_bias(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains msg_;
};

class Init_CartesianImpedanceHalfPlaneGains_p
{
public:
  Init_CartesianImpedanceHalfPlaneGains_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianImpedanceHalfPlaneGains_d p(::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_CartesianImpedanceHalfPlaneGains_d(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::msg::CartesianImpedanceHalfPlaneGains>()
{
  return crtk_msgs::msg::builder::Init_CartesianImpedanceHalfPlaneGains_p();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__BUILDER_HPP_
