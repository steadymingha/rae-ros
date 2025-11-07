// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rae_msgs:msg/LEDControl.idl
// generated code does not contain a copyright notice

#ifndef RAE_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_H_
#define RAE_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CTRL_TYPE_ALL'.
enum
{
  rae_msgs__msg__LEDControl__CTRL_TYPE_ALL = 0
};

/// Constant 'CTRL_TYPE_SINGLE'.
enum
{
  rae_msgs__msg__LEDControl__CTRL_TYPE_SINGLE = 1
};

/// Constant 'CTRL_TYPE_CUSTOM'.
enum
{
  rae_msgs__msg__LEDControl__CTRL_TYPE_CUSTOM = 2
};

/// Constant 'DISP_TYPE_STD'.
enum
{
  rae_msgs__msg__LEDControl__DISP_TYPE_STD = 0
};

/// Constant 'DISP_TYPE_FLASH'.
enum
{
  rae_msgs__msg__LEDControl__DISP_TYPE_FLASH = 1
};

/// Constant 'DISP_TYPE_CIRCLE'.
enum
{
  rae_msgs__msg__LEDControl__DISP_TYPE_CIRCLE = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/LEDControl in the package rae_msgs.
/**
  * This message contains uncompressed audio
 */
typedef struct rae_msgs__msg__LEDControl
{
  std_msgs__msg__Header header;
  std_msgs__msg__ColorRGBA__Sequence data;
  uint8_t single_led_n;
  uint8_t control_type;
  uint8_t display_type;
} rae_msgs__msg__LEDControl;

// Struct for a sequence of rae_msgs__msg__LEDControl.
typedef struct rae_msgs__msg__LEDControl__Sequence
{
  rae_msgs__msg__LEDControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rae_msgs__msg__LEDControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAE_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_H_
