# generated from rosidl_generator_py/resource/_idl.py.em
# with input from system_msgs:srv/NeedSlowDown.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NeedSlowDown_Request(type):
    """Metaclass of message 'NeedSlowDown_Request'."""

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
            module = import_type_support('system_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'system_msgs.srv.NeedSlowDown_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__need_slow_down__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__need_slow_down__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__need_slow_down__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__need_slow_down__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__need_slow_down__request

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


class NeedSlowDown_Request(metaclass=Metaclass_NeedSlowDown_Request):
    """Message class 'NeedSlowDown_Request'."""

    __slots__ = [
        '_pose',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())

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
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_NeedSlowDown_Response(type):
    """Metaclass of message 'NeedSlowDown_Response'."""

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
            module = import_type_support('system_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'system_msgs.srv.NeedSlowDown_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__need_slow_down__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__need_slow_down__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__need_slow_down__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__need_slow_down__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__need_slow_down__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NeedSlowDown_Response(metaclass=Metaclass_NeedSlowDown_Response):
    """Message class 'NeedSlowDown_Response'."""

    __slots__ = [
        '_slow_down',
        '_slow_down_ratio',
    ]

    _fields_and_field_types = {
        'slow_down': 'boolean',
        'slow_down_ratio': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.slow_down = kwargs.get('slow_down', bool())
        self.slow_down_ratio = kwargs.get('slow_down_ratio', float())

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
        if self.slow_down != other.slow_down:
            return False
        if self.slow_down_ratio != other.slow_down_ratio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def slow_down(self):
        """Message field 'slow_down'."""
        return self._slow_down

    @slow_down.setter
    def slow_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'slow_down' field must be of type 'bool'"
        self._slow_down = value

    @builtins.property
    def slow_down_ratio(self):
        """Message field 'slow_down_ratio'."""
        return self._slow_down_ratio

    @slow_down_ratio.setter
    def slow_down_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'slow_down_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'slow_down_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._slow_down_ratio = value


class Metaclass_NeedSlowDown(type):
    """Metaclass of service 'NeedSlowDown'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('system_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'system_msgs.srv.NeedSlowDown')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__need_slow_down

            from system_msgs.srv import _need_slow_down
            if _need_slow_down.Metaclass_NeedSlowDown_Request._TYPE_SUPPORT is None:
                _need_slow_down.Metaclass_NeedSlowDown_Request.__import_type_support__()
            if _need_slow_down.Metaclass_NeedSlowDown_Response._TYPE_SUPPORT is None:
                _need_slow_down.Metaclass_NeedSlowDown_Response.__import_type_support__()


class NeedSlowDown(metaclass=Metaclass_NeedSlowDown):
    from system_msgs.srv._need_slow_down import NeedSlowDown_Request as Request
    from system_msgs.srv._need_slow_down import NeedSlowDown_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
