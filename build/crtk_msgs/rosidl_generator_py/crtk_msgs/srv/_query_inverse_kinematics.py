# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crtk_msgs:srv/QueryInverseKinematics.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'jp'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QueryInverseKinematics_Request(type):
    """Metaclass of message 'QueryInverseKinematics_Request'."""

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
                'crtk_msgs.srv.QueryInverseKinematics_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__query_inverse_kinematics__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__query_inverse_kinematics__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__query_inverse_kinematics__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__query_inverse_kinematics__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__query_inverse_kinematics__request

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


class QueryInverseKinematics_Request(metaclass=Metaclass_QueryInverseKinematics_Request):
    """Message class 'QueryInverseKinematics_Request'."""

    __slots__ = [
        '_cp',
        '_jp',
    ]

    _fields_and_field_types = {
        'cp': 'geometry_msgs/Pose',
        'jp': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.cp = kwargs.get('cp', Pose())
        self.jp = array.array('d', kwargs.get('jp', []))

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
        if self.cp != other.cp:
            return False
        if self.jp != other.jp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cp(self):
        """Message field 'cp'."""
        return self._cp

    @cp.setter
    def cp(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'cp' field must be a sub message of type 'Pose'"
        self._cp = value

    @builtins.property
    def jp(self):
        """Message field 'jp'."""
        return self._jp

    @jp.setter
    def jp(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'jp' array.array() must have the type code of 'd'"
            self._jp = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'jp' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._jp = array.array('d', value)


# Import statements for member types

# Member 'jp'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_QueryInverseKinematics_Response(type):
    """Metaclass of message 'QueryInverseKinematics_Response'."""

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
                'crtk_msgs.srv.QueryInverseKinematics_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__query_inverse_kinematics__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__query_inverse_kinematics__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__query_inverse_kinematics__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__query_inverse_kinematics__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__query_inverse_kinematics__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QueryInverseKinematics_Response(metaclass=Metaclass_QueryInverseKinematics_Response):
    """Message class 'QueryInverseKinematics_Response'."""

    __slots__ = [
        '_jp',
        '_result',
        '_message',
    ]

    _fields_and_field_types = {
        'jp': 'sequence<double>',
        'result': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.jp = array.array('d', kwargs.get('jp', []))
        self.result = kwargs.get('result', bool())
        self.message = kwargs.get('message', str())

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
        if self.jp != other.jp:
            return False
        if self.result != other.result:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def jp(self):
        """Message field 'jp'."""
        return self._jp

    @jp.setter
    def jp(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'jp' array.array() must have the type code of 'd'"
            self._jp = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'jp' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._jp = array.array('d', value)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value

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


class Metaclass_QueryInverseKinematics(type):
    """Metaclass of service 'QueryInverseKinematics'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crtk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crtk_msgs.srv.QueryInverseKinematics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__query_inverse_kinematics

            from crtk_msgs.srv import _query_inverse_kinematics
            if _query_inverse_kinematics.Metaclass_QueryInverseKinematics_Request._TYPE_SUPPORT is None:
                _query_inverse_kinematics.Metaclass_QueryInverseKinematics_Request.__import_type_support__()
            if _query_inverse_kinematics.Metaclass_QueryInverseKinematics_Response._TYPE_SUPPORT is None:
                _query_inverse_kinematics.Metaclass_QueryInverseKinematics_Response.__import_type_support__()


class QueryInverseKinematics(metaclass=Metaclass_QueryInverseKinematics):
    from crtk_msgs.srv._query_inverse_kinematics import QueryInverseKinematics_Request as Request
    from crtk_msgs.srv._query_inverse_kinematics import QueryInverseKinematics_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
