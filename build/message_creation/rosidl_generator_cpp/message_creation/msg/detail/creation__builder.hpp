// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_creation:msg/Creation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_CREATION__MSG__DETAIL__CREATION__BUILDER_HPP_
#define MESSAGE_CREATION__MSG__DETAIL__CREATION__BUILDER_HPP_

#include "message_creation/msg/detail/creation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_creation
{

namespace msg
{

namespace builder
{

class Init_Creation_year
{
public:
  explicit Init_Creation_year(::message_creation::msg::Creation & msg)
  : msg_(msg)
  {}
  ::message_creation::msg::Creation year(::message_creation::msg::Creation::_year_type arg)
  {
    msg_.year = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_creation::msg::Creation msg_;
};

class Init_Creation_month
{
public:
  explicit Init_Creation_month(::message_creation::msg::Creation & msg)
  : msg_(msg)
  {}
  Init_Creation_year month(::message_creation::msg::Creation::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_Creation_year(msg_);
  }

private:
  ::message_creation::msg::Creation msg_;
};

class Init_Creation_day
{
public:
  Init_Creation_day()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Creation_month day(::message_creation::msg::Creation::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_Creation_month(msg_);
  }

private:
  ::message_creation::msg::Creation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_creation::msg::Creation>()
{
  return message_creation::msg::builder::Init_Creation_day();
}

}  // namespace message_creation

#endif  // MESSAGE_CREATION__MSG__DETAIL__CREATION__BUILDER_HPP_
