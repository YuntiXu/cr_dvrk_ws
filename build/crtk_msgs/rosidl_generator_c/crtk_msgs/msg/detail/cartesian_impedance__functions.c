// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crtk_msgs:msg/CartesianImpedance.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/msg/detail/cartesian_impedance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `force_orientation`
// Member `torque_orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `force_position`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `position_positive`
// Member `position_negative`
// Member `orientation_positive`
// Member `orientation_negative`
#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__functions.h"

bool
crtk_msgs__msg__CartesianImpedance__init(crtk_msgs__msg__CartesianImpedance * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    crtk_msgs__msg__CartesianImpedance__fini(msg);
    return false;
  }
  // force_orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->force_orientation)) {
    crtk_msgs__msg__CartesianImpedance__fini(msg);
    return false;
  }
  // force_position
  if (!geometry_msgs__msg__Vector3__init(&msg->force_position)) {
    crtk_msgs__msg__CartesianImpedance__fini(msg);
    return false;
  }
  // torque_orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->torque_orientation)) {
    crtk_msgs__msg__CartesianImpedance__fini(msg);
    return false;
  }
  // position_positive
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(&msg->position_positive)) {
    crtk_msgs__msg__CartesianImpedance__fini(msg);
    return false;
  }
  // position_negative
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(&msg->position_negative)) {
    crtk_msgs__msg__CartesianImpedance__fini(msg);
    return false;
  }
  // orientation_positive
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(&msg->orientation_positive)) {
    crtk_msgs__msg__CartesianImpedance__fini(msg);
    return false;
  }
  // orientation_negative
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(&msg->orientation_negative)) {
    crtk_msgs__msg__CartesianImpedance__fini(msg);
    return false;
  }
  return true;
}

void
crtk_msgs__msg__CartesianImpedance__fini(crtk_msgs__msg__CartesianImpedance * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // force_orientation
  geometry_msgs__msg__Quaternion__fini(&msg->force_orientation);
  // force_position
  geometry_msgs__msg__Vector3__fini(&msg->force_position);
  // torque_orientation
  geometry_msgs__msg__Quaternion__fini(&msg->torque_orientation);
  // position_positive
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(&msg->position_positive);
  // position_negative
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(&msg->position_negative);
  // orientation_positive
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(&msg->orientation_positive);
  // orientation_negative
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(&msg->orientation_negative);
}

bool
crtk_msgs__msg__CartesianImpedance__are_equal(const crtk_msgs__msg__CartesianImpedance * lhs, const crtk_msgs__msg__CartesianImpedance * rhs)
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
  // force_orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->force_orientation), &(rhs->force_orientation)))
  {
    return false;
  }
  // force_position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->force_position), &(rhs->force_position)))
  {
    return false;
  }
  // torque_orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->torque_orientation), &(rhs->torque_orientation)))
  {
    return false;
  }
  // position_positive
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__are_equal(
      &(lhs->position_positive), &(rhs->position_positive)))
  {
    return false;
  }
  // position_negative
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__are_equal(
      &(lhs->position_negative), &(rhs->position_negative)))
  {
    return false;
  }
  // orientation_positive
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__are_equal(
      &(lhs->orientation_positive), &(rhs->orientation_positive)))
  {
    return false;
  }
  // orientation_negative
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__are_equal(
      &(lhs->orientation_negative), &(rhs->orientation_negative)))
  {
    return false;
  }
  return true;
}

bool
crtk_msgs__msg__CartesianImpedance__copy(
  const crtk_msgs__msg__CartesianImpedance * input,
  crtk_msgs__msg__CartesianImpedance * output)
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
  // force_orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->force_orientation), &(output->force_orientation)))
  {
    return false;
  }
  // force_position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->force_position), &(output->force_position)))
  {
    return false;
  }
  // torque_orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->torque_orientation), &(output->torque_orientation)))
  {
    return false;
  }
  // position_positive
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__copy(
      &(input->position_positive), &(output->position_positive)))
  {
    return false;
  }
  // position_negative
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__copy(
      &(input->position_negative), &(output->position_negative)))
  {
    return false;
  }
  // orientation_positive
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__copy(
      &(input->orientation_positive), &(output->orientation_positive)))
  {
    return false;
  }
  // orientation_negative
  if (!crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__copy(
      &(input->orientation_negative), &(output->orientation_negative)))
  {
    return false;
  }
  return true;
}

crtk_msgs__msg__CartesianImpedance *
crtk_msgs__msg__CartesianImpedance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianImpedance * msg = (crtk_msgs__msg__CartesianImpedance *)allocator.allocate(sizeof(crtk_msgs__msg__CartesianImpedance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__msg__CartesianImpedance));
  bool success = crtk_msgs__msg__CartesianImpedance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__msg__CartesianImpedance__destroy(crtk_msgs__msg__CartesianImpedance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__msg__CartesianImpedance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__msg__CartesianImpedance__Sequence__init(crtk_msgs__msg__CartesianImpedance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianImpedance * data = NULL;

  if (size) {
    data = (crtk_msgs__msg__CartesianImpedance *)allocator.zero_allocate(size, sizeof(crtk_msgs__msg__CartesianImpedance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__msg__CartesianImpedance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__msg__CartesianImpedance__fini(&data[i - 1]);
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
crtk_msgs__msg__CartesianImpedance__Sequence__fini(crtk_msgs__msg__CartesianImpedance__Sequence * array)
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
      crtk_msgs__msg__CartesianImpedance__fini(&array->data[i]);
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

crtk_msgs__msg__CartesianImpedance__Sequence *
crtk_msgs__msg__CartesianImpedance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianImpedance__Sequence * array = (crtk_msgs__msg__CartesianImpedance__Sequence *)allocator.allocate(sizeof(crtk_msgs__msg__CartesianImpedance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__msg__CartesianImpedance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__msg__CartesianImpedance__Sequence__destroy(crtk_msgs__msg__CartesianImpedance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__msg__CartesianImpedance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__msg__CartesianImpedance__Sequence__are_equal(const crtk_msgs__msg__CartesianImpedance__Sequence * lhs, const crtk_msgs__msg__CartesianImpedance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__msg__CartesianImpedance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__msg__CartesianImpedance__Sequence__copy(
  const crtk_msgs__msg__CartesianImpedance__Sequence * input,
  crtk_msgs__msg__CartesianImpedance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__msg__CartesianImpedance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__msg__CartesianImpedance * data =
      (crtk_msgs__msg__CartesianImpedance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__msg__CartesianImpedance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__msg__CartesianImpedance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__msg__CartesianImpedance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
