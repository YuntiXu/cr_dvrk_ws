// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cisst_msgs:msg/IntervalStatistics.idl
// generated code does not contain a copyright notice
#include "cisst_msgs/msg/detail/interval_statistics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
cisst_msgs__msg__IntervalStatistics__init(cisst_msgs__msg__IntervalStatistics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cisst_msgs__msg__IntervalStatistics__fini(msg);
    return false;
  }
  // period_avg
  // period_std_dev
  // period_min
  // period_max
  // compute_time_avg
  // compute_time_std_dev
  // compute_time_min
  // compute_time_max
  // number_of_samples
  // number_of_overruns
  // statistics_interval
  // user_data
  return true;
}

void
cisst_msgs__msg__IntervalStatistics__fini(cisst_msgs__msg__IntervalStatistics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // period_avg
  // period_std_dev
  // period_min
  // period_max
  // compute_time_avg
  // compute_time_std_dev
  // compute_time_min
  // compute_time_max
  // number_of_samples
  // number_of_overruns
  // statistics_interval
  // user_data
}

bool
cisst_msgs__msg__IntervalStatistics__are_equal(const cisst_msgs__msg__IntervalStatistics * lhs, const cisst_msgs__msg__IntervalStatistics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // period_avg
  if (lhs->period_avg != rhs->period_avg) {
    return false;
  }
  // period_std_dev
  if (lhs->period_std_dev != rhs->period_std_dev) {
    return false;
  }
  // period_min
  if (lhs->period_min != rhs->period_min) {
    return false;
  }
  // period_max
  if (lhs->period_max != rhs->period_max) {
    return false;
  }
  // compute_time_avg
  if (lhs->compute_time_avg != rhs->compute_time_avg) {
    return false;
  }
  // compute_time_std_dev
  if (lhs->compute_time_std_dev != rhs->compute_time_std_dev) {
    return false;
  }
  // compute_time_min
  if (lhs->compute_time_min != rhs->compute_time_min) {
    return false;
  }
  // compute_time_max
  if (lhs->compute_time_max != rhs->compute_time_max) {
    return false;
  }
  // number_of_samples
  if (lhs->number_of_samples != rhs->number_of_samples) {
    return false;
  }
  // number_of_overruns
  if (lhs->number_of_overruns != rhs->number_of_overruns) {
    return false;
  }
  // statistics_interval
  if (lhs->statistics_interval != rhs->statistics_interval) {
    return false;
  }
  // user_data
  if (lhs->user_data != rhs->user_data) {
    return false;
  }
  return true;
}

bool
cisst_msgs__msg__IntervalStatistics__copy(
  const cisst_msgs__msg__IntervalStatistics * input,
  cisst_msgs__msg__IntervalStatistics * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // period_avg
  output->period_avg = input->period_avg;
  // period_std_dev
  output->period_std_dev = input->period_std_dev;
  // period_min
  output->period_min = input->period_min;
  // period_max
  output->period_max = input->period_max;
  // compute_time_avg
  output->compute_time_avg = input->compute_time_avg;
  // compute_time_std_dev
  output->compute_time_std_dev = input->compute_time_std_dev;
  // compute_time_min
  output->compute_time_min = input->compute_time_min;
  // compute_time_max
  output->compute_time_max = input->compute_time_max;
  // number_of_samples
  output->number_of_samples = input->number_of_samples;
  // number_of_overruns
  output->number_of_overruns = input->number_of_overruns;
  // statistics_interval
  output->statistics_interval = input->statistics_interval;
  // user_data
  output->user_data = input->user_data;
  return true;
}

cisst_msgs__msg__IntervalStatistics *
cisst_msgs__msg__IntervalStatistics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__msg__IntervalStatistics * msg = (cisst_msgs__msg__IntervalStatistics *)allocator.allocate(sizeof(cisst_msgs__msg__IntervalStatistics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cisst_msgs__msg__IntervalStatistics));
  bool success = cisst_msgs__msg__IntervalStatistics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cisst_msgs__msg__IntervalStatistics__destroy(cisst_msgs__msg__IntervalStatistics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cisst_msgs__msg__IntervalStatistics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cisst_msgs__msg__IntervalStatistics__Sequence__init(cisst_msgs__msg__IntervalStatistics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__msg__IntervalStatistics * data = NULL;

  if (size) {
    data = (cisst_msgs__msg__IntervalStatistics *)allocator.zero_allocate(size, sizeof(cisst_msgs__msg__IntervalStatistics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cisst_msgs__msg__IntervalStatistics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cisst_msgs__msg__IntervalStatistics__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cisst_msgs__msg__IntervalStatistics__Sequence__fini(cisst_msgs__msg__IntervalStatistics__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cisst_msgs__msg__IntervalStatistics__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cisst_msgs__msg__IntervalStatistics__Sequence *
cisst_msgs__msg__IntervalStatistics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__msg__IntervalStatistics__Sequence * array = (cisst_msgs__msg__IntervalStatistics__Sequence *)allocator.allocate(sizeof(cisst_msgs__msg__IntervalStatistics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cisst_msgs__msg__IntervalStatistics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cisst_msgs__msg__IntervalStatistics__Sequence__destroy(cisst_msgs__msg__IntervalStatistics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cisst_msgs__msg__IntervalStatistics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cisst_msgs__msg__IntervalStatistics__Sequence__are_equal(const cisst_msgs__msg__IntervalStatistics__Sequence * lhs, const cisst_msgs__msg__IntervalStatistics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cisst_msgs__msg__IntervalStatistics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cisst_msgs__msg__IntervalStatistics__Sequence__copy(
  const cisst_msgs__msg__IntervalStatistics__Sequence * input,
  cisst_msgs__msg__IntervalStatistics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cisst_msgs__msg__IntervalStatistics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cisst_msgs__msg__IntervalStatistics * data =
      (cisst_msgs__msg__IntervalStatistics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cisst_msgs__msg__IntervalStatistics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cisst_msgs__msg__IntervalStatistics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cisst_msgs__msg__IntervalStatistics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
