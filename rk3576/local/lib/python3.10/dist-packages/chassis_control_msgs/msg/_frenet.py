# generated from rosidl_generator_py/resource/_idl.py.em
# with input from chassis_control_msgs:msg/Frenet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Frenet(type):
    """Metaclass of message 'Frenet'."""

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
                'chassis_control_msgs.msg.Frenet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__frenet
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__frenet
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__frenet
            cls._TYPE_SUPPORT = module.type_support_msg__msg__frenet
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__frenet

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Frenet(metaclass=Metaclass_Frenet):
    """Message class 'Frenet'."""

    __slots__ = [
        '_s',
        '_ds',
        '_dds',
        '_l',
        '_dl',
        '_ddl',
    ]

    _fields_and_field_types = {
        's': 'float',
        'ds': 'float',
        'dds': 'float',
        'l': 'float',
        'dl': 'float',
        'ddl': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.s = kwargs.get('s', float())
        self.ds = kwargs.get('ds', float())
        self.dds = kwargs.get('dds', float())
        self.l = kwargs.get('l', float())
        self.dl = kwargs.get('dl', float())
        self.ddl = kwargs.get('ddl', float())

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
        if self.s != other.s:
            return False
        if self.ds != other.ds:
            return False
        if self.dds != other.dds:
            return False
        if self.l != other.l:
            return False
        if self.dl != other.dl:
            return False
        if self.ddl != other.ddl:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def s(self):
        """Message field 's'."""
        return self._s

    @s.setter
    def s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s = value

    @builtins.property
    def ds(self):
        """Message field 'ds'."""
        return self._ds

    @ds.setter
    def ds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ds' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ds' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ds = value

    @builtins.property
    def dds(self):
        """Message field 'dds'."""
        return self._dds

    @dds.setter
    def dds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dds' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dds' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dds = value

    @builtins.property
    def l(self):
        """Message field 'l'."""
        return self._l

    @l.setter
    def l(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'l' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'l' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._l = value

    @builtins.property
    def dl(self):
        """Message field 'dl'."""
        return self._dl

    @dl.setter
    def dl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dl = value

    @builtins.property
    def ddl(self):
        """Message field 'ddl'."""
        return self._ddl

    @ddl.setter
    def ddl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ddl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ddl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ddl = value
