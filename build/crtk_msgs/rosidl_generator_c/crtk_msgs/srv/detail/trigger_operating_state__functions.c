// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crtk_msgs:srv/TriggerOperatingState.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/srv/detail/trigger_operating_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
crtk_msgs__srv__TriggerOperatingState_Request__init(crtk_msgs__srv__TriggerOperatingState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
crtk_msgs__srv__TriggerOperatingState_Request__fini(crtk_msgs__srv__TriggerOperatingState_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
crtk_msgs__srv__TriggerOperatingState_Request__are_equal(const crtk_msgs__srv__TriggerOperatingState_Request * lhs, const crtk_msgs__srv__TriggerOperatingState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
crtk_msgs__srv__TriggerOperatingState_Request__copy(
  const crtk_msgs__srv__TriggerOperatingState_Request * input,
  crtk_msgs__srv__TriggerOperatingState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

crtk_msgs__srv__TriggerOperatingState_Request *
crtk_msgs__srv__TriggerOperatingState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__TriggerOperatingState_Request * msg = (crtk_msgs__srv__TriggerOperatingState_Request *)allocator.allocate(sizeof(crtk_msgs__srv__TriggerOperatingState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__srv__TriggerOperatingState_Request));
  bool success = crtk_msgs__srv__TriggerOperatingState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__srv__TriggerOperatingState_Request__destroy(crtk_msgs__srv__TriggerOperatingState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__srv__TriggerOperatingState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__srv__TriggerOperatingState_Request__Sequence__init(crtk_msgs__srv__TriggerOperatingState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__TriggerOperatingState_Request * data = NULL;

  if (size) {
    data = (crtk_msgs__srv__TriggerOperatingState_Request *)allocator.zero_allocate(size, sizeof(crtk_msgs__srv__TriggerOperatingState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__srv__TriggerOperatingState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__srv__TriggerOperatingState_Request__fini(&data[i - 1]);
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
crtk_msgs__srv__TriggerOperatingState_Request__Sequence__fini(crtk_msgs__srv__TriggerOperatingState_Request__Sequence * array)
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
      crtk_msgs__srv__TriggerOperatingState_Request__fini(&array->data[i]);
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

crtk_msgs__srv__TriggerOperatingState_Request__Sequence *
crtk_msgs__srv__TriggerOperatingState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__TriggerOperatingState_Request__Sequence * array = (crtk_msgs__srv__TriggerOperatingState_Request__Sequence *)allocator.allocate(sizeof(crtk_msgs__srv__TriggerOperatingState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__srv__TriggerOperatingState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__srv__TriggerOperatingState_Request__Sequence__destroy(crtk_msgs__srv__TriggerOperatingState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__srv__TriggerOperatingState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__srv__TriggerOperatingState_Request__Sequence__are_equal(const crtk_msgs__srv__TriggerOperatingState_Request__Sequence * lhs, const crtk_msgs__srv__TriggerOperatingState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__srv__TriggerOperatingState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__srv__TriggerOperatingState_Request__Sequence__copy(
  const crtk_msgs__srv__TriggerOperatingState_Request__Sequence * input,
  crtk_msgs__srv__TriggerOperatingState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__srv__TriggerOperatingState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__srv__TriggerOperatingState_Request * data =
      (crtk_msgs__srv__TriggerOperatingState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__srv__TriggerOperatingState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__srv__TriggerOperatingState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__srv__TriggerOperatingState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `operating_state`
#include "crtk_msgs/msg/detail/operating_state__functions.h"

bool
crtk_msgs__srv__TriggerOperatingState_Response__init(crtk_msgs__srv__TriggerOperatingState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // operating_state
  if (!crtk_msgs__msg__OperatingState__init(&msg->operating_state)) {
    crtk_msgs__srv__TriggerOperatingState_Response__fini(msg);
    return false;
  }
  return true;
}

void
crtk_msgs__srv__TriggerOperatingState_Response__fini(crtk_msgs__srv__TriggerOperatingState_Response * msg)
{
  if (!msg) {
    return;
  }
  // operating_state
  crtk_msgs__msg__OperatingState__fini(&msg->operating_state);
}

bool
crtk_msgs__srv__TriggerOperatingState_Response__are_equal(const crtk_msgs__srv__TriggerOperatingState_Response * lhs, const crtk_msgs__srv__TriggerOperatingState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // operating_state
  if (!crtk_msgs__msg__OperatingState__are_equal(
      &(lhs->operating_state), &(rhs->operating_state)))
  {
    return false;
  }
  return true;
}

bool
crtk_msgs__srv__TriggerOperatingState_Response__copy(
  const crtk_msgs__srv__TriggerOperatingState_Response * input,
  crtk_msgs__srv__TriggerOperatingState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // operating_state
  if (!crtk_msgs__msg__OperatingState__copy(
      &(input->operating_state), &(output->operating_state)))
  {
    return false;
  }
  return true;
}

crtk_msgs__srv__TriggerOperatingState_Response *
crtk_msgs__srv__TriggerOperatingState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__TriggerOperatingState_Response * msg = (crtk_msgs__srv__TriggerOperatingState_Response *)allocator.allocate(sizeof(crtk_msgs__srv__TriggerOperatingState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__srv__TriggerOperatingState_Response));
  bool success = crtk_msgs__srv__TriggerOperatingState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__srv__TriggerOperatingState_Response__destroy(crtk_msgs__srv__TriggerOperatingState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__srv__TriggerOperatingState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__srv__TriggerOperatingState_Response__Sequence__init(crtk_msgs__srv__TriggerOperatingState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__TriggerOperatingState_Response * data = NULL;

  if (size) {
    data = (crtk_msgs__srv__TriggerOperatingState_Response *)allocator.zero_allocate(size, sizeof(crtk_msgs__srv__TriggerOperatingState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__srv__TriggerOperatingState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__srv__TriggerOperatingState_Response__fini(&data[i - 1]);
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
crtk_msgs__srv__TriggerOperatingState_Response__Sequence__fini(crtk_msgs__srv__TriggerOperatingState_Response__Sequence * array)
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
      crtk_msgs__srv__TriggerOperatingState_Response__fini(&array->data[i]);
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

crtk_msgs__srv__TriggerOperatingState_Response__Sequence *
crtk_msgs__srv__TriggerOperatingState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__TriggerOperatingState_Response__Sequence * array = (crtk_msgs__srv__TriggerOperatingState_Response__Sequence *)allocator.allocate(sizeof(crtk_msgs__srv__TriggerOperatingState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__srv__TriggerOperatingState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__srv__TriggerOperatingState_Response__Sequence__destroy(crtk_msgs__srv__TriggerOperatingState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__srv__TriggerOperatingState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__srv__TriggerOperatingState_Response__Sequence__are_equal(const crtk_msgs__srv__TriggerOperatingState_Response__Sequence * lhs, const crtk_msgs__srv__TriggerOperatingState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__srv__TriggerOperatingState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__srv__TriggerOperatingState_Response__Sequence__copy(
  const crtk_msgs__srv__TriggerOperatingState_Response__Sequence * input,
  crtk_msgs__srv__TriggerOperatingState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__srv__TriggerOperatingState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__srv__TriggerOperatingState_Response * data =
      (crtk_msgs__srv__TriggerOperatingState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__srv__TriggerOperatingState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__srv__TriggerOperatingState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__srv__TriggerOperatingState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
