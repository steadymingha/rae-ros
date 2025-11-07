// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rae_msgs:msg/LEDControl.idl
// generated code does not contain a copyright notice

#ifndef RAE_MSGS__MSG__DETAIL__LED_CONTROL__TRAITS_HPP_
#define RAE_MSGS__MSG__DETAIL__LED_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rae_msgs/msg/detail/led_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'data'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace rae_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LEDControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: single_led_n
  {
    out << "single_led_n: ";
    rosidl_generator_traits::value_to_yaml(msg.single_led_n, out);
    out << ", ";
  }

  // member: control_type
  {
    out << "control_type: ";
    rosidl_generator_traits::value_to_yaml(msg.control_type, out);
    out << ", ";
  }

  // member: display_type
  {
    out << "display_type: ";
    rosidl_generator_traits::value_to_yaml(msg.display_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: single_led_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "single_led_n: ";
    rosidl_generator_traits::value_to_yaml(msg.single_led_n, out);
    out << "\n";
  }

  // member: control_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_type: ";
    rosidl_generator_traits::value_to_yaml(msg.control_type, out);
    out << "\n";
  }

  // member: display_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "display_type: ";
    rosidl_generator_traits::value_to_yaml(msg.display_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LEDControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rae_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rae_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rae_msgs::msg::LEDControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  rae_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rae_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rae_msgs::msg::LEDControl & msg)
{
  return rae_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rae_msgs::msg::LEDControl>()
{
  return "rae_msgs::msg::LEDControl";
}

template<>
inline const char * name<rae_msgs::msg::LEDControl>()
{
  return "rae_msgs/msg/LEDControl";
}

template<>
struct has_fixed_size<rae_msgs::msg::LEDControl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rae_msgs::msg::LEDControl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rae_msgs::msg::LEDControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAE_MSGS__MSG__DETAIL__LED_CONTROL__TRAITS_HPP_
