// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crtk_msgs:msg/CartesianImpedanceHalfPlaneGains.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__STRUCT_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'p'
// Member 'd'
// Member 'bias'
// Member 'deadband'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crtk_msgs__msg__CartesianImpedanceHalfPlaneGains __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__msg__CartesianImpedanceHalfPlaneGains __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianImpedanceHalfPlaneGains_
{
  using Type = CartesianImpedanceHalfPlaneGains_<ContainerAllocator>;

  explicit CartesianImpedanceHalfPlaneGains_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p(_init),
    d(_init),
    bias(_init),
    deadband(_init)
  {
    (void)_init;
  }

  explicit CartesianImpedanceHalfPlaneGains_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p(_alloc, _init),
    d(_alloc, _init),
    bias(_alloc, _init),
    deadband(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _p_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _p_type p;
  using _d_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _d_type d;
  using _bias_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _bias_type bias;
  using _deadband_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _deadband_type deadband;

  // setters for named parameter idiom
  Type & set__p(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__d(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__bias(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->bias = _arg;
    return *this;
  }
  Type & set__deadband(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->deadband = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__msg__CartesianImpedanceHalfPlaneGains
    std::shared_ptr<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__msg__CartesianImpedanceHalfPlaneGains
    std::shared_ptr<crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianImpedanceHalfPlaneGains_ & other) const
  {
    if (this->p != other.p) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->bias != other.bias) {
      return false;
    }
    if (this->deadband != other.deadband) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianImpedanceHalfPlaneGains_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianImpedanceHalfPlaneGains_

// alias to use template instance with default allocator
using CartesianImpedanceHalfPlaneGains =
  crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__STRUCT_HPP_
