// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crtk_msgs:srv/QueryInverseKinematics.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__SRV__DETAIL__QUERY_INVERSE_KINEMATICS__STRUCT_HPP_
#define CRTK_MSGS__SRV__DETAIL__QUERY_INVERSE_KINEMATICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cp'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crtk_msgs__srv__QueryInverseKinematics_Request __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__srv__QueryInverseKinematics_Request __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryInverseKinematics_Request_
{
  using Type = QueryInverseKinematics_Request_<ContainerAllocator>;

  explicit QueryInverseKinematics_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cp(_init)
  {
    (void)_init;
  }

  explicit QueryInverseKinematics_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cp_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _cp_type cp;
  using _jp_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _jp_type jp;

  // setters for named parameter idiom
  Type & set__cp(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->cp = _arg;
    return *this;
  }
  Type & set__jp(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->jp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__srv__QueryInverseKinematics_Request
    std::shared_ptr<crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__srv__QueryInverseKinematics_Request
    std::shared_ptr<crtk_msgs::srv::QueryInverseKinematics_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryInverseKinematics_Request_ & other) const
  {
    if (this->cp != other.cp) {
      return false;
    }
    if (this->jp != other.jp) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryInverseKinematics_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryInverseKinematics_Request_

// alias to use template instance with default allocator
using QueryInverseKinematics_Request =
  crtk_msgs::srv::QueryInverseKinematics_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crtk_msgs


#ifndef _WIN32
# define DEPRECATED__crtk_msgs__srv__QueryInverseKinematics_Response __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__srv__QueryInverseKinematics_Response __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryInverseKinematics_Response_
{
  using Type = QueryInverseKinematics_Response_<ContainerAllocator>;

  explicit QueryInverseKinematics_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->message = "";
    }
  }

  explicit QueryInverseKinematics_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->message = "";
    }
  }

  // field types and members
  using _jp_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _jp_type jp;
  using _result_type =
    bool;
  _result_type result;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__jp(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->jp = _arg;
    return *this;
  }
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__srv__QueryInverseKinematics_Response
    std::shared_ptr<crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__srv__QueryInverseKinematics_Response
    std::shared_ptr<crtk_msgs::srv::QueryInverseKinematics_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryInverseKinematics_Response_ & other) const
  {
    if (this->jp != other.jp) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryInverseKinematics_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryInverseKinematics_Response_

// alias to use template instance with default allocator
using QueryInverseKinematics_Response =
  crtk_msgs::srv::QueryInverseKinematics_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crtk_msgs

namespace crtk_msgs
{

namespace srv
{

struct QueryInverseKinematics
{
  using Request = crtk_msgs::srv::QueryInverseKinematics_Request;
  using Response = crtk_msgs::srv::QueryInverseKinematics_Response;
};

}  // namespace srv

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__SRV__DETAIL__QUERY_INVERSE_KINEMATICS__STRUCT_HPP_
