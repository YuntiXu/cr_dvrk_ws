// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cisst_msgs:msg/IntervalStatistics.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__STRUCT_HPP_
#define CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__STRUCT_HPP_

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
# define DEPRECATED__cisst_msgs__msg__IntervalStatistics __attribute__((deprecated))
#else
# define DEPRECATED__cisst_msgs__msg__IntervalStatistics __declspec(deprecated)
#endif

namespace cisst_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntervalStatistics_
{
  using Type = IntervalStatistics_<ContainerAllocator>;

  explicit IntervalStatistics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->period_avg = 0.0;
      this->period_std_dev = 0.0;
      this->period_min = 0.0;
      this->period_max = 0.0;
      this->compute_time_avg = 0.0;
      this->compute_time_std_dev = 0.0;
      this->compute_time_min = 0.0;
      this->compute_time_max = 0.0;
      this->number_of_samples = 0ll;
      this->number_of_overruns = 0ll;
      this->statistics_interval = 0.0;
      this->user_data = 0ll;
    }
  }

  explicit IntervalStatistics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->period_avg = 0.0;
      this->period_std_dev = 0.0;
      this->period_min = 0.0;
      this->period_max = 0.0;
      this->compute_time_avg = 0.0;
      this->compute_time_std_dev = 0.0;
      this->compute_time_min = 0.0;
      this->compute_time_max = 0.0;
      this->number_of_samples = 0ll;
      this->number_of_overruns = 0ll;
      this->statistics_interval = 0.0;
      this->user_data = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _period_avg_type =
    double;
  _period_avg_type period_avg;
  using _period_std_dev_type =
    double;
  _period_std_dev_type period_std_dev;
  using _period_min_type =
    double;
  _period_min_type period_min;
  using _period_max_type =
    double;
  _period_max_type period_max;
  using _compute_time_avg_type =
    double;
  _compute_time_avg_type compute_time_avg;
  using _compute_time_std_dev_type =
    double;
  _compute_time_std_dev_type compute_time_std_dev;
  using _compute_time_min_type =
    double;
  _compute_time_min_type compute_time_min;
  using _compute_time_max_type =
    double;
  _compute_time_max_type compute_time_max;
  using _number_of_samples_type =
    int64_t;
  _number_of_samples_type number_of_samples;
  using _number_of_overruns_type =
    int64_t;
  _number_of_overruns_type number_of_overruns;
  using _statistics_interval_type =
    double;
  _statistics_interval_type statistics_interval;
  using _user_data_type =
    int64_t;
  _user_data_type user_data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__period_avg(
    const double & _arg)
  {
    this->period_avg = _arg;
    return *this;
  }
  Type & set__period_std_dev(
    const double & _arg)
  {
    this->period_std_dev = _arg;
    return *this;
  }
  Type & set__period_min(
    const double & _arg)
  {
    this->period_min = _arg;
    return *this;
  }
  Type & set__period_max(
    const double & _arg)
  {
    this->period_max = _arg;
    return *this;
  }
  Type & set__compute_time_avg(
    const double & _arg)
  {
    this->compute_time_avg = _arg;
    return *this;
  }
  Type & set__compute_time_std_dev(
    const double & _arg)
  {
    this->compute_time_std_dev = _arg;
    return *this;
  }
  Type & set__compute_time_min(
    const double & _arg)
  {
    this->compute_time_min = _arg;
    return *this;
  }
  Type & set__compute_time_max(
    const double & _arg)
  {
    this->compute_time_max = _arg;
    return *this;
  }
  Type & set__number_of_samples(
    const int64_t & _arg)
  {
    this->number_of_samples = _arg;
    return *this;
  }
  Type & set__number_of_overruns(
    const int64_t & _arg)
  {
    this->number_of_overruns = _arg;
    return *this;
  }
  Type & set__statistics_interval(
    const double & _arg)
  {
    this->statistics_interval = _arg;
    return *this;
  }
  Type & set__user_data(
    const int64_t & _arg)
  {
    this->user_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cisst_msgs::msg::IntervalStatistics_<ContainerAllocator> *;
  using ConstRawPtr =
    const cisst_msgs::msg::IntervalStatistics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cisst_msgs::msg::IntervalStatistics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cisst_msgs::msg::IntervalStatistics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cisst_msgs::msg::IntervalStatistics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cisst_msgs::msg::IntervalStatistics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cisst_msgs::msg::IntervalStatistics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cisst_msgs::msg::IntervalStatistics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cisst_msgs::msg::IntervalStatistics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cisst_msgs::msg::IntervalStatistics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cisst_msgs__msg__IntervalStatistics
    std::shared_ptr<cisst_msgs::msg::IntervalStatistics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cisst_msgs__msg__IntervalStatistics
    std::shared_ptr<cisst_msgs::msg::IntervalStatistics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntervalStatistics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->period_avg != other.period_avg) {
      return false;
    }
    if (this->period_std_dev != other.period_std_dev) {
      return false;
    }
    if (this->period_min != other.period_min) {
      return false;
    }
    if (this->period_max != other.period_max) {
      return false;
    }
    if (this->compute_time_avg != other.compute_time_avg) {
      return false;
    }
    if (this->compute_time_std_dev != other.compute_time_std_dev) {
      return false;
    }
    if (this->compute_time_min != other.compute_time_min) {
      return false;
    }
    if (this->compute_time_max != other.compute_time_max) {
      return false;
    }
    if (this->number_of_samples != other.number_of_samples) {
      return false;
    }
    if (this->number_of_overruns != other.number_of_overruns) {
      return false;
    }
    if (this->statistics_interval != other.statistics_interval) {
      return false;
    }
    if (this->user_data != other.user_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntervalStatistics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntervalStatistics_

// alias to use template instance with default allocator
using IntervalStatistics =
  cisst_msgs::msg::IntervalStatistics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cisst_msgs

#endif  // CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__STRUCT_HPP_
