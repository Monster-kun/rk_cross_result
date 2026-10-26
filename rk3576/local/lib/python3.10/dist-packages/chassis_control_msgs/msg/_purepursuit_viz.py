# generated from rosidl_generator_py/resource/_idl.py.em
# with input from chassis_control_msgs:msg/PurepursuitViz.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PurepursuitViz(type):
    """Metaclass of message 'PurepursuitViz'."""

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
                'chassis_control_msgs.msg.PurepursuitViz')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__purepursuit_viz
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__purepursuit_viz
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__purepursuit_viz
            cls._TYPE_SUPPORT = module.type_support_msg__msg__purepursuit_viz
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__purepursuit_viz

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PurepursuitViz(metaclass=Metaclass_PurepursuitViz):
    """Message class 'PurepursuitViz'."""

    __slots__ = [
        '_aimpointx',
        '_aimpointy',
        '_velx',
        '_vely',
        '_velz',
        '_ahead',
        '_currentx',
        '_currenty',
    ]

    _fields_and_field_types = {
        'aimpointx': 'double',
        'aimpointy': 'double',
        'velx': 'double',
        'vely': 'double',
        'velz': 'double',
        'ahead': 'double',
        'currentx': 'double',
        'currenty': 'double',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.aimpointx = kwargs.get('aimpointx', float())
        self.aimpointy = kwargs.get('aimpointy', float())
        self.velx = kwargs.get('velx', float())
        self.vely = kwargs.get('vely', float())
        self.velz = kwargs.get('velz', float())
        self.ahead = kwargs.get('ahead', float())
        self.currentx = kwargs.get('currentx', float())
        self.currenty = kwargs.get('currenty', float())

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
        if self.aimpointx != other.aimpointx:
            return False
        if self.aimpointy != other.aimpointy:
            return False
        if self.velx != other.velx:
            return False
        if self.vely != other.vely:
            return False
        if self.velz != other.velz:
            return False
        if self.ahead != other.ahead:
            return False
        if self.currentx != other.currentx:
            return False
        if self.currenty != other.currenty:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def aimpointx(self):
        """Message field 'aimpointx'."""
        return self._aimpointx

    @aimpointx.setter
    def aimpointx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aimpointx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'aimpointx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._aimpointx = value

    @builtins.property
    def aimpointy(self):
        """Message field 'aimpointy'."""
        return self._aimpointy

    @aimpointy.setter
    def aimpointy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aimpointy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'aimpointy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._aimpointy = value

    @builtins.property
    def velx(self):
        """Message field 'velx'."""
        return self._velx

    @velx.setter
    def velx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velx = value

    @builtins.property
    def vely(self):
        """Message field 'vely'."""
        return self._vely

    @vely.setter
    def vely(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vely' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vely' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vely = value

    @builtins.property
    def velz(self):
        """Message field 'velz'."""
        return self._velz

    @velz.setter
    def velz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velz = value

    @builtins.property
    def ahead(self):
        """Message field 'ahead'."""
        return self._ahead

    @ahead.setter
    def ahead(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ahead' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ahead' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ahead = value

    @builtins.property
    def currentx(self):
        """Message field 'currentx'."""
        return self._currentx

    @currentx.setter
    def currentx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'currentx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'currentx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._currentx = value

    @builtins.property
    def currenty(self):
        """Message field 'currenty'."""
        return self._currenty

    @currenty.setter
    def currenty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'currenty' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'currenty' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._currenty = value
