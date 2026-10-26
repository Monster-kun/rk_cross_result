# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:msg/NavigationExecution.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigationExecution(type):
    """Metaclass of message 'NavigationExecution'."""

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
                'web_navigation_msgs.msg.NavigationExecution')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigation_execution
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigation_execution
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigation_execution
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigation_execution
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigation_execution

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigationExecution(metaclass=Metaclass_NavigationExecution):
    """Message class 'NavigationExecution'."""

    __slots__ = [
        '_ros_goal_uuid',
        '_task_id',
        '_map_version',
        '_status',
        '_goals',
        '_endpoint',
    ]

    _fields_and_field_types = {
        'ros_goal_uuid': 'string',
        'task_id': 'string',
        'map_version': 'string',
        'status': 'uint8',
        'goals': 'sequence<geometry_msgs/PoseStamped>',
        'endpoint': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ros_goal_uuid = kwargs.get('ros_goal_uuid', str())
        self.task_id = kwargs.get('task_id', str())
        self.map_version = kwargs.get('map_version', str())
        self.status = kwargs.get('status', int())
        self.goals = kwargs.get('goals', [])
        from geometry_msgs.msg import PoseStamped
        self.endpoint = kwargs.get('endpoint', PoseStamped())

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
        if self.ros_goal_uuid != other.ros_goal_uuid:
            return False
        if self.task_id != other.task_id:
            return False
        if self.map_version != other.map_version:
            return False
        if self.status != other.status:
            return False
        if self.goals != other.goals:
            return False
        if self.endpoint != other.endpoint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ros_goal_uuid(self):
        """Message field 'ros_goal_uuid'."""
        return self._ros_goal_uuid

    @ros_goal_uuid.setter
    def ros_goal_uuid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ros_goal_uuid' field must be of type 'str'"
        self._ros_goal_uuid = value

    @builtins.property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_id' field must be of type 'str'"
        self._task_id = value

    @builtins.property
    def map_version(self):
        """Message field 'map_version'."""
        return self._map_version

    @map_version.setter
    def map_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_version' field must be of type 'str'"
        self._map_version = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def goals(self):
        """Message field 'goals'."""
        return self._goals

    @goals.setter
    def goals(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
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
                 all(isinstance(v, PoseStamped) for v in value) and
                 True), \
                "The 'goals' field must be a set or sequence and each value of type 'PoseStamped'"
        self._goals = value

    @builtins.property
    def endpoint(self):
        """Message field 'endpoint'."""
        return self._endpoint

    @endpoint.setter
    def endpoint(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'endpoint' field must be a sub message of type 'PoseStamped'"
        self._endpoint = value
