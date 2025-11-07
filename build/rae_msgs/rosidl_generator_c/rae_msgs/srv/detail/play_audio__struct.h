// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rae_msgs:srv/PlayAudio.idl
// generated code does not contain a copyright notice

#ifndef RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__STRUCT_H_
#define RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mp3_file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlayAudio in the package rae_msgs.
typedef struct rae_msgs__srv__PlayAudio_Request
{
  rosidl_runtime_c__String mp3_file;
} rae_msgs__srv__PlayAudio_Request;

// Struct for a sequence of rae_msgs__srv__PlayAudio_Request.
typedef struct rae_msgs__srv__PlayAudio_Request__Sequence
{
  rae_msgs__srv__PlayAudio_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rae_msgs__srv__PlayAudio_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PlayAudio in the package rae_msgs.
typedef struct rae_msgs__srv__PlayAudio_Response
{
  bool success;
} rae_msgs__srv__PlayAudio_Response;

// Struct for a sequence of rae_msgs__srv__PlayAudio_Response.
typedef struct rae_msgs__srv__PlayAudio_Response__Sequence
{
  rae_msgs__srv__PlayAudio_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rae_msgs__srv__PlayAudio_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAE_MSGS__SRV__DETAIL__PLAY_AUDIO__STRUCT_H_
