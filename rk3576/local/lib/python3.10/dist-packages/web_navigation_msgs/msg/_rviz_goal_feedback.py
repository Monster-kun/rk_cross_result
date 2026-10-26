# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:msg/RvizGoalFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RvizGoalFeedback(type):
    """Metaclass of message 'RvizGoalFeedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STAGED': 0,
        'ACCEPTED': 1,
        'REJECTED': 2,
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
                'web_navigation_msgs.msg.RvizGoalFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rviz_goal_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rviz_goal_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rviz_goal_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rviz_goal_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rviz_goal_feedback

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STAGED': cls.__constants['STAGED'],
            'ACCEPTED': cls.__constants['ACCEPTED'],
            'REJECTED': cls.__constants['REJECTED'],
        }

    @property
    def STAGED(self):
        """Message constant 'STAGED'."""
        return Metaclass_RvizGoalFeedback.__constants['STAGED']

    @property
    def ACCEPTED(self):
        """Message constant 'ACCEPTED'."""
        return Metaclass_RvizGoalFeedback.__constants['ACCEPTED']

    @property
    def REJECTED(self):
        """Message constant 'REJECTED'."""
        return Metaclass_RvizGoalFeedback.__constants['REJECTED']


class RvizGoalFeedback(metaclass=Metaclass_RvizGoalFeedback):
    """
    Message class 'RvizGoalFeedback'.

    Constants:
      STAGED
      ACCEPTED
      REJECTED
    """

    __slots__ = [
        '_header',
        '_manager_boot_id',
        '_status',
        '_request_id',
        '_task_id',
        '_code',
        '_message',
        '_staged_waypoints',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'manager_boot_id': 'string',
        'status': 'uint8',
        'request_id': 'string',
        'task_id': 'string',
        'code': 'string',
        'message': 'string',
        'staged_waypoints': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.manager_boot_id = kwargs.get('manager_boot_id', str())
        self.status = kwargs.get('status', int())
        self.request_id = kwargs.get('request_id', str())
        self.task_id = kwargs.get('task_id', str())
        self.code = kwargs.get('code', str())
        self.message = kwargs.get('message', str())
        self.staged_waypoints = kwargs.get('staged_waypoints', int())

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
        if self.manager_boot_id != other.manager_boot_id:
            return False
        if self.status != other.status:
            return False
        if self.request_id != other.request_id:
            return False
        if self.task_id != other.task_id:
            return False
        if self.code != other.code:
            return False
        if self.message != other.message:
            return False
        if self.staged_waypoints != other.staged_waypoints:
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
    def manager_boot_id(self):
        """Message field 'manager_boot_id'."""
        return self._manager_boot_id

    @manager_boot_id.setter
    def manager_boot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'manager_boot_id' field must be of type 'str'"
        self._manager_boot_id = value

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
    def request_id(self):
        """Message field 'request_id'."""
        return self._request_id

    @request_id.setter
    def request_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'request_id' field must be of type 'str'"
        self._request_id = value

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
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'code' field must be of type 'str'"
        self._code = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def staged_waypoints(self):
        """Message field 'staged_waypoints'."""
        return self._staged_waypoints

    @staged_waypoints.setter
    def staged_waypoints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'staged_waypoints' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'staged_waypoints' field must be an unsigned integer in [0, 4294967295]"
        self._staged_waypoints = value
