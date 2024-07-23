// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from calibration_interface:srv/GripperCalibration.idl
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
#include "calibration_interface/srv/detail/gripper_calibration__struct.h"
#include "calibration_interface/srv/detail/gripper_calibration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool calibration_interface__srv__gripper_calibration__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("calibration_interface.srv._gripper_calibration.GripperCalibration_Request", full_classname_dest, 73) == 0);
  }
  calibration_interface__srv__GripperCalibration_Request * ros_message = _ros_message;
  {  // execute_calibration
    PyObject * field = PyObject_GetAttrString(_pymsg, "execute_calibration");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->execute_calibration = (Py_True == field);
    Py_DECREF(field);
  }
  {  // calibration_sim
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_sim");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->calibration_sim = (Py_True == field);
    Py_DECREF(field);
  }
  {  // calibration_real
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_real");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->calibration_real = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * calibration_interface__srv__gripper_calibration__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GripperCalibration_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("calibration_interface.srv._gripper_calibration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GripperCalibration_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  calibration_interface__srv__GripperCalibration_Request * ros_message = (calibration_interface__srv__GripperCalibration_Request *)raw_ros_message;
  {  // execute_calibration
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->execute_calibration ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "execute_calibration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_sim
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->calibration_sim ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_sim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_real
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->calibration_real ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_real", field);
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
// #include "calibration_interface/srv/detail/gripper_calibration__struct.h"
// already included above
// #include "calibration_interface/srv/detail/gripper_calibration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool calibration_interface__srv__gripper_calibration__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("calibration_interface.srv._gripper_calibration.GripperCalibration_Response", full_classname_dest, 74) == 0);
  }
  calibration_interface__srv__GripperCalibration_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * calibration_interface__srv__gripper_calibration__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GripperCalibration_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("calibration_interface.srv._gripper_calibration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GripperCalibration_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  calibration_interface__srv__GripperCalibration_Response * ros_message = (calibration_interface__srv__GripperCalibration_Response *)raw_ros_message;
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}