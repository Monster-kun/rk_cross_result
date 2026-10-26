// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from chassis_control_msgs:msg/Canframe.idl
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
#include "chassis_control_msgs/msg/detail/canframe__struct.h"
#include "chassis_control_msgs/msg/detail/canframe__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool chassis_control_msgs__msg__canframe__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("chassis_control_msgs.msg._canframe.Canframe", full_classname_dest, 43) == 0);
  }
  chassis_control_msgs__msg__Canframe * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dricmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "dricmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dricmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pivcmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "pivcmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pivcmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chassis_control_msgs__msg__canframe__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Canframe */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chassis_control_msgs.msg._canframe");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Canframe");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chassis_control_msgs__msg__Canframe * ros_message = (chassis_control_msgs__msg__Canframe *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dricmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dricmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dricmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pivcmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pivcmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pivcmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
