# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_msgs:action/NavigateThroughPoses.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigateThroughPoses_Goal(type):
    """Metaclass of message 'NavigateThroughPoses_Goal'."""

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
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_through_poses__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_through_poses__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_through_poses__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_through_poses__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_through_poses__goal

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


class NavigateThroughPoses_Goal(metaclass=Metaclass_NavigateThroughPoses_Goal):
    """Message class 'NavigateThroughPoses_Goal'."""

    __slots__ = [
        '_goals',
        '_goal_pose',
        '_task_id',
        '_map_version',
        '_behavior_tree',
        '_loop_goals',
    ]

    _fields_and_field_types = {
        'goals': 'sequence<geometry_msgs/PoseStamped>',
        'goal_pose': 'geometry_msgs/PoseStamped',
        'task_id': 'string',
        'map_version': 'string',
        'behavior_tree': 'string',
        'loop_goals': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goals = kwargs.get('goals', [])
        from geometry_msgs.msg import PoseStamped
        self.goal_pose = kwargs.get('goal_pose', PoseStamped())
        self.task_id = kwargs.get('task_id', str())
        self.map_version = kwargs.get('map_version', str())
        self.behavior_tree = kwargs.get('behavior_tree', str())
        self.loop_goals = kwargs.get('loop_goals', bool())

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
        if self.goals != other.goals:
            return False
        if self.goal_pose != other.goal_pose:
            return False
        if self.task_id != other.task_id:
            return False
        if self.map_version != other.map_version:
            return False
        if self.behavior_tree != other.behavior_tree:
            return False
        if self.loop_goals != other.loop_goals:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def goal_pose(self):
        """Message field 'goal_pose'."""
        return self._goal_pose

    @goal_pose.setter
    def goal_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'goal_pose' field must be a sub message of type 'PoseStamped'"
        self._goal_pose = value

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
    def behavior_tree(self):
        """Message field 'behavior_tree'."""
        return self._behavior_tree

    @behavior_tree.setter
    def behavior_tree(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'behavior_tree' field must be of type 'str'"
        self._behavior_tree = value

    @builtins.property
    def loop_goals(self):
        """Message field 'loop_goals'."""
        return self._loop_goals

    @loop_goals.setter
    def loop_goals(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'loop_goals' field must be of type 'bool'"
        self._loop_goals = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateThroughPoses_Result(type):
    """Metaclass of message 'NavigateThroughPoses_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_through_poses__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_through_poses__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_through_poses__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_through_poses__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_through_poses__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_NavigateThroughPoses_Result.__constants['NONE']


class NavigateThroughPoses_Result(metaclass=Metaclass_NavigateThroughPoses_Result):
    """
    Message class 'NavigateThroughPoses_Result'.

    Constants:
      NONE
    """

    __slots__ = [
        '_error_code',
        '_error_msg',
    ]

    _fields_and_field_types = {
        'error_code': 'uint16',
        'error_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error_code = kwargs.get('error_code', int())
        self.error_msg = kwargs.get('error_msg', str())

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
        if self.error_code != other.error_code:
            return False
        if self.error_msg != other.error_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'error_code' field must be an unsigned integer in [0, 65535]"
        self._error_code = value

    @builtins.property
    def error_msg(self):
        """Message field 'error_msg'."""
        return self._error_msg

    @error_msg.setter
    def error_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_msg' field must be of type 'str'"
        self._error_msg = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateThroughPoses_Feedback(type):
    """Metaclass of message 'NavigateThroughPoses_Feedback'."""

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
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_through_poses__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_through_poses__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_through_poses__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_through_poses__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_through_poses__feedback

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateThroughPoses_Feedback(metaclass=Metaclass_NavigateThroughPoses_Feedback):
    """Message class 'NavigateThroughPoses_Feedback'."""

    __slots__ = [
        '_navigation_time',
        '_number_of_recoveries',
        '_number_of_goal_remaining',
    ]

    _fields_and_field_types = {
        'navigation_time': 'builtin_interfaces/Duration',
        'number_of_recoveries': 'int16',
        'number_of_goal_remaining': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Duration
        self.navigation_time = kwargs.get('navigation_time', Duration())
        self.number_of_recoveries = kwargs.get('number_of_recoveries', int())
        self.number_of_goal_remaining = kwargs.get('number_of_goal_remaining', int())

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
        if self.navigation_time != other.navigation_time:
            return False
        if self.number_of_recoveries != other.number_of_recoveries:
            return False
        if self.number_of_goal_remaining != other.number_of_goal_remaining:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def navigation_time(self):
        """Message field 'navigation_time'."""
        return self._navigation_time

    @navigation_time.setter
    def navigation_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'navigation_time' field must be a sub message of type 'Duration'"
        self._navigation_time = value

    @builtins.property
    def number_of_recoveries(self):
        """Message field 'number_of_recoveries'."""
        return self._number_of_recoveries

    @number_of_recoveries.setter
    def number_of_recoveries(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_recoveries' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'number_of_recoveries' field must be an integer in [-32768, 32767]"
        self._number_of_recoveries = value

    @builtins.property
    def number_of_goal_remaining(self):
        """Message field 'number_of_goal_remaining'."""
        return self._number_of_goal_remaining

    @number_of_goal_remaining.setter
    def number_of_goal_remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_goal_remaining' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'number_of_goal_remaining' field must be an integer in [-32768, 32767]"
        self._number_of_goal_remaining = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateThroughPoses_SendGoal_Request(type):
    """Metaclass of message 'NavigateThroughPoses_SendGoal_Request'."""

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
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_through_poses__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_through_poses__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_through_poses__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_through_poses__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_through_poses__send_goal__request

            from behavior_msgs.action import NavigateThroughPoses
            if NavigateThroughPoses.Goal.__class__._TYPE_SUPPORT is None:
                NavigateThroughPoses.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateThroughPoses_SendGoal_Request(metaclass=Metaclass_NavigateThroughPoses_SendGoal_Request):
    """Message class 'NavigateThroughPoses_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'behavior_msgs/NavigateThroughPoses_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_msgs', 'action'], 'NavigateThroughPoses_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_Goal
        self.goal = kwargs.get('goal', NavigateThroughPoses_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_Goal
            assert \
                isinstance(value, NavigateThroughPoses_Goal), \
                "The 'goal' field must be a sub message of type 'NavigateThroughPoses_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateThroughPoses_SendGoal_Response(type):
    """Metaclass of message 'NavigateThroughPoses_SendGoal_Response'."""

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
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_through_poses__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_through_poses__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_through_poses__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_through_poses__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_through_poses__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateThroughPoses_SendGoal_Response(metaclass=Metaclass_NavigateThroughPoses_SendGoal_Response):
    """Message class 'NavigateThroughPoses_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_NavigateThroughPoses_SendGoal(type):
    """Metaclass of service 'NavigateThroughPoses_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__navigate_through_poses__send_goal

            from behavior_msgs.action import _navigate_through_poses
            if _navigate_through_poses.Metaclass_NavigateThroughPoses_SendGoal_Request._TYPE_SUPPORT is None:
                _navigate_through_poses.Metaclass_NavigateThroughPoses_SendGoal_Request.__import_type_support__()
            if _navigate_through_poses.Metaclass_NavigateThroughPoses_SendGoal_Response._TYPE_SUPPORT is None:
                _navigate_through_poses.Metaclass_NavigateThroughPoses_SendGoal_Response.__import_type_support__()


class NavigateThroughPoses_SendGoal(metaclass=Metaclass_NavigateThroughPoses_SendGoal):
    from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_SendGoal_Request as Request
    from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateThroughPoses_GetResult_Request(type):
    """Metaclass of message 'NavigateThroughPoses_GetResult_Request'."""

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
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_through_poses__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_through_poses__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_through_poses__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_through_poses__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_through_poses__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateThroughPoses_GetResult_Request(metaclass=Metaclass_NavigateThroughPoses_GetResult_Request):
    """Message class 'NavigateThroughPoses_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateThroughPoses_GetResult_Response(type):
    """Metaclass of message 'NavigateThroughPoses_GetResult_Response'."""

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
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_through_poses__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_through_poses__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_through_poses__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_through_poses__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_through_poses__get_result__response

            from behavior_msgs.action import NavigateThroughPoses
            if NavigateThroughPoses.Result.__class__._TYPE_SUPPORT is None:
                NavigateThroughPoses.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateThroughPoses_GetResult_Response(metaclass=Metaclass_NavigateThroughPoses_GetResult_Response):
    """Message class 'NavigateThroughPoses_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'behavior_msgs/NavigateThroughPoses_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_msgs', 'action'], 'NavigateThroughPoses_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_Result
        self.result = kwargs.get('result', NavigateThroughPoses_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_Result
            assert \
                isinstance(value, NavigateThroughPoses_Result), \
                "The 'result' field must be a sub message of type 'NavigateThroughPoses_Result'"
        self._result = value


class Metaclass_NavigateThroughPoses_GetResult(type):
    """Metaclass of service 'NavigateThroughPoses_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__navigate_through_poses__get_result

            from behavior_msgs.action import _navigate_through_poses
            if _navigate_through_poses.Metaclass_NavigateThroughPoses_GetResult_Request._TYPE_SUPPORT is None:
                _navigate_through_poses.Metaclass_NavigateThroughPoses_GetResult_Request.__import_type_support__()
            if _navigate_through_poses.Metaclass_NavigateThroughPoses_GetResult_Response._TYPE_SUPPORT is None:
                _navigate_through_poses.Metaclass_NavigateThroughPoses_GetResult_Response.__import_type_support__()


class NavigateThroughPoses_GetResult(metaclass=Metaclass_NavigateThroughPoses_GetResult):
    from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_GetResult_Request as Request
    from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavigateThroughPoses_FeedbackMessage(type):
    """Metaclass of message 'NavigateThroughPoses_FeedbackMessage'."""

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
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate_through_poses__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate_through_poses__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate_through_poses__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate_through_poses__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate_through_poses__feedback_message

            from behavior_msgs.action import NavigateThroughPoses
            if NavigateThroughPoses.Feedback.__class__._TYPE_SUPPORT is None:
                NavigateThroughPoses.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigateThroughPoses_FeedbackMessage(metaclass=Metaclass_NavigateThroughPoses_FeedbackMessage):
    """Message class 'NavigateThroughPoses_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'behavior_msgs/NavigateThroughPoses_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_msgs', 'action'], 'NavigateThroughPoses_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_Feedback
        self.feedback = kwargs.get('feedback', NavigateThroughPoses_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_Feedback
            assert \
                isinstance(value, NavigateThroughPoses_Feedback), \
                "The 'feedback' field must be a sub message of type 'NavigateThroughPoses_Feedback'"
        self._feedback = value


class Metaclass_NavigateThroughPoses(type):
    """Metaclass of action 'NavigateThroughPoses'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('behavior_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'behavior_msgs.action.NavigateThroughPoses')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__navigate_through_poses

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from behavior_msgs.action import _navigate_through_poses
            if _navigate_through_poses.Metaclass_NavigateThroughPoses_SendGoal._TYPE_SUPPORT is None:
                _navigate_through_poses.Metaclass_NavigateThroughPoses_SendGoal.__import_type_support__()
            if _navigate_through_poses.Metaclass_NavigateThroughPoses_GetResult._TYPE_SUPPORT is None:
                _navigate_through_poses.Metaclass_NavigateThroughPoses_GetResult.__import_type_support__()
            if _navigate_through_poses.Metaclass_NavigateThroughPoses_FeedbackMessage._TYPE_SUPPORT is None:
                _navigate_through_poses.Metaclass_NavigateThroughPoses_FeedbackMessage.__import_type_support__()


class NavigateThroughPoses(metaclass=Metaclass_NavigateThroughPoses):

    # The goal message defined in the action definition.
    from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_Goal as Goal
    # The result message defined in the action definition.
    from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_Result as Result
    # The feedback message defined in the action definition.
    from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from behavior_msgs.action._navigate_through_poses import NavigateThroughPoses_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
