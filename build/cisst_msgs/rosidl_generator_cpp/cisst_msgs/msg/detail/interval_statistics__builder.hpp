// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cisst_msgs:msg/IntervalStatistics.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__BUILDER_HPP_
#define CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cisst_msgs/msg/detail/interval_statistics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cisst_msgs
{

namespace msg
{

namespace builder
{

class Init_IntervalStatistics_user_data
{
public:
  explicit Init_IntervalStatistics_user_data(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  ::cisst_msgs::msg::IntervalStatistics user_data(::cisst_msgs::msg::IntervalStatistics::_user_data_type arg)
  {
    msg_.user_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_statistics_interval
{
public:
  explicit Init_IntervalStatistics_statistics_interval(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_user_data statistics_interval(::cisst_msgs::msg::IntervalStatistics::_statistics_interval_type arg)
  {
    msg_.statistics_interval = std::move(arg);
    return Init_IntervalStatistics_user_data(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_number_of_overruns
{
public:
  explicit Init_IntervalStatistics_number_of_overruns(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_statistics_interval number_of_overruns(::cisst_msgs::msg::IntervalStatistics::_number_of_overruns_type arg)
  {
    msg_.number_of_overruns = std::move(arg);
    return Init_IntervalStatistics_statistics_interval(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_number_of_samples
{
public:
  explicit Init_IntervalStatistics_number_of_samples(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_number_of_overruns number_of_samples(::cisst_msgs::msg::IntervalStatistics::_number_of_samples_type arg)
  {
    msg_.number_of_samples = std::move(arg);
    return Init_IntervalStatistics_number_of_overruns(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_compute_time_max
{
public:
  explicit Init_IntervalStatistics_compute_time_max(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_number_of_samples compute_time_max(::cisst_msgs::msg::IntervalStatistics::_compute_time_max_type arg)
  {
    msg_.compute_time_max = std::move(arg);
    return Init_IntervalStatistics_number_of_samples(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_compute_time_min
{
public:
  explicit Init_IntervalStatistics_compute_time_min(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_compute_time_max compute_time_min(::cisst_msgs::msg::IntervalStatistics::_compute_time_min_type arg)
  {
    msg_.compute_time_min = std::move(arg);
    return Init_IntervalStatistics_compute_time_max(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_compute_time_std_dev
{
public:
  explicit Init_IntervalStatistics_compute_time_std_dev(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_compute_time_min compute_time_std_dev(::cisst_msgs::msg::IntervalStatistics::_compute_time_std_dev_type arg)
  {
    msg_.compute_time_std_dev = std::move(arg);
    return Init_IntervalStatistics_compute_time_min(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_compute_time_avg
{
public:
  explicit Init_IntervalStatistics_compute_time_avg(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_compute_time_std_dev compute_time_avg(::cisst_msgs::msg::IntervalStatistics::_compute_time_avg_type arg)
  {
    msg_.compute_time_avg = std::move(arg);
    return Init_IntervalStatistics_compute_time_std_dev(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_period_max
{
public:
  explicit Init_IntervalStatistics_period_max(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_compute_time_avg period_max(::cisst_msgs::msg::IntervalStatistics::_period_max_type arg)
  {
    msg_.period_max = std::move(arg);
    return Init_IntervalStatistics_compute_time_avg(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_period_min
{
public:
  explicit Init_IntervalStatistics_period_min(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_period_max period_min(::cisst_msgs::msg::IntervalStatistics::_period_min_type arg)
  {
    msg_.period_min = std::move(arg);
    return Init_IntervalStatistics_period_max(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_period_std_dev
{
public:
  explicit Init_IntervalStatistics_period_std_dev(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_period_min period_std_dev(::cisst_msgs::msg::IntervalStatistics::_period_std_dev_type arg)
  {
    msg_.period_std_dev = std::move(arg);
    return Init_IntervalStatistics_period_min(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_period_avg
{
public:
  explicit Init_IntervalStatistics_period_avg(::cisst_msgs::msg::IntervalStatistics & msg)
  : msg_(msg)
  {}
  Init_IntervalStatistics_period_std_dev period_avg(::cisst_msgs::msg::IntervalStatistics::_period_avg_type arg)
  {
    msg_.period_avg = std::move(arg);
    return Init_IntervalStatistics_period_std_dev(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

class Init_IntervalStatistics_header
{
public:
  Init_IntervalStatistics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntervalStatistics_period_avg header(::cisst_msgs::msg::IntervalStatistics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IntervalStatistics_period_avg(msg_);
  }

private:
  ::cisst_msgs::msg::IntervalStatistics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cisst_msgs::msg::IntervalStatistics>()
{
  return cisst_msgs::msg::builder::Init_IntervalStatistics_header();
}

}  // namespace cisst_msgs

#endif  // CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__BUILDER_HPP_
