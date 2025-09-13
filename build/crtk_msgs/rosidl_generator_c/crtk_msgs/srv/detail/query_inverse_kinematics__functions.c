// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crtk_msgs:srv/QueryInverseKinematics.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/srv/detail/query_inverse_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `cp`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `jp`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
crtk_msgs__srv__QueryInverseKinematics_Request__init(crtk_msgs__srv__QueryInverseKinematics_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cp
  if (!geometry_msgs__msg__Pose__init(&msg->cp)) {
    crtk_msgs__srv__QueryInverseKinematics_Request__fini(msg);
    return false;
  }
  // jp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->jp, 0)) {
    crtk_msgs__srv__QueryInverseKinematics_Request__fini(msg);
    return false;
  }
  return true;
}

void
crtk_msgs__srv__QueryInverseKinematics_Request__fini(crtk_msgs__srv__QueryInverseKinematics_Request * msg)
{
  if (!msg) {
    return;
  }
  // cp
  geometry_msgs__msg__Pose__fini(&msg->cp);
  // jp
  rosidl_runtime_c__double__Sequence__fini(&msg->jp);
}

bool
crtk_msgs__srv__QueryInverseKinematics_Request__are_equal(const crtk_msgs__srv__QueryInverseKinematics_Request * lhs, const crtk_msgs__srv__QueryInverseKinematics_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cp
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->cp), &(rhs->cp)))
  {
    return false;
  }
  // jp
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->jp), &(rhs->jp)))
  {
    return false;
  }
  return true;
}

bool
crtk_msgs__srv__QueryInverseKinematics_Request__copy(
  const crtk_msgs__srv__QueryInverseKinematics_Request * input,
  crtk_msgs__srv__QueryInverseKinematics_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cp
  if (!geometry_msgs__msg__Pose__copy(
      &(input->cp), &(output->cp)))
  {
    return false;
  }
  // jp
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->jp), &(output->jp)))
  {
    return false;
  }
  return true;
}

