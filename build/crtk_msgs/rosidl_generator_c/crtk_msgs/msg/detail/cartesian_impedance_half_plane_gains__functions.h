// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from crtk_msgs:msg/CartesianImpedanceHalfPlaneGains.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__FUNCTIONS_H_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "crtk_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "crtk_msgs/msg/detail/cartesian_impedance_half_plane_gains__struct.h"

/// Initialize msg/CartesianImpedanceHalfPlaneGains message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crtk_msgs__msg__CartesianImpedanceHalfPlaneGains
 * )) before or use
 * crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * msg);

/// Finalize msg/CartesianImpedanceHalfPlaneGains message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
void
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * msg);

/// Create msg/CartesianImpedanceHalfPlaneGains message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains *
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__create();

/// Destroy msg/CartesianImpedanceHalfPlaneGains message.
/**
 * It calls
 * crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
void
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__destroy(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * msg);

/// Check for msg/CartesianImpedanceHalfPlaneGains message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__are_equal(const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * lhs, const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * rhs);

/// Copy a msg/CartesianImpedanceHalfPlaneGains message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__copy(
  const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * input,
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains * output);

/// Initialize array of msg/CartesianImpedanceHalfPlaneGains messages.
/**
 * It allocates the memory for the number of elements and calls
 * crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__init(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * array, size_t size);

/// Finalize array of msg/CartesianImpedanceHalfPlaneGains messages.
/**
 * It calls
 * crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
void
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__fini(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * array);

/// Create array of msg/CartesianImpedanceHalfPlaneGains messages.
/**
 * It allocates the memory for the array and calls
 * crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence *
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__create(size_t size);

/// Destroy array of msg/CartesianImpedanceHalfPlaneGains messages.
/**
 * It calls
 * crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
void
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__destroy(crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * array);

/// Check for msg/CartesianImpedanceHalfPlaneGains message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__are_equal(const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * lhs, const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * rhs);

/// Copy an array of msg/CartesianImpedanceHalfPlaneGains messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crtk_msgs
bool
crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence__copy(
  const crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * input,
  crtk_msgs__msg__CartesianImpedanceHalfPlaneGains__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_IMPEDANCE_HALF_PLANE_GAINS__FUNCTIONS_H_
