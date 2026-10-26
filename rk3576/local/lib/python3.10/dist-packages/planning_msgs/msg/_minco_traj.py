# generated from rosidl_generator_py/resource/_idl.py.em
# with input from planning_msgs:msg/MincoTraj.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 't_pts'
# Member 'yaw_pts'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MincoTraj(type):
    """Metaclass of message 'MincoTraj'."""

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
            module = import_type_support('planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'planning_msgs.msg.MincoTraj')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__minco_traj
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__minco_traj
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__minco_traj
            cls._TYPE_SUPPORT = module.type_support_msg__msg__minco_traj
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__minco_traj

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from planning_msgs.msg import Waypoint
            if Waypoint.__class__._TYPE_SUPPORT is None:
                Waypoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MincoTraj(metaclass=Metaclass_MincoTraj):
    """Message class 'MincoTraj'."""

    __slots__ = [
        '_start_time',
        '_end_time',
        '_use_init',
        '_yaw',
        '_head_x',
        '_head_y',
        '_tail_x',
        '_tail_y',
        '_t_pts',
        '_pos_pts',
        '_yaw_pts',
        '_waypoints',
    ]

    _fields_and_field_types = {
        'start_time': 'builtin_interfaces/Time',
        'end_time': 'double',
        'use_init': 'boolean',
        'yaw': 'double',
        'head_x': 'geometry_msgs/Vector3',
        'head_y': 'geometry_msgs/Vector3',
        'tail_x': 'geometry_msgs/Vector3',
        'tail_y': 'geometry_msgs/Vector3',
        't_pts': 'sequence<double>',
        'pos_pts': 'sequence<geometry_msgs/Point>',
        'yaw_pts': 'sequence<double>',
        'waypoints': 'sequence<planning_msgs/Waypoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['planning_msgs', 'msg'], 'Waypoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.start_time = kwargs.get('start_time', Time())
        self.end_time = kwargs.get('end_time', float())
        self.use_init = kwargs.get('use_init', bool())
        self.yaw = kwargs.get('yaw', float())
        from geometry_msgs.msg import Vector3
        self.head_x = kwargs.get('head_x', Vector3())
        from geometry_msgs.msg import Vector3
        self.head_y = kwargs.get('head_y', Vector3())
        from geometry_msgs.msg import Vector3
        self.tail_x = kwargs.get('tail_x', Vector3())
        from geometry_msgs.msg import Vector3
        self.tail_y = kwargs.get('tail_y', Vector3())
        self.t_pts = array.array('d', kwargs.get('t_pts', []))
        self.pos_pts = kwargs.get('pos_pts', [])
        self.yaw_pts = array.array('d', kwargs.get('yaw_pts', []))
        self.waypoints = kwargs.get('waypoints', [])

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
        if self.start_time != other.start_time:
            return False
        if self.end_time != other.end_time:
            return False
        if self.use_init != other.use_init:
            return False
        if self.yaw != other.yaw:
            return False
        if self.head_x != other.head_x:
            return False
        if self.head_y != other.head_y:
            return False
        if self.tail_x != other.tail_x:
            return False
        if self.tail_y != other.tail_y:
            return False
        if self.t_pts != other.t_pts:
            return False
        if self.pos_pts != other.pos_pts:
            return False
        if self.yaw_pts != other.yaw_pts:
            return False
        if self.waypoints != other.waypoints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'start_time' field must be a sub message of type 'Time'"
        self._start_time = value

    @builtins.property
    def end_time(self):
        """Message field 'end_time'."""
        return self._end_time

    @end_time.setter
    def end_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'end_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._end_time = value

    @builtins.property
    def use_init(self):
        """Message field 'use_init'."""
        return self._use_init

    @use_init.setter
    def use_init(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_init' field must be of type 'bool'"
        self._use_init = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def head_x(self):
        """Message field 'head_x'."""
        return self._head_x

    @head_x.setter
    def head_x(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'head_x' field must be a sub message of type 'Vector3'"
        self._head_x = value

    @builtins.property
    def head_y(self):
        """Message field 'head_y'."""
        return self._head_y

    @head_y.setter
    def head_y(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'head_y' field must be a sub message of type 'Vector3'"
        self._head_y = value

    @builtins.property
    def tail_x(self):
        """Message field 'tail_x'."""
        return self._tail_x

    @tail_x.setter
    def tail_x(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'tail_x' field must be a sub message of type 'Vector3'"
        self._tail_x = value

    @builtins.property
    def tail_y(self):
        """Message field 'tail_y'."""
        return self._tail_y

    @tail_y.setter
    def tail_y(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'tail_y' field must be a sub message of type 'Vector3'"
        self._tail_y = value

    @builtins.property
    def t_pts(self):
        """Message field 't_pts'."""
        return self._t_pts

    @t_pts.setter
    def t_pts(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 't_pts' array.array() must have the type code of 'd'"
            self._t_pts = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 't_pts' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._t_pts = array.array('d', value)

    @builtins.property
    def pos_pts(self):
        """Message field 'pos_pts'."""
        return self._pos_pts

    @pos_pts.setter
    def pos_pts(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'pos_pts' field must be a set or sequence and each value of type 'Point'"
        self._pos_pts = value

    @builtins.property
    def yaw_pts(self):
        """Message field 'yaw_pts'."""
        return self._yaw_pts

    @yaw_pts.setter
    def yaw_pts(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'yaw_pts' array.array() must have the type code of 'd'"
            self._yaw_pts = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'yaw_pts' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._yaw_pts = array.array('d', value)

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from planning_msgs.msg import Waypoint
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Waypoint) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'Waypoint'"
        self._waypoints = value
