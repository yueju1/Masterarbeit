// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from calibration_interface:srv/GripperCalibration.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__STRUCT_H_
#define CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GripperCalibration in the package calibration_interface.
typedef struct calibration_interface__srv__GripperCalibration_Request
{
  bool execute_calibration;
  bool calibration_sim;
  bool calibration_real;
} calibration_interface__srv__GripperCalibration_Request;

// Struct for a sequence of calibration_interface__srv__GripperCalibration_Request.
typedef struct calibration_interface__srv__GripperCalibration_Request__Sequence
{
  calibration_interface__srv__GripperCalibration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration_interface__srv__GripperCalibration_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GripperCalibration in the package calibration_interface.
typedef struct calibration_interface__srv__GripperCalibration_Response
{
  bool success;
} calibration_interface__srv__GripperCalibration_Response;

// Struct for a sequence of calibration_interface__srv__GripperCalibration_Response.
typedef struct calibration_interface__srv__GripperCalibration_Response__Sequence
{
  calibration_interface__srv__GripperCalibration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration_interface__srv__GripperCalibration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__STRUCT_H_
