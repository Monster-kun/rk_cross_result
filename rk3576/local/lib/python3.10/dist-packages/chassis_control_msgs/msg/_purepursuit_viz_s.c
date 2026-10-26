// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from chassis_control_msgs:msg/PurepursuitViz.idl
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
#include "chassis_control_msgs/msg/detail/purepursuit_viz__struct.h"
#include "chassis_control_msgs/msg/detail/purepursuit_viz__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool chassis_control_msgs__msg__purepursuit_viz__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("chassis_control_msgs.msg._purepursuit_viz.PurepursuitViz", full_classname_dest, 56) == 0);
  }
  chassis_control_msgs__msg__PurepursuitViz * ros_message = _ros_message;
  {  // aimpointx
    PyObject * field = PyObject_GetAttrString(_pymsg, "aimpointx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aimpointx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aimpointy
    PyObject * field = PyObject_GetAttrString(_pymsg, "aimpointy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aimpointy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velx
    PyObject * field = PyObject_GetAttrString(_pymsg, "velx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vely
    PyObject * field = PyObject_GetAttrString(_pymsg, "vely");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vely = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velz
    PyObject * field = PyObject_GetAttrString(_pymsg, "velz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ahead
    PyObject * field = PyObject_GetAttrString(_pymsg, "ahead");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ahead = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // currentx
    PyObject * field = PyObject_GetAttrString(_pymsg, "currentx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->currentx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // currenty
    PyObject * field = PyObject_GetAttrString(_pymsg, "currenty");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->currenty = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chassis_control_msgs__msg__purepursuit_viz__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PurepursuitViz */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chassis_control_msgs.msg._purepursuit_viz");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PurepursuitViz");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chassis_control_msgs__msg__PurepursuitViz * ros_message = (chassis_control_msgs__msg__PurepursuitViz *)raw_ros_message;
  {  // aimpointx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aimpointx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aimpointx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aimpointy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aimpointy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aimpointy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vely
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vely);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vely", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ahead
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ahead);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ahead", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // currentx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->currentx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "currentx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // currenty
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->currenty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "currenty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
