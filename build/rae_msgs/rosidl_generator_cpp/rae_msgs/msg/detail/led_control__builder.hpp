// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rae_msgs:msg/LEDControl.idl
// generated code does not contain a copyright notice

#ifndef RAE_MSGS__MSG__DETAIL__LED_CONTROL__BUILDER_HPP_
#define RAE_MSGS__MSG__DETAIL__LED_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rae_msgs/msg/detail/led_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rae_msgs
{

namespace msg
{

namespace builder
{

class Init_LEDControl_display_type
{
public:
  explicit Init_LEDControl_display_type(::rae_msgs::msg::LEDControl & msg)
  : msg_(msg)
  {}
  ::rae_msgs::msg::LEDControl display_type(::rae_msgs::msg::LEDControl::_display_type_type arg)
  {
    msg_.display_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rae_msgs::msg::LEDControl msg_;
};

class Init_LEDControl_control_type
{
public:
  explicit Init_LEDControl_control_type(::rae_msgs::msg::LEDControl & msg)
  : msg_(msg)
  {}
  Init_LEDControl_display_type control_type(::rae_msgs::msg::LEDControl::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_LEDControl_display_type(msg_);
  }

private:
  ::rae_msgs::msg::LEDControl msg_;
};

class Init_LEDControl_single_led_n
{
public:
  explicit Init_LEDControl_single_led_n(::rae_msgs::msg::LEDControl & msg)
  : msg_(msg)
  {}
  Init_LEDControl_control_type single_led_n(::rae_msgs::msg::LEDControl::_single_led_n_type arg)
  {
    msg_.single_led_n = std::move(arg);
    return Init_LEDControl_control_type(msg_);
  }

private:
  ::rae_msgs::msg::LEDControl msg_;
};

class Init_LEDControl_data
{
public:
  explicit Init_LEDControl_data(::rae_msgs::msg::LEDControl & msg)
  : msg_(msg)
  {}
  Init_LEDControl_single_led_n data(::rae_msgs::msg::LEDControl::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_LEDControl_single_led_n(msg_);
  }

private:
  ::rae_msgs::msg::LEDControl msg_;
};

class Init_LEDControl_header
{
public:
  Init_LEDControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LEDControl_data header(::rae_msgs::msg::LEDControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LEDControl_data(msg_);
  }

private:
  ::rae_msgs::msg::LEDControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rae_msgs::msg::LEDControl>()
{
  return rae_msgs::msg::builder::Init_LEDControl_header();
}

}  // namespace rae_msgs

#endif  // RAE_MSGS__MSG__DETAIL__LED_CONTROL__BUILDER_HPP_
