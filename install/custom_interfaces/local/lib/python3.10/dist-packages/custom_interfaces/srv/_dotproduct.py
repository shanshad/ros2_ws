# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:srv/Dotproduct.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Dotproduct_Request(type):
    """Metaclass of message 'Dotproduct_Request'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.Dotproduct_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dotproduct__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dotproduct__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dotproduct__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dotproduct__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dotproduct__request

            from custom_interfaces.msg import Vector4
            if Vector4.__class__._TYPE_SUPPORT is None:
                Vector4.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Dotproduct_Request(metaclass=Metaclass_Dotproduct_Request):
    """Message class 'Dotproduct_Request'."""

    __slots__ = [
        '_v1',
        '_v2',
    ]

    _fields_and_field_types = {
        'v1': 'custom_interfaces/Vector4',
        'v2': 'custom_interfaces/Vector4',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['custom_interfaces', 'msg'], 'Vector4'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_interfaces', 'msg'], 'Vector4'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from custom_interfaces.msg import Vector4
        self.v1 = kwargs.get('v1', Vector4())
        from custom_interfaces.msg import Vector4
        self.v2 = kwargs.get('v2', Vector4())

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
        if self.v1 != other.v1:
            return False
        if self.v2 != other.v2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def v1(self):
        """Message field 'v1'."""
        return self._v1

    @v1.setter
    def v1(self, value):
        if __debug__:
            from custom_interfaces.msg import Vector4
            assert \
                isinstance(value, Vector4), \
                "The 'v1' field must be a sub message of type 'Vector4'"
        self._v1 = value

    @builtins.property
    def v2(self):
        """Message field 'v2'."""
        return self._v2

    @v2.setter
    def v2(self, value):
        if __debug__:
            from custom_interfaces.msg import Vector4
            assert \
                isinstance(value, Vector4), \
                "The 'v2' field must be a sub message of type 'Vector4'"
        self._v2 = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Dotproduct_Response(type):
    """Metaclass of message 'Dotproduct_Response'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.Dotproduct_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dotproduct__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dotproduct__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dotproduct__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dotproduct__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dotproduct__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Dotproduct_Response(metaclass=Metaclass_Dotproduct_Response):
    """Message class 'Dotproduct_Response'."""

    __slots__ = [
        '_dp',
    ]

    _fields_and_field_types = {
        'dp': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dp = kwargs.get('dp', float())

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
        if self.dp != other.dp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dp(self):
        """Message field 'dp'."""
        return self._dp

    @dp.setter
    def dp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dp = value


class Metaclass_Dotproduct(type):
    """Metaclass of service 'Dotproduct'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.Dotproduct')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__dotproduct

            from custom_interfaces.srv import _dotproduct
            if _dotproduct.Metaclass_Dotproduct_Request._TYPE_SUPPORT is None:
                _dotproduct.Metaclass_Dotproduct_Request.__import_type_support__()
            if _dotproduct.Metaclass_Dotproduct_Response._TYPE_SUPPORT is None:
                _dotproduct.Metaclass_Dotproduct_Response.__import_type_support__()


class Dotproduct(metaclass=Metaclass_Dotproduct):
    from custom_interfaces.srv._dotproduct import Dotproduct_Request as Request
    from custom_interfaces.srv._dotproduct import Dotproduct_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
