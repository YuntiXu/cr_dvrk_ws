# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cisst_msgs:msg/IntervalStatistics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IntervalStatistics(type):
    """Metaclass of message 'IntervalStatistics'."""

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
            module = import_type_support('cisst_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cisst_msgs.msg.IntervalStatistics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__interval_statistics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__interval_statistics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__interval_statistics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__interval_statistics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__interval_statistics

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


class IntervalStatistics(metaclass=Metaclass_IntervalStatistics):
    """Message class 'IntervalStatistics'."""

    __slots__ = [
        '_header',
        '_period_avg',
        '_period_std_dev',
        '_period_min',
        '_period_max',
        '_compute_time_avg',
        '_compute_time_std_dev',
        '_compute_time_min',
        '_compute_time_max',
        '_number_of_samples',
        '_number_of_overruns',
        '_statistics_interval',
        '_user_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'period_avg': 'double',
        'period_std_dev': 'double',
        'period_min': 'double',
        'period_max': 'double',
        'compute_time_avg': 'double',
        'compute_time_std_dev': 'double',
        'compute_time_min': 'double',
        'compute_time_max': 'double',
        'number_of_samples': 'int64',
        'number_of_overruns': 'int64',
        'statistics_interval': 'double',
        'user_data': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.period_avg = kwargs.get('period_avg', float())
        self.period_std_dev = kwargs.get('period_std_dev', float())
        self.period_min = kwargs.get('period_min', float())
        self.period_max = kwargs.get('period_max', float())
        self.compute_time_avg = kwargs.get('compute_time_avg', float())
        self.compute_time_std_dev = kwargs.get('compute_time_std_dev', float())
        self.compute_time_min = kwargs.get('compute_time_min', float())
        self.compute_time_max = kwargs.get('compute_time_max', float())
        self.number_of_samples = kwargs.get('number_of_samples', int())
        self.number_of_overruns = kwargs.get('number_of_overruns', int())
        self.statistics_interval = kwargs.get('statistics_interval', float())
        self.user_data = kwargs.get('user_data', int())

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
        if self.period_avg != other.period_avg:
            return False
        if self.period_std_dev != other.period_std_dev:
            return False
        if self.period_min != other.period_min:
            return False
        if self.period_max != other.period_max:
            return False
        if self.compute_time_avg != other.compute_time_avg:
            return False
        if self.compute_time_std_dev != other.compute_time_std_dev:
            return False
        if self.compute_time_min != other.compute_time_min:
            return False
        if self.compute_time_max != other.compute_time_max:
            return False
        if self.number_of_samples != other.number_of_samples:
            return False
        if self.number_of_overruns != other.number_of_overruns:
            return False
        if self.statistics_interval != other.statistics_interval:
            return False
        if self.user_data != other.user_data:
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
    def period_avg(self):
        """Message field 'period_avg'."""
        return self._period_avg

    @period_avg.setter
    def period_avg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'period_avg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'period_avg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._period_avg = value

    @builtins.property
    def period_std_dev(self):
        """Message field 'period_std_dev'."""
        return self._period_std_dev

    @period_std_dev.setter
    def period_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'period_std_dev' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'period_std_dev' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._period_std_dev = value

    @builtins.property
    def period_min(self):
        """Message field 'period_min'."""
        return self._period_min

    @period_min.setter
    def period_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'period_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'period_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._period_min = value

    @builtins.property
    def period_max(self):
        """Message field 'period_max'."""
        return self._period_max

    @period_max.setter
    def period_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'period_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'period_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._period_max = value

    @builtins.property
    def compute_time_avg(self):
        """Message field 'compute_time_avg'."""
        return self._compute_time_avg

    @compute_time_avg.setter
    def compute_time_avg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'compute_time_avg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'compute_time_avg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._compute_time_avg = value

    @builtins.property
    def compute_time_std_dev(self):
        """Message field 'compute_time_std_dev'."""
        return self._compute_time_std_dev

    @compute_time_std_dev.setter
    def compute_time_std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'compute_time_std_dev' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'compute_time_std_dev' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._compute_time_std_dev = value

    @builtins.property
    def compute_time_min(self):
        """Message field 'compute_time_min'."""
        return self._compute_time_min

    @compute_time_min.setter
    def compute_time_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'compute_time_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'compute_time_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._compute_time_min = value

    @builtins.property
    def compute_time_max(self):
        """Message field 'compute_time_max'."""
        return self._compute_time_max

    @compute_time_max.setter
    def compute_time_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'compute_time_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'compute_time_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._compute_time_max = value

    @builtins.property
    def number_of_samples(self):
        """Message field 'number_of_samples'."""
        return self._number_of_samples

    @number_of_samples.setter
    def number_of_samples(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_samples' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'number_of_samples' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._number_of_samples = value

    @builtins.property
    def number_of_overruns(self):
        """Message field 'number_of_overruns'."""
        return self._number_of_overruns

    @number_of_overruns.setter
    def number_of_overruns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_overruns' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'number_of_overruns' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._number_of_overruns = value

    @builtins.property
    def statistics_interval(self):
        """Message field 'statistics_interval'."""
        return self._statistics_interval

    @statistics_interval.setter
    def statistics_interval(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'statistics_interval' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'statistics_interval' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._statistics_interval = value

    @builtins.property
    def user_data(self):
        """Message field 'user_data'."""
        return self._user_data

    @user_data.setter
    def user_data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'user_data' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'user_data' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._user_data = value
