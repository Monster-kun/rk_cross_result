# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:msg/PlanningEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningEvent(type):
    """Metaclass of message 'PlanningEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STARTED': 0,
        'SUCCEEDED': 1,
        'FAILED': 2,
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
                'web_navigation_msgs.msg.PlanningEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_event

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from planning_msgs.msg import GlobalPath
            if GlobalPath.__class__._TYPE_SUPPORT is None:
                GlobalPath.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STARTED': cls.__constants['STARTED'],
            'SUCCEEDED': cls.__constants['SUCCEEDED'],
            'FAILED': cls.__constants['FAILED'],
        }

    @property
    def STARTED(self):
        """Message constant 'STARTED'."""
        return Metaclass_PlanningEvent.__constants['STARTED']

    @property
    def SUCCEEDED(self):
        """Message constant 'SUCCEEDED'."""
        return Metaclass_PlanningEvent.__constants['SUCCEEDED']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_PlanningEvent.__constants['FAILED']


class PlanningEvent(metaclass=Metaclass_PlanningEvent):
    """
    Message class 'PlanningEvent'.

    Constants:
      STARTED
      SUCCEEDED
      FAILED
    """

    __slots__ = [
        '_header',
        '_task_id',
        '_ros_goal_uuid',
        '_map_version',
        '_planning_attempt_id',
        '_status',
        '_path_revision',
        '_effective_endpoint',
        '_error_code',
        '_error_message',
        '_path',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'task_id': 'string',
        'ros_goal_uuid': 'string',
        'map_version': 'string',
        'planning_attempt_id': 'string',
        'status': 'uint8',
        'path_revision': 'uint32',
        'effective_endpoint': 'geometry_msgs/Pose',
        'error_code': 'string',
        'error_message': 'string',
        'path': 'planning_msgs/GlobalPath',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['planning_msgs', 'msg'], 'GlobalPath'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.task_id = kwargs.get('task_id', str())
        self.ros_goal_uuid = kwargs.get('ros_goal_uuid', str())
        self.map_version = kwargs.get('map_version', str())
        self.planning_attempt_id = kwargs.get('planning_attempt_id', str())
        self.status = kwargs.get('status', int())
        self.path_revision = kwargs.get('path_revision', int())
        from geometry_msgs.msg import Pose
        self.effective_endpoint = kwargs.get('effective_endpoint', Pose())
        self.error_code = kwargs.get('error_code', str())
        self.error_message = kwargs.get('error_message', str())
        from planning_msgs.msg import GlobalPath
        self.path = kwargs.get('path', GlobalPath())

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
        if self.task_id != other.task_id:
            return False
        if self.ros_goal_uuid != other.ros_goal_uuid:
            return False
        if self.map_version != other.map_version:
            return False
        if self.planning_attempt_id != other.planning_attempt_id:
            return False
        if self.status != other.status:
            return False
        if self.path_revision != other.path_revision:
            return False
        if self.effective_endpoint != other.effective_endpoint:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_message != other.error_message:
            return False
        if self.path != other.path:
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
    def path_revision(self):
        """Message field 'path_revision'."""
        return self._path_revision

    @path_revision.setter
    def path_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_revision' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'path_revision' field must be an unsigned integer in [0, 4294967295]"
        self._path_revision = value

    @builtins.property
    def effective_endpoint(self):
        """Message field 'effective_endpoint'."""
        return self._effective_endpoint

    @effective_endpoint.setter
    def effective_endpoint(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'effective_endpoint' field must be a sub message of type 'Pose'"
        self._effective_endpoint = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_code' field must be of type 'str'"
        self._error_code = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value

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
