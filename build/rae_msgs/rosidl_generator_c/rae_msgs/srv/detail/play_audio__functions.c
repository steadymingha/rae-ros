// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rae_msgs:srv/PlayAudio.idl
// generated code does not contain a copyright notice
#include "rae_msgs/srv/detail/play_audio__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mp3_file`
#include "rosidl_runtime_c/string_functions.h"

bool
rae_msgs__srv__PlayAudio_Request__init(rae_msgs__srv__PlayAudio_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mp3_file
  if (!rosidl_runtime_c__String__init(&msg->mp3_file)) {
    rae_msgs__srv__PlayAudio_Request__fini(msg);
    return false;
  }
  return true;
}

void
rae_msgs__srv__PlayAudio_Request__fini(rae_msgs__srv__PlayAudio_Request * msg)
{
  if (!msg) {
    return;
  }
  // mp3_file
  rosidl_runtime_c__String__fini(&msg->mp3_file);
}

bool
rae_msgs__srv__PlayAudio_Request__are_equal(const rae_msgs__srv__PlayAudio_Request * lhs, const rae_msgs__srv__PlayAudio_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mp3_file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mp3_file), &(rhs->mp3_file)))
  {
    return false;
  }
  return true;
}

bool
rae_msgs__srv__PlayAudio_Request__copy(
  const rae_msgs__srv__PlayAudio_Request * input,
  rae_msgs__srv__PlayAudio_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mp3_file
  if (!rosidl_runtime_c__String__copy(
      &(input->mp3_file), &(output->mp3_file)))
  {
    return false;
  }
  return true;
}

rae_msgs__srv__PlayAudio_Request *
rae_msgs__srv__PlayAudio_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rae_msgs__srv__PlayAudio_Request * msg = (rae_msgs__srv__PlayAudio_Request *)allocator.allocate(sizeof(rae_msgs__srv__PlayAudio_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rae_msgs__srv__PlayAudio_Request));
  bool success = rae_msgs__srv__PlayAudio_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rae_msgs__srv__PlayAudio_Request__destroy(rae_msgs__srv__PlayAudio_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rae_msgs__srv__PlayAudio_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rae_msgs__srv__PlayAudio_Request__Sequence__init(rae_msgs__srv__PlayAudio_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rae_msgs__srv__PlayAudio_Request * data = NULL;

  if (size) {
    data = (rae_msgs__srv__PlayAudio_Request *)allocator.zero_allocate(size, sizeof(rae_msgs__srv__PlayAudio_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rae_msgs__srv__PlayAudio_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rae_msgs__srv__PlayAudio_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rae_msgs__srv__PlayAudio_Request__Sequence__fini(rae_msgs__srv__PlayAudio_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rae_msgs__srv__PlayAudio_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rae_msgs__srv__PlayAudio_Request__Sequence *
rae_msgs__srv__PlayAudio_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rae_msgs__srv__PlayAudio_Request__Sequence * array = (rae_msgs__srv__PlayAudio_Request__Sequence *)allocator.allocate(sizeof(rae_msgs__srv__PlayAudio_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rae_msgs__srv__PlayAudio_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rae_msgs__srv__PlayAudio_Request__Sequence__destroy(rae_msgs__srv__PlayAudio_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rae_msgs__srv__PlayAudio_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rae_msgs__srv__PlayAudio_Request__Sequence__are_equal(const rae_msgs__srv__PlayAudio_Request__Sequence * lhs, const rae_msgs__srv__PlayAudio_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rae_msgs__srv__PlayAudio_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rae_msgs__srv__PlayAudio_Request__Sequence__copy(
  const rae_msgs__srv__PlayAudio_Request__Sequence * input,
  rae_msgs__srv__PlayAudio_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rae_msgs__srv__PlayAudio_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rae_msgs__srv__PlayAudio_Request * data =
      (rae_msgs__srv__PlayAudio_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rae_msgs__srv__PlayAudio_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rae_msgs__srv__PlayAudio_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rae_msgs__srv__PlayAudio_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rae_msgs__srv__PlayAudio_Response__init(rae_msgs__srv__PlayAudio_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
rae_msgs__srv__PlayAudio_Response__fini(rae_msgs__srv__PlayAudio_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
rae_msgs__srv__PlayAudio_Response__are_equal(const rae_msgs__srv__PlayAudio_Response * lhs, const rae_msgs__srv__PlayAudio_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
rae_msgs__srv__PlayAudio_Response__copy(
  const rae_msgs__srv__PlayAudio_Response * input,
  rae_msgs__srv__PlayAudio_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

rae_msgs__srv__PlayAudio_Response *
rae_msgs__srv__PlayAudio_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rae_msgs__srv__PlayAudio_Response * msg = (rae_msgs__srv__PlayAudio_Response *)allocator.allocate(sizeof(rae_msgs__srv__PlayAudio_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rae_msgs__srv__PlayAudio_Response));
  bool success = rae_msgs__srv__PlayAudio_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rae_msgs__srv__PlayAudio_Response__destroy(rae_msgs__srv__PlayAudio_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rae_msgs__srv__PlayAudio_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rae_msgs__srv__PlayAudio_Response__Sequence__init(rae_msgs__srv__PlayAudio_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rae_msgs__srv__PlayAudio_Response * data = NULL;

  if (size) {
    data = (rae_msgs__srv__PlayAudio_Response *)allocator.zero_allocate(size, sizeof(rae_msgs__srv__PlayAudio_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rae_msgs__srv__PlayAudio_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rae_msgs__srv__PlayAudio_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rae_msgs__srv__PlayAudio_Response__Sequence__fini(rae_msgs__srv__PlayAudio_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rae_msgs__srv__PlayAudio_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rae_msgs__srv__PlayAudio_Response__Sequence *
rae_msgs__srv__PlayAudio_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rae_msgs__srv__PlayAudio_Response__Sequence * array = (rae_msgs__srv__PlayAudio_Response__Sequence *)allocator.allocate(sizeof(rae_msgs__srv__PlayAudio_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rae_msgs__srv__PlayAudio_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rae_msgs__srv__PlayAudio_Response__Sequence__destroy(rae_msgs__srv__PlayAudio_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rae_msgs__srv__PlayAudio_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rae_msgs__srv__PlayAudio_Response__Sequence__are_equal(const rae_msgs__srv__PlayAudio_Response__Sequence * lhs, const rae_msgs__srv__PlayAudio_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rae_msgs__srv__PlayAudio_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rae_msgs__srv__PlayAudio_Response__Sequence__copy(
  const rae_msgs__srv__PlayAudio_Response__Sequence * input,
  rae_msgs__srv__PlayAudio_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rae_msgs__srv__PlayAudio_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rae_msgs__srv__PlayAudio_Response * data =
      (rae_msgs__srv__PlayAudio_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rae_msgs__srv__PlayAudio_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rae_msgs__srv__PlayAudio_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rae_msgs__srv__PlayAudio_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
