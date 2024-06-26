// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from calibration_interface:srv/CalibrateGripper.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION_INTERFACE__SRV__DETAIL__CALIBRATE_GRIPPER__BUILDER_HPP_
#define CALIBRATION_INTERFACE__SRV__DETAIL__CALIBRATE_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "calibration_interface/srv/detail/calibrate_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace calibration_interface
{

namespace srv
{

namespace builder
{

class Init_CalibrateGripper_Request_excute_calibration
{
public:
  Init_CalibrateGripper_Request_excute_calibration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::calibration_interface::srv::CalibrateGripper_Request excute_calibration(::calibration_interface::srv::CalibrateGripper_Request::_excute_calibration_type arg)
  {
    msg_.excute_calibration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration_interface::srv::CalibrateGripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration_interface::srv::CalibrateGripper_Request>()
{
  return calibration_interface::srv::builder::Init_CalibrateGripper_Request_excute_calibration();
}

}  // namespace calibration_interface


namespace calibration_interface
{

namespace srv
{

namespace builder
{

class Init_CalibrateGripper_Response_success
{
public:
  Init_CalibrateGripper_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::calibration_interface::srv::CalibrateGripper_Response success(::calibration_interface::srv::CalibrateGripper_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::calibration_interface::srv::CalibrateGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::calibration_interface::srv::CalibrateGripper_Response>()
{
  return calibration_interface::srv::builder::Init_CalibrateGripper_Response_success();
}

}  // namespace calibration_interface

#endif  // CALIBRATION_INTERFACE__SRV__DETAIL__CALIBRATE_GRIPPER__BUILDER_HPP_
