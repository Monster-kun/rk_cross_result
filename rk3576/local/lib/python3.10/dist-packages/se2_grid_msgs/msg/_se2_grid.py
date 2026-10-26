# generated from rosidl_generator_py/resource/_idl.py.em
# with input from se2_grid_msgs:msg/SE2Grid.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SE2Grid(type):
    """Metaclass of message 'SE2Grid'."""

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
                'se2_grid_msgs.msg.SE2Grid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__se2_grid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__se2_grid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__se2_grid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__se2_grid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__se2_grid

            from se2_grid_msgs.msg import SE2GridInfo
            if SE2GridInfo.__class__._TYPE_SUPPORT is None:
                SE2GridInfo.__class__.__import_type_support__()

            from std_msgs.msg import Float32MultiArray
            if Float32MultiArray.__class__._TYPE_SUPPORT is None:
                Float32MultiArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SE2Grid(metaclass=Metaclass_SE2Grid):
    """Message class 'SE2Grid'."""

    __slots__ = [
        '_info',
        '_layers',
        '_has_so2',
        '_data',
        '_start_index_row',
        '_start_index_col',
    ]

    _fields_and_field_types = {
        'info': 'se2_grid_msgs/SE2GridInfo',
        'layers': 'sequence<string>',
        'has_so2': 'sequence<boolean>',
        'data': 'sequence<std_msgs/Float32MultiArray>',
        'start_index_row': 'uint16',
        'start_index_col': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['se2_grid_msgs', 'msg'], 'SE2GridInfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32MultiArray')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from se2_grid_msgs.msg import SE2GridInfo
        self.info = kwargs.get('info', SE2GridInfo())
        self.layers = kwargs.get('layers', [])
        self.has_so2 = kwargs.get('has_so2', [])
        self.data = kwargs.get('data', [])
        self.start_index_row = kwargs.get('start_index_row', int())
        self.start_index_col = kwargs.get('start_index_col', int())

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
        if self.info != other.info:
            return False
        if self.layers != other.layers:
            return False
        if self.has_so2 != other.has_so2:
            return False
        if self.data != other.data:
            return False
        if self.start_index_row != other.start_index_row:
            return False
        if self.start_index_col != other.start_index_col:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            from se2_grid_msgs.msg import SE2GridInfo
            assert \
                isinstance(value, SE2GridInfo), \
                "The 'info' field must be a sub message of type 'SE2GridInfo'"
        self._info = value

    @builtins.property
    def layers(self):
        """Message field 'layers'."""
        return self._layers

    @layers.setter
    def layers(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'layers' field must be a set or sequence and each value of type 'str'"
        self._layers = value

    @builtins.property
    def has_so2(self):
        """Message field 'has_so2'."""
        return self._has_so2

    @has_so2.setter
    def has_so2(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'has_so2' field must be a set or sequence and each value of type 'bool'"
        self._has_so2 = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            from std_msgs.msg import Float32MultiArray
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
                 all(isinstance(v, Float32MultiArray) for v in value) and
                 True), \
                "The 'data' field must be a set or sequence and each value of type 'Float32MultiArray'"
        self._data = value

    @builtins.property
    def start_index_row(self):
        """Message field 'start_index_row'."""
        return self._start_index_row

    @start_index_row.setter
    def start_index_row(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_index_row' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'start_index_row' field must be an unsigned integer in [0, 65535]"
        self._start_index_row = value

    @builtins.property
    def start_index_col(self):
        """Message field 'start_index_col'."""
        return self._start_index_col

    @start_index_col.setter
    def start_index_col(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_index_col' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'start_index_col' field must be an unsigned integer in [0, 65535]"
        self._start_index_col = value
