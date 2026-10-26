# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:srv/SubmitGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SubmitGoal_Request(type):
    """Metaclass of message 'SubmitGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUBMIT': 0,
        'REPLACE': 1,
        'CONTINUE': 2,
        'RETRY': 3,
        'SKIP': 4,
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
                'web_navigation_msgs.srv.SubmitGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__submit_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__submit_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__submit_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__submit_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__submit_goal__request

            from web_navigation_msgs.msg import SequenceWaypoint
            if SequenceWaypoint.__class__._TYPE_SUPPORT is None:
                SequenceWaypoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUBMIT': cls.__constants['SUBMIT'],
            'REPLACE': cls.__constants['REPLACE'],
            'CONTINUE': cls.__constants['CONTINUE'],
            'RETRY': cls.__constants['RETRY'],
            'SKIP': cls.__constants['SKIP'],
        }

    @property
    def SUBMIT(self):
        """Message constant 'SUBMIT'."""
        return Metaclass_SubmitGoal_Request.__constants['SUBMIT']

    @property
    def REPLACE(self):
        """Message constant 'REPLACE'."""
        return Metaclass_SubmitGoal_Request.__constants['REPLACE']

    @property
    def CONTINUE(self):
        """Message constant 'CONTINUE'."""
        return Metaclass_SubmitGoal_Request.__constants['CONTINUE']

    @property
    def RETRY(self):
        """Message constant 'RETRY'."""
        return Metaclass_SubmitGoal_Request.__constants['RETRY']

    @property
    def SKIP(self):
        """Message constant 'SKIP'."""
        return Metaclass_SubmitGoal_Request.__constants['SKIP']


class SubmitGoal_Request(metaclass=Metaclass_SubmitGoal_Request):
    """
    Message class 'SubmitGoal_Request'.

    Constants:
      SUBMIT
      REPLACE
      CONTINUE
      RETRY
      SKIP
    """

    __slots__ = [
        '_operation',
        '_request_id',
        '_session_id',
        '_device_label',
        '_manager_boot_id',
        '_lease_token',
        '_control_epoch',
        '_map_version',
        '_frame_id',
        '_x',
        '_y',
        '_selected_layer_id',
        '_expected_active_task_id',
        '_expected_state_revision',
        '_sequence',
    ]

    _fields_and_field_types = {
        'operation': 'uint8',
        'request_id': 'string',
        'session_id': 'string',
        'device_label': 'string',
        'manager_boot_id': 'string',
        'lease_token': 'string',
        'control_epoch': 'uint64',
        'map_version': 'string',
        'frame_id': 'string',
        'x': 'double',
        'y': 'double',
        'selected_layer_id': 'string',
        'expected_active_task_id': 'string',
        'expected_state_revision': 'uint64',
        'sequence': 'sequence<web_navigation_msgs/SequenceWaypoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['web_navigation_msgs', 'msg'], 'SequenceWaypoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.operation = kwargs.get('operation', int())
        self.request_id = kwargs.get('request_id', str())
        self.session_id = kwargs.get('session_id', str())
        self.device_label = kwargs.get('device_label', str())
        self.manager_boot_id = kwargs.get('manager_boot_id', str())
        self.lease_token = kwargs.get('lease_token', str())
        self.control_epoch = kwargs.get('control_epoch', int())
        self.map_version = kwargs.get('map_version', str())
        self.frame_id = kwargs.get('frame_id', str())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.selected_layer_id = kwargs.get('selected_layer_id', str())
        self.expected_active_task_id = kwargs.get('expected_active_task_id', str())
        self.expected_state_revision = kwargs.get('expected_state_revision', int())
        self.sequence = kwargs.get('sequence', [])

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
        if self.operation != other.operation:
            return False
        if self.request_id != other.request_id:
            return False
        if self.session_id != other.session_id:
            return False
        if self.device_label != other.device_label:
            return False
        if self.manager_boot_id != other.manager_boot_id:
            return False
        if self.lease_token != other.lease_token:
            return False
        if self.control_epoch != other.control_epoch:
            return False
        if self.map_version != other.map_version:
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.selected_layer_id != other.selected_layer_id:
            return False
        if self.expected_active_task_id != other.expected_active_task_id:
            return False
        if self.expected_state_revision != other.expected_state_revision:
            return False
        if self.sequence != other.sequence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def operation(self):
        """Message field 'operation'."""
        return self._operation

    @operation.setter
    def operation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'operation' field must be an unsigned integer in [0, 255]"
        self._operation = value

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
    def session_id(self):
        """Message field 'session_id'."""
        return self._session_id

    @session_id.setter
    def session_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'session_id' field must be of type 'str'"
        self._session_id = value

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
    def lease_token(self):
        """Message field 'lease_token'."""
        return self._lease_token

    @lease_token.setter
    def lease_token(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lease_token' field must be of type 'str'"
        self._lease_token = value

    @builtins.property
    def control_epoch(self):
        """Message field 'control_epoch'."""
        return self._control_epoch

    @control_epoch.setter
    def control_epoch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_epoch' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'control_epoch' field must be an unsigned integer in [0, 18446744073709551615]"
        self._control_epoch = value

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
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def selected_layer_id(self):
        """Message field 'selected_layer_id'."""
        return self._selected_layer_id

    @selected_layer_id.setter
    def selected_layer_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'selected_layer_id' field must be of type 'str'"
        self._selected_layer_id = value

    @builtins.property
    def expected_active_task_id(self):
        """Message field 'expected_active_task_id'."""
        return self._expected_active_task_id

    @expected_active_task_id.setter
    def expected_active_task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'expected_active_task_id' field must be of type 'str'"
        self._expected_active_task_id = value

    @builtins.property
    def expected_state_revision(self):
        """Message field 'expected_state_revision'."""
        return self._expected_state_revision

    @expected_state_revision.setter
    def expected_state_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'expected_state_revision' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'expected_state_revision' field must be an unsigned integer in [0, 18446744073709551615]"
        self._expected_state_revision = value

    @builtins.property
    def sequence(self):
        """Message field 'sequence'."""
        return self._sequence

    @sequence.setter
    def sequence(self, value):
        if __debug__:
            from web_navigation_msgs.msg import SequenceWaypoint
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
                 all(isinstance(v, SequenceWaypoint) for v in value) and
                 True), \
                "The 'sequence' field must be a set or sequence and each value of type 'SequenceWaypoint'"
        self._sequence = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SubmitGoal_Response(type):
    """Metaclass of message 'SubmitGoal_Response'."""

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
                'web_navigation_msgs.srv.SubmitGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__submit_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__submit_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__submit_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__submit_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__submit_goal__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SubmitGoal_Response(metaclass=Metaclass_SubmitGoal_Response):
    """Message class 'SubmitGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_code',
        '_message',
        '_request_id',
        '_task_id',
        '_task_status',
        '_state_revision',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'code': 'string',
        'message': 'string',
        'request_id': 'string',
        'task_id': 'string',
        'task_status': 'uint8',
        'state_revision': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        self.code = kwargs.get('code', str())
        self.message = kwargs.get('message', str())
        self.request_id = kwargs.get('request_id', str())
        self.task_id = kwargs.get('task_id', str())
        self.task_status = kwargs.get('task_status', int())
        self.state_revision = kwargs.get('state_revision', int())

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
        if self.code != other.code:
            return False
        if self.message != other.message:
            return False
        if self.request_id != other.request_id:
            return False
        if self.task_id != other.task_id:
            return False
        if self.task_status != other.task_status:
            return False
        if self.state_revision != other.state_revision:
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
    def task_status(self):
        """Message field 'task_status'."""
        return self._task_status

    @task_status.setter
    def task_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task_status' field must be an unsigned integer in [0, 255]"
        self._task_status = value

    @builtins.property
    def state_revision(self):
        """Message field 'state_revision'."""
        return self._state_revision

    @state_revision.setter
    def state_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_revision' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'state_revision' field must be an unsigned integer in [0, 18446744073709551615]"
        self._state_revision = value


class Metaclass_SubmitGoal(type):
    """Metaclass of service 'SubmitGoal'."""

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
                'web_navigation_msgs.srv.SubmitGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__submit_goal

            from web_navigation_msgs.srv import _submit_goal
            if _submit_goal.Metaclass_SubmitGoal_Request._TYPE_SUPPORT is None:
                _submit_goal.Metaclass_SubmitGoal_Request.__import_type_support__()
            if _submit_goal.Metaclass_SubmitGoal_Response._TYPE_SUPPORT is None:
                _submit_goal.Metaclass_SubmitGoal_Response.__import_type_support__()


class SubmitGoal(metaclass=Metaclass_SubmitGoal):
    from web_navigation_msgs.srv._submit_goal import SubmitGoal_Request as Request
    from web_navigation_msgs.srv._submit_goal import SubmitGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
