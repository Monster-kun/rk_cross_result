# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:msg/NavigationState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigationState(type):
    """Metaclass of message 'NavigationState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'IDLE': 0,
        'ACCEPTED': 1,
        'PLANNING': 2,
        'EXECUTING': 3,
        'CANCELING': 4,
        'SUCCEEDED': 5,
        'FAILED': 6,
        'CANCELED': 7,
        'REJECTED': 8,
        'CANCEL_FAILED': 9,
        'UNKNOWN': 10,
        'STOPPING': 11,
        'WAITING': 12,
        'PAUSED': 13,
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
                'web_navigation_msgs.msg.NavigationState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigation_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigation_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigation_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigation_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigation_state

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from planning_msgs.msg import GlobalPath
            if GlobalPath.__class__._TYPE_SUPPORT is None:
                GlobalPath.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from web_navigation_msgs.msg import SequenceWaypoint
            if SequenceWaypoint.__class__._TYPE_SUPPORT is None:
                SequenceWaypoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'IDLE': cls.__constants['IDLE'],
            'ACCEPTED': cls.__constants['ACCEPTED'],
            'PLANNING': cls.__constants['PLANNING'],
            'EXECUTING': cls.__constants['EXECUTING'],
            'CANCELING': cls.__constants['CANCELING'],
            'SUCCEEDED': cls.__constants['SUCCEEDED'],
            'FAILED': cls.__constants['FAILED'],
            'CANCELED': cls.__constants['CANCELED'],
            'REJECTED': cls.__constants['REJECTED'],
            'CANCEL_FAILED': cls.__constants['CANCEL_FAILED'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'STOPPING': cls.__constants['STOPPING'],
            'WAITING': cls.__constants['WAITING'],
            'PAUSED': cls.__constants['PAUSED'],
        }

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_NavigationState.__constants['IDLE']

    @property
    def ACCEPTED(self):
        """Message constant 'ACCEPTED'."""
        return Metaclass_NavigationState.__constants['ACCEPTED']

    @property
    def PLANNING(self):
        """Message constant 'PLANNING'."""
        return Metaclass_NavigationState.__constants['PLANNING']

    @property
    def EXECUTING(self):
        """Message constant 'EXECUTING'."""
        return Metaclass_NavigationState.__constants['EXECUTING']

    @property
    def CANCELING(self):
        """Message constant 'CANCELING'."""
        return Metaclass_NavigationState.__constants['CANCELING']

    @property
    def SUCCEEDED(self):
        """Message constant 'SUCCEEDED'."""
        return Metaclass_NavigationState.__constants['SUCCEEDED']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_NavigationState.__constants['FAILED']

    @property
    def CANCELED(self):
        """Message constant 'CANCELED'."""
        return Metaclass_NavigationState.__constants['CANCELED']

    @property
    def REJECTED(self):
        """Message constant 'REJECTED'."""
        return Metaclass_NavigationState.__constants['REJECTED']

    @property
    def CANCEL_FAILED(self):
        """Message constant 'CANCEL_FAILED'."""
        return Metaclass_NavigationState.__constants['CANCEL_FAILED']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_NavigationState.__constants['UNKNOWN']

    @property
    def STOPPING(self):
        """Message constant 'STOPPING'."""
        return Metaclass_NavigationState.__constants['STOPPING']

    @property
    def WAITING(self):
        """Message constant 'WAITING'."""
        return Metaclass_NavigationState.__constants['WAITING']

    @property
    def PAUSED(self):
        """Message constant 'PAUSED'."""
        return Metaclass_NavigationState.__constants['PAUSED']


class NavigationState(metaclass=Metaclass_NavigationState):
    """
    Message class 'NavigationState'.

    Constants:
      IDLE
      ACCEPTED
      PLANNING
      EXECUTING
      CANCELING
      SUCCEEDED
      FAILED
      CANCELED
      REJECTED
      CANCEL_FAILED
      UNKNOWN
      STOPPING
      WAITING
      PAUSED
    """

    __slots__ = [
        '_header',
        '_manager_boot_id',
        '_state_revision',
        '_map_ready',
        '_map_version',
        '_map_name',
        '_frame_id',
        '_vehicle_pose',
        '_linear_velocity',
        '_angular_velocity',
        '_pose_fresh',
        '_navigation_synchronized',
        '_control_held',
        '_control_owner_label',
        '_control_epoch',
        '_task_id',
        '_ros_goal_uuid',
        '_task_status',
        '_task_status_text',
        '_request_id',
        '_task_device_label',
        '_requested_x',
        '_requested_y',
        '_effective_endpoint',
        '_path_revision',
        '_route',
        '_error_code',
        '_error_message',
        '_sequence',
        '_sequence_index',
        '_sequence_state',
        '_sequence_loop',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'manager_boot_id': 'string',
        'state_revision': 'uint64',
        'map_ready': 'boolean',
        'map_version': 'string',
        'map_name': 'string',
        'frame_id': 'string',
        'vehicle_pose': 'geometry_msgs/Pose',
        'linear_velocity': 'geometry_msgs/Vector3',
        'angular_velocity': 'geometry_msgs/Vector3',
        'pose_fresh': 'boolean',
        'navigation_synchronized': 'boolean',
        'control_held': 'boolean',
        'control_owner_label': 'string',
        'control_epoch': 'uint64',
        'task_id': 'string',
        'ros_goal_uuid': 'string',
        'task_status': 'uint8',
        'task_status_text': 'string',
        'request_id': 'string',
        'task_device_label': 'string',
        'requested_x': 'double',
        'requested_y': 'double',
        'effective_endpoint': 'geometry_msgs/Pose',
        'path_revision': 'uint32',
        'route': 'planning_msgs/GlobalPath',
        'error_code': 'string',
        'error_message': 'string',
        'sequence': 'sequence<web_navigation_msgs/SequenceWaypoint>',
        'sequence_index': 'uint32',
        'sequence_state': 'string',
        'sequence_loop': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['planning_msgs', 'msg'], 'GlobalPath'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['web_navigation_msgs', 'msg'], 'SequenceWaypoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.manager_boot_id = kwargs.get('manager_boot_id', str())
        self.state_revision = kwargs.get('state_revision', int())
        self.map_ready = kwargs.get('map_ready', bool())
        self.map_version = kwargs.get('map_version', str())
        self.map_name = kwargs.get('map_name', str())
        self.frame_id = kwargs.get('frame_id', str())
        from geometry_msgs.msg import Pose
        self.vehicle_pose = kwargs.get('vehicle_pose', Pose())
        from geometry_msgs.msg import Vector3
        self.linear_velocity = kwargs.get('linear_velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.angular_velocity = kwargs.get('angular_velocity', Vector3())
        self.pose_fresh = kwargs.get('pose_fresh', bool())
        self.navigation_synchronized = kwargs.get('navigation_synchronized', bool())
        self.control_held = kwargs.get('control_held', bool())
        self.control_owner_label = kwargs.get('control_owner_label', str())
        self.control_epoch = kwargs.get('control_epoch', int())
        self.task_id = kwargs.get('task_id', str())
        self.ros_goal_uuid = kwargs.get('ros_goal_uuid', str())
        self.task_status = kwargs.get('task_status', int())
        self.task_status_text = kwargs.get('task_status_text', str())
        self.request_id = kwargs.get('request_id', str())
        self.task_device_label = kwargs.get('task_device_label', str())
        self.requested_x = kwargs.get('requested_x', float())
        self.requested_y = kwargs.get('requested_y', float())
        from geometry_msgs.msg import Pose
        self.effective_endpoint = kwargs.get('effective_endpoint', Pose())
        self.path_revision = kwargs.get('path_revision', int())
        from planning_msgs.msg import GlobalPath
        self.route = kwargs.get('route', GlobalPath())
        self.error_code = kwargs.get('error_code', str())
        self.error_message = kwargs.get('error_message', str())
        self.sequence = kwargs.get('sequence', [])
        self.sequence_index = kwargs.get('sequence_index', int())
        self.sequence_state = kwargs.get('sequence_state', str())
        self.sequence_loop = kwargs.get('sequence_loop', bool())

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
        if self.state_revision != other.state_revision:
            return False
        if self.map_ready != other.map_ready:
            return False
        if self.map_version != other.map_version:
            return False
        if self.map_name != other.map_name:
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.vehicle_pose != other.vehicle_pose:
            return False
        if self.linear_velocity != other.linear_velocity:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.pose_fresh != other.pose_fresh:
            return False
        if self.navigation_synchronized != other.navigation_synchronized:
            return False
        if self.control_held != other.control_held:
            return False
        if self.control_owner_label != other.control_owner_label:
            return False
        if self.control_epoch != other.control_epoch:
            return False
        if self.task_id != other.task_id:
            return False
        if self.ros_goal_uuid != other.ros_goal_uuid:
            return False
        if self.task_status != other.task_status:
            return False
        if self.task_status_text != other.task_status_text:
            return False
        if self.request_id != other.request_id:
            return False
        if self.task_device_label != other.task_device_label:
            return False
        if self.requested_x != other.requested_x:
            return False
        if self.requested_y != other.requested_y:
            return False
        if self.effective_endpoint != other.effective_endpoint:
            return False
        if self.path_revision != other.path_revision:
            return False
        if self.route != other.route:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_message != other.error_message:
            return False
        if self.sequence != other.sequence:
            return False
        if self.sequence_index != other.sequence_index:
            return False
        if self.sequence_state != other.sequence_state:
            return False
        if self.sequence_loop != other.sequence_loop:
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

    @builtins.property
    def map_ready(self):
        """Message field 'map_ready'."""
        return self._map_ready

    @map_ready.setter
    def map_ready(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'map_ready' field must be of type 'bool'"
        self._map_ready = value

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
    def map_name(self):
        """Message field 'map_name'."""
        return self._map_name

    @map_name.setter
    def map_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_name' field must be of type 'str'"
        self._map_name = value

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
    def vehicle_pose(self):
        """Message field 'vehicle_pose'."""
        return self._vehicle_pose

    @vehicle_pose.setter
    def vehicle_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'vehicle_pose' field must be a sub message of type 'Pose'"
        self._vehicle_pose = value

    @builtins.property
    def linear_velocity(self):
        """Message field 'linear_velocity'."""
        return self._linear_velocity

    @linear_velocity.setter
    def linear_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'linear_velocity' field must be a sub message of type 'Vector3'"
        self._linear_velocity = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_velocity' field must be a sub message of type 'Vector3'"
        self._angular_velocity = value

    @builtins.property
    def pose_fresh(self):
        """Message field 'pose_fresh'."""
        return self._pose_fresh

    @pose_fresh.setter
    def pose_fresh(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pose_fresh' field must be of type 'bool'"
        self._pose_fresh = value

    @builtins.property
    def navigation_synchronized(self):
        """Message field 'navigation_synchronized'."""
        return self._navigation_synchronized

    @navigation_synchronized.setter
    def navigation_synchronized(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'navigation_synchronized' field must be of type 'bool'"
        self._navigation_synchronized = value

    @builtins.property
    def control_held(self):
        """Message field 'control_held'."""
        return self._control_held

    @control_held.setter
    def control_held(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'control_held' field must be of type 'bool'"
        self._control_held = value

    @builtins.property
    def control_owner_label(self):
        """Message field 'control_owner_label'."""
        return self._control_owner_label

    @control_owner_label.setter
    def control_owner_label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'control_owner_label' field must be of type 'str'"
        self._control_owner_label = value

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
    def task_status_text(self):
        """Message field 'task_status_text'."""
        return self._task_status_text

    @task_status_text.setter
    def task_status_text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_status_text' field must be of type 'str'"
        self._task_status_text = value

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
    def task_device_label(self):
        """Message field 'task_device_label'."""
        return self._task_device_label

    @task_device_label.setter
    def task_device_label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_device_label' field must be of type 'str'"
        self._task_device_label = value

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
    def route(self):
        """Message field 'route'."""
        return self._route

    @route.setter
    def route(self, value):
        if __debug__:
            from planning_msgs.msg import GlobalPath
            assert \
                isinstance(value, GlobalPath), \
                "The 'route' field must be a sub message of type 'GlobalPath'"
        self._route = value

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

    @builtins.property
    def sequence_index(self):
        """Message field 'sequence_index'."""
        return self._sequence_index

    @sequence_index.setter
    def sequence_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequence_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sequence_index' field must be an unsigned integer in [0, 4294967295]"
        self._sequence_index = value

    @builtins.property
    def sequence_state(self):
        """Message field 'sequence_state'."""
        return self._sequence_state

    @sequence_state.setter
    def sequence_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sequence_state' field must be of type 'str'"
        self._sequence_state = value

    @builtins.property
    def sequence_loop(self):
        """Message field 'sequence_loop'."""
        return self._sequence_loop

    @sequence_loop.setter
    def sequence_loop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sequence_loop' field must be of type 'bool'"
        self._sequence_loop = value
