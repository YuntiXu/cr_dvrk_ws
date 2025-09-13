// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cisst_msgs:msg/DoubleVec.idl
// generated code does not contain a copyright notice
#include "cisst_msgs/msg/detail/double_vec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cisst_msgs__msg__DoubleVec__init(cisst_msgs__msg__DoubleVec * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cisst_msgs__msg__DoubleVec__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    cisst_msgs__msg__DoubleVec__fini(msg);
    return false;
  }
  return true;
}

void
cisst_msgs__msg__DoubleVec__fini(cisst_msgs__msg__DoubleVec * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
}

bool
cisst_msgs__msg__DoubleVec__are_equal(const cisst_msgs__msg__DoubleVec * lhs, const cisst_msgs__msg__DoubleVec * rhs)
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
  // data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
cisst_msgs__msg__DoubleVec__copy(
  const cisst_msgs__msg__DoubleVec * input,
  cisst_msgs__msg__DoubleVec * output)
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
  // data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

cisst_msgs__msg__DoubleVec *
cisst_msgs__msg__DoubleVec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__msg__DoubleVec * msg = (cisst_msgs__msg__DoubleVec *)allocator.allocate(sizeof(cisst_msgs__msg__DoubleVec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cisst_msgs__msg__DoubleVec));
  bool success = cisst_msgs__msg__DoubleVec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cisst_msgs__msg__DoubleVec__destroy(cisst_msgs__msg__DoubleVec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cisst_msgs__msg__DoubleVec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cisst_msgs__msg__DoubleVec__Sequence__init(cisst_msgs__msg__DoubleVec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__msg__DoubleVec * data = NULL;

  if (size) {
    data = (cisst_msgs__msg__DoubleVec *)allocator.zero_allocate(size, sizeof(cisst_msgs__msg__DoubleVec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cisst_msgs__msg__DoubleVec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cisst_msgs__msg__DoubleVec__fini(&data[i - 1]);
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
cisst_msgs__msg__DoubleVec__Sequence__fini(cisst_msgs__msg__DoubleVec__Sequence * array)
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
      cisst_msgs__msg__DoubleVec__fini(&array->data[i]);
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

cisst_msgs__msg__DoubleVec__Sequence *
cisst_msgs__msg__DoubleVec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__msg__DoubleVec__Sequence * array = (cisst_msgs__msg__DoubleVec__Sequence *)allocator.allocate(sizeof(cisst_msgs__msg__DoubleVec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cisst_msgs__msg__DoubleVec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cisst_msgs__msg__DoubleVec__Sequence__destroy(cisst_msgs__msg__DoubleVec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cisst_msgs__msg__DoubleVec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cisst_msgs__msg__DoubleVec__Sequence__are_equal(const cisst_msgs__msg__DoubleVec__Sequence * lhs, const cisst_msgs__msg__DoubleVec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cisst_msgs__msg__DoubleVec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cisst_msgs__msg__DoubleVec__Sequence__copy(
  const cisst_msgs__msg__DoubleVec__Sequence * input,
  cisst_msgs__msg__DoubleVec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cisst_msgs__msg__DoubleVec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cisst_msgs__msg__DoubleVec * data =
      (cisst_msgs__msg__DoubleVec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cisst_msgs__msg__DoubleVec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cisst_msgs__msg__DoubleVec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cisst_msgs__msg__DoubleVec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
