// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cisst_msgs:msg/IntervalStatistics.idl
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
#include "cisst_msgs/msg/detail/interval_statistics__struct.h"
#include "cisst_msgs/msg/detail/interval_statistics__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cisst_msgs__msg__interval_statistics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("cisst_msgs.msg._interval_statistics.IntervalStatistics", full_classname_dest, 54) == 0);
  }
  cisst_msgs__msg__IntervalStatistics * ros_message = _ros_message;
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
  {  // period_avg
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_avg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->period_avg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // period_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->period_std_dev = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // period_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->period_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // period_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->period_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // compute_time_avg
    PyObject * field = PyObject_GetAttrString(_pymsg, "compute_time_avg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->compute_time_avg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // compute_time_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "compute_time_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->compute_time_std_dev = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // compute_time_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "compute_time_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->compute_time_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // compute_time_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "compute_time_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->compute_time_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // number_of_samples
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_samples");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_samples = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // number_of_overruns
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_overruns");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_overruns = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // statistics_interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "statistics_interval");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->statistics_interval = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // user_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_data");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->user_data = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cisst_msgs__msg__interval_statistics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IntervalStatistics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cisst_msgs.msg._interval_statistics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IntervalStatistics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cisst_msgs__msg__IntervalStatistics * ros_message = (cisst_msgs__msg__IntervalStatistics *)raw_ros_message;
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
  {  // period_avg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->period_avg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_avg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->period_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->period_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->period_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // compute_time_avg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->compute_time_avg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "compute_time_avg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // compute_time_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->compute_time_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "compute_time_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // compute_time_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->compute_time_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "compute_time_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // compute_time_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->compute_time_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "compute_time_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_samples
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->number_of_samples);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_samples", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_overruns
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->number_of_overruns);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_overruns", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // statistics_interval
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->statistics_interval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "statistics_interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_data
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->user_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
