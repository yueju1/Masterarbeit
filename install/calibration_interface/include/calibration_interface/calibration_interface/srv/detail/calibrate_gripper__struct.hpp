// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from calibration_interface:srv/CalibrateGripper.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION_INTERFACE__SRV__DETAIL__CALIBRATE_GRIPPER__STRUCT_HPP_
#define CALIBRATION_INTERFACE__SRV__DETAIL__CALIBRATE_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__calibration_interface__srv__CalibrateGripper_Request __attribute__((deprecated))
#else
# define DEPRECATED__calibration_interface__srv__CalibrateGripper_Request __declspec(deprecated)
#endif

namespace calibration_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalibrateGripper_Request_
{
  using Type = CalibrateGripper_Request_<ContainerAllocator>;

  explicit CalibrateGripper_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->excute_calibration = false;
    }
  }

  explicit CalibrateGripper_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->excute_calibration = false;
    }
  }

  // field types and members
  using _excute_calibration_type =
    bool;
  _excute_calibration_type excute_calibration;

  // setters for named parameter idiom
  Type & set__excute_calibration(
    const bool & _arg)
  {
    this->excute_calibration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__calibration_interface__srv__CalibrateGripper_Request
    std::shared_ptr<calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__calibration_interface__srv__CalibrateGripper_Request
    std::shared_ptr<calibration_interface::srv::CalibrateGripper_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalibrateGripper_Request_ & other) const
  {
    if (this->excute_calibration != other.excute_calibration) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalibrateGripper_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalibrateGripper_Request_

// alias to use template instance with default allocator
using CalibrateGripper_Request =
  calibration_interface::srv::CalibrateGripper_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace calibration_interface


#ifndef _WIN32
# define DEPRECATED__calibration_interface__srv__CalibrateGripper_Response __attribute__((deprecated))
#else
# define DEPRECATED__calibration_interface__srv__CalibrateGripper_Response __declspec(deprecated)
#endif

namespace calibration_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalibrateGripper_Response_
{
  using Type = CalibrateGripper_Response_<ContainerAllocator>;

  explicit CalibrateGripper_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit CalibrateGripper_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__calibration_interface__srv__CalibrateGripper_Response
    std::shared_ptr<calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__calibration_interface__srv__CalibrateGripper_Response
    std::shared_ptr<calibration_interface::srv::CalibrateGripper_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalibrateGripper_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalibrateGripper_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalibrateGripper_Response_

// alias to use template instance with default allocator
using CalibrateGripper_Response =
  calibration_interface::srv::CalibrateGripper_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace calibration_interface

namespace calibration_interface
{

namespace srv
{

struct CalibrateGripper
{
  using Request = calibration_interface::srv::CalibrateGripper_Request;
  using Response = calibration_interface::srv::CalibrateGripper_Response;
};

}  // namespace srv

}  // namespace calibration_interface

#endif  // CALIBRATION_INTERFACE__SRV__DETAIL__CALIBRATE_GRIPPER__STRUCT_HPP_
