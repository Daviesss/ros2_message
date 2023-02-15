// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_creation:msg/Creation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_CREATION__MSG__DETAIL__CREATION__TRAITS_HPP_
#define MESSAGE_CREATION__MSG__DETAIL__CREATION__TRAITS_HPP_

#include "message_creation/msg/detail/creation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_creation::msg::Creation>()
{
  return "message_creation::msg::Creation";
}

template<>
inline const char * name<message_creation::msg::Creation>()
{
  return "message_creation/msg/Creation";
}

template<>
struct has_fixed_size<message_creation::msg::Creation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message_creation::msg::Creation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message_creation::msg::Creation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_CREATION__MSG__DETAIL__CREATION__TRAITS_HPP_
