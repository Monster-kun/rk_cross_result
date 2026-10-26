// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from web_navigation_msgs:srv/GetNavigationExecution.idl
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
#include "web_navigation_msgs/srv/detail/get_navigation_execution__struct.h"
#include "web_navigation_msgs/srv/detail/get_navigation_execution__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool web_navigation_msgs__srv__get_navigation_execution__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
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
    assert(strncmp("web_navigation_msgs.srv._get_navigation_execution.GetNavigationExecution_Request", full_classname_dest, 80) == 0);
  }
  web_navigation_msgs__srv__GetNavigationExecution_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * web_navigation_msgs__srv__get_navigation_execution__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetNavigationExecution_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("web_navigation_msgs.srv._get_navigation_execution");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetNavigationExecution_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_navigation_execution__struct.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_navigation_execution__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "web_navigation_msgs/msg/detail/navigation_execution__functions.h"
// end nested array functions include
bool web_navigation_msgs__msg__navigation_execution__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * web_navigation_msgs__msg__navigation_execution__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool web_navigation_msgs__srv__get_navigation_execution__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
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
    assert(strncmp("web_navigation_msgs.srv._get_navigation_execution.GetNavigationExecution_Response", full_classname_dest, 81) == 0);
  }
  web_navigation_msgs__srv__GetNavigationExecution_Response * ros_message = _ros_message;
  {  // instance_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "instance_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->instance_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // active
    PyObject * field = PyObject_GetAttrString(_pymsg, "active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // execution_running
    PyObject * field = PyObject_GetAttrString(_pymsg, "execution_running");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->execution_running = (Py_True == field);
    Py_DECREF(field);
  }
  {  // goals
    PyObject * field = PyObject_GetAttrString(_pymsg, "goals");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'goals'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!web_navigation_msgs__msg__NavigationExecution__Sequence__init(&(ros_message->goals), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create web_navigation_msgs__msg__NavigationExecution__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    web_navigation_msgs__msg__NavigationExecution * dest = ros_message->goals.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!web_navigation_msgs__msg__navigation_execution__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * web_navigation_msgs__srv__get_navigation_execution__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetNavigationExecution_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("web_navigation_msgs.srv._get_navigation_execution");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetNavigationExecution_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  web_navigation_msgs__srv__GetNavigationExecution_Response * ros_message = (web_navigation_msgs__srv__GetNavigationExecution_Response *)raw_ros_message;
  {  // instance_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->instance_id.data,
      strlen(ros_message->instance_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "instance_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // execution_running
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->execution_running ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "execution_running", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goals
    PyObject * field = NULL;
    size_t size = ros_message->goals.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    web_navigation_msgs__msg__NavigationExecution * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->goals.data[i]);
      PyObject * pyitem = web_navigation_msgs__msg__navigation_execution__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "goals", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
