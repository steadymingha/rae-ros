// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rae_msgs:msg/LEDControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rae_msgs/msg/detail/led_control__rosidl_typesupport_introspection_c.h"
#include "rae_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rae_msgs/msg/detail/led_control__functions.h"
#include "rae_msgs/msg/detail/led_control__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "std_msgs/msg/color_rgba.h"
// Member `data`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rae_msgs__msg__LEDControl__init(message_memory);
}

void rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_fini_function(void * message_memory)
{
  rae_msgs__msg__LEDControl__fini(message_memory);
}

size_t rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__size_function__LEDControl__data(
  const void * untyped_member)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return member->size;
}

const void * rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__get_const_function__LEDControl__data(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__get_function__LEDControl__data(
  void * untyped_member, size_t index)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__fetch_function__LEDControl__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__ColorRGBA * item =
    ((const std_msgs__msg__ColorRGBA *)
    rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__get_const_function__LEDControl__data(untyped_member, index));
  std_msgs__msg__ColorRGBA * value =
    (std_msgs__msg__ColorRGBA *)(untyped_value);
  *value = *item;
}

void rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__assign_function__LEDControl__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__ColorRGBA * item =
    ((std_msgs__msg__ColorRGBA *)
    rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__get_function__LEDControl__data(untyped_member, index));
  const std_msgs__msg__ColorRGBA * value =
    (const std_msgs__msg__ColorRGBA *)(untyped_value);
  *item = *value;
}

bool rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__resize_function__LEDControl__data(
  void * untyped_member, size_t size)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  std_msgs__msg__ColorRGBA__Sequence__fini(member);
  return std_msgs__msg__ColorRGBA__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rae_msgs__msg__LEDControl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rae_msgs__msg__LEDControl, data),  // bytes offset in struct
    NULL,  // default value
    rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__size_function__LEDControl__data,  // size() function pointer
    rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__get_const_function__LEDControl__data,  // get_const(index) function pointer
    rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__get_function__LEDControl__data,  // get(index) function pointer
    rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__fetch_function__LEDControl__data,  // fetch(index, &value) function pointer
    rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__assign_function__LEDControl__data,  // assign(index, value) function pointer
    rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__resize_function__LEDControl__data  // resize(index) function pointer
  },
  {
    "single_led_n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rae_msgs__msg__LEDControl, single_led_n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rae_msgs__msg__LEDControl, control_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "display_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rae_msgs__msg__LEDControl, display_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_members = {
  "rae_msgs__msg",  // message namespace
  "LEDControl",  // message name
  5,  // number of fields
  sizeof(rae_msgs__msg__LEDControl),
  rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_member_array,  // message members
  rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_init_function,  // function to initialize message memory (memory has to be allocated)
  rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_type_support_handle = {
  0,
  &rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rae_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rae_msgs, msg, LEDControl)() {
  rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  if (!rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_type_support_handle.typesupport_identifier) {
    rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rae_msgs__msg__LEDControl__rosidl_typesupport_introspection_c__LEDControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
