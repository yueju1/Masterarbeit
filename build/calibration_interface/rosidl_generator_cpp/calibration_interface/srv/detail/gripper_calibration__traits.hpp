// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from calibration_interface:srv/GripperCalibration.idl
// generated code does not contain a copyright notice

#ifndef CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__TRAITS_HPP_
#define CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "calibration_interface/srv/detail/gripper_calibration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace calibration_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperCalibration_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: execute_calibration
  {
    out << "execute_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.execute_calibration, out);
    out << ", ";
  }

  // member: calibration_sim
  {
    out << "calibration_sim: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_sim, out);
    out << ", ";
  }

  // member: calibration_real
  {
    out << "calibration_real: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_real, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: execute_calibration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execute_calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.execute_calibration, out);
    out << "\n";
  }

  // member: calibration_sim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_sim: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_sim, out);
    out << "\n";
  }

  // member: calibration_real
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_real: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_real, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCalibration_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace calibration_interface

namespace rosidl_generator_traits
{

[[deprecated("use calibration_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const calibration_interface::srv::GripperCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  calibration_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use calibration_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const calibration_interface::srv::GripperCalibration_Request & msg)
{
  return calibration_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<calibration_interface::srv::GripperCalibration_Request>()
{
  return "calibration_interface::srv::GripperCalibration_Request";
}

template<>
inline const char * name<calibration_interface::srv::GripperCalibration_Request>()
{
  return "calibration_interface/srv/GripperCalibration_Request";
}

template<>
struct has_fixed_size<calibration_interface::srv::GripperCalibration_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<calibration_interface::srv::GripperCalibration_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<calibration_interface::srv::GripperCalibration_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace calibration_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperCalibration_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCalibration_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace calibration_interface

namespace rosidl_generator_traits
{

[[deprecated("use calibration_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const calibration_interface::srv::GripperCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  calibration_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use calibration_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const calibration_interface::srv::GripperCalibration_Response & msg)
{
  return calibration_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<calibration_interface::srv::GripperCalibration_Response>()
{
  return "calibration_interface::srv::GripperCalibration_Response";
}

template<>
inline const char * name<calibration_interface::srv::GripperCalibration_Response>()
{
  return "calibration_interface/srv/GripperCalibration_Response";
}

template<>
struct has_fixed_size<calibration_interface::srv::GripperCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<calibration_interface::srv::GripperCalibration_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<calibration_interface::srv::GripperCalibration_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<calibration_interface::srv::GripperCalibration>()
{
  return "calibration_interface::srv::GripperCalibration";
}

template<>
inline const char * name<calibration_interface::srv::GripperCalibration>()
{
  return "calibration_interface/srv/GripperCalibration";
}

template<>
struct has_fixed_size<calibration_interface::srv::GripperCalibration>
  : std::integral_constant<
    bool,
    has_fixed_size<calibration_interface::srv::GripperCalibration_Request>::value &&
    has_fixed_size<calibration_interface::srv::GripperCalibration_Response>::value
  >
{
};

template<>
struct has_bounded_size<calibration_interface::srv::GripperCalibration>
  : std::integral_constant<
    bool,
    has_bounded_size<calibration_interface::srv::GripperCalibration_Request>::value &&
    has_bounded_size<calibration_interface::srv::GripperCalibration_Response>::value
  >
{
};

template<>
struct is_service<calibration_interface::srv::GripperCalibration>
  : std::true_type
{
};

template<>
struct is_service_request<calibration_interface::srv::GripperCalibration_Request>
  : std::true_type
{
};

template<>
struct is_service_response<calibration_interface::srv::GripperCalibration_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CALIBRATION_INTERFACE__SRV__DETAIL__GRIPPER_CALIBRATION__TRAITS_HPP_
