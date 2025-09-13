// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crtk_msgs:msg/OperatingState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__STRUCT_HPP_
#define CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__crtk_msgs__msg__OperatingState __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__msg__OperatingState __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OperatingState_
{
  using Type = OperatingState_<ContainerAllocator>;

  explicit OperatingState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->is_homed = false;
      this->is_busy = false;
    }
  }

  explicit OperatingState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->is_homed = false;
      this->is_busy = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _is_homed_type =
    bool;
  _is_homed_type is_homed;
  using _is_busy_type =
    bool;
  _is_busy_type is_busy;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__is_homed(
    const bool & _arg)
  {
    this->is_homed = _arg;
    return *this;
  }
  Type & set__is_busy(
    const bool & _arg)
  {
    this->is_busy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::msg::OperatingState_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::msg::OperatingState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::msg::OperatingState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::msg::OperatingState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::OperatingState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::OperatingState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::OperatingState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::OperatingState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::msg::OperatingState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::msg::OperatingState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__msg__OperatingState
    std::shared_ptr<crtk_msgs::msg::OperatingState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__msg__OperatingState
    std::shared_ptr<crtk_msgs::msg::OperatingState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OperatingState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->is_homed != other.is_homed) {
      return false;
    }
    if (this->is_busy != other.is_busy) {
      return false;
    }
    return true;
  }
  bool operator!=(const OperatingState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OperatingState_

// alias to use template instance with default allocator
using OperatingState =
  crtk_msgs::msg::OperatingState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__OPERATING_STATE__STRUCT_HPP_
