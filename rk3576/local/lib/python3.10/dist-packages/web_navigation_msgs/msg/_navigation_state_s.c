// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from web_navigation_msgs:msg/NavigationState.idl
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
#include "web_navigation_msgs/msg/detail/navigation_state__struct.h"
#include "web_navigation_msgs/msg/detail/navigation_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "web_navigation_msgs/msg/detail/sequence_waypoint__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool planning_msgs__msg__global_path__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * planning_msgs__msg__global_path__convert_to_py(void * raw_ros_message);
bool web_navigation_msgs__msg__sequence_waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * web_navigation_msgs__msg__sequence_waypoint__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool web_navigation_msgs__msg__navigation_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("web_navigation_msgs.msg._navigation_state.NavigationState", full_classname_dest, 57) == 0);
  }
  web_navigation_msgs__msg__NavigationState * ros_message = _ros_message;
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
  {  // state_revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state_revision = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // map_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->map_ready = (Py_True == field);
    Py_DECREF(field);
  }
  {  // map_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->map_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // map_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->map_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // frame_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->frame_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vehicle_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->vehicle_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // linear_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->linear_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->angular_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pose_fresh
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_fresh");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pose_fresh = (Py_True == field);
    Py_DECREF(field);
  }
  {  // navigation_synchronized
    PyObject * field = PyObject_GetAttrString(_pymsg, "navigation_synchronized");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->navigation_synchronized = (Py_True == field);
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
  {  // control_owner_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_owner_label");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->control_owner_label, PyBytes_AS_STRING(encoded_field));
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
  {  // task_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->task_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ros_goal_uuid
    PyObject * field = PyObject_GetAttrString(_pymsg, "ros_goal_uuid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ros_goal_uuid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // task_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // task_status_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_status_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->task_status_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // request_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "request_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->request_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // task_device_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_device_label");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->task_device_label, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // requested_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "requested_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->requested_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // requested_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "requested_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->requested_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // effective_endpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "effective_endpoint");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->effective_endpoint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // path_revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->path_revision = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // route
    PyObject * field = PyObject_GetAttrString(_pymsg, "route");
    if (!field) {
      return false;
    }
    if (!planning_msgs__msg__global_path__convert_from_py(field, &ros_message->route)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->error_code, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // error_message
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->error_message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sequence'");
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
    if (!web_navigation_msgs__msg__SequenceWaypoint__Sequence__init(&(ros_message->sequence), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create web_navigation_msgs__msg__SequenceWaypoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    web_navigation_msgs__msg__SequenceWaypoint * dest = ros_message->sequence.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!web_navigation_msgs__msg__sequence_waypoint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // sequence_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sequence_index = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sequence_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sequence_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sequence_loop
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence_loop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sequence_loop = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * web_navigation_msgs__msg__navigation_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NavigationState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("web_navigation_msgs.msg._navigation_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NavigationState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  web_navigation_msgs__msg__NavigationState * ros_message = (web_navigation_msgs__msg__NavigationState *)raw_ros_message;
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
  {  // state_revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->state_revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->map_ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->map_version.data,
      strlen(ros_message->map_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->map_name.data,
      strlen(ros_message->map_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->frame_id.data,
      strlen(ros_message->frame_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->vehicle_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->linear_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->angular_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose_fresh
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pose_fresh ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_fresh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // navigation_synchronized
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->navigation_synchronized ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "navigation_synchronized", field);
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
  {  // control_owner_label
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->control_owner_label.data,
      strlen(ros_message->control_owner_label.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_owner_label", field);
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
  {  // task_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->task_id.data,
      strlen(ros_message->task_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ros_goal_uuid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ros_goal_uuid.data,
      strlen(ros_message->ros_goal_uuid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ros_goal_uuid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->task_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_status_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->task_status_text.data,
      strlen(ros_message->task_status_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_status_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->request_id.data,
      strlen(ros_message->request_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "request_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_device_label
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->task_device_label.data,
      strlen(ros_message->task_device_label.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_device_label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // requested_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->requested_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "requested_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // requested_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->requested_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "requested_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // effective_endpoint
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->effective_endpoint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "effective_endpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->path_revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // route
    PyObject * field = NULL;
    field = planning_msgs__msg__global_path__convert_to_py(&ros_message->route);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "route", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->error_code.data,
      strlen(ros_message->error_code.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->error_message.data,
      strlen(ros_message->error_message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence
    PyObject * field = NULL;
    size_t size = ros_message->sequence.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    web_navigation_msgs__msg__SequenceWaypoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sequence.data[i]);
      PyObject * pyitem = web_navigation_msgs__msg__sequence_waypoint__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sequence_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sequence_state.data,
      strlen(ros_message->sequence_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence_loop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sequence_loop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence_loop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
