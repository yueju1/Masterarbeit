// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from calibration_interface:srv/GripperCalibration.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__FUNCTIONS_H_
#define CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "calibration_interface/msg/rosidl_generator_c__visibility_control.h"

#include "calibration_interface/srv/detail/gripper_calibration__struct.h"

/// Initialize srv/GripperCalibration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * calibration_interface__srv__GripperCalibration_Request
 * )) before or use
 * calibration_interface__srv__GripperCalibration_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Request__init(calibration_interface__srv__GripperCalibration_Request * msg);

/// Finalize srv/GripperCalibration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
void
calibration_interface__srv__GripperCalibration_Request__fini(calibration_interface__srv__GripperCalibration_Request * msg);

/// Create srv/GripperCalibration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * calibration_interface__srv__GripperCalibration_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
calibration_interface__srv__GripperCalibration_Request *
calibration_interface__srv__GripperCalibration_Request__create();

/// Destroy srv/GripperCalibration message.
/**
 * It calls
 * calibration_interface__srv__GripperCalibration_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
void
calibration_interface__srv__GripperCalibration_Request__destroy(calibration_interface__srv__GripperCalibration_Request * msg);

/// Check for srv/GripperCalibration message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Request__are_equal(const calibration_interface__srv__GripperCalibration_Request * lhs, const calibration_interface__srv__GripperCalibration_Request * rhs);

/// Copy a srv/GripperCalibration message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Request__copy(
  const calibration_interface__srv__GripperCalibration_Request * input,
  calibration_interface__srv__GripperCalibration_Request * output);

/// Initialize array of srv/GripperCalibration messages.
/**
 * It allocates the memory for the number of elements and calls
 * calibration_interface__srv__GripperCalibration_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Request__Sequence__init(calibration_interface__srv__GripperCalibration_Request__Sequence * array, size_t size);

/// Finalize array of srv/GripperCalibration messages.
/**
 * It calls
 * calibration_interface__srv__GripperCalibration_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
void
calibration_interface__srv__GripperCalibration_Request__Sequence__fini(calibration_interface__srv__GripperCalibration_Request__Sequence * array);

/// Create array of srv/GripperCalibration messages.
/**
 * It allocates the memory for the array and calls
 * calibration_interface__srv__GripperCalibration_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
calibration_interface__srv__GripperCalibration_Request__Sequence *
calibration_interface__srv__GripperCalibration_Request__Sequence__create(size_t size);

/// Destroy array of srv/GripperCalibration messages.
/**
 * It calls
 * calibration_interface__srv__GripperCalibration_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
void
calibration_interface__srv__GripperCalibration_Request__Sequence__destroy(calibration_interface__srv__GripperCalibration_Request__Sequence * array);

/// Check for srv/GripperCalibration message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Request__Sequence__are_equal(const calibration_interface__srv__GripperCalibration_Request__Sequence * lhs, const calibration_interface__srv__GripperCalibration_Request__Sequence * rhs);

/// Copy an array of srv/GripperCalibration messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Request__Sequence__copy(
  const calibration_interface__srv__GripperCalibration_Request__Sequence * input,
  calibration_interface__srv__GripperCalibration_Request__Sequence * output);

/// Initialize srv/GripperCalibration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * calibration_interface__srv__GripperCalibration_Response
 * )) before or use
 * calibration_interface__srv__GripperCalibration_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Response__init(calibration_interface__srv__GripperCalibration_Response * msg);

/// Finalize srv/GripperCalibration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
void
calibration_interface__srv__GripperCalibration_Response__fini(calibration_interface__srv__GripperCalibration_Response * msg);

/// Create srv/GripperCalibration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * calibration_interface__srv__GripperCalibration_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
calibration_interface__srv__GripperCalibration_Response *
calibration_interface__srv__GripperCalibration_Response__create();

/// Destroy srv/GripperCalibration message.
/**
 * It calls
 * calibration_interface__srv__GripperCalibration_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
void
calibration_interface__srv__GripperCalibration_Response__destroy(calibration_interface__srv__GripperCalibration_Response * msg);

/// Check for srv/GripperCalibration message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Response__are_equal(const calibration_interface__srv__GripperCalibration_Response * lhs, const calibration_interface__srv__GripperCalibration_Response * rhs);

/// Copy a srv/GripperCalibration message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Response__copy(
  const calibration_interface__srv__GripperCalibration_Response * input,
  calibration_interface__srv__GripperCalibration_Response * output);

/// Initialize array of srv/GripperCalibration messages.
/**
 * It allocates the memory for the number of elements and calls
 * calibration_interface__srv__GripperCalibration_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Response__Sequence__init(calibration_interface__srv__GripperCalibration_Response__Sequence * array, size_t size);

/// Finalize array of srv/GripperCalibration messages.
/**
 * It calls
 * calibration_interface__srv__GripperCalibration_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
void
calibration_interface__srv__GripperCalibration_Response__Sequence__fini(calibration_interface__srv__GripperCalibration_Response__Sequence * array);

/// Create array of srv/GripperCalibration messages.
/**
 * It allocates the memory for the array and calls
 * calibration_interface__srv__GripperCalibration_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
calibration_interface__srv__GripperCalibration_Response__Sequence *
calibration_interface__srv__GripperCalibration_Response__Sequence__create(size_t size);

/// Destroy array of srv/GripperCalibration messages.
/**
 * It calls
 * calibration_interface__srv__GripperCalibration_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
void
calibration_interface__srv__GripperCalibration_Response__Sequence__destroy(calibration_interface__srv__GripperCalibration_Response__Sequence * array);

/// Check for srv/GripperCalibration message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Response__Sequence__are_equal(const calibration_interface__srv__GripperCalibration_Response__Sequence * lhs, const calibration_interface__srv__GripperCalibration_Response__Sequence * rhs);

/// Copy an array of srv/GripperCalibration messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_calibration_interface
bool
calibration_interface__srv__GripperCalibration_Response__Sequence__copy(
  const calibration_interface__srv__GripperCalibration_Response__Sequence * input,
  calibration_interface__srv__GripperCalibration_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__FUNCTIONS_H_
