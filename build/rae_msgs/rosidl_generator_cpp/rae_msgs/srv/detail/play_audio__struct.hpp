// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rae_msgs:srv/PlayAudio.idl
// generated code does not contain a copyright notice

#ifndef RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__STRUCT_HPP_
#define RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rae_msgs__srv__PlayAudio_Request __attribute__((deprecated))
#else
# define DEPRECATED__rae_msgs__srv__PlayAudio_Request __declspec(deprecated)
#endif

namespace rae_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayAudio_Request_
{
  using Type = PlayAudio_Request_<ContainerAllocator>;

  explicit PlayAudio_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mp3_file = "";
    }
  }

  explicit PlayAudio_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mp3_file(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mp3_file = "";
    }
  }

  // field types and members
  using _mp3_file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mp3_file_type mp3_file;

  // setters for named parameter idiom
  Type & set__mp3_file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mp3_file = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rae_msgs::srv::PlayAudio_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rae_msgs::srv::PlayAudio_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rae_msgs::srv::PlayAudio_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rae_msgs::srv::PlayAudio_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rae_msgs::srv::PlayAudio_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rae_msgs::srv::PlayAudio_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rae_msgs::srv::PlayAudio_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rae_msgs::srv::PlayAudio_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rae_msgs::srv::PlayAudio_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rae_msgs::srv::PlayAudio_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rae_msgs__srv__PlayAudio_Request
    std::shared_ptr<rae_msgs::srv::PlayAudio_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rae_msgs__srv__PlayAudio_Request
    std::shared_ptr<rae_msgs::srv::PlayAudio_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayAudio_Request_ & other) const
  {
    if (this->mp3_file != other.mp3_file) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayAudio_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayAudio_Request_

// alias to use template instance with default allocator
using PlayAudio_Request =
  rae_msgs::srv::PlayAudio_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rae_msgs


#ifndef _WIN32
# define DEPRECATED__rae_msgs__srv__PlayAudio_Response __attribute__((deprecated))
#else
# define DEPRECATED__rae_msgs__srv__PlayAudio_Response __declspec(deprecated)
#endif

namespace rae_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayAudio_Response_
{
  using Type = PlayAudio_Response_<ContainerAllocator>;

  explicit PlayAudio_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit PlayAudio_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rae_msgs::srv::PlayAudio_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rae_msgs::srv::PlayAudio_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rae_msgs::srv::PlayAudio_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rae_msgs::srv::PlayAudio_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rae_msgs::srv::PlayAudio_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rae_msgs::srv::PlayAudio_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rae_msgs::srv::PlayAudio_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rae_msgs::srv::PlayAudio_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rae_msgs::srv::PlayAudio_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rae_msgs::srv::PlayAudio_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rae_msgs__srv__PlayAudio_Response
    std::shared_ptr<rae_msgs::srv::PlayAudio_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rae_msgs__srv__PlayAudio_Response
    std::shared_ptr<rae_msgs::srv::PlayAudio_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayAudio_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayAudio_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayAudio_Response_

// alias to use template instance with default allocator
using PlayAudio_Response =
  rae_msgs::srv::PlayAudio_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rae_msgs

namespace rae_msgs
{

namespace srv
{

struct PlayAudio
{
  using Request = rae_msgs::srv::PlayAudio_Request;
  using Response = rae_msgs::srv::PlayAudio_Response;
};

}  // namespace srv

}  // namespace rae_msgs

#endif  // RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__STRUCT_HPP_
