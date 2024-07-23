// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from calibration_interface:srv/GripperCalibration.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__BUILDER_HPP_
#define CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "calibration_interface/srv/detail/gripper_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace calibration_interface
{

namespace srv
{

namespace builder
{

class Init_GripperCalibration_Request_calibration_real
{
public:
  explicit Init_GripperCalibration_Request_calibration_real(::calibration_interface::srv::GripperCalibration_Request & msg)
  : msg_(msg)
  {}
  ::calibration_interface::srv::GripperCalibration_Request calibration_real(::calibration_interface::srv::GripperCalibration_Request::_calibration_real_type arg)
  {
    msg_.calibration_real = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration_interface::srv::GripperCalibration_Request msg_;
};

class Init_GripperCalibration_Request_calibration_sim
{
public:
  explicit Init_GripperCalibration_Request_calibration_sim(::calibration_interface::srv::GripperCalibration_Request & msg)
  : msg_(msg)
  {}
  Init_GripperCalibration_Request_calibration_real calibration_sim(::calibration_interface::srv::GripperCalibration_Request::_calibration_sim_type arg)
  {
    msg_.calibration_sim = std::move(arg);
    return Init_GripperCalibration_Request_calibration_real(msg_);
  }

private:
  ::calibration_interface::srv::GripperCalibration_Request msg_;
};

class Init_GripperCalibration_Request_execute_calibration
{
public:
  Init_GripperCalibration_Request_execute_calibration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCalibration_Request_calibration_sim execute_calibration(::calibration_interface::srv::GripperCalibration_Request::_execute_calibration_type arg)
  {
    msg_.execute_calibration = std::move(arg);
    return Init_GripperCalibration_Request_calibration_sim(msg_);
  }

private:
  ::calibration_interface::srv::GripperCalibration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration_interface::srv::GripperCalibration_Request>()
{
  return calibration_interface::srv::builder::Init_GripperCalibration_Request_execute_calibration();
}

}  // namespace calibration_interface


namespace calibration_interface
{

namespace srv
{

namespace builder
{

class Init_GripperCalibration_Response_success
{
public:
  Init_GripperCalibration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::calibration_interface::srv::GripperCalibration_Response success(::calibration_interface::srv::GripperCalibration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration_interface::srv::GripperCalibration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration_interface::srv::GripperCalibration_Response>()
{
  return calibration_interface::srv::builder::Init_GripperCalibration_Response_success();
}

}  // namespace calibration_interface

#endif  // CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__BUILDER_HPP_
