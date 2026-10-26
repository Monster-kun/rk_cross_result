# generated from rosidl_generator_py/resource/_idl.py.em
# with input from system_msgs:srv/IsEmergencyStop.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IsEmergencyStop_Request(type):
    """Metaclass of message 'IsEmergencyStop_Request'."""

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
                'system_msgs.srv.IsEmergencyStop_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__is_emergency_stop__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__is_emergency_stop__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__is_emergency_stop__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__is_emergency_stop__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__is_emergency_stop__request

            from std_msgs.msg import Empty
            if Empty.__class__._TYPE_SUPPORT is None:
                Empty.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IsEmergencyStop_Request(metaclass=Metaclass_IsEmergencyStop_Request):
    """Message class 'IsEmergencyStop_Request'."""

    __slots__ = [
        '_input',
    ]

    _fields_and_field_types = {
        'input': 'std_msgs/Empty',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Empty'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Empty
        self.input = kwargs.get('input', Empty())

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
        if self.input != other.input:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def input(self):  # noqa: A003
        """Message field 'input'."""
        return self._input

    @input.setter  # noqa: A003
    def input(self, value):  # noqa: A003
        if __debug__:
            from std_msgs.msg import Empty
            assert \
                isinstance(value, Empty), \
                "The 'input' field must be a sub message of type 'Empty'"
        self._input = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_IsEmergencyStop_Response(type):
    """Metaclass of message 'IsEmergencyStop_Response'."""

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
                'system_msgs.srv.IsEmergencyStop_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__is_emergency_stop__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__is_emergency_stop__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__is_emergency_stop__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__is_emergency_stop__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__is_emergency_stop__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IsEmergencyStop_Response(metaclass=Metaclass_IsEmergencyStop_Response):
    """Message class 'IsEmergencyStop_Response'."""

    __slots__ = [
        '_is_emergency_stop',
    ]

    _fields_and_field_types = {
        'is_emergency_stop': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_emergency_stop = kwargs.get('is_emergency_stop', bool())

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
        if self.is_emergency_stop != other.is_emergency_stop:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_emergency_stop(self):
        """Message field 'is_emergency_stop'."""
        return self._is_emergency_stop

    @is_emergency_stop.setter
    def is_emergency_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_emergency_stop' field must be of type 'bool'"
        self._is_emergency_stop = value


class Metaclass_IsEmergencyStop(type):
    """Metaclass of service 'IsEmergencyStop'."""

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
                'system_msgs.srv.IsEmergencyStop')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__is_emergency_stop

            from system_msgs.srv import _is_emergency_stop
            if _is_emergency_stop.Metaclass_IsEmergencyStop_Request._TYPE_SUPPORT is None:
                _is_emergency_stop.Metaclass_IsEmergencyStop_Request.__import_type_support__()
            if _is_emergency_stop.Metaclass_IsEmergencyStop_Response._TYPE_SUPPORT is None:
                _is_emergency_stop.Metaclass_IsEmergencyStop_Response.__import_type_support__()


class IsEmergencyStop(metaclass=Metaclass_IsEmergencyStop):
    from system_msgs.srv._is_emergency_stop import IsEmergencyStop_Request as Request
    from system_msgs.srv._is_emergency_stop import IsEmergencyStop_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
