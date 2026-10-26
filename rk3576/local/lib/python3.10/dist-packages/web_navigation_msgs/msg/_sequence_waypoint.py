# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:msg/SequenceWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SequenceWaypoint(type):
    """Metaclass of message 'SequenceWaypoint'."""

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
            module = import_type_support('web_navigation_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'web_navigation_msgs.msg.SequenceWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sequence_waypoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sequence_waypoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sequence_waypoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sequence_waypoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sequence_waypoint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SequenceWaypoint(metaclass=Metaclass_SequenceWaypoint):
    """Message class 'SequenceWaypoint'."""

    __slots__ = [
        '_annotation_id',
        '_name',
        '_x',
        '_y',
        '_lanelet_id',
        '_stop',
    ]

    _fields_and_field_types = {
        'annotation_id': 'string',
        'name': 'string',
        'x': 'double',
        'y': 'double',
        'lanelet_id': 'string',
        'stop': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.annotation_id = kwargs.get('annotation_id', str())
        self.name = kwargs.get('name', str())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.lanelet_id = kwargs.get('lanelet_id', str())
        self.stop = kwargs.get('stop', bool())

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
        if self.annotation_id != other.annotation_id:
            return False
        if self.name != other.name:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.lanelet_id != other.lanelet_id:
            return False
        if self.stop != other.stop:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def annotation_id(self):
        """Message field 'annotation_id'."""
        return self._annotation_id

    @annotation_id.setter
    def annotation_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'annotation_id' field must be of type 'str'"
        self._annotation_id = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def lanelet_id(self):
        """Message field 'lanelet_id'."""
        return self._lanelet_id

    @lanelet_id.setter
    def lanelet_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lanelet_id' field must be of type 'str'"
        self._lanelet_id = value

    @builtins.property
    def stop(self):
        """Message field 'stop'."""
        return self._stop

    @stop.setter
    def stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stop' field must be of type 'bool'"
        self._stop = value
