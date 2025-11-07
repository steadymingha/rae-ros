// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rae_msgs:srv/PlayAudio.idl
// generated code does not contain a copyright notice

#ifndef RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__BUILDER_HPP_
#define RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rae_msgs/srv/detail/play_audio__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rae_msgs
{

namespace srv
{

namespace builder
{

class Init_PlayAudio_Request_mp3_file
{
public:
  Init_PlayAudio_Request_mp3_file()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rae_msgs::srv::PlayAudio_Request mp3_file(::rae_msgs::srv::PlayAudio_Request::_mp3_file_type arg)
  {
    msg_.mp3_file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rae_msgs::srv::PlayAudio_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rae_msgs::srv::PlayAudio_Request>()
{
  return rae_msgs::srv::builder::Init_PlayAudio_Request_mp3_file();
}

}  // namespace rae_msgs


namespace rae_msgs
{

namespace srv
{

namespace builder
{

class Init_PlayAudio_Response_success
{
public:
  Init_PlayAudio_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rae_msgs::srv::PlayAudio_Response success(::rae_msgs::srv::PlayAudio_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rae_msgs::srv::PlayAudio_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rae_msgs::srv::PlayAudio_Response>()
{
  return rae_msgs::srv::builder::Init_PlayAudio_Response_success();
}

}  // namespace rae_msgs

#endif  // RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__BUILDER_HPP_
