// generated from rosidl_generator_cs/resource/idl.c.em
// with input from calibration_interface:srv/GripperCalibration.idl
// generated code does not contain a copyright notice




#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <calibration_interface/srv/gripper_calibration.h>
#include <rosidl_runtime_c/visibility_control.h>


ROSIDL_GENERATOR_C_EXPORT
bool calibration_interface__srv__GripperCalibration_Request_native_read_field_execute_calibration(void *message_handle)
{
  calibration_interface__srv__GripperCalibration_Request *ros_message = (calibration_interface__srv__GripperCalibration_Request *)message_handle;
  return ros_message->execute_calibration;
}
ROSIDL_GENERATOR_C_EXPORT
bool calibration_interface__srv__GripperCalibration_Request_native_read_field_calibration_sim(void *message_handle)
{
  calibration_interface__srv__GripperCalibration_Request *ros_message = (calibration_interface__srv__GripperCalibration_Request *)message_handle;
  return ros_message->calibration_sim;
}
ROSIDL_GENERATOR_C_EXPORT
bool calibration_interface__srv__GripperCalibration_Request_native_read_field_calibration_real(void *message_handle)
{
  calibration_interface__srv__GripperCalibration_Request *ros_message = (calibration_interface__srv__GripperCalibration_Request *)message_handle;
  return ros_message->calibration_real;
}


ROSIDL_GENERATOR_C_EXPORT
void calibration_interface__srv__GripperCalibration_Request_native_write_field_execute_calibration(void *message_handle, bool value)
{
  calibration_interface__srv__GripperCalibration_Request *ros_message = (calibration_interface__srv__GripperCalibration_Request *)message_handle;
  ros_message->execute_calibration = value;
}
ROSIDL_GENERATOR_C_EXPORT
void calibration_interface__srv__GripperCalibration_Request_native_write_field_calibration_sim(void *message_handle, bool value)
{
  calibration_interface__srv__GripperCalibration_Request *ros_message = (calibration_interface__srv__GripperCalibration_Request *)message_handle;
  ros_message->calibration_sim = value;
}
ROSIDL_GENERATOR_C_EXPORT
void calibration_interface__srv__GripperCalibration_Request_native_write_field_calibration_real(void *message_handle, bool value)
{
  calibration_interface__srv__GripperCalibration_Request *ros_message = (calibration_interface__srv__GripperCalibration_Request *)message_handle;
  ros_message->calibration_real = value;
}












ROSIDL_GENERATOR_C_EXPORT
bool calibration_interface__srv__GripperCalibration_Response_native_read_field_success(void *message_handle)
{
  calibration_interface__srv__GripperCalibration_Response *ros_message = (calibration_interface__srv__GripperCalibration_Response *)message_handle;
  return ros_message->success;
}


ROSIDL_GENERATOR_C_EXPORT
void calibration_interface__srv__GripperCalibration_Response_native_write_field_success(void *message_handle, bool value)
{
  calibration_interface__srv__GripperCalibration_Response *ros_message = (calibration_interface__srv__GripperCalibration_Response *)message_handle;
  ros_message->success = value;
}








