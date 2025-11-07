// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rae_msgs:srv/PlayAudio.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rae_msgs/srv/detail/play_audio__rosidl_typesupport_introspection_c.h"
#include "rae_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rae_msgs/srv/detail/play_audio__functions.h"
#include "rae_msgs/srv/detail/play_audio__struct.h"


// Include directives for member types
// Member `mp3_file`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rae_msgs__srv__PlayAudio_Request__init(message_memory);
}

void rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_fini_function(void * message_memory)
{
  rae_msgs__srv__PlayAudio_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_message_member_array[1] = {
  {
    "mp3_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rae_msgs__srv__PlayAudio_Request, mp3_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_message_members = {
  "rae_msgs__srv",  // message namespace
  "PlayAudio_Request",  // message name
  1,  // number of fields
  sizeof(rae_msgs__srv__PlayAudio_Request),
  rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_message_member_array,  // message members
  rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_message_type_support_handle = {
  0,
  &rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rae_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rae_msgs, srv, PlayAudio_Request)() {
  if (!rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_message_type_support_handle.typesupport_identifier) {
    rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rae_msgs__srv__PlayAudio_Request__rosidl_typesupport_introspection_c__PlayAudio_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rae_msgs/srv/detail/play_audio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rae_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rae_msgs/srv/detail/play_audio__functions.h"
// already included above
// #include "rae_msgs/srv/detail/play_audio__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rae_msgs__srv__PlayAudio_Response__init(message_memory);
}

void rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_fini_function(void * message_memory)
{
  rae_msgs__srv__PlayAudio_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rae_msgs__srv__PlayAudio_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_message_members = {
  "rae_msgs__srv",  // message namespace
  "PlayAudio_Response",  // message name
  1,  // number of fields
  sizeof(rae_msgs__srv__PlayAudio_Response),
  rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_message_member_array,  // message members
  rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_message_type_support_handle = {
  0,
  &rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rae_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rae_msgs, srv, PlayAudio_Response)() {
  if (!rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_message_type_support_handle.typesupport_identifier) {
    rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rae_msgs__srv__PlayAudio_Response__rosidl_typesupport_introspection_c__PlayAudio_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rae_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rae_msgs/srv/detail/play_audio__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rae_msgs__srv__detail__play_audio__rosidl_typesupport_introspection_c__PlayAudio_service_members = {
  "rae_msgs__srv",  // service namespace
  "PlayAudio",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rae_msgs__srv__detail__play_audio__rosidl_typesupport_introspection_c__PlayAudio_Request_message_type_support_handle,
  NULL  // response message
  // rae_msgs__srv__detail__play_audio__rosidl_typesupport_introspection_c__PlayAudio_Response_message_type_support_handle
};

static rosidl_service_type_support_t rae_msgs__srv__detail__play_audio__rosidl_typesupport_introspection_c__PlayAudio_service_type_support_handle = {
  0,
  &rae_msgs__srv__detail__play_audio__rosidl_typesupport_introspection_c__PlayAudio_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rae_msgs, srv, PlayAudio_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rae_msgs, srv, PlayAudio_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rae_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rae_msgs, srv, PlayAudio)() {
  if (!rae_msgs__srv__detail__play_audio__rosidl_typesupport_introspection_c__PlayAudio_service_type_support_handle.typesupport_identifier) {
    rae_msgs__srv__detail__play_audio__rosidl_typesupport_introspection_c__PlayAudio_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rae_msgs__srv__detail__play_audio__rosidl_typesupport_introspection_c__PlayAudio_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rae_msgs, srv, PlayAudio_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rae_msgs, srv, PlayAudio_Response)()->data;
  }

  return &rae_msgs__srv__detail__play_audio__rosidl_typesupport_introspection_c__PlayAudio_service_type_support_handle;
}
