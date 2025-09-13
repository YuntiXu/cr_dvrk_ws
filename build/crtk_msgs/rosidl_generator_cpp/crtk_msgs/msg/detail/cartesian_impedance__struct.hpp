// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crtk_msgs:msg/CartesianImpedance.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__STRUCT_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'force_orientation'
// Member 'torque_orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'force_position'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'position_positive'
// Member 'position_negative'
// Member 'orientation_positive'
// Member 'orientation_negative'
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crtk_msgs__msg__CartesianImpedance __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__msg__CartesianImpedance __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianImpedance_
{
  using Type = CartesianImpedance_<ContainerAllocator>;

  explicit CartesianImpedance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    force_orientation(_init),
    force_position(_init),
    torque_orientation(_init),
    position_positive(_init),
    position_negative(_init),
    orientation_positive(_init),
    orientation_negative(_init)
  {
    (void)_init;
  }

  explicit CartesianImpedance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    force_orientation(_alloc, _init),
    force_position(_alloc, _init),
    torque_orientation(_alloc, _init),
    position_positive(_alloc, _init),
    position_negative(_alloc, _init),
    orientation_positive(_alloc, _init),
    orientation_negative(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _force_orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _force_orientation_type force_orientation;
  using _force_position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _force_position_type force_position;
  using _torque_orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _torque_orientation_type torque_orientation;
  using _position_positive_type =
    crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>;
  _position_positive_type position_positive;
  using _position_negative_type =
    crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>;
  _position_negative_type position_negative;
  using _orientation_positive_type =
    crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>;
  _orientation_positive_type orientation_positive;
  using _orientation_negative_type =
    crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator>;
  _orientation_negative_type orientation_negative;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__force_orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->force_orientation = _arg;
    return *this;
  }
  Type & set__force_position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->force_position = _arg;
    return *this;
  }
  Type & set__torque_orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->torque_orientation = _arg;
    return *this;
  }
  Type & set__position_positive(
    const crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> & _arg)
  {
    this->position_positive = _arg;
    return *this;
  }
  Type & set__position_negative(
    const crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> & _arg)
  {
    this->position_negative = _arg;
    return *this;
  }
  Type & set__orientation_positive(
    const crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> & _arg)
  {
    this->orientation_positive = _arg;
    return *this;
  }
  Type & set__orientation_negative(
    const crtk_msgs::msg::CartesianImpedanceHalfPlaneGains_<ContainerAllocator> & _arg)
  {
    this->orientation_negative = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::msg::CartesianImpedance_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::msg::CartesianImpedance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::msg::CartesianImpedance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::msg::CartesianImpedance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::CartesianImpedance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::CartesianImpedance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::CartesianImpedance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::CartesianImpedance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::msg::CartesianImpedance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::msg::CartesianImpedance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__msg__CartesianImpedance
    std::shared_ptr<crtk_msgs::msg::CartesianImpedance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__msg__CartesianImpedance
    std::shared_ptr<crtk_msgs::msg::CartesianImpedance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianImpedance_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->force_orientation != other.force_orientation) {
      return false;
    }
    if (this->force_position != other.force_position) {
      return false;
    }
    if (this->torque_orientation != other.torque_orientation) {
      return false;
    }
    if (this->position_positive != other.position_positive) {
      return false;
    }
    if (this->position_negative != other.position_negative) {
      return false;
    }
    if (this->orientation_positive != other.orientation_positive) {
      return false;
    }
    if (this->orientation_negative != other.orientation_negative) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianImpedance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianImpedance_

// alias to use template instance with default allocator
using CartesianImpedance =
  crtk_msgs::msg::CartesianImpedance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE__STRUCT_HPP_
