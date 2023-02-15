// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_creation:msg/Creation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_CREATION__MSG__DETAIL__CREATION__STRUCT_H_
#define MESSAGE_CREATION__MSG__DETAIL__CREATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'month'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Creation in the package message_creation.
typedef struct message_creation__msg__Creation
{
  int32_t day;
  rosidl_runtime_c__String month;
  int32_t year;
} message_creation__msg__Creation;

// Struct for a sequence of message_creation__msg__Creation.
typedef struct message_creation__msg__Creation__Sequence
{
  message_creation__msg__Creation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_creation__msg__Creation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_CREATION__MSG__DETAIL__CREATION__STRUCT_H_
