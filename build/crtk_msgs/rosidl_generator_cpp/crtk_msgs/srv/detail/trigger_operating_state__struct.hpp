// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crtk_msgs:srv/TriggerOperatingState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__STRUCT_HPP_
#define CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crtk_msgs__srv__TriggerOperatingState_Request __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__srv__TriggerOperatingState_Request __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TriggerOperatingState_Request_
{
  using Type = TriggerOperatingState_Request_<ContainerAllocator>;

  explicit TriggerOperatingState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TriggerOperatingState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__srv__TriggerOperatingState_Request
    std::shared_ptr<crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__srv__TriggerOperatingState_Request
    std::shared_ptr<crtk_msgs::srv::TriggerOperatingState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriggerOperatingState_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TriggerOperatingState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriggerOperatingState_Request_

// alias to use template instance with default allocator
using TriggerOperatingState_Request =
  crtk_msgs::srv::TriggerOperatingState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crtk_msgs


// Include directives for member types
// Member 'operating_state'
#include "crtk_msgs/msg/detail/operating_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crtk_msgs__srv__TriggerOperatingState_Response __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__srv__TriggerOperatingState_Response __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TriggerOperatingState_Response_
{
  using Type = TriggerOperatingState_Response_<ContainerAllocator>;

  explicit TriggerOperatingState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operating_state(_init)
  {
    (void)_init;
  }

  explicit TriggerOperatingState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operating_state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _operating_state_type =
    crtk_msgs::msg::OperatingState_<ContainerAllocator>;
  _operating_state_type operating_state;

  // setters for named parameter idiom
  Type & set__operating_state(
    const crtk_msgs::msg::OperatingState_<ContainerAllocator> & _arg)
  {
    this->operating_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__srv__TriggerOperatingState_Response
    std::shared_ptr<crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__srv__TriggerOperatingState_Response
    std::shared_ptr<crtk_msgs::srv::TriggerOperatingState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriggerOperatingState_Response_ & other) const
  {
    if (this->operating_state != other.operating_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const TriggerOperatingState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriggerOperatingState_Response_

// alias to use template instance with default allocator
using TriggerOperatingState_Response =
  crtk_msgs::srv::TriggerOperatingState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crtk_msgs

namespace crtk_msgs
{

namespace srv
{

struct TriggerOperatingState
{
  using Request = crtk_msgs::srv::TriggerOperatingState_Request;
  using Response = crtk_msgs::srv::TriggerOperatingState_Response;
};

}  // namespace srv

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__SRV__DETAIL__TRIGGER_OPERATING_STATE__STRUCT_HPP_
