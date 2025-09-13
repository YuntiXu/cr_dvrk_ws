# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crtk_msgs:msg/CartesianImpedanceHalfPlaneGains.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CartesianImpedanceHalfPlaneGains(type):
    """Metaclass of message 'CartesianImpedanceHalfPlaneGains'."""

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
            module = import_type_support('crtk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crtk_msgs.msg.CartesianImpedanceHalfPlaneGains')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cartesian_impedance_half_plane_gains
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cartesian_impedance_half_plane_gains
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cartesian_impedance_half_plane_gains
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cartesian_impedance_half_plane_gains
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cartesian_impedance_half_plane_gains

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianImpedanceHalfPlaneGains(metaclass=Metaclass_CartesianImpedanceHalfPlaneGains):
    """Message class 'CartesianImpedanceHalfPlaneGains'."""

    __slots__ = [
        '_p',
        '_d',
        '_bias',
        '_deadband',
    ]

    _fields_and_field_types = {
        'p': 'geometry_msgs/Vector3',
        'd': 'geometry_msgs/Vector3',
        'bias': 'geometry_msgs/Vector3',
        'deadband': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Vector3
        self.p = kwargs.get('p', Vector3())
        from geometry_msgs.msg import Vector3
        self.d = kwargs.get('d', Vector3())
        from geometry_msgs.msg import Vector3
        self.bias = kwargs.get('bias', Vector3())
        from geometry_msgs.msg import Vector3
        self.deadband = kwargs.get('deadband', Vector3())

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
        if self.p != other.p:
            return False
        if self.d != other.d:
            return False
        if self.bias != other.bias:
            return False
        if self.deadband != other.deadband:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'p' field must be a sub message of type 'Vector3'"
        self._p = value

    @builtins.property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'd' field must be a sub message of type 'Vector3'"
        self._d = value

    @builtins.property
    def bias(self):
        """Message field 'bias'."""
        return self._bias

    @bias.setter
    def bias(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'bias' field must be a sub message of type 'Vector3'"
        self._bias = value

    @builtins.property
    def deadband(self):
        """Message field 'deadband'."""
        return self._deadband

    @deadband.setter
    def deadband(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'deadband' field must be a sub message of type 'Vector3'"
        self._deadband = value
