# generated from rosidl_generator_py/resource/_idl.py.em
# with input from web_navigation_msgs:srv/ControlLease.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlLease_Request(type):
    """Metaclass of message 'ControlLease_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACQUIRE': 0,
        'RENEW': 1,
        'RELEASE': 2,
        'VALIDATE': 3,
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
                'web_navigation_msgs.srv.ControlLease_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_lease__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_lease__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_lease__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_lease__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_lease__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACQUIRE': cls.__constants['ACQUIRE'],
            'RENEW': cls.__constants['RENEW'],
            'RELEASE': cls.__constants['RELEASE'],
            'VALIDATE': cls.__constants['VALIDATE'],
        }

    @property
    def ACQUIRE(self):
        """Message constant 'ACQUIRE'."""
        return Metaclass_ControlLease_Request.__constants['ACQUIRE']

    @property
    def RENEW(self):
        """Message constant 'RENEW'."""
        return Metaclass_ControlLease_Request.__constants['RENEW']

    @property
    def RELEASE(self):
        """Message constant 'RELEASE'."""
        return Metaclass_ControlLease_Request.__constants['RELEASE']

    @property
    def VALIDATE(self):
        """Message constant 'VALIDATE'."""
        return Metaclass_ControlLease_Request.__constants['VALIDATE']


class ControlLease_Request(metaclass=Metaclass_ControlLease_Request):
    """
    Message class 'ControlLease_Request'.

    Constants:
      ACQUIRE
      RENEW
      RELEASE
      VALIDATE
    """

    __slots__ = [
        '_operation',
        '_session_id',
        '_device_label',
        '_manager_boot_id',
        '_lease_token',
        '_control_epoch',
    ]

    _fields_and_field_types = {
        'operation': 'uint8',
        'session_id': 'string',
        'device_label': 'string',
        'manager_boot_id': 'string',
        'lease_token': 'string',
        'control_epoch': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.operation = kwargs.get('operation', int())
        self.session_id = kwargs.get('session_id', str())
        self.device_label = kwargs.get('device_label', str())
        self.manager_boot_id = kwargs.get('manager_boot_id', str())
        self.lease_token = kwargs.get('lease_token', str())
        self.control_epoch = kwargs.get('control_epoch', int())

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ControlLease_Response(type):
    """Metaclass of message 'ControlLease_Response'."""

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
                'web_navigation_msgs.srv.ControlLease_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__control_lease__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__control_lease__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__control_lease__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__control_lease__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__control_lease__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlLease_Response(metaclass=Metaclass_ControlLease_Response):
    """Message class 'ControlLease_Response'."""

    __slots__ = [
        '_success',
        '_code',
        '_message',
        '_manager_boot_id',
        '_lease_token',
        '_control_epoch',
        '_lease_ttl_ms',
        '_control_held',
        '_owner_label',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'code': 'string',
        'message': 'string',
        'manager_boot_id': 'string',
        'lease_token': 'string',
        'control_epoch': 'uint64',
        'lease_ttl_ms': 'uint32',
        'control_held': 'boolean',
        'owner_label': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.code = kwargs.get('code', str())
        self.message = kwargs.get('message', str())
        self.manager_boot_id = kwargs.get('manager_boot_id', str())
        self.lease_token = kwargs.get('lease_token', str())
        self.control_epoch = kwargs.get('control_epoch', int())
        self.lease_ttl_ms = kwargs.get('lease_ttl_ms', int())
        self.control_held = kwargs.get('control_held', bool())
        self.owner_label = kwargs.get('owner_label', str())

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
        if self.success != other.success:
            return False
        if self.code != other.code:
            return False
        if self.message != other.message:
            return False
        if self.manager_boot_id != other.manager_boot_id:
            return False
        if self.lease_token != other.lease_token:
            return False
        if self.control_epoch != other.control_epoch:
            return False
        if self.lease_ttl_ms != other.lease_ttl_ms:
            return False
        if self.control_held != other.control_held:
            return False
        if self.owner_label != other.owner_label:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

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
    def lease_ttl_ms(self):
        """Message field 'lease_ttl_ms'."""
        return self._lease_ttl_ms

    @lease_ttl_ms.setter
    def lease_ttl_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lease_ttl_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lease_ttl_ms' field must be an unsigned integer in [0, 4294967295]"
        self._lease_ttl_ms = value

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
    def owner_label(self):
        """Message field 'owner_label'."""
        return self._owner_label

    @owner_label.setter
    def owner_label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'owner_label' field must be of type 'str'"
        self._owner_label = value


class Metaclass_ControlLease(type):
    """Metaclass of service 'ControlLease'."""

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
                'web_navigation_msgs.srv.ControlLease')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__control_lease

            from web_navigation_msgs.srv import _control_lease
            if _control_lease.Metaclass_ControlLease_Request._TYPE_SUPPORT is None:
                _control_lease.Metaclass_ControlLease_Request.__import_type_support__()
            if _control_lease.Metaclass_ControlLease_Response._TYPE_SUPPORT is None:
                _control_lease.Metaclass_ControlLease_Response.__import_type_support__()


class ControlLease(metaclass=Metaclass_ControlLease):
    from web_navigation_msgs.srv._control_lease import ControlLease_Request as Request
    from web_navigation_msgs.srv._control_lease import ControlLease_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
