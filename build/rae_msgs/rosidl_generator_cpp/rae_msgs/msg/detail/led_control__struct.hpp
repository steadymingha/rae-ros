// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rae_msgs:msg/LEDControl.idl
// generated code does not contain a copyright notice

#ifndef RAE_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_HPP_
#define RAE_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'data'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rae_msgs__msg__LEDControl __attribute__((deprecated))
#else
# define DEPRECATED__rae_msgs__msg__LEDControl __declspec(deprecated)
#endif

namespace rae_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LEDControl_
{
  using Type = LEDControl_<ContainerAllocator>;

  explicit LEDControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->single_led_n = 0;
      this->control_type = 0;
      this->display_type = 0;
    }
  }

  explicit LEDControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->single_led_n = 0;
      this->control_type = 0;
      this->display_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>>;
  _data_type data;
  using _single_led_n_type =
    uint8_t;
  _single_led_n_type single_led_n;
  using _control_type_type =
    uint8_t;
  _control_type_type control_type;
  using _display_type_type =
    uint8_t;
  _display_type_type display_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__single_led_n(
    const uint8_t & _arg)
  {
    this->single_led_n = _arg;
    return *this;
  }
  Type & set__control_type(
    const uint8_t & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__display_type(
    const uint8_t & _arg)
  {
    this->display_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CTRL_TYPE_ALL =
    0u;
  static constexpr uint8_t CTRL_TYPE_SINGLE =
    1u;
  static constexpr uint8_t CTRL_TYPE_CUSTOM =
    2u;
  static constexpr uint8_t DISP_TYPE_STD =
    0u;
  static constexpr uint8_t DISP_TYPE_FLASH =
    1u;
  static constexpr uint8_t DISP_TYPE_CIRCLE =
    2u;

  // pointer types
  using RawPtr =
    rae_msgs::msg::LEDControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const rae_msgs::msg::LEDControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rae_msgs::msg::LEDControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rae_msgs::msg::LEDControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rae_msgs::msg::LEDControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rae_msgs::msg::LEDControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rae_msgs::msg::LEDControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rae_msgs::msg::LEDControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rae_msgs::msg::LEDControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rae_msgs::msg::LEDControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rae_msgs__msg__LEDControl
    std::shared_ptr<rae_msgs::msg::LEDControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rae_msgs__msg__LEDControl
    std::shared_ptr<rae_msgs::msg::LEDControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LEDControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->single_led_n != other.single_led_n) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->display_type != other.display_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const LEDControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LEDControl_

// alias to use template instance with default allocator
using LEDControl =
  rae_msgs::msg::LEDControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDControl_<ContainerAllocator>::CTRL_TYPE_ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDControl_<ContainerAllocator>::CTRL_TYPE_SINGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDControl_<ContainerAllocator>::CTRL_TYPE_CUSTOM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDControl_<ContainerAllocator>::DISP_TYPE_STD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDControl_<ContainerAllocator>::DISP_TYPE_FLASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LEDControl_<ContainerAllocator>::DISP_TYPE_CIRCLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rae_msgs

#endif  // RAE_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_HPP_
