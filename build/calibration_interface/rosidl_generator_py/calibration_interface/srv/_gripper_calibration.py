# generated from rosidl_generator_py/resource/_idl.py.em
# with input from calibration_interface:srv/GripperCalibration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GripperCalibration_Request(type):
    """Metaclass of message 'GripperCalibration_Request'."""

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
            module = import_type_support('calibration_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'calibration_interface.srv.GripperCalibration_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper_calibration__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper_calibration__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper_calibration__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper_calibration__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper_calibration__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperCalibration_Request(metaclass=Metaclass_GripperCalibration_Request):
    """Message class 'GripperCalibration_Request'."""

    __slots__ = [
        '_execute_calibration',
        '_calibration_sim',
        '_calibration_real',
    ]

    _fields_and_field_types = {
        'execute_calibration': 'boolean',
        'calibration_sim': 'boolean',
        'calibration_real': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.execute_calibration = kwargs.get('execute_calibration', bool())
        self.calibration_sim = kwargs.get('calibration_sim', bool())
        self.calibration_real = kwargs.get('calibration_real', bool())

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
        if self.execute_calibration != other.execute_calibration:
            return False
        if self.calibration_sim != other.calibration_sim:
            return False
        if self.calibration_real != other.calibration_real:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def execute_calibration(self):
        """Message field 'execute_calibration'."""
        return self._execute_calibration

    @execute_calibration.setter
    def execute_calibration(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'execute_calibration' field must be of type 'bool'"
        self._execute_calibration = value

    @builtins.property
    def calibration_sim(self):
        """Message field 'calibration_sim'."""
        return self._calibration_sim

    @calibration_sim.setter
    def calibration_sim(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibration_sim' field must be of type 'bool'"
        self._calibration_sim = value

    @builtins.property
    def calibration_real(self):
        """Message field 'calibration_real'."""
        return self._calibration_real

    @calibration_real.setter
    def calibration_real(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibration_real' field must be of type 'bool'"
        self._calibration_real = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GripperCalibration_Response(type):
    """Metaclass of message 'GripperCalibration_Response'."""

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
            module = import_type_support('calibration_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'calibration_interface.srv.GripperCalibration_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper_calibration__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper_calibration__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper_calibration__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper_calibration__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper_calibration__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperCalibration_Response(metaclass=Metaclass_GripperCalibration_Response):
    """Message class 'GripperCalibration_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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


class Metaclass_GripperCalibration(type):
    """Metaclass of service 'GripperCalibration'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('calibration_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'calibration_interface.srv.GripperCalibration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__gripper_calibration

            from calibration_interface.srv import _gripper_calibration
            if _gripper_calibration.Metaclass_GripperCalibration_Request._TYPE_SUPPORT is None:
                _gripper_calibration.Metaclass_GripperCalibration_Request.__import_type_support__()
            if _gripper_calibration.Metaclass_GripperCalibration_Response._TYPE_SUPPORT is None:
                _gripper_calibration.Metaclass_GripperCalibration_Response.__import_type_support__()


class GripperCalibration(metaclass=Metaclass_GripperCalibration):
    from calibration_interface.srv._gripper_calibration import GripperCalibration_Request as Request
    from calibration_interface.srv._gripper_calibration import GripperCalibration_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
