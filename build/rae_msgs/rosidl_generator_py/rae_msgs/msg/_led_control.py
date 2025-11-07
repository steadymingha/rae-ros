# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rae_msgs:msg/LEDControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LEDControl(type):
    """Metaclass of message 'LEDControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CTRL_TYPE_ALL': 0,
        'CTRL_TYPE_SINGLE': 1,
        'CTRL_TYPE_CUSTOM': 2,
        'DISP_TYPE_STD': 0,
        'DISP_TYPE_FLASH': 1,
        'DISP_TYPE_CIRCLE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rae_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rae_msgs.msg.LEDControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__led_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__led_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__led_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__led_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__led_control

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CTRL_TYPE_ALL': cls.__constants['CTRL_TYPE_ALL'],
            'CTRL_TYPE_SINGLE': cls.__constants['CTRL_TYPE_SINGLE'],
            'CTRL_TYPE_CUSTOM': cls.__constants['CTRL_TYPE_CUSTOM'],
            'DISP_TYPE_STD': cls.__constants['DISP_TYPE_STD'],
            'DISP_TYPE_FLASH': cls.__constants['DISP_TYPE_FLASH'],
            'DISP_TYPE_CIRCLE': cls.__constants['DISP_TYPE_CIRCLE'],
        }

    @property
    def CTRL_TYPE_ALL(self):
        """Message constant 'CTRL_TYPE_ALL'."""
        return Metaclass_LEDControl.__constants['CTRL_TYPE_ALL']

    @property
    def CTRL_TYPE_SINGLE(self):
        """Message constant 'CTRL_TYPE_SINGLE'."""
        return Metaclass_LEDControl.__constants['CTRL_TYPE_SINGLE']

    @property
    def CTRL_TYPE_CUSTOM(self):
        """Message constant 'CTRL_TYPE_CUSTOM'."""
        return Metaclass_LEDControl.__constants['CTRL_TYPE_CUSTOM']

    @property
    def DISP_TYPE_STD(self):
        """Message constant 'DISP_TYPE_STD'."""
        return Metaclass_LEDControl.__constants['DISP_TYPE_STD']

    @property
    def DISP_TYPE_FLASH(self):
        """Message constant 'DISP_TYPE_FLASH'."""
        return Metaclass_LEDControl.__constants['DISP_TYPE_FLASH']

    @property
    def DISP_TYPE_CIRCLE(self):
        """Message constant 'DISP_TYPE_CIRCLE'."""
        return Metaclass_LEDControl.__constants['DISP_TYPE_CIRCLE']


class LEDControl(metaclass=Metaclass_LEDControl):
    """
    Message class 'LEDControl'.

    Constants:
      CTRL_TYPE_ALL
      CTRL_TYPE_SINGLE
      CTRL_TYPE_CUSTOM
      DISP_TYPE_STD
      DISP_TYPE_FLASH
      DISP_TYPE_CIRCLE
    """

    __slots__ = [
        '_header',
        '_data',
        '_single_led_n',
        '_control_type',
        '_display_type',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'data': 'sequence<std_msgs/ColorRGBA>',
        'single_led_n': 'uint8',
        'control_type': 'uint8',
        'display_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.data = kwargs.get('data', [])
        self.single_led_n = kwargs.get('single_led_n', int())
        self.control_type = kwargs.get('control_type', int())
        self.display_type = kwargs.get('display_type', int())

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
        if self.data != other.data:
            return False
        if self.single_led_n != other.single_led_n:
            return False
        if self.control_type != other.control_type:
            return False
        if self.display_type != other.display_type:
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
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
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
                 all(isinstance(v, ColorRGBA) for v in value) and
                 True), \
                "The 'data' field must be a set or sequence and each value of type 'ColorRGBA'"
        self._data = value

    @builtins.property
    def single_led_n(self):
        """Message field 'single_led_n'."""
        return self._single_led_n

    @single_led_n.setter
    def single_led_n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'single_led_n' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'single_led_n' field must be an unsigned integer in [0, 255]"
        self._single_led_n = value

    @builtins.property
    def control_type(self):
        """Message field 'control_type'."""
        return self._control_type

    @control_type.setter
    def control_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'control_type' field must be an unsigned integer in [0, 255]"
        self._control_type = value

    @builtins.property
    def display_type(self):
        """Message field 'display_type'."""
        return self._display_type

    @display_type.setter
    def display_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'display_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'display_type' field must be an unsigned integer in [0, 255]"
        self._display_type = value
