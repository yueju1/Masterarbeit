// generated from rosidl_generator_cs/resource/idl.c.em
// with input from calibration_interface:srv/CalibrateGripper.idl
// generated code does not contain a copyright notice




#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <calibration_interface/srv/calibrate_gripper.h>
#include <rosidl_runtime_c/visibility_control.h>


ROSIDL_GENERATOR_C_EXPORT
bool calibration_interface__srv__CalibrateGripper_Request_native_read_field_excute_calibration(void *message_handle)
{
  calibration_interface__srv__CalibrateGripper_Request *ros_message = (calibration_interface__srv__CalibrateGripper_Request *)message_handle;
  return ros_message->excute_calibration;
}


ROSIDL_GENERATOR_C_EXPORT
void calibration_interface__srv__CalibrateGripper_Request_native_write_field_excute_calibration(void *message_handle, bool value)
{
  calibration_interface__srv__CalibrateGripper_Request *ros_message = (calibration_interface__srv__CalibrateGripper_Request *)message_handle;
  ros_message->excute_calibration = value;
}












ROSIDL_GENERATOR_C_EXPORT
bool calibration_interface__srv__CalibrateGripper_Response_native_read_field_success(void *message_handle)
{
  calibration_interface__srv__CalibrateGripper_Response *ros_message = (calibration_interface__srv__CalibrateGripper_Response *)message_handle;
  return ros_message->success;
}


ROSIDL_GENERATOR_C_EXPORT
void calibration_interface__srv__CalibrateGripper_Response_native_write_field_success(void *message_handle, bool value)
{
  calibration_interface__srv__CalibrateGripper_Response *ros_message = (calibration_interface__srv__CalibrateGripper_Response *)message_handle;
  ros_message->success = value;
}








