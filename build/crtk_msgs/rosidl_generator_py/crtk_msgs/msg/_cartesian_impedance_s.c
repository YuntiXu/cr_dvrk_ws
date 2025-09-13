// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from crtk_msgs:msg/CartesianImpedance.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "crtk_msgs/msg/detail/cartesian_impedance__struct.h"
#include "crtk_msgs/msg/detail/cartesian_impedance__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__quaternion__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__quaternion__convert_to_py(void * raw_ros_message);
bool crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_to_py(void * raw_ros_message);
bool crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_to_py(void * raw_ros_message);
bool crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_to_py(void * raw_ros_message);
bool crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool crtk_msgs__msg__cartesian_impedance__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("crtk_msgs.msg._cartesian_impedance.CartesianImpedance", full_classname_dest, 53) == 0);
  }
  crtk_msgs__msg__CartesianImpedance * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // force_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_orientation");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__quaternion__convert_from_py(field, &ros_message->force_orientation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // force_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->force_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // torque_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque_orientation");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__quaternion__convert_from_py(field, &ros_message->torque_orientation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position_positive
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_positive");
    if (!field) {
      return false;
    }
    if (!crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_from_py(field, &ros_message->position_positive)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position_negative
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_negative");
    if (!field) {
      return false;
    }
    if (!crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_from_py(field, &ros_message->position_negative)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // orientation_positive
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_positive");
    if (!field) {
      return false;
    }
    if (!crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_from_py(field, &ros_message->orientation_positive)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // orientation_negative
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_negative");
    if (!field) {
      return false;
    }
    if (!crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_from_py(field, &ros_message->orientation_negative)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * crtk_msgs__msg__cartesian_impedance__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CartesianImpedance */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("crtk_msgs.msg._cartesian_impedance");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CartesianImpedance");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  crtk_msgs__msg__CartesianImpedance * ros_message = (crtk_msgs__msg__CartesianImpedance *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_orientation
    PyObject * field = NULL;
    field = geometry_msgs__msg__quaternion__convert_to_py(&ros_message->force_orientation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->force_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque_orientation
    PyObject * field = NULL;
    field = geometry_msgs__msg__quaternion__convert_to_py(&ros_message->torque_orientation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_positive
    PyObject * field = NULL;
    field = crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_to_py(&ros_message->position_positive);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_positive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_negative
    PyObject * field = NULL;
    field = crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_to_py(&ros_message->position_negative);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_negative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_positive
    PyObject * field = NULL;
    field = crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_to_py(&ros_message->orientation_positive);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation_positive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_negative
    PyObject * field = NULL;
    field = crtk_msgs__msg__cartesian_impedance_half_plane_gains__convert_to_py(&ros_message->orientation_negative);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation_negative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