crtk_msgs__srv__QueryInverseKinematics_Request *
crtk_msgs__srv__QueryInverseKinematics_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__QueryInverseKinematics_Request * msg = (crtk_msgs__srv__QueryInverseKinematics_Request *)allocator.allocate(sizeof(crtk_msgs__srv__QueryInverseKinematics_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__srv__QueryInverseKinematics_Request));
  bool success = crtk_msgs__srv__QueryInverseKinematics_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__srv__QueryInverseKinematics_Request__destroy(crtk_msgs__srv__QueryInverseKinematics_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__srv__QueryInverseKinematics_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__srv__QueryInverseKinematics_Request__Sequence__init(crtk_msgs__srv__QueryInverseKinematics_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__QueryInverseKinematics_Request * data = NULL;

  if (size) {
    data = (crtk_msgs__srv__QueryInverseKinematics_Request *)allocator.zero_allocate(size, sizeof(crtk_msgs__srv__QueryInverseKinematics_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__srv__QueryInverseKinematics_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__srv__QueryInverseKinematics_Request__fini(&data[i - 1]);
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
crtk_msgs__srv__QueryInverseKinematics_Request__Sequence__fini(crtk_msgs__srv__QueryInverseKinematics_Request__Sequence * array)
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
      crtk_msgs__srv__QueryInverseKinematics_Request__fini(&array->data[i]);
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

crtk_msgs__srv__QueryInverseKinematics_Request__Sequence *
crtk_msgs__srv__QueryInverseKinematics_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__QueryInverseKinematics_Request__Sequence * array = (crtk_msgs__srv__QueryInverseKinematics_Request__Sequence *)allocator.allocate(sizeof(crtk_msgs__srv__QueryInverseKinematics_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__srv__QueryInverseKinematics_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__srv__QueryInverseKinematics_Request__Sequence__destroy(crtk_msgs__srv__QueryInverseKinematics_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__srv__QueryInverseKinematics_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__srv__QueryInverseKinematics_Request__Sequence__are_equal(const crtk_msgs__srv__QueryInverseKinematics_Request__Sequence * lhs, const crtk_msgs__srv__QueryInverseKinematics_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__srv__QueryInverseKinematics_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__srv__QueryInverseKinematics_Request__Sequence__copy(
  const crtk_msgs__srv__QueryInverseKinematics_Request__Sequence * input,
  crtk_msgs__srv__QueryInverseKinematics_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__srv__QueryInverseKinematics_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__srv__QueryInverseKinematics_Request * data =
      (crtk_msgs__srv__QueryInverseKinematics_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__srv__QueryInverseKinematics_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__srv__QueryInverseKinematics_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__srv__QueryInverseKinematics_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `jp`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
crtk_msgs__srv__QueryInverseKinematics_Response__init(crtk_msgs__srv__QueryInverseKinematics_Response * msg)
{
  if (!msg) {
    return false;
  }
  // jp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->jp, 0)) {
    crtk_msgs__srv__QueryInverseKinematics_Response__fini(msg);
    return false;
  }
  // result
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    crtk_msgs__srv__QueryInverseKinematics_Response__fini(msg);
    return false;
  }
  return true;
}

void
crtk_msgs__srv__QueryInverseKinematics_Response__fini(crtk_msgs__srv__QueryInverseKinematics_Response * msg)
{
  if (!msg) {
    return;
  }
  // jp
  rosidl_runtime_c__double__Sequence__fini(&msg->jp);
  // result
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
crtk_msgs__srv__QueryInverseKinematics_Response__are_equal(const crtk_msgs__srv__QueryInverseKinematics_Response * lhs, const crtk_msgs__srv__QueryInverseKinematics_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // jp
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->jp), &(rhs->jp)))
  {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
crtk_msgs__srv__QueryInverseKinematics_Response__copy(
  const crtk_msgs__srv__QueryInverseKinematics_Response * input,
  crtk_msgs__srv__QueryInverseKinematics_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // jp
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->jp), &(output->jp)))
  {
    return false;
  }
  // result
  output->result = input->result;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

crtk_msgs__srv__QueryInverseKinematics_Response *
crtk_msgs__srv__QueryInverseKinematics_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__QueryInverseKinematics_Response * msg = (crtk_msgs__srv__QueryInverseKinematics_Response *)allocator.allocate(sizeof(crtk_msgs__srv__QueryInverseKinematics_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__srv__QueryInverseKinematics_Response));
  bool success = crtk_msgs__srv__QueryInverseKinematics_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__srv__QueryInverseKinematics_Response__destroy(crtk_msgs__srv__QueryInverseKinematics_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__srv__QueryInverseKinematics_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__srv__QueryInverseKinematics_Response__Sequence__init(crtk_msgs__srv__QueryInverseKinematics_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__QueryInverseKinematics_Response * data = NULL;

  if (size) {
    data = (crtk_msgs__srv__QueryInverseKinematics_Response *)allocator.zero_allocate(size, sizeof(crtk_msgs__srv__QueryInverseKinematics_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__srv__QueryInverseKinematics_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__srv__QueryInverseKinematics_Response__fini(&data[i - 1]);
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
crtk_msgs__srv__QueryInverseKinematics_Response__Sequence__fini(crtk_msgs__srv__QueryInverseKinematics_Response__Sequence * array)
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
      crtk_msgs__srv__QueryInverseKinematics_Response__fini(&array->data[i]);
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

crtk_msgs__srv__QueryInverseKinematics_Response__Sequence *
crtk_msgs__srv__QueryInverseKinematics_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__srv__QueryInverseKinematics_Response__Sequence * array = (crtk_msgs__srv__QueryInverseKinematics_Response__Sequence *)allocator.allocate(sizeof(crtk_msgs__srv__QueryInverseKinematics_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__srv__QueryInverseKinematics_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__srv__QueryInverseKinematics_Response__Sequence__destroy(crtk_msgs__srv__QueryInverseKinematics_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__srv__QueryInverseKinematics_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__srv__QueryInverseKinematics_Response__Sequence__are_equal(const crtk_msgs__srv__QueryInverseKinematics_Response__Sequence * lhs, const crtk_msgs__srv__QueryInverseKinematics_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__srv__QueryInverseKinematics_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__srv__QueryInverseKinematics_Response__Sequence__copy(
  const crtk_msgs__srv__QueryInverseKinematics_Response__Sequence * input,
  crtk_msgs__srv__QueryInverseKinematics_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__srv__QueryInverseKinematics_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__srv__QueryInverseKinematics_Response * data =
      (crtk_msgs__srv__QueryInverseKinematics_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__srv__QueryInverseKinematics_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__srv__QueryInverseKinematics_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__srv__QueryInverseKinematics_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
