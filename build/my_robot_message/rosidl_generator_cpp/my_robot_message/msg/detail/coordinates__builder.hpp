// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_message:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_MESSAGE__MSG__DETAIL__COORDINATES__BUILDER_HPP_
#define MY_ROBOT_MESSAGE__MSG__DETAIL__COORDINATES__BUILDER_HPP_

#include "my_robot_message/msg/detail/coordinates__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_robot_message
{

namespace msg
{

namespace builder
{

class Init_Coordinates_coordinates
{
public:
  explicit Init_Coordinates_coordinates(::my_robot_message::msg::Coordinates & msg)
  : msg_(msg)
  {}
  ::my_robot_message::msg::Coordinates coordinates(::my_robot_message::msg::Coordinates::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_message::msg::Coordinates msg_;
};

class Init_Coordinates_name
{
public:
  Init_Coordinates_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinates_coordinates name(::my_robot_message::msg::Coordinates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Coordinates_coordinates(msg_);
  }

private:
  ::my_robot_message::msg::Coordinates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_message::msg::Coordinates>()
{
  return my_robot_message::msg::builder::Init_Coordinates_name();
}

}  // namespace my_robot_message

#endif  // MY_ROBOT_MESSAGE__MSG__DETAIL__COORDINATES__BUILDER_HPP_
