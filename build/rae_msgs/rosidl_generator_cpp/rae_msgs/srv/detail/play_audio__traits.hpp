// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rae_msgs:srv/PlayAudio.idl
// generated code does not contain a copyright notice

#ifndef RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__TRAITS_HPP_
#define RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rae_msgs/srv/detail/play_audio__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rae_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayAudio_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mp3_file
  {
    out << "mp3_file: ";
    rosidl_generator_traits::value_to_yaml(msg.mp3_file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayAudio_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mp3_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mp3_file: ";
    rosidl_generator_traits::value_to_yaml(msg.mp3_file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayAudio_Request & msg, bool use_flow_style = false)
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

}  // namespace rae_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rae_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rae_msgs::srv::PlayAudio_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rae_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rae_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rae_msgs::srv::PlayAudio_Request & msg)
{
  return rae_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rae_msgs::srv::PlayAudio_Request>()
{
  return "rae_msgs::srv::PlayAudio_Request";
}

template<>
inline const char * name<rae_msgs::srv::PlayAudio_Request>()
{
  return "rae_msgs/srv/PlayAudio_Request";
}

template<>
struct has_fixed_size<rae_msgs::srv::PlayAudio_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rae_msgs::srv::PlayAudio_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rae_msgs::srv::PlayAudio_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rae_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlayAudio_Response & msg,
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
  const PlayAudio_Response & msg,
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

inline std::string to_yaml(const PlayAudio_Response & msg, bool use_flow_style = false)
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

}  // namespace rae_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rae_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rae_msgs::srv::PlayAudio_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rae_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rae_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rae_msgs::srv::PlayAudio_Response & msg)
{
  return rae_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rae_msgs::srv::PlayAudio_Response>()
{
  return "rae_msgs::srv::PlayAudio_Response";
}

template<>
inline const char * name<rae_msgs::srv::PlayAudio_Response>()
{
  return "rae_msgs/srv/PlayAudio_Response";
}

template<>
struct has_fixed_size<rae_msgs::srv::PlayAudio_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rae_msgs::srv::PlayAudio_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rae_msgs::srv::PlayAudio_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rae_msgs::srv::PlayAudio>()
{
  return "rae_msgs::srv::PlayAudio";
}

template<>
inline const char * name<rae_msgs::srv::PlayAudio>()
{
  return "rae_msgs/srv/PlayAudio";
}

template<>
struct has_fixed_size<rae_msgs::srv::PlayAudio>
  : std::integral_constant<
    bool,
    has_fixed_size<rae_msgs::srv::PlayAudio_Request>::value &&
    has_fixed_size<rae_msgs::srv::PlayAudio_Response>::value
  >
{
};

template<>
struct has_bounded_size<rae_msgs::srv::PlayAudio>
  : std::integral_constant<
    bool,
    has_bounded_size<rae_msgs::srv::PlayAudio_Request>::value &&
    has_bounded_size<rae_msgs::srv::PlayAudio_Response>::value
  >
{
};

template<>
struct is_service<rae_msgs::srv::PlayAudio>
  : std::true_type
{
};

template<>
struct is_service_request<rae_msgs::srv::PlayAudio_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rae_msgs::srv::PlayAudio_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__TRAITS_HPP_
