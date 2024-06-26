// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from calibration_interface:srv/CalibrateGripper.idl
// generated code does not contain a copyright notice
#include "calibration_interface/srv/detail/calibrate_gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
calibration_interface__srv__CalibrateGripper_Request__init(calibration_interface__srv__CalibrateGripper_Request * msg)
{
  if (!msg) {
    return false;
  }
  // excute_calibration
  return true;
}

void
calibration_interface__srv__CalibrateGripper_Request__fini(calibration_interface__srv__CalibrateGripper_Request * msg)
{
  if (!msg) {
    return;
  }
  // excute_calibration
}

bool
calibration_interface__srv__CalibrateGripper_Request__are_equal(const calibration_interface__srv__CalibrateGripper_Request * lhs, const calibration_interface__srv__CalibrateGripper_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // excute_calibration
  if (lhs->excute_calibration != rhs->excute_calibration) {
    return false;
  }
  return true;
}

bool
calibration_interface__srv__CalibrateGripper_Request__copy(
  const calibration_interface__srv__CalibrateGripper_Request * input,
  calibration_interface__srv__CalibrateGripper_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // excute_calibration
  output->excute_calibration = input->excute_calibration;
  return true;
}

calibration_interface__srv__CalibrateGripper_Request *
calibration_interface__srv__CalibrateGripper_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calibration_interface__srv__CalibrateGripper_Request * msg = (calibration_interface__srv__CalibrateGripper_Request *)allocator.allocate(sizeof(calibration_interface__srv__CalibrateGripper_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(calibration_interface__srv__CalibrateGripper_Request));
  bool success = calibration_interface__srv__CalibrateGripper_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
calibration_interface__srv__CalibrateGripper_Request__destroy(calibration_interface__srv__CalibrateGripper_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    calibration_interface__srv__CalibrateGripper_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
calibration_interface__srv__CalibrateGripper_Request__Sequence__init(calibration_interface__srv__CalibrateGripper_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calibration_interface__srv__CalibrateGripper_Request * data = NULL;

  if (size) {
    data = (calibration_interface__srv__CalibrateGripper_Request *)allocator.zero_allocate(size, sizeof(calibration_interface__srv__CalibrateGripper_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = calibration_interface__srv__CalibrateGripper_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        calibration_interface__srv__CalibrateGripper_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
calibration_interface__srv__CalibrateGripper_Request__Sequence__fini(calibration_interface__srv__CalibrateGripper_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      calibration_interface__srv__CalibrateGripper_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

calibration_interface__srv__CalibrateGripper_Request__Sequence *
calibration_interface__srv__CalibrateGripper_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calibration_interface__srv__CalibrateGripper_Request__Sequence * array = (calibration_interface__srv__CalibrateGripper_Request__Sequence *)allocator.allocate(sizeof(calibration_interface__srv__CalibrateGripper_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = calibration_interface__srv__CalibrateGripper_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
calibration_interface__srv__CalibrateGripper_Request__Sequence__destroy(calibration_interface__srv__CalibrateGripper_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    calibration_interface__srv__CalibrateGripper_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
calibration_interface__srv__CalibrateGripper_Request__Sequence__are_equal(const calibration_interface__srv__CalibrateGripper_Request__Sequence * lhs, const calibration_interface__srv__CalibrateGripper_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!calibration_interface__srv__CalibrateGripper_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
calibration_interface__srv__CalibrateGripper_Request__Sequence__copy(
  const calibration_interface__srv__CalibrateGripper_Request__Sequence * input,
  calibration_interface__srv__CalibrateGripper_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(calibration_interface__srv__CalibrateGripper_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    calibration_interface__srv__CalibrateGripper_Request * data =
      (calibration_interface__srv__CalibrateGripper_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!calibration_interface__srv__CalibrateGripper_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          calibration_interface__srv__CalibrateGripper_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!calibration_interface__srv__CalibrateGripper_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
calibration_interface__srv__CalibrateGripper_Response__init(calibration_interface__srv__CalibrateGripper_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
calibration_interface__srv__CalibrateGripper_Response__fini(calibration_interface__srv__CalibrateGripper_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
calibration_interface__srv__CalibrateGripper_Response__are_equal(const calibration_interface__srv__CalibrateGripper_Response * lhs, const calibration_interface__srv__CalibrateGripper_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
calibration_interface__srv__CalibrateGripper_Response__copy(
  const calibration_interface__srv__CalibrateGripper_Response * input,
  calibration_interface__srv__CalibrateGripper_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

calibration_interface__srv__CalibrateGripper_Response *
calibration_interface__srv__CalibrateGripper_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calibration_interface__srv__CalibrateGripper_Response * msg = (calibration_interface__srv__CalibrateGripper_Response *)allocator.allocate(sizeof(calibration_interface__srv__CalibrateGripper_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(calibration_interface__srv__CalibrateGripper_Response));
  bool success = calibration_interface__srv__CalibrateGripper_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
calibration_interface__srv__CalibrateGripper_Response__destroy(calibration_interface__srv__CalibrateGripper_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    calibration_interface__srv__CalibrateGripper_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
calibration_interface__srv__CalibrateGripper_Response__Sequence__init(calibration_interface__srv__CalibrateGripper_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calibration_interface__srv__CalibrateGripper_Response * data = NULL;

  if (size) {
    data = (calibration_interface__srv__CalibrateGripper_Response *)allocator.zero_allocate(size, sizeof(calibration_interface__srv__CalibrateGripper_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = calibration_interface__srv__CalibrateGripper_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        calibration_interface__srv__CalibrateGripper_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
calibration_interface__srv__CalibrateGripper_Response__Sequence__fini(calibration_interface__srv__CalibrateGripper_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      calibration_interface__srv__CalibrateGripper_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

calibration_interface__srv__CalibrateGripper_Response__Sequence *
calibration_interface__srv__CalibrateGripper_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  calibration_interface__srv__CalibrateGripper_Response__Sequence * array = (calibration_interface__srv__CalibrateGripper_Response__Sequence *)allocator.allocate(sizeof(calibration_interface__srv__CalibrateGripper_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = calibration_interface__srv__CalibrateGripper_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
calibration_interface__srv__CalibrateGripper_Response__Sequence__destroy(calibration_interface__srv__CalibrateGripper_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    calibration_interface__srv__CalibrateGripper_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
calibration_interface__srv__CalibrateGripper_Response__Sequence__are_equal(const calibration_interface__srv__CalibrateGripper_Response__Sequence * lhs, const calibration_interface__srv__CalibrateGripper_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!calibration_interface__srv__CalibrateGripper_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
calibration_interface__srv__CalibrateGripper_Response__Sequence__copy(
  const calibration_interface__srv__CalibrateGripper_Response__Sequence * input,
  calibration_interface__srv__CalibrateGripper_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(calibration_interface__srv__CalibrateGripper_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    calibration_interface__srv__CalibrateGripper_Response * data =
      (calibration_interface__srv__CalibrateGripper_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!calibration_interface__srv__CalibrateGripper_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          calibration_interface__srv__CalibrateGripper_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!calibration_interface__srv__CalibrateGripper_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
