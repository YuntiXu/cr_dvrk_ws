// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crtk_msgs:msg/OperatingState.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/msg/detail/operating_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
crtk_msgs__msg__OperatingState__init(crtk_msgs__msg__OperatingState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    crtk_msgs__msg__OperatingState__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    crtk_msgs__msg__OperatingState__fini(msg);
    return false;
  }
  // is_homed
  // is_busy
  return true;
}

void
crtk_msgs__msg__OperatingState__fini(crtk_msgs__msg__OperatingState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // is_homed
  // is_busy
}

bool
crtk_msgs__msg__OperatingState__are_equal(const crtk_msgs__msg__OperatingState * lhs, const crtk_msgs__msg__OperatingState * rhs)
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
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // is_homed
  if (lhs->is_homed != rhs->is_homed) {
    return false;
  }
  // is_busy
  if (lhs->is_busy != rhs->is_busy) {
    return false;
  }
  return true;
}

bool
crtk_msgs__msg__OperatingState__copy(
  const crtk_msgs__msg__OperatingState * input,
  crtk_msgs__msg__OperatingState * output)
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
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // is_homed
  output->is_homed = input->is_homed;
  // is_busy
  output->is_busy = input->is_busy;
  return true;
}

crtk_msgs__msg__OperatingState *
crtk_msgs__msg__OperatingState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__OperatingState * msg = (crtk_msgs__msg__OperatingState *)allocator.allocate(sizeof(crtk_msgs__msg__OperatingState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__msg__OperatingState));
  bool success = crtk_msgs__msg__OperatingState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__msg__OperatingState__destroy(crtk_msgs__msg__OperatingState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__msg__OperatingState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__msg__OperatingState__Sequence__init(crtk_msgs__msg__OperatingState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__OperatingState * data = NULL;

  if (size) {
    data = (crtk_msgs__msg__OperatingState *)allocator.zero_allocate(size, sizeof(crtk_msgs__msg__OperatingState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__msg__OperatingState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__msg__OperatingState__fini(&data[i - 1]);
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
crtk_msgs__msg__OperatingState__Sequence__fini(crtk_msgs__msg__OperatingState__Sequence * array)
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
      crtk_msgs__msg__OperatingState__fini(&array->data[i]);
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

crtk_msgs__msg__OperatingState__Sequence *
crtk_msgs__msg__OperatingState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__OperatingState__Sequence * array = (crtk_msgs__msg__OperatingState__Sequence *)allocator.allocate(sizeof(crtk_msgs__msg__OperatingState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__msg__OperatingState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__msg__OperatingState__Sequence__destroy(crtk_msgs__msg__OperatingState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__msg__OperatingState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__msg__OperatingState__Sequence__are_equal(const crtk_msgs__msg__OperatingState__Sequence * lhs, const crtk_msgs__msg__OperatingState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__msg__OperatingState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__msg__OperatingState__Sequence__copy(
  const crtk_msgs__msg__OperatingState__Sequence * input,
  crtk_msgs__msg__OperatingState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__msg__OperatingState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__msg__OperatingState * data =
      (crtk_msgs__msg__OperatingState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__msg__OperatingState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__msg__OperatingState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__msg__OperatingState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
