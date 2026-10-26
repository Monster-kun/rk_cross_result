# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_msgs:srv/SelectPlanner.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SelectPlanner_Request(type):
    """Metaclass of message 'SelectPlanner_Request'."""

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
                'behavior_msgs.srv.SelectPlanner_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__select_planner__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__select_planner__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__select_planner__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__select_planner__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__select_planner__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SelectPlanner_Request(metaclass=Metaclass_SelectPlanner_Request):
    """Message class 'SelectPlanner_Request'."""

    __slots__ = [
        '_planner_selector_id',
    ]

    _fields_and_field_types = {
        'planner_selector_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.planner_selector_id = kwargs.get('planner_selector_id', str())

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
        if self.planner_selector_id != other.planner_selector_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def planner_selector_id(self):
        """Message field 'planner_selector_id'."""
        return self._planner_selector_id

    @planner_selector_id.setter
    def planner_selector_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planner_selector_id' field must be of type 'str'"
        self._planner_selector_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SelectPlanner_Response(type):
    """Metaclass of message 'SelectPlanner_Response'."""

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
                'behavior_msgs.srv.SelectPlanner_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__select_planner__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__select_planner__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__select_planner__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__select_planner__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__select_planner__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SelectPlanner_Response(metaclass=Metaclass_SelectPlanner_Response):
    """Message class 'SelectPlanner_Response'."""

    __slots__ = [
        '_local_planner_id',
    ]

    _fields_and_field_types = {
        'local_planner_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.local_planner_id = kwargs.get('local_planner_id', str())

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
        if self.local_planner_id != other.local_planner_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


class Metaclass_SelectPlanner(type):
    """Metaclass of service 'SelectPlanner'."""

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
                'behavior_msgs.srv.SelectPlanner')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__select_planner

            from behavior_msgs.srv import _select_planner
            if _select_planner.Metaclass_SelectPlanner_Request._TYPE_SUPPORT is None:
                _select_planner.Metaclass_SelectPlanner_Request.__import_type_support__()
            if _select_planner.Metaclass_SelectPlanner_Response._TYPE_SUPPORT is None:
                _select_planner.Metaclass_SelectPlanner_Response.__import_type_support__()


class SelectPlanner(metaclass=Metaclass_SelectPlanner):
    from behavior_msgs.srv._select_planner import SelectPlanner_Request as Request
    from behavior_msgs.srv._select_planner import SelectPlanner_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
