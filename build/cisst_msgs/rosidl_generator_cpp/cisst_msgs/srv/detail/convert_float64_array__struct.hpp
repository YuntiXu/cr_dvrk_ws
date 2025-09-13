// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cisst_msgs:srv/ConvertFloat64Array.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__STRUCT_HPP_
#define CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cisst_msgs__srv__ConvertFloat64Array_Request __attribute__((deprecated))
#else
# define DEPRECATED__cisst_msgs__srv__ConvertFloat64Array_Request __declspec(deprecated)
#endif

namespace cisst_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConvertFloat64Array_Request_
{
  using Type = ConvertFloat64Array_Request_<ContainerAllocator>;

  explicit ConvertFloat64Array_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ConvertFloat64Array_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _input_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cisst_msgs__srv__ConvertFloat64Array_Request
    std::shared_ptr<cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cisst_msgs__srv__ConvertFloat64Array_Request
    std::shared_ptr<cisst_msgs::srv::ConvertFloat64Array_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConvertFloat64Array_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConvertFloat64Array_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConvertFloat64Array_Request_

// alias to use template instance with default allocator
using ConvertFloat64Array_Request =
  cisst_msgs::srv::ConvertFloat64Array_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cisst_msgs


#ifndef _WIN32
# define DEPRECATED__cisst_msgs__srv__ConvertFloat64Array_Response __attribute__((deprecated))
#else
# define DEPRECATED__cisst_msgs__srv__ConvertFloat64Array_Response __declspec(deprecated)
#endif

namespace cisst_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConvertFloat64Array_Response_
{
  using Type = ConvertFloat64Array_Response_<ContainerAllocator>;

  explicit ConvertFloat64Array_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ConvertFloat64Array_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _output_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _output_type output;

  // setters for named parameter idiom
  Type & set__output(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cisst_msgs__srv__ConvertFloat64Array_Response
    std::shared_ptr<cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cisst_msgs__srv__ConvertFloat64Array_Response
    std::shared_ptr<cisst_msgs::srv::ConvertFloat64Array_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConvertFloat64Array_Response_ & other) const
  {
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConvertFloat64Array_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConvertFloat64Array_Response_

// alias to use template instance with default allocator
using ConvertFloat64Array_Response =
  cisst_msgs::srv::ConvertFloat64Array_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cisst_msgs

namespace cisst_msgs
{

namespace srv
{

struct ConvertFloat64Array
{
  using Request = cisst_msgs::srv::ConvertFloat64Array_Request;
  using Response = cisst_msgs::srv::ConvertFloat64Array_Response;
};

}  // namespace srv

}  // namespace cisst_msgs

#endif  // CISST_MSGS__SRV__DETAIL__CONVERT_FLOAT64_ARRAY__STRUCT_HPP_
