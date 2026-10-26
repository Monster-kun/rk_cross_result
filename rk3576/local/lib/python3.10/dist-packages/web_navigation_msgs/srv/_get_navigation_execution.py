# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:srv/GetNavigationExecution.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetNavigationExecution_Request(type):
    """Metaclass of message 'GetNavigationExecution_Request'."""

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
                'web_navigation_msgs.srv.GetNavigationExecution_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_navigation_execution__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_navigation_execution__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_navigation_execution__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_navigation_execution__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_navigation_execution__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetNavigationExecution_Request(metaclass=Metaclass_GetNavigationExecution_Request):
    """Message class 'GetNavigationExecution_Request'."""

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

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetNavigationExecution_Response(type):
    """Metaclass of message 'GetNavigationExecution_Response'."""

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
                'web_navigation_msgs.srv.GetNavigationExecution_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_navigation_execution__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_navigation_execution__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_navigation_execution__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_navigation_execution__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_navigation_execution__response

            from web_navigation_msgs.msg import NavigationExecution
            if NavigationExecution.__class__._TYPE_SUPPORT is None:
                NavigationExecution.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetNavigationExecution_Response(metaclass=Metaclass_GetNavigationExecution_Response):
    """Message class 'GetNavigationExecution_Response'."""

    __slots__ = [
        '_instance_id',
        '_active',
        '_execution_running',
        '_goals',
    ]

    _fields_and_field_types = {
        'instance_id': 'string',
        'active': 'boolean',
        'execution_running': 'boolean',
        'goals': 'sequence<web_navigation_msgs/NavigationExecution>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['web_navigation_msgs', 'msg'], 'NavigationExecution')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.instance_id = kwargs.get('instance_id', str())
        self.active = kwargs.get('active', bool())
        self.execution_running = kwargs.get('execution_running', bool())
        self.goals = kwargs.get('goals', [])

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
        if self.instance_id != other.instance_id:
            return False
        if self.active != other.active:
            return False
        if self.execution_running != other.execution_running:
            return False
        if self.goals != other.goals:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def instance_id(self):
        """Message field 'instance_id'."""
        return self._instance_id

    @instance_id.setter
    def instance_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'instance_id' field must be of type 'str'"
        self._instance_id = value

    @builtins.property
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active' field must be of type 'bool'"
        self._active = value

    @builtins.property
    def execution_running(self):
        """Message field 'execution_running'."""
        return self._execution_running

    @execution_running.setter
    def execution_running(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'execution_running' field must be of type 'bool'"
        self._execution_running = value

    @builtins.property
    def goals(self):
        """Message field 'goals'."""
        return self._goals

    @goals.setter
    def goals(self, value):
        if __debug__:
            from web_navigation_msgs.msg import NavigationExecution
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
                 all(isinstance(v, NavigationExecution) for v in value) and
                 True), \
                "The 'goals' field must be a set or sequence and each value of type 'NavigationExecution'"
        self._goals = value


class Metaclass_GetNavigationExecution(type):
    """Metaclass of service 'GetNavigationExecution'."""

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
                'web_navigation_msgs.srv.GetNavigationExecution')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_navigation_execution

            from web_navigation_msgs.srv import _get_navigation_execution
            if _get_navigation_execution.Metaclass_GetNavigationExecution_Request._TYPE_SUPPORT is None:
                _get_navigation_execution.Metaclass_GetNavigationExecution_Request.__import_type_support__()
            if _get_navigation_execution.Metaclass_GetNavigationExecution_Response._TYPE_SUPPORT is None:
                _get_navigation_execution.Metaclass_GetNavigationExecution_Response.__import_type_support__()


class GetNavigationExecution(metaclass=Metaclass_GetNavigationExecution):
    from web_navigation_msgs.srv._get_navigation_execution import GetNavigationExecution_Request as Request
    from web_navigation_msgs.srv._get_navigation_execution import GetNavigationExecution_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
