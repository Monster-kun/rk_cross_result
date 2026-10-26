// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from web_navigation_msgs:srv/ControlLease.idl
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
#include "web_navigation_msgs/srv/detail/control_lease__struct.h"
#include "web_navigation_msgs/srv/detail/control_lease__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool web_navigation_msgs__srv__control_lease__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("web_navigation_msgs.srv._control_lease.ControlLease_Request", full_classname_dest, 59) == 0);
  }
  web_navigation_msgs__srv__ControlLease_Request * ros_message = _ros_message;
  {  // operation
    PyObject * field = PyObject_GetAttrString(_pymsg, "operation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // session_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "session_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->session_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // device_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_label");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->device_label, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // manager_boot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "manager_boot_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->manager_boot_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lease_token
    PyObject * field = PyObject_GetAttrString(_pymsg, "lease_token");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lease_token, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // control_epoch
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_epoch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_epoch = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * web_navigation_msgs__srv__control_lease__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlLease_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("web_navigation_msgs.srv._control_lease");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlLease_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  web_navigation_msgs__srv__ControlLease_Request * ros_message = (web_navigation_msgs__srv__ControlLease_Request *)raw_ros_message;
  {  // operation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // session_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->session_id.data,
      strlen(ros_message->session_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "session_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_label
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->device_label.data,
      strlen(ros_message->device_label.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manager_boot_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->manager_boot_id.data,
      strlen(ros_message->manager_boot_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "manager_boot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lease_token
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lease_token.data,
      strlen(ros_message->lease_token.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lease_token", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_epoch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->control_epoch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_epoch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

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
// #include "web_navigation_msgs/srv/detail/control_lease__struct.h"
// already included above
// #include "web_navigation_msgs/srv/detail/control_lease__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool web_navigation_msgs__srv__control_lease__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("web_navigation_msgs.srv._control_lease.ControlLease_Response", full_classname_dest, 60) == 0);
  }
  web_navigation_msgs__srv__ControlLease_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // code
    PyObject * field = PyObject_GetAttrString(_pymsg, "code");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->code, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // manager_boot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "manager_boot_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->manager_boot_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lease_token
    PyObject * field = PyObject_GetAttrString(_pymsg, "lease_token");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lease_token, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // control_epoch
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_epoch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_epoch = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // lease_ttl_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "lease_ttl_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lease_ttl_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // control_held
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_held");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->control_held = (Py_True == field);
    Py_DECREF(field);
  }
  {  // owner_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "owner_label");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->owner_label, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * web_navigation_msgs__srv__control_lease__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlLease_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("web_navigation_msgs.srv._control_lease");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlLease_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  web_navigation_msgs__srv__ControlLease_Response * ros_message = (web_navigation_msgs__srv__ControlLease_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // code
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->code.data,
      strlen(ros_message->code.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manager_boot_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->manager_boot_id.data,
      strlen(ros_message->manager_boot_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "manager_boot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lease_token
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lease_token.data,
      strlen(ros_message->lease_token.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lease_token", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_epoch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->control_epoch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_epoch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lease_ttl_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lease_ttl_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lease_ttl_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_held
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->control_held ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_held", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // owner_label
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->owner_label.data,
      strlen(ros_message->owner_label.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "owner_label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
