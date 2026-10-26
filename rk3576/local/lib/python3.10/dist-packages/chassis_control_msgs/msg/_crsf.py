# generated from rosidl_generator_py/resource/_idl.py.em
# with input from chassis_control_msgs:msg/Crsf.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Crsf(type):
    """Metaclass of message 'Crsf'."""

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
            module = import_type_support('chassis_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'chassis_control_msgs.msg.Crsf')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__crsf
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__crsf
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__crsf
            cls._TYPE_SUPPORT = module.type_support_msg__msg__crsf
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__crsf

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Crsf(metaclass=Metaclass_Crsf):
    """Message class 'Crsf'."""

    __slots__ = [
        '_ch1',
        '_ch2',
        '_ch3',
        '_ch4',
        '_ch5',
        '_ch6',
        '_ch7',
        '_ch8',
        '_ch9',
        '_ch10',
        '_ch11',
        '_ch12',
        '_ch13',
        '_ch14',
        '_ch15',
        '_ch16',
    ]

    _fields_and_field_types = {
        'ch1': 'int16',
        'ch2': 'int16',
        'ch3': 'int16',
        'ch4': 'int16',
        'ch5': 'int16',
        'ch6': 'int16',
        'ch7': 'int16',
        'ch8': 'int16',
        'ch9': 'int16',
        'ch10': 'int16',
        'ch11': 'int16',
        'ch12': 'int16',
        'ch13': 'int16',
        'ch14': 'int16',
        'ch15': 'int16',
        'ch16': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ch1 = kwargs.get('ch1', int())
        self.ch2 = kwargs.get('ch2', int())
        self.ch3 = kwargs.get('ch3', int())
        self.ch4 = kwargs.get('ch4', int())
        self.ch5 = kwargs.get('ch5', int())
        self.ch6 = kwargs.get('ch6', int())
        self.ch7 = kwargs.get('ch7', int())
        self.ch8 = kwargs.get('ch8', int())
        self.ch9 = kwargs.get('ch9', int())
        self.ch10 = kwargs.get('ch10', int())
        self.ch11 = kwargs.get('ch11', int())
        self.ch12 = kwargs.get('ch12', int())
        self.ch13 = kwargs.get('ch13', int())
        self.ch14 = kwargs.get('ch14', int())
        self.ch15 = kwargs.get('ch15', int())
        self.ch16 = kwargs.get('ch16', int())

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
        if self.ch1 != other.ch1:
            return False
        if self.ch2 != other.ch2:
            return False
        if self.ch3 != other.ch3:
            return False
        if self.ch4 != other.ch4:
            return False
        if self.ch5 != other.ch5:
            return False
        if self.ch6 != other.ch6:
            return False
        if self.ch7 != other.ch7:
            return False
        if self.ch8 != other.ch8:
            return False
        if self.ch9 != other.ch9:
            return False
        if self.ch10 != other.ch10:
            return False
        if self.ch11 != other.ch11:
            return False
        if self.ch12 != other.ch12:
            return False
        if self.ch13 != other.ch13:
            return False
        if self.ch14 != other.ch14:
            return False
        if self.ch15 != other.ch15:
            return False
        if self.ch16 != other.ch16:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ch1(self):
        """Message field 'ch1'."""
        return self._ch1

    @ch1.setter
    def ch1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch1' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch1' field must be an integer in [-32768, 32767]"
        self._ch1 = value

    @builtins.property
    def ch2(self):
        """Message field 'ch2'."""
        return self._ch2

    @ch2.setter
    def ch2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch2' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch2' field must be an integer in [-32768, 32767]"
        self._ch2 = value

    @builtins.property
    def ch3(self):
        """Message field 'ch3'."""
        return self._ch3

    @ch3.setter
    def ch3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch3' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch3' field must be an integer in [-32768, 32767]"
        self._ch3 = value

    @builtins.property
    def ch4(self):
        """Message field 'ch4'."""
        return self._ch4

    @ch4.setter
    def ch4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch4' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch4' field must be an integer in [-32768, 32767]"
        self._ch4 = value

    @builtins.property
    def ch5(self):
        """Message field 'ch5'."""
        return self._ch5

    @ch5.setter
    def ch5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch5' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch5' field must be an integer in [-32768, 32767]"
        self._ch5 = value

    @builtins.property
    def ch6(self):
        """Message field 'ch6'."""
        return self._ch6

    @ch6.setter
    def ch6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch6' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch6' field must be an integer in [-32768, 32767]"
        self._ch6 = value

    @builtins.property
    def ch7(self):
        """Message field 'ch7'."""
        return self._ch7

    @ch7.setter
    def ch7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch7' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch7' field must be an integer in [-32768, 32767]"
        self._ch7 = value

    @builtins.property
    def ch8(self):
        """Message field 'ch8'."""
        return self._ch8

    @ch8.setter
    def ch8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch8' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch8' field must be an integer in [-32768, 32767]"
        self._ch8 = value

    @builtins.property
    def ch9(self):
        """Message field 'ch9'."""
        return self._ch9

    @ch9.setter
    def ch9(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch9' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch9' field must be an integer in [-32768, 32767]"
        self._ch9 = value

    @builtins.property
    def ch10(self):
        """Message field 'ch10'."""
        return self._ch10

    @ch10.setter
    def ch10(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch10' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch10' field must be an integer in [-32768, 32767]"
        self._ch10 = value

    @builtins.property
    def ch11(self):
        """Message field 'ch11'."""
        return self._ch11

    @ch11.setter
    def ch11(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch11' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch11' field must be an integer in [-32768, 32767]"
        self._ch11 = value

    @builtins.property
    def ch12(self):
        """Message field 'ch12'."""
        return self._ch12

    @ch12.setter
    def ch12(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch12' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch12' field must be an integer in [-32768, 32767]"
        self._ch12 = value

    @builtins.property
    def ch13(self):
        """Message field 'ch13'."""
        return self._ch13

    @ch13.setter
    def ch13(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch13' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch13' field must be an integer in [-32768, 32767]"
        self._ch13 = value

    @builtins.property
    def ch14(self):
        """Message field 'ch14'."""
        return self._ch14

    @ch14.setter
    def ch14(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch14' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch14' field must be an integer in [-32768, 32767]"
        self._ch14 = value

    @builtins.property
    def ch15(self):
        """Message field 'ch15'."""
        return self._ch15

    @ch15.setter
    def ch15(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch15' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch15' field must be an integer in [-32768, 32767]"
        self._ch15 = value

    @builtins.property
    def ch16(self):
        """Message field 'ch16'."""
        return self._ch16

    @ch16.setter
    def ch16(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch16' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch16' field must be an integer in [-32768, 32767]"
        self._ch16 = value
