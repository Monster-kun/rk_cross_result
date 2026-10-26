# generated from rosidl_generator_py/resource/_idl.py.em
# with input from behavior_msgs:srv/IsPathValid.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IsPathValid_Request(type):
    """Metaclass of message 'IsPathValid_Request'."""

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
                'behavior_msgs.srv.IsPathValid_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__is_path_valid__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__is_path_valid__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__is_path_valid__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__is_path_valid__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__is_path_valid__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IsPathValid_Request(metaclass=Metaclass_IsPathValid_Request):
    """Message class 'IsPathValid_Request'."""

    __slots__ = [
        '_check_distance',
    ]

    _fields_and_field_types = {
        'check_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.check_distance = kwargs.get('check_distance', float())

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
        if self.check_distance != other.check_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def check_distance(self):
        """Message field 'check_distance'."""
        return self._check_distance

    @check_distance.setter
    def check_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'check_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'check_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._check_distance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_IsPathValid_Response(type):
    """Metaclass of message 'IsPathValid_Response'."""

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
                'behavior_msgs.srv.IsPathValid_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__is_path_valid__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__is_path_valid__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__is_path_valid__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__is_path_valid__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__is_path_valid__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IsPathValid_Response(metaclass=Metaclass_IsPathValid_Response):
    """Message class 'IsPathValid_Response'."""

    __slots__ = [
        '_is_valid',
    ]

    _fields_and_field_types = {
        'is_valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_valid = kwargs.get('is_valid', bool())

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
        if self.is_valid != other.is_valid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_valid(self):
        """Message field 'is_valid'."""
        return self._is_valid

    @is_valid.setter
    def is_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid' field must be of type 'bool'"
        self._is_valid = value


class Metaclass_IsPathValid(type):
    """Metaclass of service 'IsPathValid'."""

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
                'behavior_msgs.srv.IsPathValid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__is_path_valid

            from behavior_msgs.srv import _is_path_valid
            if _is_path_valid.Metaclass_IsPathValid_Request._TYPE_SUPPORT is None:
                _is_path_valid.Metaclass_IsPathValid_Request.__import_type_support__()
            if _is_path_valid.Metaclass_IsPathValid_Response._TYPE_SUPPORT is None:
                _is_path_valid.Metaclass_IsPathValid_Response.__import_type_support__()


class IsPathValid(metaclass=Metaclass_IsPathValid):
    from behavior_msgs.srv._is_path_valid import IsPathValid_Request as Request
    from behavior_msgs.srv._is_path_valid import IsPathValid_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
