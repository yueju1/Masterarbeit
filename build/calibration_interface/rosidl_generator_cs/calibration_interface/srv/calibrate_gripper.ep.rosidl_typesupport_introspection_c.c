// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from calibration_interface:srv/CalibrateGripper.idl
// generated code does not contain a copyright notice







#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <calibration_interface/srv/calibrate_gripper.h>

ROSIDL_GENERATOR_C_EXPORT
void * calibration_interface__srv__CalibrateGripper_Request_native_get_type_support()
{
    return (void *)ROSIDL_GET_SRV_TYPE_SUPPORT(calibration_interface, srv, CalibrateGripper);
}

ROSIDL_GENERATOR_C_EXPORT
void *calibration_interface__srv__CalibrateGripper_Request_native_create_native_message()
{
   calibration_interface__srv__CalibrateGripper_Request *ros_message = calibration_interface__srv__CalibrateGripper_Request__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void calibration_interface__srv__CalibrateGripper_Request_native_destroy_native_message(void *raw_ros_message) {
  calibration_interface__srv__CalibrateGripper_Request *ros_message = (calibration_interface__srv__CalibrateGripper_Request *)raw_ros_message;
  calibration_interface__srv__CalibrateGripper_Request__destroy(ros_message);
}







ROSIDL_GENERATOR_C_EXPORT
void * calibration_interface__srv__CalibrateGripper_Response_native_get_type_support()
{
    return (void *)ROSIDL_GET_SRV_TYPE_SUPPORT(calibration_interface, srv, CalibrateGripper);
}

ROSIDL_GENERATOR_C_EXPORT
void *calibration_interface__srv__CalibrateGripper_Response_native_create_native_message()
{
   calibration_interface__srv__CalibrateGripper_Response *ros_message = calibration_interface__srv__CalibrateGripper_Response__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void calibration_interface__srv__CalibrateGripper_Response_native_destroy_native_message(void *raw_ros_message) {
  calibration_interface__srv__CalibrateGripper_Response *ros_message = (calibration_interface__srv__CalibrateGripper_Response *)raw_ros_message;
  calibration_interface__srv__CalibrateGripper_Response__destroy(ros_message);
}

