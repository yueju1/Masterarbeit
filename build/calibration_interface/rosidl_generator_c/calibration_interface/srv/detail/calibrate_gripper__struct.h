// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from calibration_interface:srv/CalibrateGripper.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION_INTERFACE__SRV__DETAIL__CALIBRATE_GRIPPER__STRUCT_H_
#define CALIBRATION_INTERFACE__SRV__DETAIL__CALIBRATE_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CalibrateGripper in the package calibration_interface.
typedef struct calibration_interface__srv__CalibrateGripper_Request
{
  bool excute_calibration;
} calibration_interface__srv__CalibrateGripper_Request;

// Struct for a sequence of calibration_interface__srv__CalibrateGripper_Request.
typedef struct calibration_interface__srv__CalibrateGripper_Request__Sequence
{
  calibration_interface__srv__CalibrateGripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration_interface__srv__CalibrateGripper_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CalibrateGripper in the package calibration_interface.
typedef struct calibration_interface__srv__CalibrateGripper_Response
{
  bool success;
} calibration_interface__srv__CalibrateGripper_Response;

// Struct for a sequence of calibration_interface__srv__CalibrateGripper_Response.
typedef struct calibration_interface__srv__CalibrateGripper_Response__Sequence
{
  calibration_interface__srv__CalibrateGripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} calibration_interface__srv__CalibrateGripper_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CALIBRATION_INTERFACE__SRV__DETAIL__CALIBRATE_GRIPPER__STRUCT_H_
