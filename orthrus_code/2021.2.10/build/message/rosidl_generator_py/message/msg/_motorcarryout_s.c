// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message:msg/Motorcarryout.idl
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
#include "message/msg/motorcarryout__struct.h"
#include "message/msg/motorcarryout__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool message__msg__motorcarryout__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
        "message.msg._motorcarryout.Motorcarryout",
        full_classname_dest, 40) == 0);
  }
  message__msg__Motorcarryout * ros_message = _ros_message;
  {  // mode_lf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_lf_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_lf_1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_lf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_lf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_lf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_lf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_lf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_lf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_lf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_lf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_lf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_lf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_lf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_lf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_lf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_lf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_lf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_lf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_lf_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_lf_2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_lf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_lf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_lf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_lf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_lf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_lf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_lf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_lf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_lf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_lf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_lf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_lf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_lf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_lf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_lf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_lf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_lf_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_lf_3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_lf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_lf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_lf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_lf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_lf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_lf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_lf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_lf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_lf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_lf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_lf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_lf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_lf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_lf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_lf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_rf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_rf_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_rf_1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_rf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_rf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_rf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_rf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_rf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_rf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_rf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_rf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_rf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_rf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_rf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_rf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_rf_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_rf_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_rf_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_rf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_rf_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_rf_2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_rf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_rf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_rf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_rf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_rf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_rf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_rf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_rf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_rf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_rf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_rf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_rf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_rf_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_rf_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_rf_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_rf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_rf_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_rf_3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_rf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_rf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_rf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_rf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_rf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_rf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_rf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_rf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_rf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_rf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_rf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_rf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_rf_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_rf_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_rf_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_lb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_lb_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_lb_1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_lb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_lb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_lb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_lb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_lb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_lb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_lb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_lb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_lb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_lb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_lb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_lb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_lb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_lb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_lb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_lb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_lb_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_lb_2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_lb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_lb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_lb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_lb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_lb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_lb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_lb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_lb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_lb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_lb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_lb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_lb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_lb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_lb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_lb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_lb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_lb_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_lb_3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_lb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_lb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_lb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_lb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_lb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_lb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_lb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_lb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_lb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_lb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_lb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_lb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_lb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_lb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_lb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_rb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_rb_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_rb_1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_rb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_rb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_rb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_rb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_rb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_rb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_rb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_rb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_rb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_rb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_rb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_rb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_rb_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_rb_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_rb_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_rb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_rb_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_rb_2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_rb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_rb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_rb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_rb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_rb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_rb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_rb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_rb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_rb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_rb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_rb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_rb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_rb_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_rb_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_rb_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_rb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_rb_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_rb_3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // t_rb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_rb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_rb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_rb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_rb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_rb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_rb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_rb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_rb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_p_rb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_p_rb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_p_rb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // k_w_rb_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_w_rb_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->k_w_rb_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message__msg__motorcarryout__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Motorcarryout */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message.msg._motorcarryout");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Motorcarryout");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message__msg__Motorcarryout * ros_message = (message__msg__Motorcarryout *)raw_ros_message;
  {  // mode_lf_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_lf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_lf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_lf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_lf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_lf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_lf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_lf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_lf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_lf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_lf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_lf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_lf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_lf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_lf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_lf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_lf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_lf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_lf_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_lf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_lf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_lf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_lf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_lf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_lf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_lf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_lf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_lf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_lf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_lf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_lf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_lf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_lf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_lf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_lf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_lf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_lf_3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_lf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_lf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_lf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_lf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_lf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_lf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_lf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_lf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_lf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_lf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_lf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_lf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_lf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_lf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_lf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_lf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_lf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_rf_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_rf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_rf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_rf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_rf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_rf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_rf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_rf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_rf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_rf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_rf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_rf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_rf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_rf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_rf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_rf_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_rf_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_rf_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_rf_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_rf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_rf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_rf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_rf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_rf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_rf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_rf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_rf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_rf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_rf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_rf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_rf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_rf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_rf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_rf_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_rf_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_rf_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_rf_3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_rf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_rf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_rf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_rf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_rf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_rf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_rf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_rf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_rf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_rf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_rf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_rf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_rf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_rf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_rf_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_rf_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_rf_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_lb_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_lb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_lb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_lb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_lb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_lb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_lb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_lb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_lb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_lb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_lb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_lb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_lb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_lb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_lb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_lb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_lb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_lb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_lb_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_lb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_lb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_lb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_lb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_lb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_lb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_lb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_lb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_lb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_lb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_lb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_lb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_lb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_lb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_lb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_lb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_lb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_lb_3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_lb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_lb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_lb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_lb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_lb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_lb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_lb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_lb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_lb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_lb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_lb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_lb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_lb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_lb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_lb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_lb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_lb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_rb_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_rb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_rb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_rb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_rb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_rb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_rb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_rb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_rb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_rb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_rb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_rb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_rb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_rb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_rb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_rb_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_rb_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_rb_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_rb_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_rb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_rb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_rb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_rb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_rb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_rb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_rb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_rb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_rb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_rb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_rb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_rb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_rb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_rb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_rb_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_rb_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_rb_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_rb_3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode_rb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_rb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_rb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_rb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_rb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_rb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_rb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_rb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_rb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_rb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_rb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_p_rb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_p_rb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_p_rb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_w_rb_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->k_w_rb_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_w_rb_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
