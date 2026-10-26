# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:srv/GetTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetTask_Request(type):
    """Metaclass of message 'GetTask_Request'."""

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
                'web_navigation_msgs.srv.GetTask_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_task__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_task__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_task__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_task__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_task__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetTask_Request(metaclass=Metaclass_GetTask_Request):
    """Message class 'GetTask_Request'."""

    __slots__ = [
        '_task_id',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', str())

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
        if self.task_id != other.task_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetTask_Response(type):
    """Metaclass of message 'GetTask_Response'."""

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
                'web_navigation_msgs.srv.GetTask_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_task__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_task__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_task__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_task__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_task__response

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetTask_Response(metaclass=Metaclass_GetTask_Response):
    """Message class 'GetTask_Response'."""

    __slots__ = [
        '_found',
        '_task_id',
        '_request_id',
        '_ros_goal_uuid',
        '_map_version',
        '_frame_id',
        '_status',
        '_requested_x',
        '_requested_y',
        '_effective_endpoint',
        '_device_label',
        '_error_code',
        '_error_message',
        '_updated_at',
    ]

    _fields_and_field_types = {
        'found': 'boolean',
        'task_id': 'string',
        'request_id': 'string',
        'ros_goal_uuid': 'string',
        'map_version': 'string',
        'frame_id': 'string',
        'status': 'uint8',
        'requested_x': 'double',
        'requested_y': 'double',
        'effective_endpoint': 'geometry_msgs/Pose',
        'device_label': 'string',
        'error_code': 'string',
        'error_message': 'string',
        'updated_at': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.found = kwargs.get('found', bool())
        self.task_id = kwargs.get('task_id', str())
        self.request_id = kwargs.get('request_id', str())
        self.ros_goal_uuid = kwargs.get('ros_goal_uuid', str())
        self.map_version = kwargs.get('map_version', str())
        self.frame_id = kwargs.get('frame_id', str())
        self.status = kwargs.get('status', int())
        self.requested_x = kwargs.get('requested_x', float())
        self.requested_y = kwargs.get('requested_y', float())
        from geometry_msgs.msg import Pose
        self.effective_endpoint = kwargs.get('effective_endpoint', Pose())
        self.device_label = kwargs.get('device_label', str())
        self.error_code = kwargs.get('error_code', str())
        self.error_message = kwargs.get('error_message', str())
        self.updated_at = kwargs.get('updated_at', int())

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
        if self.found != other.found:
            return False
        if self.task_id != other.task_id:
            return False
        if self.request_id != other.request_id:
            return False
        if self.ros_goal_uuid != other.ros_goal_uuid:
            return False
        if self.map_version != other.map_version:
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.status != other.status:
            return False
        if self.requested_x != other.requested_x:
            return False
        if self.requested_y != other.requested_y:
            return False
        if self.effective_endpoint != other.effective_endpoint:
            return False
        if self.device_label != other.device_label:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_message != other.error_message:
            return False
        if self.updated_at != other.updated_at:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def found(self):
        """Message field 'found'."""
        return self._found

    @found.setter
    def found(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'found' field must be of type 'bool'"
        self._found = value

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
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frame_id' field must be of type 'str'"
        self._frame_id = value

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
    def requested_x(self):
        """Message field 'requested_x'."""
        return self._requested_x

    @requested_x.setter
    def requested_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'requested_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'requested_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._requested_x = value

    @builtins.property
    def requested_y(self):
        """Message field 'requested_y'."""
        return self._requested_y

    @requested_y.setter
    def requested_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'requested_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'requested_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._requested_y = value

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
    def device_label(self):
        """Message field 'device_label'."""
        return self._device_label

    @device_label.setter
    def device_label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device_label' field must be of type 'str'"
        self._device_label = value

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
    def updated_at(self):
        """Message field 'updated_at'."""
        return self._updated_at

    @updated_at.setter
    def updated_at(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'updated_at' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'updated_at' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._updated_at = value


class Metaclass_GetTask(type):
    """Metaclass of service 'GetTask'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('web_navigation_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'web_navigation_msgs.srv.GetTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_task

            from web_navigation_msgs.srv import _get_task
            if _get_task.Metaclass_GetTask_Request._TYPE_SUPPORT is None:
                _get_task.Metaclass_GetTask_Request.__import_type_support__()
            if _get_task.Metaclass_GetTask_Response._TYPE_SUPPORT is None:
                _get_task.Metaclass_GetTask_Response.__import_type_support__()


class GetTask(metaclass=Metaclass_GetTask):
    from web_navigation_msgs.srv._get_task import GetTask_Request as Request
    from web_navigation_msgs.srv._get_task import GetTask_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
