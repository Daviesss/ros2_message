// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_creation:msg/Creation.idl
// generated code does not contain a copyright notice
#include "message_creation/msg/detail/creation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `month`
#include "rosidl_runtime_c/string_functions.h"

bool
message_creation__msg__Creation__init(message_creation__msg__Creation * msg)
{
  if (!msg) {
    return false;
  }
  // day
  // month
  if (!rosidl_runtime_c__String__init(&msg->month)) {
    message_creation__msg__Creation__fini(msg);
    return false;
  }
  // year
  return true;
}

void
message_creation__msg__Creation__fini(message_creation__msg__Creation * msg)
{
  if (!msg) {
    return;
  }
  // day
  // month
  rosidl_runtime_c__String__fini(&msg->month);
  // year
}

bool
message_creation__msg__Creation__are_equal(const message_creation__msg__Creation * lhs, const message_creation__msg__Creation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // day
  if (lhs->day != rhs->day) {
    return false;
  }
  // month
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->month), &(rhs->month)))
  {
    return false;
  }
  // year
  if (lhs->year != rhs->year) {
    return false;
  }
  return true;
}

bool
message_creation__msg__Creation__copy(
  const message_creation__msg__Creation * input,
  message_creation__msg__Creation * output)
{
  if (!input || !output) {
    return false;
  }
  // day
  output->day = input->day;
  // month
  if (!rosidl_runtime_c__String__copy(
      &(input->month), &(output->month)))
  {
    return false;
  }
  // year
  output->year = input->year;
  return true;
}

message_creation__msg__Creation *
message_creation__msg__Creation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message_creation__msg__Creation * msg = (message_creation__msg__Creation *)allocator.allocate(sizeof(message_creation__msg__Creation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_creation__msg__Creation));
  bool success = message_creation__msg__Creation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
message_creation__msg__Creation__destroy(message_creation__msg__Creation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    message_creation__msg__Creation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
message_creation__msg__Creation__Sequence__init(message_creation__msg__Creation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message_creation__msg__Creation * data = NULL;

  if (size) {
    data = (message_creation__msg__Creation *)allocator.zero_allocate(size, sizeof(message_creation__msg__Creation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_creation__msg__Creation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_creation__msg__Creation__fini(&data[i - 1]);
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
message_creation__msg__Creation__Sequence__fini(message_creation__msg__Creation__Sequence * array)
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
      message_creation__msg__Creation__fini(&array->data[i]);
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

message_creation__msg__Creation__Sequence *
message_creation__msg__Creation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  message_creation__msg__Creation__Sequence * array = (message_creation__msg__Creation__Sequence *)allocator.allocate(sizeof(message_creation__msg__Creation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = message_creation__msg__Creation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
message_creation__msg__Creation__Sequence__destroy(message_creation__msg__Creation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    message_creation__msg__Creation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
message_creation__msg__Creation__Sequence__are_equal(const message_creation__msg__Creation__Sequence * lhs, const message_creation__msg__Creation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!message_creation__msg__Creation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
message_creation__msg__Creation__Sequence__copy(
  const message_creation__msg__Creation__Sequence * input,
  message_creation__msg__Creation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(message_creation__msg__Creation);
    message_creation__msg__Creation * data =
      (message_creation__msg__Creation *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!message_creation__msg__Creation__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          message_creation__msg__Creation__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!message_creation__msg__Creation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
