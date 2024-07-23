// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from calibration_interface:srv/GripperCalibration.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__STRUCT_HPP_
#define CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__calibration_interface__srv__GripperCalibration_Request __attribute__((deprecated))
#else
# define DEPRECATED__calibration_interface__srv__GripperCalibration_Request __declspec(deprecated)
#endif

namespace calibration_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperCalibration_Request_
{
  using Type = GripperCalibration_Request_<ContainerAllocator>;

  explicit GripperCalibration_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->execute_calibration = false;
      this->calibration_sim = false;
      this->calibration_real = false;
    }
  }

  explicit GripperCalibration_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->execute_calibration = false;
      this->calibration_sim = false;
      this->calibration_real = false;
    }
  }

  // field types and members
  using _execute_calibration_type =
    bool;
  _execute_calibration_type execute_calibration;
  using _calibration_sim_type =
    bool;
  _calibration_sim_type calibration_sim;
  using _calibration_real_type =
    bool;
  _calibration_real_type calibration_real;

  // setters for named parameter idiom
  Type & set__execute_calibration(
    const bool & _arg)
  {
    this->execute_calibration = _arg;
    return *this;
  }
  Type & set__calibration_sim(
    const bool & _arg)
  {
    this->calibration_sim = _arg;
    return *this;
  }
  Type & set__calibration_real(
    const bool & _arg)
  {
    this->calibration_real = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__calibration_interface__srv__GripperCalibration_Request
    std::shared_ptr<calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__calibration_interface__srv__GripperCalibration_Request
    std::shared_ptr<calibration_interface::srv::GripperCalibration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCalibration_Request_ & other) const
  {
    if (this->execute_calibration != other.execute_calibration) {
      return false;
    }
    if (this->calibration_sim != other.calibration_sim) {
      return false;
    }
    if (this->calibration_real != other.calibration_real) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCalibration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCalibration_Request_

// alias to use template instance with default allocator
using GripperCalibration_Request =
  calibration_interface::srv::GripperCalibration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace calibration_interface


#ifndef _WIN32
# define DEPRECATED__calibration_interface__srv__GripperCalibration_Response __attribute__((deprecated))
#else
# define DEPRECATED__calibration_interface__srv__GripperCalibration_Response __declspec(deprecated)
#endif

namespace calibration_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperCalibration_Response_
{
  using Type = GripperCalibration_Response_<ContainerAllocator>;

  explicit GripperCalibration_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GripperCalibration_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__calibration_interface__srv__GripperCalibration_Response
    std::shared_ptr<calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__calibration_interface__srv__GripperCalibration_Response
    std::shared_ptr<calibration_interface::srv::GripperCalibration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCalibration_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCalibration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCalibration_Response_

// alias to use template instance with default allocator
using GripperCalibration_Response =
  calibration_interface::srv::GripperCalibration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace calibration_interface

namespace calibration_interface
{

namespace srv
{

struct GripperCalibration
{
  using Request = calibration_interface::srv::GripperCalibration_Request;
  using Response = calibration_interface::srv::GripperCalibration_Response;
};

}  // namespace srv

}  // namespace calibration_interface

#endif  // CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__STRUCT_HPP_
