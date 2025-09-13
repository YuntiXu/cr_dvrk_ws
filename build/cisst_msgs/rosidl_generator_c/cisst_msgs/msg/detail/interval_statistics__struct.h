// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cisst_msgs:msg/IntervalStatistics.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__STRUCT_H_
#define CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/IntervalStatistics in the package cisst_msgs.
typedef struct cisst_msgs__msg__IntervalStatistics
{
  std_msgs__msg__Header header;
  /// average period
  double period_avg;
  /// deviation on periodicity
  double period_std_dev;
  /// min and max time between
  double period_min;
  double period_max;
  /// same 4 values for compute time
  double compute_time_avg;
  double compute_time_std_dev;
  double compute_time_min;
  double compute_time_max;
  /// number of samples used to compute these status
  int64_t number_of_samples;
  /// number of overruns base on previous interval average
  int64_t number_of_overruns;
  /// time window covered by these stats
  double statistics_interval;
  /// user data
  int64_t user_data;
} cisst_msgs__msg__IntervalStatistics;

// Struct for a sequence of cisst_msgs__msg__IntervalStatistics.
typedef struct cisst_msgs__msg__IntervalStatistics__Sequence
{
  cisst_msgs__msg__IntervalStatistics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cisst_msgs__msg__IntervalStatistics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CISST_MSGS__MSG__DETAIL__INTERVAL_STATISTICS__STRUCT_H_
