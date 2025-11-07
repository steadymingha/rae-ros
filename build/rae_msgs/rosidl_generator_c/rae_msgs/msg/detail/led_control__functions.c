// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rae_msgs:msg/LEDControl.idl
// generated code does not contain a copyright notice
#include "rae_msgs/msg/detail/led_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "std_msgs/msg/detail/color_rgba__functions.h"

bool
rae_msgs__msg__LEDControl__init(rae_msgs__msg__LEDControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rae_msgs__msg__LEDControl__fini(msg);
    return false;
  }
  // data
  if (!std_msgs__msg__ColorRGBA__Sequence__init(&msg->data, 0)) {
    rae_msgs__msg__LEDControl__fini(msg);
    return false;
  }
  // single_led_n
  // control_type
  // display_type
  return true;
}

void
rae_msgs__msg__LEDControl__fini(rae_msgs__msg__LEDControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  std_msgs__msg__ColorRGBA__Sequence__fini(&msg->data);
  // single_led_n
  // control_type
  // display_type
}

bool
rae_msgs__msg__LEDControl__are_equal(const rae_msgs__msg__LEDControl * lhs, const rae_msgs__msg__LEDControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // data
  if (!std_msgs__msg__ColorRGBA__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // single_led_n
  if (lhs->single_led_n != rhs->single_led_n) {
    return false;
  }
  // control_type
  if (lhs->control_type != rhs->control_type) {
    return false;
  }
  // display_type
  if (lhs->display_type != rhs->display_type) {
    return false;
  }
  return true;
}

bool
rae_msgs__msg__LEDControl__copy(
  const rae_msgs__msg__LEDControl * input,
  rae_msgs__msg__LEDControl * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // data
  if (!std_msgs__msg__ColorRGBA__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // single_led_n
  output->single_led_n = input->single_led_n;
  // control_type
  output->control_type = input->control_type;
  // display_type
  output->display_type = input->display_type;
  return true;
}

rae_msgs__msg__LEDControl *
rae_msgs__msg__LEDControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rae_msgs__msg__LEDControl * msg = (rae_msgs__msg__LEDControl *)allocator.allocate(sizeof(rae_msgs__msg__LEDControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rae_msgs__msg__LEDControl));
  bool success = rae_msgs__msg__LEDControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rae_msgs__msg__LEDControl__destroy(rae_msgs__msg__LEDControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rae_msgs__msg__LEDControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rae_msgs__msg__LEDControl__Sequence__init(rae_msgs__msg__LEDControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rae_msgs__msg__LEDControl * data = NULL;

  if (size) {
    data = (rae_msgs__msg__LEDControl *)allocator.zero_allocate(size, sizeof(rae_msgs__msg__LEDControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rae_msgs__msg__LEDControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rae_msgs__msg__LEDControl__fini(&data[i - 1]);
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
rae_msgs__msg__LEDControl__Sequence__fini(rae_msgs__msg__LEDControl__Sequence * array)
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
      rae_msgs__msg__LEDControl__fini(&array->data[i]);
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

rae_msgs__msg__LEDControl__Sequence *
rae_msgs__msg__LEDControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rae_msgs__msg__LEDControl__Sequence * array = (rae_msgs__msg__LEDControl__Sequence *)allocator.allocate(sizeof(rae_msgs__msg__LEDControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rae_msgs__msg__LEDControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rae_msgs__msg__LEDControl__Sequence__destroy(rae_msgs__msg__LEDControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rae_msgs__msg__LEDControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rae_msgs__msg__LEDControl__Sequence__are_equal(const rae_msgs__msg__LEDControl__Sequence * lhs, const rae_msgs__msg__LEDControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rae_msgs__msg__LEDControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rae_msgs__msg__LEDControl__Sequence__copy(
  const rae_msgs__msg__LEDControl__Sequence * input,
  rae_msgs__msg__LEDControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rae_msgs__msg__LEDControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rae_msgs__msg__LEDControl * data =
      (rae_msgs__msg__LEDControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rae_msgs__msg__LEDControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rae_msgs__msg__LEDControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rae_msgs__msg__LEDControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
