# generated from rosidl_generator_py/resource/_idl.py.em
# with input from se2_grid_msgs:msg/SE2GridInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SE2GridInfo(type):
    """Metaclass of message 'SE2GridInfo'."""

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
            module = import_type_support('se2_grid_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'se2_grid_msgs.msg.SE2GridInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__se2_grid_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__se2_grid_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__se2_grid_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__se2_grid_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__se2_grid_info

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SE2GridInfo(metaclass=Metaclass_SE2GridInfo):
    """Message class 'SE2GridInfo'."""

    __slots__ = [
        '_header',
        '_pos_resolution',
        '_yaw_resolution',
        '_length_x',
        '_length_y',
        '_length_yaw',
        '_pose',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pos_resolution': 'double',
        'yaw_resolution': 'double',
        'length_x': 'double',
        'length_y': 'double',
        'length_yaw': 'double',
        'pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pos_resolution = kwargs.get('pos_resolution', float())
        self.yaw_resolution = kwargs.get('yaw_resolution', float())
        self.length_x = kwargs.get('length_x', float())
        self.length_y = kwargs.get('length_y', float())
        self.length_yaw = kwargs.get('length_yaw', float())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())

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
        if self.header != other.header:
            return False
        if self.pos_resolution != other.pos_resolution:
            return False
        if self.yaw_resolution != other.yaw_resolution:
            return False
        if self.length_x != other.length_x:
            return False
        if self.length_y != other.length_y:
            return False
        if self.length_yaw != other.length_yaw:
            return False
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def pos_resolution(self):
        """Message field 'pos_resolution'."""
        return self._pos_resolution

    @pos_resolution.setter
    def pos_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_resolution = value

    @builtins.property
    def yaw_resolution(self):
        """Message field 'yaw_resolution'."""
        return self._yaw_resolution

    @yaw_resolution.setter
    def yaw_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_resolution = value

    @builtins.property
    def length_x(self):
        """Message field 'length_x'."""
        return self._length_x

    @length_x.setter
    def length_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length_x = value

    @builtins.property
    def length_y(self):
        """Message field 'length_y'."""
        return self._length_y

    @length_y.setter
    def length_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length_y = value

    @builtins.property
    def length_yaw(self):
        """Message field 'length_yaw'."""
        return self._length_yaw

    @length_yaw.setter
    def length_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'length_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._length_yaw = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value
