# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_msgs:action/ComputePathToPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputePathToPose_Goal(type):
    """Metaclass of message 'ComputePathToPose_Goal'."""

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
                'behavior_msgs.action.ComputePathToPose_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_to_pose__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_to_pose__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_to_pose__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_to_pose__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_to_pose__goal

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


class ComputePathToPose_Goal(metaclass=Metaclass_ComputePathToPose_Goal):
    """Message class 'ComputePathToPose_Goal'."""

    __slots__ = [
        '_goal',
        '_start',
        '_use_start',
        '_defer_publication',
        '_through_goals',
        '_loop_goals',
        '_global_planner_id',
        '_task_id',
        '_ros_goal_uuid',
        '_map_version',
        '_planning_attempt_id',
    ]

    _fields_and_field_types = {
        'goal': 'geometry_msgs/PoseStamped',
        'start': 'geometry_msgs/PoseStamped',
        'use_start': 'boolean',
        'defer_publication': 'boolean',
        'through_goals': 'sequence<geometry_msgs/PoseStamped>',
        'loop_goals': 'boolean',
        'global_planner_id': 'string',
        'task_id': 'string',
        'ros_goal_uuid': 'string',
        'map_version': 'string',
        'planning_attempt_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.goal = kwargs.get('goal', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.start = kwargs.get('start', PoseStamped())
        self.use_start = kwargs.get('use_start', bool())
        self.defer_publication = kwargs.get('defer_publication', bool())
        self.through_goals = kwargs.get('through_goals', [])
        self.loop_goals = kwargs.get('loop_goals', bool())
        self.global_planner_id = kwargs.get('global_planner_id', str())
        self.task_id = kwargs.get('task_id', str())
        self.ros_goal_uuid = kwargs.get('ros_goal_uuid', str())
        self.map_version = kwargs.get('map_version', str())
        self.planning_attempt_id = kwargs.get('planning_attempt_id', str())

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
        if self.goal != other.goal:
            return False
        if self.start != other.start:
            return False
        if self.use_start != other.use_start:
            return False
        if self.defer_publication != other.defer_publication:
            return False
        if self.through_goals != other.through_goals:
            return False
        if self.loop_goals != other.loop_goals:
            return False
        if self.global_planner_id != other.global_planner_id:
            return False
        if self.task_id != other.task_id:
            return False
        if self.ros_goal_uuid != other.ros_goal_uuid:
            return False
        if self.map_version != other.map_version:
            return False
        if self.planning_attempt_id != other.planning_attempt_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'goal' field must be a sub message of type 'PoseStamped'"
        self._goal = value

    @builtins.property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'start' field must be a sub message of type 'PoseStamped'"
        self._start = value

    @builtins.property
    def use_start(self):
        """Message field 'use_start'."""
        return self._use_start

    @use_start.setter
    def use_start(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_start' field must be of type 'bool'"
        self._use_start = value

    @builtins.property
    def defer_publication(self):
        """Message field 'defer_publication'."""
        return self._defer_publication

    @defer_publication.setter
    def defer_publication(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'defer_publication' field must be of type 'bool'"
        self._defer_publication = value

    @builtins.property
    def through_goals(self):
        """Message field 'through_goals'."""
        return self._through_goals

    @through_goals.setter
    def through_goals(self, value):
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
                "The 'through_goals' field must be a set or sequence and each value of type 'PoseStamped'"
        self._through_goals = value

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

    @builtins.property
    def global_planner_id(self):
        """Message field 'global_planner_id'."""
        return self._global_planner_id

    @global_planner_id.setter
    def global_planner_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'global_planner_id' field must be of type 'str'"
        self._global_planner_id = value

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
    def planning_attempt_id(self):
        """Message field 'planning_attempt_id'."""
        return self._planning_attempt_id

    @planning_attempt_id.setter
    def planning_attempt_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planning_attempt_id' field must be of type 'str'"
        self._planning_attempt_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathToPose_Result(type):
    """Metaclass of message 'ComputePathToPose_Result'."""

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
                'behavior_msgs.action.ComputePathToPose_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_to_pose__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_to_pose__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_to_pose__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_to_pose__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_to_pose__result

            from planning_msgs.msg import GlobalPath
            if GlobalPath.__class__._TYPE_SUPPORT is None:
                GlobalPath.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathToPose_Result(metaclass=Metaclass_ComputePathToPose_Result):
    """Message class 'ComputePathToPose_Result'."""

    __slots__ = [
        '_path',
        '_error_code',
        '_error_msg',
    ]

    _fields_and_field_types = {
        'path': 'planning_msgs/GlobalPath',
        'error_code': 'uint16',
        'error_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['planning_msgs', 'msg'], 'GlobalPath'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from planning_msgs.msg import GlobalPath
        self.path = kwargs.get('path', GlobalPath())
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
        if self.path != other.path:
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
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from planning_msgs.msg import GlobalPath
            assert \
                isinstance(value, GlobalPath), \
                "The 'path' field must be a sub message of type 'GlobalPath'"
        self._path = value

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
# import rosidl_parser.definition


class Metaclass_ComputePathToPose_Feedback(type):
    """Metaclass of message 'ComputePathToPose_Feedback'."""

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
                'behavior_msgs.action.ComputePathToPose_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_to_pose__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_to_pose__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_to_pose__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_to_pose__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_to_pose__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathToPose_Feedback(metaclass=Metaclass_ComputePathToPose_Feedback):
    """Message class 'ComputePathToPose_Feedback'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathToPose_SendGoal_Request(type):
    """Metaclass of message 'ComputePathToPose_SendGoal_Request'."""

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
                'behavior_msgs.action.ComputePathToPose_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_to_pose__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_to_pose__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_to_pose__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_to_pose__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_to_pose__send_goal__request

            from behavior_msgs.action import ComputePathToPose
            if ComputePathToPose.Goal.__class__._TYPE_SUPPORT is None:
                ComputePathToPose.Goal.__class__.__import_type_support__()

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


class ComputePathToPose_SendGoal_Request(metaclass=Metaclass_ComputePathToPose_SendGoal_Request):
    """Message class 'ComputePathToPose_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'behavior_msgs/ComputePathToPose_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_msgs', 'action'], 'ComputePathToPose_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_Goal
        self.goal = kwargs.get('goal', ComputePathToPose_Goal())

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
            from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_Goal
            assert \
                isinstance(value, ComputePathToPose_Goal), \
                "The 'goal' field must be a sub message of type 'ComputePathToPose_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathToPose_SendGoal_Response(type):
    """Metaclass of message 'ComputePathToPose_SendGoal_Response'."""

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
                'behavior_msgs.action.ComputePathToPose_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_to_pose__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_to_pose__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_to_pose__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_to_pose__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_to_pose__send_goal__response

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


class ComputePathToPose_SendGoal_Response(metaclass=Metaclass_ComputePathToPose_SendGoal_Response):
    """Message class 'ComputePathToPose_SendGoal_Response'."""

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


class Metaclass_ComputePathToPose_SendGoal(type):
    """Metaclass of service 'ComputePathToPose_SendGoal'."""

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
                'behavior_msgs.action.ComputePathToPose_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__compute_path_to_pose__send_goal

            from behavior_msgs.action import _compute_path_to_pose
            if _compute_path_to_pose.Metaclass_ComputePathToPose_SendGoal_Request._TYPE_SUPPORT is None:
                _compute_path_to_pose.Metaclass_ComputePathToPose_SendGoal_Request.__import_type_support__()
            if _compute_path_to_pose.Metaclass_ComputePathToPose_SendGoal_Response._TYPE_SUPPORT is None:
                _compute_path_to_pose.Metaclass_ComputePathToPose_SendGoal_Response.__import_type_support__()


class ComputePathToPose_SendGoal(metaclass=Metaclass_ComputePathToPose_SendGoal):
    from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_SendGoal_Request as Request
    from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathToPose_GetResult_Request(type):
    """Metaclass of message 'ComputePathToPose_GetResult_Request'."""

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
                'behavior_msgs.action.ComputePathToPose_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_to_pose__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_to_pose__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_to_pose__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_to_pose__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_to_pose__get_result__request

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


class ComputePathToPose_GetResult_Request(metaclass=Metaclass_ComputePathToPose_GetResult_Request):
    """Message class 'ComputePathToPose_GetResult_Request'."""

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


class Metaclass_ComputePathToPose_GetResult_Response(type):
    """Metaclass of message 'ComputePathToPose_GetResult_Response'."""

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
                'behavior_msgs.action.ComputePathToPose_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_to_pose__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_to_pose__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_to_pose__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_to_pose__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_to_pose__get_result__response

            from behavior_msgs.action import ComputePathToPose
            if ComputePathToPose.Result.__class__._TYPE_SUPPORT is None:
                ComputePathToPose.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathToPose_GetResult_Response(metaclass=Metaclass_ComputePathToPose_GetResult_Response):
    """Message class 'ComputePathToPose_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'behavior_msgs/ComputePathToPose_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_msgs', 'action'], 'ComputePathToPose_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_Result
        self.result = kwargs.get('result', ComputePathToPose_Result())

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
            from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_Result
            assert \
                isinstance(value, ComputePathToPose_Result), \
                "The 'result' field must be a sub message of type 'ComputePathToPose_Result'"
        self._result = value


class Metaclass_ComputePathToPose_GetResult(type):
    """Metaclass of service 'ComputePathToPose_GetResult'."""

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
                'behavior_msgs.action.ComputePathToPose_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__compute_path_to_pose__get_result

            from behavior_msgs.action import _compute_path_to_pose
            if _compute_path_to_pose.Metaclass_ComputePathToPose_GetResult_Request._TYPE_SUPPORT is None:
                _compute_path_to_pose.Metaclass_ComputePathToPose_GetResult_Request.__import_type_support__()
            if _compute_path_to_pose.Metaclass_ComputePathToPose_GetResult_Response._TYPE_SUPPORT is None:
                _compute_path_to_pose.Metaclass_ComputePathToPose_GetResult_Response.__import_type_support__()


class ComputePathToPose_GetResult(metaclass=Metaclass_ComputePathToPose_GetResult):
    from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_GetResult_Request as Request
    from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathToPose_FeedbackMessage(type):
    """Metaclass of message 'ComputePathToPose_FeedbackMessage'."""

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
                'behavior_msgs.action.ComputePathToPose_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_to_pose__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_to_pose__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_to_pose__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_to_pose__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_to_pose__feedback_message

            from behavior_msgs.action import ComputePathToPose
            if ComputePathToPose.Feedback.__class__._TYPE_SUPPORT is None:
                ComputePathToPose.Feedback.__class__.__import_type_support__()

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


class ComputePathToPose_FeedbackMessage(metaclass=Metaclass_ComputePathToPose_FeedbackMessage):
    """Message class 'ComputePathToPose_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'behavior_msgs/ComputePathToPose_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_msgs', 'action'], 'ComputePathToPose_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_Feedback
        self.feedback = kwargs.get('feedback', ComputePathToPose_Feedback())

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
            from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_Feedback
            assert \
                isinstance(value, ComputePathToPose_Feedback), \
                "The 'feedback' field must be a sub message of type 'ComputePathToPose_Feedback'"
        self._feedback = value


class Metaclass_ComputePathToPose(type):
    """Metaclass of action 'ComputePathToPose'."""

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
                'behavior_msgs.action.ComputePathToPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__compute_path_to_pose

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from behavior_msgs.action import _compute_path_to_pose
            if _compute_path_to_pose.Metaclass_ComputePathToPose_SendGoal._TYPE_SUPPORT is None:
                _compute_path_to_pose.Metaclass_ComputePathToPose_SendGoal.__import_type_support__()
            if _compute_path_to_pose.Metaclass_ComputePathToPose_GetResult._TYPE_SUPPORT is None:
                _compute_path_to_pose.Metaclass_ComputePathToPose_GetResult.__import_type_support__()
            if _compute_path_to_pose.Metaclass_ComputePathToPose_FeedbackMessage._TYPE_SUPPORT is None:
                _compute_path_to_pose.Metaclass_ComputePathToPose_FeedbackMessage.__import_type_support__()


class ComputePathToPose(metaclass=Metaclass_ComputePathToPose):

    # The goal message defined in the action definition.
    from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_Goal as Goal
    # The result message defined in the action definition.
    from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_Result as Result
    # The feedback message defined in the action definition.
    from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from behavior_msgs.action._compute_path_to_pose import ComputePathToPose_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
