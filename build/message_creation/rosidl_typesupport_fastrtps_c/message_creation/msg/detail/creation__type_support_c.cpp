// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_creation:msg/Creation.idl
// generated code does not contain a copyright notice
#include "message_creation/msg/detail/creation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_creation/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_creation/msg/detail/creation__struct.h"
#include "message_creation/msg/detail/creation__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // month
#include "rosidl_runtime_c/string_functions.h"  // month

// forward declare type support functions


using _Creation__ros_msg_type = message_creation__msg__Creation;

static bool _Creation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Creation__ros_msg_type * ros_message = static_cast<const _Creation__ros_msg_type *>(untyped_ros_message);
  // Field name: day
  {
    cdr << ros_message->day;
  }

  // Field name: month
  {
    const rosidl_runtime_c__String * str = &ros_message->month;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: year
  {
    cdr << ros_message->year;
  }

  return true;
}

static bool _Creation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Creation__ros_msg_type * ros_message = static_cast<_Creation__ros_msg_type *>(untyped_ros_message);
  // Field name: day
  {
    cdr >> ros_message->day;
  }

  // Field name: month
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->month.data) {
      rosidl_runtime_c__String__init(&ros_message->month);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->month,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'month'\n");
      return false;
    }
  }

  // Field name: year
  {
    cdr >> ros_message->year;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_creation
size_t get_serialized_size_message_creation__msg__Creation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Creation__ros_msg_type * ros_message = static_cast<const _Creation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name day
  {
    size_t item_size = sizeof(ros_message->day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name month
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->month.size + 1);
  // field.name year
  {
    size_t item_size = sizeof(ros_message->year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Creation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_creation__msg__Creation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_creation
size_t max_serialized_size_message_creation__msg__Creation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: day
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: month
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: year
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Creation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_creation__msg__Creation(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Creation = {
  "message_creation::msg",
  "Creation",
  _Creation__cdr_serialize,
  _Creation__cdr_deserialize,
  _Creation__get_serialized_size,
  _Creation__max_serialized_size
};

static rosidl_message_type_support_t _Creation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Creation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_creation, msg, Creation)() {
  return &_Creation__type_support;
}

#if defined(__cplusplus)
}
#endif
