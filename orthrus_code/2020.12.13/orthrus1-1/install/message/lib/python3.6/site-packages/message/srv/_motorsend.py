# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message:srv/Motorsend.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motorsend_Request(type):
    """Metaclass of message 'Motorsend_Request'."""

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
                'message.srv.Motorsend_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motorsend__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motorsend__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motorsend__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motorsend__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motorsend__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motorsend_Request(metaclass=Metaclass_Motorsend_Request):
    """Message class 'Motorsend_Request'."""

    __slots__ = [
        '_mode_0',
        '_t_0',
        '_w_0',
        '_pos_0',
        '_k_p_0',
        '_k_w_0',
        '_mode_1',
        '_t_1',
        '_w_1',
        '_pos_1',
        '_k_p_1',
        '_k_w_1',
        '_mode_2',
        '_t_2',
        '_w_2',
        '_pos_2',
        '_k_p_2',
        '_k_w_2',
    ]

    _fields_and_field_types = {
        'mode_0': 'double',
        't_0': 'double',
        'w_0': 'double',
        'pos_0': 'double',
        'k_p_0': 'double',
        'k_w_0': 'double',
        'mode_1': 'double',
        't_1': 'double',
        'w_1': 'double',
        'pos_1': 'double',
        'k_p_1': 'double',
        'k_w_1': 'double',
        'mode_2': 'double',
        't_2': 'double',
        'w_2': 'double',
        'pos_2': 'double',
        'k_p_2': 'double',
        'k_w_2': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode_0 = kwargs.get('mode_0', float())
        self.t_0 = kwargs.get('t_0', float())
        self.w_0 = kwargs.get('w_0', float())
        self.pos_0 = kwargs.get('pos_0', float())
        self.k_p_0 = kwargs.get('k_p_0', float())
        self.k_w_0 = kwargs.get('k_w_0', float())
        self.mode_1 = kwargs.get('mode_1', float())
        self.t_1 = kwargs.get('t_1', float())
        self.w_1 = kwargs.get('w_1', float())
        self.pos_1 = kwargs.get('pos_1', float())
        self.k_p_1 = kwargs.get('k_p_1', float())
        self.k_w_1 = kwargs.get('k_w_1', float())
        self.mode_2 = kwargs.get('mode_2', float())
        self.t_2 = kwargs.get('t_2', float())
        self.w_2 = kwargs.get('w_2', float())
        self.pos_2 = kwargs.get('pos_2', float())
        self.k_p_2 = kwargs.get('k_p_2', float())
        self.k_w_2 = kwargs.get('k_w_2', float())

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
        if self.mode_0 != other.mode_0:
            return False
        if self.t_0 != other.t_0:
            return False
        if self.w_0 != other.w_0:
            return False
        if self.pos_0 != other.pos_0:
            return False
        if self.k_p_0 != other.k_p_0:
            return False
        if self.k_w_0 != other.k_w_0:
            return False
        if self.mode_1 != other.mode_1:
            return False
        if self.t_1 != other.t_1:
            return False
        if self.w_1 != other.w_1:
            return False
        if self.pos_1 != other.pos_1:
            return False
        if self.k_p_1 != other.k_p_1:
            return False
        if self.k_w_1 != other.k_w_1:
            return False
        if self.mode_2 != other.mode_2:
            return False
        if self.t_2 != other.t_2:
            return False
        if self.w_2 != other.w_2:
            return False
        if self.pos_2 != other.pos_2:
            return False
        if self.k_p_2 != other.k_p_2:
            return False
        if self.k_w_2 != other.k_w_2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mode_0(self):
        """Message field 'mode_0'."""
        return self._mode_0

    @mode_0.setter
    def mode_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mode_0' field must be of type 'float'"
        self._mode_0 = value

    @property
    def t_0(self):
        """Message field 't_0'."""
        return self._t_0

    @t_0.setter
    def t_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_0' field must be of type 'float'"
        self._t_0 = value

    @property
    def w_0(self):
        """Message field 'w_0'."""
        return self._w_0

    @w_0.setter
    def w_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_0' field must be of type 'float'"
        self._w_0 = value

    @property
    def pos_0(self):
        """Message field 'pos_0'."""
        return self._pos_0

    @pos_0.setter
    def pos_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_0' field must be of type 'float'"
        self._pos_0 = value

    @property
    def k_p_0(self):
        """Message field 'k_p_0'."""
        return self._k_p_0

    @k_p_0.setter
    def k_p_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_0' field must be of type 'float'"
        self._k_p_0 = value

    @property
    def k_w_0(self):
        """Message field 'k_w_0'."""
        return self._k_w_0

    @k_w_0.setter
    def k_w_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_0' field must be of type 'float'"
        self._k_w_0 = value

    @property
    def mode_1(self):
        """Message field 'mode_1'."""
        return self._mode_1

    @mode_1.setter
    def mode_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mode_1' field must be of type 'float'"
        self._mode_1 = value

    @property
    def t_1(self):
        """Message field 't_1'."""
        return self._t_1

    @t_1.setter
    def t_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_1' field must be of type 'float'"
        self._t_1 = value

    @property
    def w_1(self):
        """Message field 'w_1'."""
        return self._w_1

    @w_1.setter
    def w_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_1' field must be of type 'float'"
        self._w_1 = value

    @property
    def pos_1(self):
        """Message field 'pos_1'."""
        return self._pos_1

    @pos_1.setter
    def pos_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_1' field must be of type 'float'"
        self._pos_1 = value

    @property
    def k_p_1(self):
        """Message field 'k_p_1'."""
        return self._k_p_1

    @k_p_1.setter
    def k_p_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_1' field must be of type 'float'"
        self._k_p_1 = value

    @property
    def k_w_1(self):
        """Message field 'k_w_1'."""
        return self._k_w_1

    @k_w_1.setter
    def k_w_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_1' field must be of type 'float'"
        self._k_w_1 = value

    @property
    def mode_2(self):
        """Message field 'mode_2'."""
        return self._mode_2

    @mode_2.setter
    def mode_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mode_2' field must be of type 'float'"
        self._mode_2 = value

    @property
    def t_2(self):
        """Message field 't_2'."""
        return self._t_2

    @t_2.setter
    def t_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_2' field must be of type 'float'"
        self._t_2 = value

    @property
    def w_2(self):
        """Message field 'w_2'."""
        return self._w_2

    @w_2.setter
    def w_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_2' field must be of type 'float'"
        self._w_2 = value

    @property
    def pos_2(self):
        """Message field 'pos_2'."""
        return self._pos_2

    @pos_2.setter
    def pos_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_2' field must be of type 'float'"
        self._pos_2 = value

    @property
    def k_p_2(self):
        """Message field 'k_p_2'."""
        return self._k_p_2

    @k_p_2.setter
    def k_p_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_p_2' field must be of type 'float'"
        self._k_p_2 = value

    @property
    def k_w_2(self):
        """Message field 'k_w_2'."""
        return self._k_w_2

    @k_w_2.setter
    def k_w_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'k_w_2' field must be of type 'float'"
        self._k_w_2 = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Motorsend_Response(type):
    """Metaclass of message 'Motorsend_Response'."""

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
                'message.srv.Motorsend_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motorsend__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motorsend__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motorsend__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motorsend__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motorsend__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motorsend_Response(metaclass=Metaclass_Motorsend_Response):
    """Message class 'Motorsend_Response'."""

    __slots__ = [
        '_temp_0',
        '_t_0',
        '_w_0',
        '_lw_0',
        '_acc_0',
        '_pos_0',
        '_gyro_0_x',
        '_gyro_0_y',
        '_gyro_0_z',
        '_acc_0_x',
        '_acc_0_y',
        '_acc_0_z',
        '_temp_1',
        '_t_1',
        '_w_1',
        '_lw_1',
        '_acc_1',
        '_pos_1',
        '_gyro_1_x',
        '_gyro_1_y',
        '_gyro_1_z',
        '_acc_1_x',
        '_acc_1_y',
        '_acc_1_z',
        '_temp_2',
        '_t_2',
        '_w_2',
        '_lw_2',
        '_acc_2',
        '_pos_2',
        '_gyro_2_x',
        '_gyro_2_y',
        '_gyro_2_z',
        '_acc_2_x',
        '_acc_2_y',
        '_acc_2_z',
    ]

    _fields_and_field_types = {
        'temp_0': 'int64',
        't_0': 'double',
        'w_0': 'double',
        'lw_0': 'double',
        'acc_0': 'int64',
        'pos_0': 'double',
        'gyro_0_x': 'double',
        'gyro_0_y': 'double',
        'gyro_0_z': 'double',
        'acc_0_x': 'double',
        'acc_0_y': 'double',
        'acc_0_z': 'double',
        'temp_1': 'int64',
        't_1': 'double',
        'w_1': 'double',
        'lw_1': 'double',
        'acc_1': 'int64',
        'pos_1': 'double',
        'gyro_1_x': 'double',
        'gyro_1_y': 'double',
        'gyro_1_z': 'double',
        'acc_1_x': 'double',
        'acc_1_y': 'double',
        'acc_1_z': 'double',
        'temp_2': 'int64',
        't_2': 'double',
        'w_2': 'double',
        'lw_2': 'double',
        'acc_2': 'int64',
        'pos_2': 'double',
        'gyro_2_x': 'double',
        'gyro_2_y': 'double',
        'gyro_2_z': 'double',
        'acc_2_x': 'double',
        'acc_2_y': 'double',
        'acc_2_z': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.temp_0 = kwargs.get('temp_0', int())
        self.t_0 = kwargs.get('t_0', float())
        self.w_0 = kwargs.get('w_0', float())
        self.lw_0 = kwargs.get('lw_0', float())
        self.acc_0 = kwargs.get('acc_0', int())
        self.pos_0 = kwargs.get('pos_0', float())
        self.gyro_0_x = kwargs.get('gyro_0_x', float())
        self.gyro_0_y = kwargs.get('gyro_0_y', float())
        self.gyro_0_z = kwargs.get('gyro_0_z', float())
        self.acc_0_x = kwargs.get('acc_0_x', float())
        self.acc_0_y = kwargs.get('acc_0_y', float())
        self.acc_0_z = kwargs.get('acc_0_z', float())
        self.temp_1 = kwargs.get('temp_1', int())
        self.t_1 = kwargs.get('t_1', float())
        self.w_1 = kwargs.get('w_1', float())
        self.lw_1 = kwargs.get('lw_1', float())
        self.acc_1 = kwargs.get('acc_1', int())
        self.pos_1 = kwargs.get('pos_1', float())
        self.gyro_1_x = kwargs.get('gyro_1_x', float())
        self.gyro_1_y = kwargs.get('gyro_1_y', float())
        self.gyro_1_z = kwargs.get('gyro_1_z', float())
        self.acc_1_x = kwargs.get('acc_1_x', float())
        self.acc_1_y = kwargs.get('acc_1_y', float())
        self.acc_1_z = kwargs.get('acc_1_z', float())
        self.temp_2 = kwargs.get('temp_2', int())
        self.t_2 = kwargs.get('t_2', float())
        self.w_2 = kwargs.get('w_2', float())
        self.lw_2 = kwargs.get('lw_2', float())
        self.acc_2 = kwargs.get('acc_2', int())
        self.pos_2 = kwargs.get('pos_2', float())
        self.gyro_2_x = kwargs.get('gyro_2_x', float())
        self.gyro_2_y = kwargs.get('gyro_2_y', float())
        self.gyro_2_z = kwargs.get('gyro_2_z', float())
        self.acc_2_x = kwargs.get('acc_2_x', float())
        self.acc_2_y = kwargs.get('acc_2_y', float())
        self.acc_2_z = kwargs.get('acc_2_z', float())

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
        if self.temp_0 != other.temp_0:
            return False
        if self.t_0 != other.t_0:
            return False
        if self.w_0 != other.w_0:
            return False
        if self.lw_0 != other.lw_0:
            return False
        if self.acc_0 != other.acc_0:
            return False
        if self.pos_0 != other.pos_0:
            return False
        if self.gyro_0_x != other.gyro_0_x:
            return False
        if self.gyro_0_y != other.gyro_0_y:
            return False
        if self.gyro_0_z != other.gyro_0_z:
            return False
        if self.acc_0_x != other.acc_0_x:
            return False
        if self.acc_0_y != other.acc_0_y:
            return False
        if self.acc_0_z != other.acc_0_z:
            return False
        if self.temp_1 != other.temp_1:
            return False
        if self.t_1 != other.t_1:
            return False
        if self.w_1 != other.w_1:
            return False
        if self.lw_1 != other.lw_1:
            return False
        if self.acc_1 != other.acc_1:
            return False
        if self.pos_1 != other.pos_1:
            return False
        if self.gyro_1_x != other.gyro_1_x:
            return False
        if self.gyro_1_y != other.gyro_1_y:
            return False
        if self.gyro_1_z != other.gyro_1_z:
            return False
        if self.acc_1_x != other.acc_1_x:
            return False
        if self.acc_1_y != other.acc_1_y:
            return False
        if self.acc_1_z != other.acc_1_z:
            return False
        if self.temp_2 != other.temp_2:
            return False
        if self.t_2 != other.t_2:
            return False
        if self.w_2 != other.w_2:
            return False
        if self.lw_2 != other.lw_2:
            return False
        if self.acc_2 != other.acc_2:
            return False
        if self.pos_2 != other.pos_2:
            return False
        if self.gyro_2_x != other.gyro_2_x:
            return False
        if self.gyro_2_y != other.gyro_2_y:
            return False
        if self.gyro_2_z != other.gyro_2_z:
            return False
        if self.acc_2_x != other.acc_2_x:
            return False
        if self.acc_2_y != other.acc_2_y:
            return False
        if self.acc_2_z != other.acc_2_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def temp_0(self):
        """Message field 'temp_0'."""
        return self._temp_0

    @temp_0.setter
    def temp_0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp_0' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'temp_0' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._temp_0 = value

    @property
    def t_0(self):
        """Message field 't_0'."""
        return self._t_0

    @t_0.setter
    def t_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_0' field must be of type 'float'"
        self._t_0 = value

    @property
    def w_0(self):
        """Message field 'w_0'."""
        return self._w_0

    @w_0.setter
    def w_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_0' field must be of type 'float'"
        self._w_0 = value

    @property
    def lw_0(self):
        """Message field 'lw_0'."""
        return self._lw_0

    @lw_0.setter
    def lw_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lw_0' field must be of type 'float'"
        self._lw_0 = value

    @property
    def acc_0(self):
        """Message field 'acc_0'."""
        return self._acc_0

    @acc_0.setter
    def acc_0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_0' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'acc_0' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._acc_0 = value

    @property
    def pos_0(self):
        """Message field 'pos_0'."""
        return self._pos_0

    @pos_0.setter
    def pos_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_0' field must be of type 'float'"
        self._pos_0 = value

    @property
    def gyro_0_x(self):
        """Message field 'gyro_0_x'."""
        return self._gyro_0_x

    @gyro_0_x.setter
    def gyro_0_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_0_x' field must be of type 'float'"
        self._gyro_0_x = value

    @property
    def gyro_0_y(self):
        """Message field 'gyro_0_y'."""
        return self._gyro_0_y

    @gyro_0_y.setter
    def gyro_0_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_0_y' field must be of type 'float'"
        self._gyro_0_y = value

    @property
    def gyro_0_z(self):
        """Message field 'gyro_0_z'."""
        return self._gyro_0_z

    @gyro_0_z.setter
    def gyro_0_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_0_z' field must be of type 'float'"
        self._gyro_0_z = value

    @property
    def acc_0_x(self):
        """Message field 'acc_0_x'."""
        return self._acc_0_x

    @acc_0_x.setter
    def acc_0_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_0_x' field must be of type 'float'"
        self._acc_0_x = value

    @property
    def acc_0_y(self):
        """Message field 'acc_0_y'."""
        return self._acc_0_y

    @acc_0_y.setter
    def acc_0_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_0_y' field must be of type 'float'"
        self._acc_0_y = value

    @property
    def acc_0_z(self):
        """Message field 'acc_0_z'."""
        return self._acc_0_z

    @acc_0_z.setter
    def acc_0_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_0_z' field must be of type 'float'"
        self._acc_0_z = value

    @property
    def temp_1(self):
        """Message field 'temp_1'."""
        return self._temp_1

    @temp_1.setter
    def temp_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp_1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'temp_1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._temp_1 = value

    @property
    def t_1(self):
        """Message field 't_1'."""
        return self._t_1

    @t_1.setter
    def t_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_1' field must be of type 'float'"
        self._t_1 = value

    @property
    def w_1(self):
        """Message field 'w_1'."""
        return self._w_1

    @w_1.setter
    def w_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_1' field must be of type 'float'"
        self._w_1 = value

    @property
    def lw_1(self):
        """Message field 'lw_1'."""
        return self._lw_1

    @lw_1.setter
    def lw_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lw_1' field must be of type 'float'"
        self._lw_1 = value

    @property
    def acc_1(self):
        """Message field 'acc_1'."""
        return self._acc_1

    @acc_1.setter
    def acc_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'acc_1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._acc_1 = value

    @property
    def pos_1(self):
        """Message field 'pos_1'."""
        return self._pos_1

    @pos_1.setter
    def pos_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_1' field must be of type 'float'"
        self._pos_1 = value

    @property
    def gyro_1_x(self):
        """Message field 'gyro_1_x'."""
        return self._gyro_1_x

    @gyro_1_x.setter
    def gyro_1_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_1_x' field must be of type 'float'"
        self._gyro_1_x = value

    @property
    def gyro_1_y(self):
        """Message field 'gyro_1_y'."""
        return self._gyro_1_y

    @gyro_1_y.setter
    def gyro_1_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_1_y' field must be of type 'float'"
        self._gyro_1_y = value

    @property
    def gyro_1_z(self):
        """Message field 'gyro_1_z'."""
        return self._gyro_1_z

    @gyro_1_z.setter
    def gyro_1_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_1_z' field must be of type 'float'"
        self._gyro_1_z = value

    @property
    def acc_1_x(self):
        """Message field 'acc_1_x'."""
        return self._acc_1_x

    @acc_1_x.setter
    def acc_1_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_1_x' field must be of type 'float'"
        self._acc_1_x = value

    @property
    def acc_1_y(self):
        """Message field 'acc_1_y'."""
        return self._acc_1_y

    @acc_1_y.setter
    def acc_1_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_1_y' field must be of type 'float'"
        self._acc_1_y = value

    @property
    def acc_1_z(self):
        """Message field 'acc_1_z'."""
        return self._acc_1_z

    @acc_1_z.setter
    def acc_1_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_1_z' field must be of type 'float'"
        self._acc_1_z = value

    @property
    def temp_2(self):
        """Message field 'temp_2'."""
        return self._temp_2

    @temp_2.setter
    def temp_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp_2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'temp_2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._temp_2 = value

    @property
    def t_2(self):
        """Message field 't_2'."""
        return self._t_2

    @t_2.setter
    def t_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_2' field must be of type 'float'"
        self._t_2 = value

    @property
    def w_2(self):
        """Message field 'w_2'."""
        return self._w_2

    @w_2.setter
    def w_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_2' field must be of type 'float'"
        self._w_2 = value

    @property
    def lw_2(self):
        """Message field 'lw_2'."""
        return self._lw_2

    @lw_2.setter
    def lw_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lw_2' field must be of type 'float'"
        self._lw_2 = value

    @property
    def acc_2(self):
        """Message field 'acc_2'."""
        return self._acc_2

    @acc_2.setter
    def acc_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'acc_2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._acc_2 = value

    @property
    def pos_2(self):
        """Message field 'pos_2'."""
        return self._pos_2

    @pos_2.setter
    def pos_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_2' field must be of type 'float'"
        self._pos_2 = value

    @property
    def gyro_2_x(self):
        """Message field 'gyro_2_x'."""
        return self._gyro_2_x

    @gyro_2_x.setter
    def gyro_2_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_2_x' field must be of type 'float'"
        self._gyro_2_x = value

    @property
    def gyro_2_y(self):
        """Message field 'gyro_2_y'."""
        return self._gyro_2_y

    @gyro_2_y.setter
    def gyro_2_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_2_y' field must be of type 'float'"
        self._gyro_2_y = value

    @property
    def gyro_2_z(self):
        """Message field 'gyro_2_z'."""
        return self._gyro_2_z

    @gyro_2_z.setter
    def gyro_2_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_2_z' field must be of type 'float'"
        self._gyro_2_z = value

    @property
    def acc_2_x(self):
        """Message field 'acc_2_x'."""
        return self._acc_2_x

    @acc_2_x.setter
    def acc_2_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_2_x' field must be of type 'float'"
        self._acc_2_x = value

    @property
    def acc_2_y(self):
        """Message field 'acc_2_y'."""
        return self._acc_2_y

    @acc_2_y.setter
    def acc_2_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_2_y' field must be of type 'float'"
        self._acc_2_y = value

    @property
    def acc_2_z(self):
        """Message field 'acc_2_z'."""
        return self._acc_2_z

    @acc_2_z.setter
    def acc_2_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_2_z' field must be of type 'float'"
        self._acc_2_z = value


class Metaclass_Motorsend(type):
    """Metaclass of service 'Motorsend'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'message.srv.Motorsend')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motorsend

            from message.srv import _motorsend
            if _motorsend.Metaclass_Motorsend_Request._TYPE_SUPPORT is None:
                _motorsend.Metaclass_Motorsend_Request.__import_type_support__()
            if _motorsend.Metaclass_Motorsend_Response._TYPE_SUPPORT is None:
                _motorsend.Metaclass_Motorsend_Response.__import_type_support__()


class Motorsend(metaclass=Metaclass_Motorsend):
    from message.srv._motorsend import Motorsend_Request as Request
    from message.srv._motorsend import Motorsend_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
