// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_message:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_MESSAGE__MSG__DETAIL__COORDINATES__TRAITS_HPP_
#define MY_ROBOT_MESSAGE__MSG__DETAIL__COORDINATES__TRAITS_HPP_

#include "my_robot_message/msg/detail/coordinates__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_robot_message::msg::Coordinates>()
{
  return "my_robot_message::msg::Coordinates";
}

template<>
inline const char * name<my_robot_message::msg::Coordinates>()
{
  return "my_robot_message/msg/Coordinates";
}

template<>
struct has_fixed_size<my_robot_message::msg::Coordinates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_message::msg::Coordinates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_message::msg::Coordinates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_MESSAGE__MSG__DETAIL__COORDINATES__TRAITS_HPP_
