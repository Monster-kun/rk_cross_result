# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_msgs:action/FollowPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FollowPoint_Goal(type):
    """Metaclass of message 'FollowPoint_Goal'."""

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
                'behavior_msgs.action.FollowPoint_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_point__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_point__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_point__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_point__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_point__goal

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


class FollowPoint_Goal(metaclass=Metaclass_FollowPoint_Goal):
    """Message class 'FollowPoint_Goal'."""

    __slots__ = [
        '_goal',
        '_local_planner_id',
        '_plan_once',
        '_progress_checking_mode',
    ]

    _fields_and_field_types = {
        'goal': 'geometry_msgs/PoseStamped',
        'local_planner_id': 'string',
        'plan_once': 'boolean',
        'progress_checking_mode': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.goal = kwargs.get('goal', PoseStamped())
        self.local_planner_id = kwargs.get('local_planner_id', str())
        self.plan_once = kwargs.get('plan_once', bool())
        self.progress_checking_mode = kwargs.get('progress_checking_mode', str())

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
        if self.local_planner_id != other.local_planner_id:
            return False
        if self.plan_once != other.plan_once:
            return False
        if self.progress_checking_mode != other.progress_checking_mode:
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
    def local_planner_id(self):
        """Message field 'local_planner_id'."""
        return self._local_planner_id

    @local_planner_id.setter
    def local_planner_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'local_planner_id' field must be of type 'str'"
        self._local_planner_id = value

    @builtins.property
    def plan_once(self):
        """Message field 'plan_once'."""
        return self._plan_once

    @plan_once.setter
    def plan_once(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plan_once' field must be of type 'bool'"
        self._plan_once = value

    @builtins.property
    def progress_checking_mode(self):
        """Message field 'progress_checking_mode'."""
        return self._progress_checking_mode

    @progress_checking_mode.setter
    def progress_checking_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'progress_checking_mode' field must be of type 'str'"
        self._progress_checking_mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowPoint_Result(type):
    """Metaclass of message 'FollowPoint_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'UNKNOWN': 100,
        'INVALID_PLANNER': 101,
        'INVALID_PATH': 102,
        'PATIENCE_EXCEEDED': 103,
        'FAILED_TO_MAKE_PROGRESS': 104,
        'NO_VALID_PLAN': 105,
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
                'behavior_msgs.action.FollowPoint_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_point__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_point__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_point__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_point__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_point__result

            from std_msgs.msg import Empty
            if Empty.__class__._TYPE_SUPPORT is None:
                Empty.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'INVALID_PLANNER': cls.__constants['INVALID_PLANNER'],
            'INVALID_PATH': cls.__constants['INVALID_PATH'],
            'PATIENCE_EXCEEDED': cls.__constants['PATIENCE_EXCEEDED'],
            'FAILED_TO_MAKE_PROGRESS': cls.__constants['FAILED_TO_MAKE_PROGRESS'],
            'NO_VALID_PLAN': cls.__constants['NO_VALID_PLAN'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_FollowPoint_Result.__constants['NONE']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_FollowPoint_Result.__constants['UNKNOWN']

    @property
    def INVALID_PLANNER(self):
        """Message constant 'INVALID_PLANNER'."""
        return Metaclass_FollowPoint_Result.__constants['INVALID_PLANNER']

    @property
    def INVALID_PATH(self):
        """Message constant 'INVALID_PATH'."""
        return Metaclass_FollowPoint_Result.__constants['INVALID_PATH']

    @property
    def PATIENCE_EXCEEDED(self):
        """Message constant 'PATIENCE_EXCEEDED'."""
        return Metaclass_FollowPoint_Result.__constants['PATIENCE_EXCEEDED']

    @property
    def FAILED_TO_MAKE_PROGRESS(self):
        """Message constant 'FAILED_TO_MAKE_PROGRESS'."""
        return Metaclass_FollowPoint_Result.__constants['FAILED_TO_MAKE_PROGRESS']

    @property
    def NO_VALID_PLAN(self):
        """Message constant 'NO_VALID_PLAN'."""
        return Metaclass_FollowPoint_Result.__constants['NO_VALID_PLAN']


class FollowPoint_Result(metaclass=Metaclass_FollowPoint_Result):
    """
    Message class 'FollowPoint_Result'.

    Constants:
      NONE
      UNKNOWN
      INVALID_PLANNER
      INVALID_PATH
      PATIENCE_EXCEEDED
      FAILED_TO_MAKE_PROGRESS
      NO_VALID_PLAN
    """

    __slots__ = [
        '_result',
        '_error_code',
        '_error_msg',
    ]

    _fields_and_field_types = {
        'result': 'std_msgs/Empty',
        'error_code': 'uint16',
        'error_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Empty'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Empty
        self.result = kwargs.get('result', Empty())
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
        if self.result != other.result:
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
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from std_msgs.msg import Empty
            assert \
                isinstance(value, Empty), \
                "The 'result' field must be a sub message of type 'Empty'"
        self._result = value

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

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowPoint_Feedback(type):
    """Metaclass of message 'FollowPoint_Feedback'."""

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
                'behavior_msgs.action.FollowPoint_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_point__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_point__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_point__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_point__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_point__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowPoint_Feedback(metaclass=Metaclass_FollowPoint_Feedback):
    """Message class 'FollowPoint_Feedback'."""

    __slots__ = [
        '_distance_to_goal',
    ]

    _fields_and_field_types = {
        'distance_to_goal': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance_to_goal = kwargs.get('distance_to_goal', float())

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
        if self.distance_to_goal != other.distance_to_goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance_to_goal(self):
        """Message field 'distance_to_goal'."""
        return self._distance_to_goal

    @distance_to_goal.setter
    def distance_to_goal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_goal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_goal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowPoint_SendGoal_Request(type):
    """Metaclass of message 'FollowPoint_SendGoal_Request'."""

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
                'behavior_msgs.action.FollowPoint_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_point__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_point__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_point__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_point__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_point__send_goal__request

            from behavior_msgs.action import FollowPoint
            if FollowPoint.Goal.__class__._TYPE_SUPPORT is None:
                FollowPoint.Goal.__class__.__import_type_support__()

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


class FollowPoint_SendGoal_Request(metaclass=Metaclass_FollowPoint_SendGoal_Request):
    """Message class 'FollowPoint_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'behavior_msgs/FollowPoint_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_msgs', 'action'], 'FollowPoint_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from behavior_msgs.action._follow_point import FollowPoint_Goal
        self.goal = kwargs.get('goal', FollowPoint_Goal())

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
            from behavior_msgs.action._follow_point import FollowPoint_Goal
            assert \
                isinstance(value, FollowPoint_Goal), \
                "The 'goal' field must be a sub message of type 'FollowPoint_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowPoint_SendGoal_Response(type):
    """Metaclass of message 'FollowPoint_SendGoal_Response'."""

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
                'behavior_msgs.action.FollowPoint_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_point__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_point__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_point__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_point__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_point__send_goal__response

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


class FollowPoint_SendGoal_Response(metaclass=Metaclass_FollowPoint_SendGoal_Response):
    """Message class 'FollowPoint_SendGoal_Response'."""

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


class Metaclass_FollowPoint_SendGoal(type):
    """Metaclass of service 'FollowPoint_SendGoal'."""

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
                'behavior_msgs.action.FollowPoint_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__follow_point__send_goal

            from behavior_msgs.action import _follow_point
            if _follow_point.Metaclass_FollowPoint_SendGoal_Request._TYPE_SUPPORT is None:
                _follow_point.Metaclass_FollowPoint_SendGoal_Request.__import_type_support__()
            if _follow_point.Metaclass_FollowPoint_SendGoal_Response._TYPE_SUPPORT is None:
                _follow_point.Metaclass_FollowPoint_SendGoal_Response.__import_type_support__()


class FollowPoint_SendGoal(metaclass=Metaclass_FollowPoint_SendGoal):
    from behavior_msgs.action._follow_point import FollowPoint_SendGoal_Request as Request
    from behavior_msgs.action._follow_point import FollowPoint_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowPoint_GetResult_Request(type):
    """Metaclass of message 'FollowPoint_GetResult_Request'."""

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
                'behavior_msgs.action.FollowPoint_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_point__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_point__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_point__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_point__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_point__get_result__request

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


class FollowPoint_GetResult_Request(metaclass=Metaclass_FollowPoint_GetResult_Request):
    """Message class 'FollowPoint_GetResult_Request'."""

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


class Metaclass_FollowPoint_GetResult_Response(type):
    """Metaclass of message 'FollowPoint_GetResult_Response'."""

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
                'behavior_msgs.action.FollowPoint_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_point__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_point__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_point__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_point__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_point__get_result__response

            from behavior_msgs.action import FollowPoint
            if FollowPoint.Result.__class__._TYPE_SUPPORT is None:
                FollowPoint.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowPoint_GetResult_Response(metaclass=Metaclass_FollowPoint_GetResult_Response):
    """Message class 'FollowPoint_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'behavior_msgs/FollowPoint_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_msgs', 'action'], 'FollowPoint_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from behavior_msgs.action._follow_point import FollowPoint_Result
        self.result = kwargs.get('result', FollowPoint_Result())

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
            from behavior_msgs.action._follow_point import FollowPoint_Result
            assert \
                isinstance(value, FollowPoint_Result), \
                "The 'result' field must be a sub message of type 'FollowPoint_Result'"
        self._result = value


class Metaclass_FollowPoint_GetResult(type):
    """Metaclass of service 'FollowPoint_GetResult'."""

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
                'behavior_msgs.action.FollowPoint_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__follow_point__get_result

            from behavior_msgs.action import _follow_point
            if _follow_point.Metaclass_FollowPoint_GetResult_Request._TYPE_SUPPORT is None:
                _follow_point.Metaclass_FollowPoint_GetResult_Request.__import_type_support__()
            if _follow_point.Metaclass_FollowPoint_GetResult_Response._TYPE_SUPPORT is None:
                _follow_point.Metaclass_FollowPoint_GetResult_Response.__import_type_support__()


class FollowPoint_GetResult(metaclass=Metaclass_FollowPoint_GetResult):
    from behavior_msgs.action._follow_point import FollowPoint_GetResult_Request as Request
    from behavior_msgs.action._follow_point import FollowPoint_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FollowPoint_FeedbackMessage(type):
    """Metaclass of message 'FollowPoint_FeedbackMessage'."""

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
                'behavior_msgs.action.FollowPoint_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__follow_point__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__follow_point__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__follow_point__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__follow_point__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__follow_point__feedback_message

            from behavior_msgs.action import FollowPoint
            if FollowPoint.Feedback.__class__._TYPE_SUPPORT is None:
                FollowPoint.Feedback.__class__.__import_type_support__()

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


class FollowPoint_FeedbackMessage(metaclass=Metaclass_FollowPoint_FeedbackMessage):
    """Message class 'FollowPoint_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'behavior_msgs/FollowPoint_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['behavior_msgs', 'action'], 'FollowPoint_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from behavior_msgs.action._follow_point import FollowPoint_Feedback
        self.feedback = kwargs.get('feedback', FollowPoint_Feedback())

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
            from behavior_msgs.action._follow_point import FollowPoint_Feedback
            assert \
                isinstance(value, FollowPoint_Feedback), \
                "The 'feedback' field must be a sub message of type 'FollowPoint_Feedback'"
        self._feedback = value


class Metaclass_FollowPoint(type):
    """Metaclass of action 'FollowPoint'."""

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
                'behavior_msgs.action.FollowPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__follow_point

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from behavior_msgs.action import _follow_point
            if _follow_point.Metaclass_FollowPoint_SendGoal._TYPE_SUPPORT is None:
                _follow_point.Metaclass_FollowPoint_SendGoal.__import_type_support__()
            if _follow_point.Metaclass_FollowPoint_GetResult._TYPE_SUPPORT is None:
                _follow_point.Metaclass_FollowPoint_GetResult.__import_type_support__()
            if _follow_point.Metaclass_FollowPoint_FeedbackMessage._TYPE_SUPPORT is None:
                _follow_point.Metaclass_FollowPoint_FeedbackMessage.__import_type_support__()


class FollowPoint(metaclass=Metaclass_FollowPoint):

    # The goal message defined in the action definition.
    from behavior_msgs.action._follow_point import FollowPoint_Goal as Goal
    # The result message defined in the action definition.
    from behavior_msgs.action._follow_point import FollowPoint_Result as Result
    # The feedback message defined in the action definition.
    from behavior_msgs.action._follow_point import FollowPoint_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from behavior_msgs.action._follow_point import FollowPoint_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from behavior_msgs.action._follow_point import FollowPoint_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from behavior_msgs.action._follow_point import FollowPoint_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
