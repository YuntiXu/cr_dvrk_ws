// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crtk_msgs:msg/CartesianImpedanceHalfPlaneGains.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `p`
// Member `d`
// Member `bias`
// Member `deadband`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * msg)
{
  if (!msg) {
    return false;
  }
  // p
  if (!geometry_msgs__msg__Vector3__init(&msg->p)) {
    crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(msg);
    return false;
  }
  // d
  if (!geometry_msgs__msg__Vector3__init(&msg->d)) {
    crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(msg);
    return false;
  }
  // bias
  if (!geometry_msgs__msg__Vector3__init(&msg->bias)) {
    crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(msg);
    return false;
  }
  // deadband
  if (!geometry_msgs__msg__Vector3__init(&msg->deadband)) {
    crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(msg);
    return false;
  }
  return true;
}

void
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * msg)
{
  if (!msg) {
    return;
  }
  // p
  geometry_msgs__msg__Vector3__fini(&msg->p);
  // d
  geometry_msgs__msg__Vector3__fini(&msg->d);
  // bias
  geometry_msgs__msg__Vector3__fini(&msg->bias);
  // deadband
  geometry_msgs__msg__Vector3__fini(&msg->deadband);
}

bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__are_equal(const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * lhs, const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // p
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->p), &(rhs->p)))
  {
    return false;
  }
  // d
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->d), &(rhs->d)))
  {
    return false;
  }
  // bias
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->bias), &(rhs->bias)))
  {
    return false;
  }
  // deadband
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->deadband), &(rhs->deadband)))
  {
    return false;
  }
  return true;
}

bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__copy(
  const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * input,
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * output)
{
  if (!input || !output) {
    return false;
  }
  // p
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->p), &(output->p)))
  {
    return false;
  }
  // d
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->d), &(output->d)))
  {
    return false;
  }
  // bias
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->bias), &(output->bias)))
  {
    return false;
  }
  // deadband
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->deadband), &(output->deadband)))
  {
    return false;
  }
  return true;
}

crtk_msgs__msg__CartesianImpedanceHalfPlaneGains *
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * msg = (crtk_msgs__msg__CartesianImpedanceHalfPlaneGains *)allocator.allocate(sizeof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains));
  bool success = crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__destroy(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__init(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * data = NULL;

  if (size) {
    data = (crtk_msgs__msg__CartesianImpedanceHalfPlaneGains *)allocator.zero_allocate(size, sizeof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(&data[i - 1]);
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
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__fini(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * array)
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
      crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(&array->data[i]);
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

crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence *
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * array = (crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence *)allocator.allocate(sizeof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__destroy(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__are_equal(const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * lhs, const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__copy(
  const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * input,
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * data =
      (crtk_msgs__msg__CartesianImpedanceHalfPlaneGains *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
