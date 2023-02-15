// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_message:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_MESSAGE__MSG__DETAIL__COORDINATES__STRUCT_H_
#define MY_ROBOT_MESSAGE__MSG__DETAIL__COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/Coordinates in the package my_robot_message.
typedef struct my_robot_message__msg__Coordinates
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Point coordinates;
} my_robot_message__msg__Coordinates;

// Struct for a sequence of my_robot_message__msg__Coordinates.
typedef struct my_robot_message__msg__Coordinates__Sequence
{
  my_robot_message__msg__Coordinates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_message__msg__Coordinates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_MESSAGE__MSG__DETAIL__COORDINATES__STRUCT_H_
