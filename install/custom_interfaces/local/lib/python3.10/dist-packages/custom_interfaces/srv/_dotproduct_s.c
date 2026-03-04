// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_interfaces:srv/Dotproduct.idl
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
#include "custom_interfaces/srv/detail/dotproduct__struct.h"
#include "custom_interfaces/srv/detail/dotproduct__functions.h"

bool custom_interfaces__msg__vector4__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_interfaces__msg__vector4__convert_to_py(void * raw_ros_message);
bool custom_interfaces__msg__vector4__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_interfaces__msg__vector4__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__srv__dotproduct__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("custom_interfaces.srv._dotproduct.Dotproduct_Request", full_classname_dest, 52) == 0);
  }
  custom_interfaces__srv__Dotproduct_Request * ros_message = _ros_message;
  {  // v1
    PyObject * field = PyObject_GetAttrString(_pymsg, "v1");
    if (!field) {
      return false;
    }
    if (!custom_interfaces__msg__vector4__convert_from_py(field, &ros_message->v1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // v2
    PyObject * field = PyObject_GetAttrString(_pymsg, "v2");
    if (!field) {
      return false;
    }
    if (!custom_interfaces__msg__vector4__convert_from_py(field, &ros_message->v2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__srv__dotproduct__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Dotproduct_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.srv._dotproduct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Dotproduct_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__srv__Dotproduct_Request * ros_message = (custom_interfaces__srv__Dotproduct_Request *)raw_ros_message;
  {  // v1
    PyObject * field = NULL;
    field = custom_interfaces__msg__vector4__convert_to_py(&ros_message->v1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "v1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v2
    PyObject * field = NULL;
    field = custom_interfaces__msg__vector4__convert_to_py(&ros_message->v2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "v2", field);
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
// #include "custom_interfaces/srv/detail/dotproduct__struct.h"
// already included above
// #include "custom_interfaces/srv/detail/dotproduct__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__srv__dotproduct__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_interfaces.srv._dotproduct.Dotproduct_Response", full_classname_dest, 53) == 0);
  }
  custom_interfaces__srv__Dotproduct_Response * ros_message = _ros_message;
  {  // dp
    PyObject * field = PyObject_GetAttrString(_pymsg, "dp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__srv__dotproduct__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Dotproduct_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.srv._dotproduct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Dotproduct_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__srv__Dotproduct_Response * ros_message = (custom_interfaces__srv__Dotproduct_Response *)raw_ros_message;
  {  // dp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
