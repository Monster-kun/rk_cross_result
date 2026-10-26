# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:srv/GetWebMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetWebMap_Request(type):
    """Metaclass of message 'GetWebMap_Request'."""

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
                'web_navigation_msgs.srv.GetWebMap_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_web_map__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_web_map__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_web_map__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_web_map__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_web_map__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetWebMap_Request(metaclass=Metaclass_GetWebMap_Request):
    """Message class 'GetWebMap_Request'."""

    __slots__ = [
        '_if_map_version',
    ]

    _fields_and_field_types = {
        'if_map_version': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.if_map_version = kwargs.get('if_map_version', str())

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
        if self.if_map_version != other.if_map_version:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def if_map_version(self):
        """Message field 'if_map_version'."""
        return self._if_map_version

    @if_map_version.setter
    def if_map_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'if_map_version' field must be of type 'str'"
        self._if_map_version = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# Member 'bounds'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetWebMap_Response(type):
    """Metaclass of message 'GetWebMap_Response'."""

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
                'web_navigation_msgs.srv.GetWebMap_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_web_map__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_web_map__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_web_map__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_web_map__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_web_map__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetWebMap_Response(metaclass=Metaclass_GetWebMap_Response):
    """Message class 'GetWebMap_Response'."""

    __slots__ = [
        '_ready',
        '_not_modified',
        '_code',
        '_message',
        '_map_version',
        '_map_name',
        '_coordinate_revision',
        '_frame_id',
        '_unit',
        '_bounds',
        '_geometry_json',
    ]

    _fields_and_field_types = {
        'ready': 'boolean',
        'not_modified': 'boolean',
        'code': 'string',
        'message': 'string',
        'map_version': 'string',
        'map_name': 'string',
        'coordinate_revision': 'string',
        'frame_id': 'string',
        'unit': 'string',
        'bounds': 'double[4]',
        'geometry_json': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ready = kwargs.get('ready', bool())
        self.not_modified = kwargs.get('not_modified', bool())
        self.code = kwargs.get('code', str())
        self.message = kwargs.get('message', str())
        self.map_version = kwargs.get('map_version', str())
        self.map_name = kwargs.get('map_name', str())
        self.coordinate_revision = kwargs.get('coordinate_revision', str())
        self.frame_id = kwargs.get('frame_id', str())
        self.unit = kwargs.get('unit', str())
        if 'bounds' not in kwargs:
            self.bounds = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.bounds = kwargs.get('bounds')
        self.geometry_json = kwargs.get('geometry_json', str())

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
        if self.ready != other.ready:
            return False
        if self.not_modified != other.not_modified:
            return False
        if self.code != other.code:
            return False
        if self.message != other.message:
            return False
        if self.map_version != other.map_version:
            return False
        if self.map_name != other.map_name:
            return False
        if self.coordinate_revision != other.coordinate_revision:
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.unit != other.unit:
            return False
        if any(self.bounds != other.bounds):
            return False
        if self.geometry_json != other.geometry_json:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ready(self):
        """Message field 'ready'."""
        return self._ready

    @ready.setter
    def ready(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ready' field must be of type 'bool'"
        self._ready = value

    @builtins.property
    def not_modified(self):
        """Message field 'not_modified'."""
        return self._not_modified

    @not_modified.setter
    def not_modified(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'not_modified' field must be of type 'bool'"
        self._not_modified = value

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
    def coordinate_revision(self):
        """Message field 'coordinate_revision'."""
        return self._coordinate_revision

    @coordinate_revision.setter
    def coordinate_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'coordinate_revision' field must be of type 'str'"
        self._coordinate_revision = value

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
    def unit(self):
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'unit' field must be of type 'str'"
        self._unit = value

    @builtins.property
    def bounds(self):
        """Message field 'bounds'."""
        return self._bounds

    @bounds.setter
    def bounds(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'bounds' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'bounds' numpy.ndarray() must have a size of 4"
            self._bounds = value
            return
        if __debug__:
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'bounds' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._bounds = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def geometry_json(self):
        """Message field 'geometry_json'."""
        return self._geometry_json

    @geometry_json.setter
    def geometry_json(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'geometry_json' field must be of type 'str'"
        self._geometry_json = value


class Metaclass_GetWebMap(type):
    """Metaclass of service 'GetWebMap'."""

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
                'web_navigation_msgs.srv.GetWebMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_web_map

            from web_navigation_msgs.srv import _get_web_map
            if _get_web_map.Metaclass_GetWebMap_Request._TYPE_SUPPORT is None:
                _get_web_map.Metaclass_GetWebMap_Request.__import_type_support__()
            if _get_web_map.Metaclass_GetWebMap_Response._TYPE_SUPPORT is None:
                _get_web_map.Metaclass_GetWebMap_Response.__import_type_support__()


class GetWebMap(metaclass=Metaclass_GetWebMap):
    from web_navigation_msgs.srv._get_web_map import GetWebMap_Request as Request
    from web_navigation_msgs.srv._get_web_map import GetWebMap_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
