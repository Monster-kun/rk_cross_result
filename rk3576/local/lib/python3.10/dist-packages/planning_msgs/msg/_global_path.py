# generated from rosidl_generator_py/resource/_idl.py.em
# with input from planning_msgs:msg/GlobalPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'left_bound_s'
# Member 'right_bound_s'
# Member 'checkpoint_indices'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GlobalPath(type):
    """Metaclass of message 'GlobalPath'."""

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
                'planning_msgs.msg.GlobalPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__global_path
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__global_path
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__global_path
            cls._TYPE_SUPPORT = module.type_support_msg__msg__global_path
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__global_path

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from planning_msgs.msg import Trajectory
            if Trajectory.__class__._TYPE_SUPPORT is None:
                Trajectory.__class__.__import_type_support__()

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


class GlobalPath(metaclass=Metaclass_GlobalPath):
    """Message class 'GlobalPath'."""

    __slots__ = [
        '_header',
        '_main_trajectory',
        '_left_bound',
        '_right_bound',
        '_left_bound_s',
        '_right_bound_s',
        '_checkpoint_indices',
        '_loop',
        '_loop_start_index',
        '_loop_left_bound_start_index',
        '_loop_right_bound_start_index',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'main_trajectory': 'planning_msgs/Trajectory',
        'left_bound': 'sequence<geometry_msgs/Point>',
        'right_bound': 'sequence<geometry_msgs/Point>',
        'left_bound_s': 'sequence<double>',
        'right_bound_s': 'sequence<double>',
        'checkpoint_indices': 'sequence<uint32>',
        'loop': 'boolean',
        'loop_start_index': 'uint32',
        'loop_left_bound_start_index': 'uint32',
        'loop_right_bound_start_index': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['planning_msgs', 'msg'], 'Trajectory'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from planning_msgs.msg import Trajectory
        self.main_trajectory = kwargs.get('main_trajectory', Trajectory())
        self.left_bound = kwargs.get('left_bound', [])
        self.right_bound = kwargs.get('right_bound', [])
        self.left_bound_s = array.array('d', kwargs.get('left_bound_s', []))
        self.right_bound_s = array.array('d', kwargs.get('right_bound_s', []))
        self.checkpoint_indices = array.array('I', kwargs.get('checkpoint_indices', []))
        self.loop = kwargs.get('loop', bool())
        self.loop_start_index = kwargs.get('loop_start_index', int())
        self.loop_left_bound_start_index = kwargs.get('loop_left_bound_start_index', int())
        self.loop_right_bound_start_index = kwargs.get('loop_right_bound_start_index', int())

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
        if self.main_trajectory != other.main_trajectory:
            return False
        if self.left_bound != other.left_bound:
            return False
        if self.right_bound != other.right_bound:
            return False
        if self.left_bound_s != other.left_bound_s:
            return False
        if self.right_bound_s != other.right_bound_s:
            return False
        if self.checkpoint_indices != other.checkpoint_indices:
            return False
        if self.loop != other.loop:
            return False
        if self.loop_start_index != other.loop_start_index:
            return False
        if self.loop_left_bound_start_index != other.loop_left_bound_start_index:
            return False
        if self.loop_right_bound_start_index != other.loop_right_bound_start_index:
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
    def main_trajectory(self):
        """Message field 'main_trajectory'."""
        return self._main_trajectory

    @main_trajectory.setter
    def main_trajectory(self, value):
        if __debug__:
            from planning_msgs.msg import Trajectory
            assert \
                isinstance(value, Trajectory), \
                "The 'main_trajectory' field must be a sub message of type 'Trajectory'"
        self._main_trajectory = value

    @builtins.property
    def left_bound(self):
        """Message field 'left_bound'."""
        return self._left_bound

    @left_bound.setter
    def left_bound(self, value):
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
                "The 'left_bound' field must be a set or sequence and each value of type 'Point'"
        self._left_bound = value

    @builtins.property
    def right_bound(self):
        """Message field 'right_bound'."""
        return self._right_bound

    @right_bound.setter
    def right_bound(self, value):
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
                "The 'right_bound' field must be a set or sequence and each value of type 'Point'"
        self._right_bound = value

    @builtins.property
    def left_bound_s(self):
        """Message field 'left_bound_s'."""
        return self._left_bound_s

    @left_bound_s.setter
    def left_bound_s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'left_bound_s' array.array() must have the type code of 'd'"
            self._left_bound_s = value
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
                "The 'left_bound_s' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._left_bound_s = array.array('d', value)

    @builtins.property
    def right_bound_s(self):
        """Message field 'right_bound_s'."""
        return self._right_bound_s

    @right_bound_s.setter
    def right_bound_s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'right_bound_s' array.array() must have the type code of 'd'"
            self._right_bound_s = value
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
                "The 'right_bound_s' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._right_bound_s = array.array('d', value)

    @builtins.property
    def checkpoint_indices(self):
        """Message field 'checkpoint_indices'."""
        return self._checkpoint_indices

    @checkpoint_indices.setter
    def checkpoint_indices(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'checkpoint_indices' array.array() must have the type code of 'I'"
            self._checkpoint_indices = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'checkpoint_indices' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._checkpoint_indices = array.array('I', value)

    @builtins.property
    def loop(self):
        """Message field 'loop'."""
        return self._loop

    @loop.setter
    def loop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'loop' field must be of type 'bool'"
        self._loop = value

    @builtins.property
    def loop_start_index(self):
        """Message field 'loop_start_index'."""
        return self._loop_start_index

    @loop_start_index.setter
    def loop_start_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loop_start_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'loop_start_index' field must be an unsigned integer in [0, 4294967295]"
        self._loop_start_index = value

    @builtins.property
    def loop_left_bound_start_index(self):
        """Message field 'loop_left_bound_start_index'."""
        return self._loop_left_bound_start_index

    @loop_left_bound_start_index.setter
    def loop_left_bound_start_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loop_left_bound_start_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'loop_left_bound_start_index' field must be an unsigned integer in [0, 4294967295]"
        self._loop_left_bound_start_index = value

    @builtins.property
    def loop_right_bound_start_index(self):
        """Message field 'loop_right_bound_start_index'."""
        return self._loop_right_bound_start_index

    @loop_right_bound_start_index.setter
    def loop_right_bound_start_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loop_right_bound_start_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'loop_right_bound_start_index' field must be an unsigned integer in [0, 4294967295]"
        self._loop_right_bound_start_index = value
