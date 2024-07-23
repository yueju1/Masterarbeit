// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from calibration_interface:srv/GripperCalibration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "calibration_interface/srv/detail/gripper_calibration__rosidl_typesupport_introspection_c.h"
#include "calibration_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "calibration_interface/srv/detail/gripper_calibration__functions.h"
#include "calibration_interface/srv/detail/gripper_calibration__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration_interface__srv__GripperCalibration_Request__init(message_memory);
}

void calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_fini_function(void * message_memory)
{
  calibration_interface__srv__GripperCalibration_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_message_member_array[3] = {
  {
    "execute_calibration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration_interface__srv__GripperCalibration_Request, execute_calibration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_sim",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration_interface__srv__GripperCalibration_Request, calibration_sim),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_real",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration_interface__srv__GripperCalibration_Request, calibration_real),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_message_members = {
  "calibration_interface__srv",  // message namespace
  "GripperCalibration_Request",  // message name
  3,  // number of fields
  sizeof(calibration_interface__srv__GripperCalibration_Request),
  calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_message_member_array,  // message members
  calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_message_type_support_handle = {
  0,
  &calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration_interface, srv, GripperCalibration_Request)() {
  if (!calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_message_type_support_handle.typesupport_identifier) {
    calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &calibration_interface__srv__GripperCalibration_Request__rosidl_typesupport_introspection_c__GripperCalibration_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "calibration_interface/srv/detail/gripper_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "calibration_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "calibration_interface/srv/detail/gripper_calibration__functions.h"
// already included above
// #include "calibration_interface/srv/detail/gripper_calibration__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  calibration_interface__srv__GripperCalibration_Response__init(message_memory);
}

void calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_fini_function(void * message_memory)
{
  calibration_interface__srv__GripperCalibration_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(calibration_interface__srv__GripperCalibration_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_message_members = {
  "calibration_interface__srv",  // message namespace
  "GripperCalibration_Response",  // message name
  1,  // number of fields
  sizeof(calibration_interface__srv__GripperCalibration_Response),
  calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_message_member_array,  // message members
  calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_message_type_support_handle = {
  0,
  &calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration_interface, srv, GripperCalibration_Response)() {
  if (!calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_message_type_support_handle.typesupport_identifier) {
    calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &calibration_interface__srv__GripperCalibration_Response__rosidl_typesupport_introspection_c__GripperCalibration_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "calibration_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "calibration_interface/srv/detail/gripper_calibration__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers calibration_interface__srv__detail__gripper_calibration__rosidl_typesupport_introspection_c__GripperCalibration_service_members = {
  "calibration_interface__srv",  // service namespace
  "GripperCalibration",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // calibration_interface__srv__detail__gripper_calibration__rosidl_typesupport_introspection_c__GripperCalibration_Request_message_type_support_handle,
  NULL  // response message
  // calibration_interface__srv__detail__gripper_calibration__rosidl_typesupport_introspection_c__GripperCalibration_Response_message_type_support_handle
};

static rosidl_service_type_support_t calibration_interface__srv__detail__gripper_calibration__rosidl_typesupport_introspection_c__GripperCalibration_service_type_support_handle = {
  0,
  &calibration_interface__srv__detail__gripper_calibration__rosidl_typesupport_introspection_c__GripperCalibration_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration_interface, srv, GripperCalibration_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration_interface, srv, GripperCalibration_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_calibration_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration_interface, srv, GripperCalibration)() {
  if (!calibration_interface__srv__detail__gripper_calibration__rosidl_typesupport_introspection_c__GripperCalibration_service_type_support_handle.typesupport_identifier) {
    calibration_interface__srv__detail__gripper_calibration__rosidl_typesupport_introspection_c__GripperCalibration_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)calibration_interface__srv__detail__gripper_calibration__rosidl_typesupport_introspection_c__GripperCalibration_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration_interface, srv, GripperCalibration_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration_interface, srv, GripperCalibration_Response)()->data;
  }

  return &calibration_interface__srv__detail__gripper_calibration__rosidl_typesupport_introspection_c__GripperCalibration_service_type_support_handle;
}
