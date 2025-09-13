// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cisst_msgs:msg/DoubleVec.idl
// generated code does not contain a copyright notice

#ifndef CISST_MSGS__MSG__DETAIL__DOUBLE_VEC__FUNCTIONS_H_
#define CISST_MSGS__MSG__DETAIL__DOUBLE_VEC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cisst_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cisst_msgs/msg/detail/double_vec__struct.h"

/// Initialize msg/DoubleVec message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cisst_msgs__msg__DoubleVec
 * )) before or use
 * cisst_msgs__msg__DoubleVec__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
bool
cisst_msgs__msg__DoubleVec__init(cisst_msgs__msg__DoubleVec * msg);

/// Finalize msg/DoubleVec message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
void
cisst_msgs__msg__DoubleVec__fini(cisst_msgs__msg__DoubleVec * msg);

/// Create msg/DoubleVec message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cisst_msgs__msg__DoubleVec__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
cisst_msgs__msg__DoubleVec *
cisst_msgs__msg__DoubleVec__create();

/// Destroy msg/DoubleVec message.
/**
 * It calls
 * cisst_msgs__msg__DoubleVec__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
void
cisst_msgs__msg__DoubleVec__destroy(cisst_msgs__msg__DoubleVec * msg);

/// Check for msg/DoubleVec message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
bool
cisst_msgs__msg__DoubleVec__are_equal(const cisst_msgs__msg__DoubleVec * lhs, const cisst_msgs__msg__DoubleVec * rhs);

/// Copy a msg/DoubleVec message.
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
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
bool
cisst_msgs__msg__DoubleVec__copy(
  const cisst_msgs__msg__DoubleVec * input,
  cisst_msgs__msg__DoubleVec * output);

/// Initialize array of msg/DoubleVec messages.
/**
 * It allocates the memory for the number of elements and calls
 * cisst_msgs__msg__DoubleVec__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
bool
cisst_msgs__msg__DoubleVec__Sequence__init(cisst_msgs__msg__DoubleVec__Sequence * array, size_t size);

/// Finalize array of msg/DoubleVec messages.
/**
 * It calls
 * cisst_msgs__msg__DoubleVec__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
void
cisst_msgs__msg__DoubleVec__Sequence__fini(cisst_msgs__msg__DoubleVec__Sequence * array);

/// Create array of msg/DoubleVec messages.
/**
 * It allocates the memory for the array and calls
 * cisst_msgs__msg__DoubleVec__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
cisst_msgs__msg__DoubleVec__Sequence *
cisst_msgs__msg__DoubleVec__Sequence__create(size_t size);

/// Destroy array of msg/DoubleVec messages.
/**
 * It calls
 * cisst_msgs__msg__DoubleVec__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
void
cisst_msgs__msg__DoubleVec__Sequence__destroy(cisst_msgs__msg__DoubleVec__Sequence * array);

/// Check for msg/DoubleVec message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
bool
cisst_msgs__msg__DoubleVec__Sequence__are_equal(const cisst_msgs__msg__DoubleVec__Sequence * lhs, const cisst_msgs__msg__DoubleVec__Sequence * rhs);

/// Copy an array of msg/DoubleVec messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cisst_msgs
bool
cisst_msgs__msg__DoubleVec__Sequence__copy(
  const cisst_msgs__msg__DoubleVec__Sequence * input,
  cisst_msgs__msg__DoubleVec__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CISST_MSGS__MSG__DETAIL__DOUBLE_VEC__FUNCTIONS_H_
