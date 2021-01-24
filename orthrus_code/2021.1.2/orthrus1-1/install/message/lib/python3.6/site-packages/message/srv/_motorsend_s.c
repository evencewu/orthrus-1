// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message:srv/Motorsend.idl
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
#include "rosidl_generator_c/visibility_control.h"
#include "message/srv/motorsend__struct.h"
#include "message/srv/motorsend__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool message__srv__motorsend__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp(
        "message.srv._motorsend.Motorsend_Request",
        full_classname_dest, 40) == 0);
  }
  message__srv__Motorsend_Request * ros_message = _ros_message;
  {  // mode_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mode_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mode_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mode_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message__srv__motorsend__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Motorsend_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message.srv._motorsend");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Motorsend_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message__srv__Motorsend_Request * ros_message = (message__srv__Motorsend_Request *)raw_ros_message;
  {  // mode_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mode_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mode_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mode_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_2", field);
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
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "message/srv/motorsend__struct.h"
// already included above
// #include "message/srv/motorsend__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool message__srv__motorsend__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp(
        "message.srv._motorsend.Motorsend_Response",
        full_classname_dest, 41) == 0);
  }
  message__srv__Motorsend_Response * ros_message = _ros_message;
  {  // temp_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp_0 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // t_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lw_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "lw_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lw_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_0 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // pos_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_0_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_0_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_0_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_0_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_0_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_0_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_0_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_0_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_0_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_0_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_0_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_0_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_0_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_0_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_0_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_0_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_0_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_0_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp_1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // t_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lw_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "lw_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lw_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // pos_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_1_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_1_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_1_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_1_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_1_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_1_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_1_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_1_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_1_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_1_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_1_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_1_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_1_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_1_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_1_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_1_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_1_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_1_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp_2 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // t_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lw_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "lw_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lw_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_2 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // pos_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_2_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_2_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_2_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_2_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_2_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_2_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_2_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_2_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_2_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_2_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_2_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_2_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_2_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_2_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_2_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_2_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_2_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_2_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message__srv__motorsend__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Motorsend_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message.srv._motorsend");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Motorsend_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message__srv__Motorsend_Response * ros_message = (message__srv__Motorsend_Response *)raw_ros_message;
  {  // temp_0
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->temp_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lw_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lw_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lw_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_0
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->acc_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_0_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_0_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_0_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_0_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_0_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_0_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_0_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_0_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_0_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_0_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_0_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_0_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_0_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_0_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_0_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_0_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_0_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_0_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->temp_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lw_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lw_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lw_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->acc_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_1_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_1_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_1_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_1_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_1_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_1_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_1_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_1_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_1_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_1_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_1_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_1_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_1_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_1_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_1_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_1_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_1_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_1_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_2
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->temp_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lw_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lw_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lw_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_2
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->acc_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_2_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_2_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_2_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_2_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_2_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_2_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_2_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_2_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_2_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_2_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_2_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_2_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_2_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_2_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_2_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_2_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_2_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_2_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
