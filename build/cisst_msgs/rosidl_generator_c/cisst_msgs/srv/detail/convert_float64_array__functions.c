// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cisst_msgs:srv/ConvertFloat64Array.idl
// generated code does not contain a copyright notice
#include "cisst_msgs/srv/detail/convert_float64_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cisst_msgs__srv__ConvertFloat64Array_Request__init(cisst_msgs__srv__ConvertFloat64Array_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__double__Sequence__init(&msg->input, 0)) {
    cisst_msgs__srv__ConvertFloat64Array_Request__fini(msg);
    return false;
  }
  return true;
}

void
cisst_msgs__srv__ConvertFloat64Array_Request__fini(cisst_msgs__srv__ConvertFloat64Array_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
  rosidl_runtime_c__double__Sequence__fini(&msg->input);
}

bool
cisst_msgs__srv__ConvertFloat64Array_Request__are_equal(const cisst_msgs__srv__ConvertFloat64Array_Request * lhs, const cisst_msgs__srv__ConvertFloat64Array_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  return true;
}

bool
cisst_msgs__srv__ConvertFloat64Array_Request__copy(
  const cisst_msgs__srv__ConvertFloat64Array_Request * input,
  cisst_msgs__srv__ConvertFloat64Array_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  return true;
}

cisst_msgs__srv__ConvertFloat64Array_Request *
cisst_msgs__srv__ConvertFloat64Array_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__srv__ConvertFloat64Array_Request * msg = (cisst_msgs__srv__ConvertFloat64Array_Request *)allocator.allocate(sizeof(cisst_msgs__srv__ConvertFloat64Array_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cisst_msgs__srv__ConvertFloat64Array_Request));
  bool success = cisst_msgs__srv__ConvertFloat64Array_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cisst_msgs__srv__ConvertFloat64Array_Request__destroy(cisst_msgs__srv__ConvertFloat64Array_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cisst_msgs__srv__ConvertFloat64Array_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cisst_msgs__srv__ConvertFloat64Array_Request__Sequence__init(cisst_msgs__srv__ConvertFloat64Array_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__srv__ConvertFloat64Array_Request * data = NULL;

  if (size) {
    data = (cisst_msgs__srv__ConvertFloat64Array_Request *)allocator.zero_allocate(size, sizeof(cisst_msgs__srv__ConvertFloat64Array_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cisst_msgs__srv__ConvertFloat64Array_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cisst_msgs__srv__ConvertFloat64Array_Request__fini(&data[i - 1]);
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
cisst_msgs__srv__ConvertFloat64Array_Request__Sequence__fini(cisst_msgs__srv__ConvertFloat64Array_Request__Sequence * array)
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
      cisst_msgs__srv__ConvertFloat64Array_Request__fini(&array->data[i]);
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

cisst_msgs__srv__ConvertFloat64Array_Request__Sequence *
cisst_msgs__srv__ConvertFloat64Array_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__srv__ConvertFloat64Array_Request__Sequence * array = (cisst_msgs__srv__ConvertFloat64Array_Request__Sequence *)allocator.allocate(sizeof(cisst_msgs__srv__ConvertFloat64Array_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cisst_msgs__srv__ConvertFloat64Array_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cisst_msgs__srv__ConvertFloat64Array_Request__Sequence__destroy(cisst_msgs__srv__ConvertFloat64Array_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cisst_msgs__srv__ConvertFloat64Array_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cisst_msgs__srv__ConvertFloat64Array_Request__Sequence__are_equal(const cisst_msgs__srv__ConvertFloat64Array_Request__Sequence * lhs, const cisst_msgs__srv__ConvertFloat64Array_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cisst_msgs__srv__ConvertFloat64Array_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cisst_msgs__srv__ConvertFloat64Array_Request__Sequence__copy(
  const cisst_msgs__srv__ConvertFloat64Array_Request__Sequence * input,
  cisst_msgs__srv__ConvertFloat64Array_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cisst_msgs__srv__ConvertFloat64Array_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cisst_msgs__srv__ConvertFloat64Array_Request * data =
      (cisst_msgs__srv__ConvertFloat64Array_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cisst_msgs__srv__ConvertFloat64Array_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cisst_msgs__srv__ConvertFloat64Array_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cisst_msgs__srv__ConvertFloat64Array_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `output`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cisst_msgs__srv__ConvertFloat64Array_Response__init(cisst_msgs__srv__ConvertFloat64Array_Response * msg)
{
  if (!msg) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__double__Sequence__init(&msg->output, 0)) {
    cisst_msgs__srv__ConvertFloat64Array_Response__fini(msg);
    return false;
  }
  return true;
}

void
cisst_msgs__srv__ConvertFloat64Array_Response__fini(cisst_msgs__srv__ConvertFloat64Array_Response * msg)
{
  if (!msg) {
    return;
  }
  // output
  rosidl_runtime_c__double__Sequence__fini(&msg->output);
}

bool
cisst_msgs__srv__ConvertFloat64Array_Response__are_equal(const cisst_msgs__srv__ConvertFloat64Array_Response * lhs, const cisst_msgs__srv__ConvertFloat64Array_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  return true;
}

bool
cisst_msgs__srv__ConvertFloat64Array_Response__copy(
  const cisst_msgs__srv__ConvertFloat64Array_Response * input,
  cisst_msgs__srv__ConvertFloat64Array_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  return true;
}

cisst_msgs__srv__ConvertFloat64Array_Response *
cisst_msgs__srv__ConvertFloat64Array_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__srv__ConvertFloat64Array_Response * msg = (cisst_msgs__srv__ConvertFloat64Array_Response *)allocator.allocate(sizeof(cisst_msgs__srv__ConvertFloat64Array_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cisst_msgs__srv__ConvertFloat64Array_Response));
  bool success = cisst_msgs__srv__ConvertFloat64Array_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cisst_msgs__srv__ConvertFloat64Array_Response__destroy(cisst_msgs__srv__ConvertFloat64Array_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cisst_msgs__srv__ConvertFloat64Array_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cisst_msgs__srv__ConvertFloat64Array_Response__Sequence__init(cisst_msgs__srv__ConvertFloat64Array_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__srv__ConvertFloat64Array_Response * data = NULL;

  if (size) {
    data = (cisst_msgs__srv__ConvertFloat64Array_Response *)allocator.zero_allocate(size, sizeof(cisst_msgs__srv__ConvertFloat64Array_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cisst_msgs__srv__ConvertFloat64Array_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cisst_msgs__srv__ConvertFloat64Array_Response__fini(&data[i - 1]);
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
cisst_msgs__srv__ConvertFloat64Array_Response__Sequence__fini(cisst_msgs__srv__ConvertFloat64Array_Response__Sequence * array)
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
      cisst_msgs__srv__ConvertFloat64Array_Response__fini(&array->data[i]);
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

cisst_msgs__srv__ConvertFloat64Array_Response__Sequence *
cisst_msgs__srv__ConvertFloat64Array_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cisst_msgs__srv__ConvertFloat64Array_Response__Sequence * array = (cisst_msgs__srv__ConvertFloat64Array_Response__Sequence *)allocator.allocate(sizeof(cisst_msgs__srv__ConvertFloat64Array_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cisst_msgs__srv__ConvertFloat64Array_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cisst_msgs__srv__ConvertFloat64Array_Response__Sequence__destroy(cisst_msgs__srv__ConvertFloat64Array_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cisst_msgs__srv__ConvertFloat64Array_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cisst_msgs__srv__ConvertFloat64Array_Response__Sequence__are_equal(const cisst_msgs__srv__ConvertFloat64Array_Response__Sequence * lhs, const cisst_msgs__srv__ConvertFloat64Array_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cisst_msgs__srv__ConvertFloat64Array_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cisst_msgs__srv__ConvertFloat64Array_Response__Sequence__copy(
  const cisst_msgs__srv__ConvertFloat64Array_Response__Sequence * input,
  cisst_msgs__srv__ConvertFloat64Array_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cisst_msgs__srv__ConvertFloat64Array_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cisst_msgs__srv__ConvertFloat64Array_Response * data =
      (cisst_msgs__srv__ConvertFloat64Array_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cisst_msgs__srv__ConvertFloat64Array_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cisst_msgs__srv__ConvertFloat64Array_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cisst_msgs__srv__ConvertFloat64Array_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
