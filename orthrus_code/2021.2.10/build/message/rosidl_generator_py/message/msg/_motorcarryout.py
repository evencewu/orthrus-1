# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message:msg/Motorcarryout.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motorcarryout(type):
    """Metaclass of message 'Motorcarryout'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'message.msg.Motorcarryout')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motorcarryout
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motorcarryout
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motorcarryout
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motorcarryout
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motorcarryout

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motorcarryout(metaclass=Metaclass_Motorcarryout):
    """Message class 'Motorcarryout'."""

    __slots__ = [
        '_mode_lf_1',
        '_t_lf_1',
        '_w_lf_1',
        '_pos_lf_1',
        '_k_p_lf_1',
        '_k_w_lf_1',
        '_mode_lf_2',
        '_t_lf_2',
        '_w_lf_2',
        '_pos_lf_2',
        '_k_p_lf_2',
        '_k_w_lf_2',
        '_mode_lf_3',
        '_t_lf_3',
        '_w_lf_3',
        '_pos_lf_3',
        '_k_p_lf_3',
        '_k_w_lf_3',
        '_mode_rf_1',
        '_t_rf_1',
        '_w_rf_1',
        '_pos_rf_1',
        '_k_p_rf_1',
        '_k_w_rf_1',
        '_mode_rf_2',
        '_t_rf_2',
        '_w_rf_2',
        '_pos_rf_2',
        '_k_p_rf_2',
        '_k_w_rf_2',
        '_mode_rf_3',
        '_t_rf_3',
        '_w_rf_3',
        '_pos_rf_3',
        '_k_p_rf_3',
        '_k_w_rf_3',
        '_mode_lb_1',
        '_t_lb_1',
        '_w_lb_1',
        '_pos_lb_1',
        '_k_p_lb_1',
        '_k_w_lb_1',
        '_mode_lb_2',
        '_t_lb_2',
        '_w_lb_2',
        '_pos_lb_2',
        '_k_p_lb_2',
        '_k_w_lb_2',
        '_mode_lb_3',
        '_t_lb_3',
        '_w_lb_3',
        '_pos_lb_3',
        '_k_p_lb_3',
        '_k_w_lb_3',
        '_mode_rb_1',
        '_t_rb_1',
        '_w_rb_1',
        '_pos_rb_1',
        '_k_p_rb_1',
        '_k_w_rb_1',
        '_mode_rb_2',
        '_t_rb_2',
        '_w_rb_2',
        '_pos_rb_2',
        '_k_p_rb_2',
        '_k_w_rb_2',
        '_mode_rb_3',
        '_t_rb_3',
        '_w_rb_3',
        '_pos_rb_3',
        '_k_p_rb_3',
        '_k_w_rb_3',
    ]

    _fields_and_field_types = {
        'mode_lf_1': 'int32',
        't_lf_1': 'float',
        'w_lf_1': 'float',
        'pos_lf_1': 'float',
        'k_p_lf_1': 'float',
        'k_w_lf_1': 'float',
        'mode_lf_2': 'int32',
        't_lf_2': 'float',
        'w_lf_2': 'float',
        'pos_lf_2': 'float',
        'k_p_lf_2': 'float',
        'k_w_lf_2': 'float',
        'mode_lf_3': 'int32',
        't_lf_3': 'float',
        'w_lf_3': 'float',
        'pos_lf_3': 'float',
        'k_p_lf_3': 'float',
        'k_w_lf_3': 'float',
        'mode_rf_1': 'int32',
        't_rf_1': 'float',
        'w_rf_1': 'float',
        'pos_rf_1': 'float',
        'k_p_rf_1': 'float',
        'k_w_rf_1': 'float',
        'mode_rf_2': 'int32',
        't_rf_2': 'float',
        'w_rf_2': 'float',
        'pos_rf_2': 'float',
        'k_p_rf_2': 'float',
        'k_w_rf_2': 'float',
        'mode_rf_3': 'int32',
        't_rf_3': 'float',
        'w_rf_3': 'float',
        'pos_rf_3': 'float',
        'k_p_rf_3': 'float',
        'k_w_rf_3': 'float',
        'mode_lb_1': 'int32',
        't_lb_1': 'float',
        'w_lb_1': 'float',
        'pos_lb_1': 'float',
        'k_p_lb_1': 'float',
        'k_w_lb_1': 'float',
        'mode_lb_2': 'int32',
        't_lb_2': 'float',
        'w_lb_2': 'float',
        'pos_lb_2': 'float',
        'k_p_lb_2': 'float',
        'k_w_lb_2': 'float',
        'mode_lb_3': 'int32',
        't_lb_3': 'float',
        'w_lb_3': 'float',
        'pos_lb_3': 'float',
        'k_p_lb_3': 'float',
        'k_w_lb_3': 'float',
        'mode_rb_1': 'int32',
        't_rb_1': 'float',
        'w_rb_1': 'float',
        'pos_rb_1': 'float',
        'k_p_rb_1': 'float',
        'k_w_rb_1': 'float',
        'mode_rb_2': 'int32',
        't_rb_2': 'float',
        'w_rb_2': 'float',
        'pos_rb_2': 'float',
        'k_p_rb_2': 'float',
        'k_w_rb_2': 'float',
        'mode_rb_3': 'int32',
        't_rb_3': 'float',
        'w_rb_3': 'float',
        'pos_rb_3': 'float',
        'k_p_rb_3': 'float',
        'k_w_rb_3': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode_lf_1 = kwargs.get('mode_lf_1', int())
        self.t_lf_1 = kwargs.get('t_lf_1', float())
        self.w_lf_1 = kwargs.get('w_lf_1', float())
        self.pos_lf_1 = kwargs.get('pos_lf_1', float())
        self.k_p_lf_1 = kwargs.get('k_p_lf_1', float())
        self.k_w_lf_1 = kwargs.get('k_w_lf_1', float())
        self.mode_lf_2 = kwargs.get('mode_lf_2', int())
        self.t_lf_2 = kwargs.get('t_lf_2', float())
        self.w_lf_2 = kwargs.get('w_lf_2', float())
        self.pos_lf_2 = kwargs.get('pos_lf_2', float())
        self.k_p_lf_2 = kwargs.get('k_p_lf_2', float())
        self.k_w_lf_2 = kwargs.get('k_w_lf_2', float())
        self.mode_lf_3 = kwargs.get('mode_lf_3', int())
        self.t_lf_3 = kwargs.get('t_lf_3', float())
        self.w_lf_3 = kwargs.get('w_lf_3', float())
        self.pos_lf_3 = kwargs.get('pos_lf_3', float())
        self.k_p_lf_3 = kwargs.get('k_p_lf_3', float())
        self.k_w_lf_3 = kwargs.get('k_w_lf_3', float())
        self.mode_rf_1 = kwargs.get('mode_rf_1', int())
        self.t_rf_1 = kwargs.get('t_rf_1', float())
        self.w_rf_1 = kwargs.get('w_rf_1', float())
        self.pos_rf_1 = kwargs.get('pos_rf_1', float())
        self.k_p_rf_1 = kwargs.get('k_p_rf_1', float())
        self.k_w_rf_1 = kwargs.get('k_w_rf_1', float())
        self.mode_rf_2 = kwargs.get('mode_rf_2', int())
        self.t_rf_2 = kwargs.get('t_rf_2', float())
        self.w_rf_2 = kwargs.get('w_rf_2', float())
        self.pos_rf_2 = kwargs.get('pos_rf_2', float())
        self.k_p_rf_2 = kwargs.get('k_p_rf_2', float())
        self.k_w_rf_2 = kwargs.get('k_w_rf_2', float())
        self.mode_rf_3 = kwargs.get('mode_rf_3', int())
        self.t_rf_3 = kwargs.get('t_rf_3', float())
        self.w_rf_3 = kwargs.get('w_rf_3', float())
        self.pos_rf_3 = kwargs.get('pos_rf_3', float())
        self.k_p_rf_3 = kwargs.get('k_p_rf_3', float())
        self.k_w_rf_3 = kwargs.get('k_w_rf_3', float())
        self.mode_lb_1 = kwargs.get('mode_lb_1', int())
        self.t_lb_1 = kwargs.get('t_lb_1', float())
        self.w_lb_1 = kwargs.get('w_lb_1', float())
        self.pos_lb_1 = kwargs.get('pos_lb_1', float())
        self.k_p_lb_1 = kwargs.get('k_p_lb_1', float())
        self.k_w_lb_1 = kwargs.get('k_w_lb_1', float())
        self.mode_lb_2 = kwargs.get('mode_lb_2', int())
        self.t_lb_2 = kwargs.get('t_lb_2', float())
        self.w_lb_2 = kwargs.get('w_lb_2', float())
        self.pos_lb_2 = kwargs.get('pos_lb_2', float())
        self.k_p_lb_2 = kwargs.get('k_p_lb_2', float())
        self.k_w_lb_2 = kwargs.get('k_w_lb_2', float())
        self.mode_lb_3 = kwargs.get('mode_lb_3', int())
        self.t_lb_3 = kwargs.get('t_lb_3', float())
        self.w_lb_3 = kwargs.get('w_lb_3', float())
        self.pos_lb_3 = kwargs.get('pos_lb_3', float())
        self.k_p_lb_3 = kwargs.get('k_p_lb_3', float())
        self.k_w_lb_3 = kwargs.get('k_w_lb_3', float())
        self.mode_rb_1 = kwargs.get('mode_rb_1', int())
        self.t_rb_1 = kwargs.get('t_rb_1', float())
        self.w_rb_1 = kwargs.get('w_rb_1', float())
        self.pos_rb_1 = kwargs.get('pos_rb_1', float())
        self.k_p_rb_1 = kwargs.get('k_p_rb_1', float())
        self.k_w_rb_1 = kwargs.get('k_w_rb_1', float())
        self.mode_rb_2 = kwargs.get('mode_rb_2', int())
        self.t_rb_2 = kwargs.get('t_rb_2', float())
        self.w_rb_2 = kwargs.get('w_rb_2', float())
        self.pos_rb_2 = kwargs.get('pos_rb_2', float())
        self.k_p_rb_2 = kwargs.get('k_p_rb_2', float())
        self.k_w_rb_2 = kwargs.get('k_w_rb_2', float())
        self.mode_rb_3 = kwargs.get('mode_rb_3', int())
        self.t_rb_3 = kwargs.get('t_rb_3', float())
        self.w_rb_3 = kwargs.get('w_rb_3', float())
        self.pos_rb_3 = kwargs.get('pos_rb_3', float())
        self.k_p_rb_3 = kwargs.get('k_p_rb_3', float())
        self.k_w_rb_3 = kwargs.get('k_w_rb_3', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mode_lf_1 != other.mode_lf_1:
            return False
        if self.t_lf_1 != other.t_lf_1:
            return False
        if self.w_lf_1 != other.w_lf_1:
            return False
        if self.pos_lf_1 != other.pos_lf_1:
            return False
        if self.k_p_lf_1 != other.k_p_lf_1:
            return False
        if self.k_w_lf_1 != other.k_w_lf_1:
            return False
        if self.mode_lf_2 != other.mode_lf_2:
            return False
        if self.t_lf_2 != other.t_lf_2:
            return False
        if self.w_lf_2 != other.w_lf_2:
            return False
        if self.pos_lf_2 != other.pos_lf_2:
            return False
        if self.k_p_lf_2 != other.k_p_lf_2:
            return False
        if self.k_w_lf_2 != other.k_w_lf_2:
            return False
        if self.mode_lf_3 != other.mode_lf_3:
            return False
        if self.t_lf_3 != other.t_lf_3:
            return False
        if self.w_lf_3 != other.w_lf_3:
            return False
        if self.pos_lf_3 != other.pos_lf_3:
            return False
        if self.k_p_lf_3 != other.k_p_lf_3:
            return False
        if self.k_w_lf_3 != other.k_w_lf_3:
            return False
        if self.mode_rf_1 != other.mode_rf_1:
            return False
        if self.t_rf_1 != other.t_rf_1:
            return False
        if self.w_rf_1 != other.w_rf_1:
            return False
        if self.pos_rf_1 != other.pos_rf_1:
            return False
        if self.k_p_rf_1 != other.k_p_rf_1:
            return False
        if self.k_w_rf_1 != other.k_w_rf_1:
            return False
        if self.mode_rf_2 != other.mode_rf_2:
            return False
        if self.t_rf_2 != other.t_rf_2:
            return False
        if self.w_rf_2 != other.w_rf_2:
            return False
        if self.pos_rf_2 != other.pos_rf_2:
            return False
        if self.k_p_rf_2 != other.k_p_rf_2:
            return False
        if self.k_w_rf_2 != other.k_w_rf_2:
            return False
        if self.mode_rf_3 != other.mode_rf_3:
            return False
        if self.t_rf_3 != other.t_rf_3:
            return False
        if self.w_rf_3 != other.w_rf_3:
            return False
        if self.pos_rf_3 != other.pos_rf_3:
            return False
        if self.k_p_rf_3 != other.k_p_rf_3:
            return False
        if self.k_w_rf_3 != other.k_w_rf_3:
            return False
        if self.mode_lb_1 != other.mode_lb_1:
            return False
        if self.t_lb_1 != other.t_lb_1:
            return False
        if self.w_lb_1 != other.w_lb_1:
            return False
        if self.pos_lb_1 != other.pos_lb_1:
            return False
        if self.k_p_lb_1 != other.k_p_lb_1:
            return False
        if self.k_w_lb_1 != other.k_w_lb_1:
            return False
        if self.mode_lb_2 != other.mode_lb_2:
            return False
        if self.t_lb_2 != other.t_lb_2:
            return False
        if self.w_lb_2 != other.w_lb_2:
            return False
        if self.pos_lb_2 != other.pos_lb_2:
            return False
        if self.k_p_lb_2 != other.k_p_lb_2:
            return False
        if self.k_w_lb_2 != other.k_w_lb_2:
            return False
        if self.mode_lb_3 != other.mode_lb_3:
            return False
        if self.t_lb_3 != other.t_lb_3:
            return False
        if self.w_lb_3 != other.w_lb_3:
            return False
        if self.pos_lb_3 != other.pos_lb_3:
            return False
        if self.k_p_lb_3 != other.k_p_lb_3:
            return False
        if self.k_w_lb_3 != other.k_w_lb_3:
            return False
        if self.mode_rb_1 != other.mode_rb_1:
            return False
        if self.t_rb_1 != other.t_rb_1:
            return False
        if self.w_rb_1 != other.w_rb_1:
            return False
        if self.pos_rb_1 != other.pos_rb_1:
            return False
        if self.k_p_rb_1 != other.k_p_rb_1:
            return False
        if self.k_w_rb_1 != other.k_w_rb_1:
            return False
        if self.mode_rb_2 != other.mode_rb_2:
            return False
        if self.t_rb_2 != other.t_rb_2:
            return False
        if self.w_rb_2 != other.w_rb_2:
            return False
        if self.pos_rb_2 != other.pos_rb_2:
            return False
        if self.k_p_rb_2 != other.k_p_rb_2:
            return False
        if self.k_w_rb_2 != other.k_w_rb_2:
            return False
        if self.mode_rb_3 != other.mode_rb_3:
            return False
        if self.t_rb_3 != other.t_rb_3:
            return False
        if self.w_rb_3 != other.w_rb_3:
            return False
        if self.pos_rb_3 != other.pos_rb_3:
            return False
        if self.k_p_rb_3 != other.k_p_rb_3:
            return False
        if self.k_w_rb_3 != other.k_w_rb_3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mode_lf_1(self):
        """Message field 'mode_lf_1'."""
        return self._mode_lf_1

    @mode_lf_1.setter
    def mode_lf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_lf_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_lf_1' field must be an integer in [-2147483648, 2147483647]"
        self._mode_lf_1 = value

    @property
    def t_lf_1(self):
        """Message field 't_lf_1'."""
        return self._t_lf_1

    @t_lf_1.setter
    def t_lf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_lf_1' field must be of type 'float'"
        self._t_lf_1 = value

    @property
    def w_lf_1(self):
        """Message field 'w_lf_1'."""
        return self._w_lf_1

    @w_lf_1.setter
    def w_lf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_lf_1' field must be of type 'float'"
        self._w_lf_1 = value

    @property
    def pos_lf_1(self):
        """Message field 'pos_lf_1'."""
        return self._pos_lf_1

    @pos_lf_1.setter
    def pos_lf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_lf_1' field must be of type 'float'"
        self._pos_lf_1 = value

    @property
    def k_p_lf_1(self):
        """Message field 'k_p_lf_1'."""
        return self._k_p_lf_1

    @k_p_lf_1.setter
    def k_p_lf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_lf_1' field must be of type 'float'"
        self._k_p_lf_1 = value

    @property
    def k_w_lf_1(self):
        """Message field 'k_w_lf_1'."""
        return self._k_w_lf_1

    @k_w_lf_1.setter
    def k_w_lf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_lf_1' field must be of type 'float'"
        self._k_w_lf_1 = value

    @property
    def mode_lf_2(self):
        """Message field 'mode_lf_2'."""
        return self._mode_lf_2

    @mode_lf_2.setter
    def mode_lf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_lf_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_lf_2' field must be an integer in [-2147483648, 2147483647]"
        self._mode_lf_2 = value

    @property
    def t_lf_2(self):
        """Message field 't_lf_2'."""
        return self._t_lf_2

    @t_lf_2.setter
    def t_lf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_lf_2' field must be of type 'float'"
        self._t_lf_2 = value

    @property
    def w_lf_2(self):
        """Message field 'w_lf_2'."""
        return self._w_lf_2

    @w_lf_2.setter
    def w_lf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_lf_2' field must be of type 'float'"
        self._w_lf_2 = value

    @property
    def pos_lf_2(self):
        """Message field 'pos_lf_2'."""
        return self._pos_lf_2

    @pos_lf_2.setter
    def pos_lf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_lf_2' field must be of type 'float'"
        self._pos_lf_2 = value

    @property
    def k_p_lf_2(self):
        """Message field 'k_p_lf_2'."""
        return self._k_p_lf_2

    @k_p_lf_2.setter
    def k_p_lf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_lf_2' field must be of type 'float'"
        self._k_p_lf_2 = value

    @property
    def k_w_lf_2(self):
        """Message field 'k_w_lf_2'."""
        return self._k_w_lf_2

    @k_w_lf_2.setter
    def k_w_lf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_lf_2' field must be of type 'float'"
        self._k_w_lf_2 = value

    @property
    def mode_lf_3(self):
        """Message field 'mode_lf_3'."""
        return self._mode_lf_3

    @mode_lf_3.setter
    def mode_lf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_lf_3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_lf_3' field must be an integer in [-2147483648, 2147483647]"
        self._mode_lf_3 = value

    @property
    def t_lf_3(self):
        """Message field 't_lf_3'."""
        return self._t_lf_3

    @t_lf_3.setter
    def t_lf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_lf_3' field must be of type 'float'"
        self._t_lf_3 = value

    @property
    def w_lf_3(self):
        """Message field 'w_lf_3'."""
        return self._w_lf_3

    @w_lf_3.setter
    def w_lf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_lf_3' field must be of type 'float'"
        self._w_lf_3 = value

    @property
    def pos_lf_3(self):
        """Message field 'pos_lf_3'."""
        return self._pos_lf_3

    @pos_lf_3.setter
    def pos_lf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_lf_3' field must be of type 'float'"
        self._pos_lf_3 = value

    @property
    def k_p_lf_3(self):
        """Message field 'k_p_lf_3'."""
        return self._k_p_lf_3

    @k_p_lf_3.setter
    def k_p_lf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_lf_3' field must be of type 'float'"
        self._k_p_lf_3 = value

    @property
    def k_w_lf_3(self):
        """Message field 'k_w_lf_3'."""
        return self._k_w_lf_3

    @k_w_lf_3.setter
    def k_w_lf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_lf_3' field must be of type 'float'"
        self._k_w_lf_3 = value

    @property
    def mode_rf_1(self):
        """Message field 'mode_rf_1'."""
        return self._mode_rf_1

    @mode_rf_1.setter
    def mode_rf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_rf_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_rf_1' field must be an integer in [-2147483648, 2147483647]"
        self._mode_rf_1 = value

    @property
    def t_rf_1(self):
        """Message field 't_rf_1'."""
        return self._t_rf_1

    @t_rf_1.setter
    def t_rf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_rf_1' field must be of type 'float'"
        self._t_rf_1 = value

    @property
    def w_rf_1(self):
        """Message field 'w_rf_1'."""
        return self._w_rf_1

    @w_rf_1.setter
    def w_rf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_rf_1' field must be of type 'float'"
        self._w_rf_1 = value

    @property
    def pos_rf_1(self):
        """Message field 'pos_rf_1'."""
        return self._pos_rf_1

    @pos_rf_1.setter
    def pos_rf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_rf_1' field must be of type 'float'"
        self._pos_rf_1 = value

    @property
    def k_p_rf_1(self):
        """Message field 'k_p_rf_1'."""
        return self._k_p_rf_1

    @k_p_rf_1.setter
    def k_p_rf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_rf_1' field must be of type 'float'"
        self._k_p_rf_1 = value

    @property
    def k_w_rf_1(self):
        """Message field 'k_w_rf_1'."""
        return self._k_w_rf_1

    @k_w_rf_1.setter
    def k_w_rf_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_rf_1' field must be of type 'float'"
        self._k_w_rf_1 = value

    @property
    def mode_rf_2(self):
        """Message field 'mode_rf_2'."""
        return self._mode_rf_2

    @mode_rf_2.setter
    def mode_rf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_rf_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_rf_2' field must be an integer in [-2147483648, 2147483647]"
        self._mode_rf_2 = value

    @property
    def t_rf_2(self):
        """Message field 't_rf_2'."""
        return self._t_rf_2

    @t_rf_2.setter
    def t_rf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_rf_2' field must be of type 'float'"
        self._t_rf_2 = value

    @property
    def w_rf_2(self):
        """Message field 'w_rf_2'."""
        return self._w_rf_2

    @w_rf_2.setter
    def w_rf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_rf_2' field must be of type 'float'"
        self._w_rf_2 = value

    @property
    def pos_rf_2(self):
        """Message field 'pos_rf_2'."""
        return self._pos_rf_2

    @pos_rf_2.setter
    def pos_rf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_rf_2' field must be of type 'float'"
        self._pos_rf_2 = value

    @property
    def k_p_rf_2(self):
        """Message field 'k_p_rf_2'."""
        return self._k_p_rf_2

    @k_p_rf_2.setter
    def k_p_rf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_rf_2' field must be of type 'float'"
        self._k_p_rf_2 = value

    @property
    def k_w_rf_2(self):
        """Message field 'k_w_rf_2'."""
        return self._k_w_rf_2

    @k_w_rf_2.setter
    def k_w_rf_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_rf_2' field must be of type 'float'"
        self._k_w_rf_2 = value

    @property
    def mode_rf_3(self):
        """Message field 'mode_rf_3'."""
        return self._mode_rf_3

    @mode_rf_3.setter
    def mode_rf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_rf_3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_rf_3' field must be an integer in [-2147483648, 2147483647]"
        self._mode_rf_3 = value

    @property
    def t_rf_3(self):
        """Message field 't_rf_3'."""
        return self._t_rf_3

    @t_rf_3.setter
    def t_rf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_rf_3' field must be of type 'float'"
        self._t_rf_3 = value

    @property
    def w_rf_3(self):
        """Message field 'w_rf_3'."""
        return self._w_rf_3

    @w_rf_3.setter
    def w_rf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_rf_3' field must be of type 'float'"
        self._w_rf_3 = value

    @property
    def pos_rf_3(self):
        """Message field 'pos_rf_3'."""
        return self._pos_rf_3

    @pos_rf_3.setter
    def pos_rf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_rf_3' field must be of type 'float'"
        self._pos_rf_3 = value

    @property
    def k_p_rf_3(self):
        """Message field 'k_p_rf_3'."""
        return self._k_p_rf_3

    @k_p_rf_3.setter
    def k_p_rf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_rf_3' field must be of type 'float'"
        self._k_p_rf_3 = value

    @property
    def k_w_rf_3(self):
        """Message field 'k_w_rf_3'."""
        return self._k_w_rf_3

    @k_w_rf_3.setter
    def k_w_rf_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_rf_3' field must be of type 'float'"
        self._k_w_rf_3 = value

    @property
    def mode_lb_1(self):
        """Message field 'mode_lb_1'."""
        return self._mode_lb_1

    @mode_lb_1.setter
    def mode_lb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_lb_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_lb_1' field must be an integer in [-2147483648, 2147483647]"
        self._mode_lb_1 = value

    @property
    def t_lb_1(self):
        """Message field 't_lb_1'."""
        return self._t_lb_1

    @t_lb_1.setter
    def t_lb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_lb_1' field must be of type 'float'"
        self._t_lb_1 = value

    @property
    def w_lb_1(self):
        """Message field 'w_lb_1'."""
        return self._w_lb_1

    @w_lb_1.setter
    def w_lb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_lb_1' field must be of type 'float'"
        self._w_lb_1 = value

    @property
    def pos_lb_1(self):
        """Message field 'pos_lb_1'."""
        return self._pos_lb_1

    @pos_lb_1.setter
    def pos_lb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_lb_1' field must be of type 'float'"
        self._pos_lb_1 = value

    @property
    def k_p_lb_1(self):
        """Message field 'k_p_lb_1'."""
        return self._k_p_lb_1

    @k_p_lb_1.setter
    def k_p_lb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_lb_1' field must be of type 'float'"
        self._k_p_lb_1 = value

    @property
    def k_w_lb_1(self):
        """Message field 'k_w_lb_1'."""
        return self._k_w_lb_1

    @k_w_lb_1.setter
    def k_w_lb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_lb_1' field must be of type 'float'"
        self._k_w_lb_1 = value

    @property
    def mode_lb_2(self):
        """Message field 'mode_lb_2'."""
        return self._mode_lb_2

    @mode_lb_2.setter
    def mode_lb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_lb_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_lb_2' field must be an integer in [-2147483648, 2147483647]"
        self._mode_lb_2 = value

    @property
    def t_lb_2(self):
        """Message field 't_lb_2'."""
        return self._t_lb_2

    @t_lb_2.setter
    def t_lb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_lb_2' field must be of type 'float'"
        self._t_lb_2 = value

    @property
    def w_lb_2(self):
        """Message field 'w_lb_2'."""
        return self._w_lb_2

    @w_lb_2.setter
    def w_lb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_lb_2' field must be of type 'float'"
        self._w_lb_2 = value

    @property
    def pos_lb_2(self):
        """Message field 'pos_lb_2'."""
        return self._pos_lb_2

    @pos_lb_2.setter
    def pos_lb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_lb_2' field must be of type 'float'"
        self._pos_lb_2 = value

    @property
    def k_p_lb_2(self):
        """Message field 'k_p_lb_2'."""
        return self._k_p_lb_2

    @k_p_lb_2.setter
    def k_p_lb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_lb_2' field must be of type 'float'"
        self._k_p_lb_2 = value

    @property
    def k_w_lb_2(self):
        """Message field 'k_w_lb_2'."""
        return self._k_w_lb_2

    @k_w_lb_2.setter
    def k_w_lb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_lb_2' field must be of type 'float'"
        self._k_w_lb_2 = value

    @property
    def mode_lb_3(self):
        """Message field 'mode_lb_3'."""
        return self._mode_lb_3

    @mode_lb_3.setter
    def mode_lb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_lb_3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_lb_3' field must be an integer in [-2147483648, 2147483647]"
        self._mode_lb_3 = value

    @property
    def t_lb_3(self):
        """Message field 't_lb_3'."""
        return self._t_lb_3

    @t_lb_3.setter
    def t_lb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_lb_3' field must be of type 'float'"
        self._t_lb_3 = value

    @property
    def w_lb_3(self):
        """Message field 'w_lb_3'."""
        return self._w_lb_3

    @w_lb_3.setter
    def w_lb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_lb_3' field must be of type 'float'"
        self._w_lb_3 = value

    @property
    def pos_lb_3(self):
        """Message field 'pos_lb_3'."""
        return self._pos_lb_3

    @pos_lb_3.setter
    def pos_lb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_lb_3' field must be of type 'float'"
        self._pos_lb_3 = value

    @property
    def k_p_lb_3(self):
        """Message field 'k_p_lb_3'."""
        return self._k_p_lb_3

    @k_p_lb_3.setter
    def k_p_lb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_lb_3' field must be of type 'float'"
        self._k_p_lb_3 = value

    @property
    def k_w_lb_3(self):
        """Message field 'k_w_lb_3'."""
        return self._k_w_lb_3

    @k_w_lb_3.setter
    def k_w_lb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_lb_3' field must be of type 'float'"
        self._k_w_lb_3 = value

    @property
    def mode_rb_1(self):
        """Message field 'mode_rb_1'."""
        return self._mode_rb_1

    @mode_rb_1.setter
    def mode_rb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_rb_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_rb_1' field must be an integer in [-2147483648, 2147483647]"
        self._mode_rb_1 = value

    @property
    def t_rb_1(self):
        """Message field 't_rb_1'."""
        return self._t_rb_1

    @t_rb_1.setter
    def t_rb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_rb_1' field must be of type 'float'"
        self._t_rb_1 = value

    @property
    def w_rb_1(self):
        """Message field 'w_rb_1'."""
        return self._w_rb_1

    @w_rb_1.setter
    def w_rb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_rb_1' field must be of type 'float'"
        self._w_rb_1 = value

    @property
    def pos_rb_1(self):
        """Message field 'pos_rb_1'."""
        return self._pos_rb_1

    @pos_rb_1.setter
    def pos_rb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_rb_1' field must be of type 'float'"
        self._pos_rb_1 = value

    @property
    def k_p_rb_1(self):
        """Message field 'k_p_rb_1'."""
        return self._k_p_rb_1

    @k_p_rb_1.setter
    def k_p_rb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_rb_1' field must be of type 'float'"
        self._k_p_rb_1 = value

    @property
    def k_w_rb_1(self):
        """Message field 'k_w_rb_1'."""
        return self._k_w_rb_1

    @k_w_rb_1.setter
    def k_w_rb_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_rb_1' field must be of type 'float'"
        self._k_w_rb_1 = value

    @property
    def mode_rb_2(self):
        """Message field 'mode_rb_2'."""
        return self._mode_rb_2

    @mode_rb_2.setter
    def mode_rb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_rb_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_rb_2' field must be an integer in [-2147483648, 2147483647]"
        self._mode_rb_2 = value

    @property
    def t_rb_2(self):
        """Message field 't_rb_2'."""
        return self._t_rb_2

    @t_rb_2.setter
    def t_rb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_rb_2' field must be of type 'float'"
        self._t_rb_2 = value

    @property
    def w_rb_2(self):
        """Message field 'w_rb_2'."""
        return self._w_rb_2

    @w_rb_2.setter
    def w_rb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_rb_2' field must be of type 'float'"
        self._w_rb_2 = value

    @property
    def pos_rb_2(self):
        """Message field 'pos_rb_2'."""
        return self._pos_rb_2

    @pos_rb_2.setter
    def pos_rb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_rb_2' field must be of type 'float'"
        self._pos_rb_2 = value

    @property
    def k_p_rb_2(self):
        """Message field 'k_p_rb_2'."""
        return self._k_p_rb_2

    @k_p_rb_2.setter
    def k_p_rb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_rb_2' field must be of type 'float'"
        self._k_p_rb_2 = value

    @property
    def k_w_rb_2(self):
        """Message field 'k_w_rb_2'."""
        return self._k_w_rb_2

    @k_w_rb_2.setter
    def k_w_rb_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_rb_2' field must be of type 'float'"
        self._k_w_rb_2 = value

    @property
    def mode_rb_3(self):
        """Message field 'mode_rb_3'."""
        return self._mode_rb_3

    @mode_rb_3.setter
    def mode_rb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_rb_3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode_rb_3' field must be an integer in [-2147483648, 2147483647]"
        self._mode_rb_3 = value

    @property
    def t_rb_3(self):
        """Message field 't_rb_3'."""
        return self._t_rb_3

    @t_rb_3.setter
    def t_rb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_rb_3' field must be of type 'float'"
        self._t_rb_3 = value

    @property
    def w_rb_3(self):
        """Message field 'w_rb_3'."""
        return self._w_rb_3

    @w_rb_3.setter
    def w_rb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_rb_3' field must be of type 'float'"
        self._w_rb_3 = value

    @property
    def pos_rb_3(self):
        """Message field 'pos_rb_3'."""
        return self._pos_rb_3

    @pos_rb_3.setter
    def pos_rb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_rb_3' field must be of type 'float'"
        self._pos_rb_3 = value

    @property
    def k_p_rb_3(self):
        """Message field 'k_p_rb_3'."""
        return self._k_p_rb_3

    @k_p_rb_3.setter
    def k_p_rb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_rb_3' field must be of type 'float'"
        self._k_p_rb_3 = value

    @property
    def k_w_rb_3(self):
        """Message field 'k_w_rb_3'."""
        return self._k_w_rb_3

    @k_w_rb_3.setter
    def k_w_rb_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_rb_3' field must be of type 'float'"
        self._k_w_rb_3 = value
