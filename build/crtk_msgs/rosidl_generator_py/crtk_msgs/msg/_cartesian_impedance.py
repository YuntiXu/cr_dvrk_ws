# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crtk_msgs:msg/CartesianImpedance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CartesianImpedance(type):
    """Metaclass of message 'CartesianImpedance'."""

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
                'crtk_msgs.msg.CartesianImpedance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cartesian_impedance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cartesian_impedance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cartesian_impedance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cartesian_impedance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cartesian_impedance

            from crtk_msgs.msg import CartesianImpedanceHalfPlaneGains
            if CartesianImpedanceHalfPlaneGains.__class__._TYPE_SUPPORT is None:
                CartesianImpedanceHalfPlaneGains.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianImpedance(metaclass=Metaclass_CartesianImpedance):
    """Message class 'CartesianImpedance'."""

    __slots__ = [
        '_header',
        '_force_orientation',
        '_force_position',
        '_torque_orientation',
        '_position_positive',
        '_position_negative',
        '_orientation_positive',
        '_orientation_negative',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'force_orientation': 'geometry_msgs/Quaternion',
        'force_position': 'geometry_msgs/Vector3',
        'torque_orientation': 'geometry_msgs/Quaternion',
        'position_positive': 'crtk_msgs/CartesianImpedanceHalfPlaneGains',
        'position_negative': 'crtk_msgs/CartesianImpedanceHalfPlaneGains',
        'orientation_positive': 'crtk_msgs/CartesianImpedanceHalfPlaneGains',
        'orientation_negative': 'crtk_msgs/CartesianImpedanceHalfPlaneGains',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['crtk_msgs', 'msg'], 'CartesianImpedanceHalfPlaneGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['crtk_msgs', 'msg'], 'CartesianImpedanceHalfPlaneGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['crtk_msgs', 'msg'], 'CartesianImpedanceHalfPlaneGains'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['crtk_msgs', 'msg'], 'CartesianImpedanceHalfPlaneGains'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Quaternion
        self.force_orientation = kwargs.get('force_orientation', Quaternion())
        from geometry_msgs.msg import Vector3
        self.force_position = kwargs.get('force_position', Vector3())
        from geometry_msgs.msg import Quaternion
        self.torque_orientation = kwargs.get('torque_orientation', Quaternion())
        from crtk_msgs.msg import CartesianImpedanceHalfPlaneGains
        self.position_positive = kwargs.get('position_positive', CartesianImpedanceHalfPlaneGains())
        from crtk_msgs.msg import CartesianImpedanceHalfPlaneGains
        self.position_negative = kwargs.get('position_negative', CartesianImpedanceHalfPlaneGains())
        from crtk_msgs.msg import CartesianImpedanceHalfPlaneGains
        self.orientation_positive = kwargs.get('orientation_positive', CartesianImpedanceHalfPlaneGains())
        from crtk_msgs.msg import CartesianImpedanceHalfPlaneGains
        self.orientation_negative = kwargs.get('orientation_negative', CartesianImpedanceHalfPlaneGains())

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
        if self.force_orientation != other.force_orientation:
            return False
        if self.force_position != other.force_position:
            return False
        if self.torque_orientation != other.torque_orientation:
            return False
        if self.position_positive != other.position_positive:
            return False
        if self.position_negative != other.position_negative:
            return False
        if self.orientation_positive != other.orientation_positive:
            return False
        if self.orientation_negative != other.orientation_negative:
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
    def force_orientation(self):
        """Message field 'force_orientation'."""
        return self._force_orientation

    @force_orientation.setter
    def force_orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'force_orientation' field must be a sub message of type 'Quaternion'"
        self._force_orientation = value

    @builtins.property
    def force_position(self):
        """Message field 'force_position'."""
        return self._force_position

    @force_position.setter
    def force_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'force_position' field must be a sub message of type 'Vector3'"
        self._force_position = value

    @builtins.property
    def torque_orientation(self):
        """Message field 'torque_orientation'."""
        return self._torque_orientation

    @torque_orientation.setter
    def torque_orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'torque_orientation' field must be a sub message of type 'Quaternion'"
        self._torque_orientation = value

    @builtins.property
    def position_positive(self):
        """Message field 'position_positive'."""
        return self._position_positive

    @position_positive.setter
    def position_positive(self, value):
        if __debug__:
            from crtk_msgs.msg import CartesianImpedanceHalfPlaneGains
            assert \
                isinstance(value, CartesianImpedanceHalfPlaneGains), \
                "The 'position_positive' field must be a sub message of type 'CartesianImpedanceHalfPlaneGains'"
        self._position_positive = value

    @builtins.property
    def position_negative(self):
        """Message field 'position_negative'."""
        return self._position_negative

    @position_negative.setter
    def position_negative(self, value):
        if __debug__:
            from crtk_msgs.msg import CartesianImpedanceHalfPlaneGains
            assert \
                isinstance(value, CartesianImpedanceHalfPlaneGains), \
                "The 'position_negative' field must be a sub message of type 'CartesianImpedanceHalfPlaneGains'"
        self._position_negative = value

    @builtins.property
    def orientation_positive(self):
        """Message field 'orientation_positive'."""
        return self._orientation_positive

    @orientation_positive.setter
    def orientation_positive(self, value):
        if __debug__:
            from crtk_msgs.msg import CartesianImpedanceHalfPlaneGains
            assert \
                isinstance(value, CartesianImpedanceHalfPlaneGains), \
                "The 'orientation_positive' field must be a sub message of type 'CartesianImpedanceHalfPlaneGains'"
        self._orientation_positive = value

    @builtins.property
    def orientation_negative(self):
        """Message field 'orientation_negative'."""
        return self._orientation_negative

    @orientation_negative.setter
    def orientation_negative(self, value):
        if __debug__:
            from crtk_msgs.msg import CartesianImpedanceHalfPlaneGains
            assert \
                isinstance(value, CartesianImpedanceHalfPlaneGains), \
                "The 'orientation_negative' field must be a sub message of type 'CartesianImpedanceHalfPlaneGains'"
        self._orientation_negative = value
