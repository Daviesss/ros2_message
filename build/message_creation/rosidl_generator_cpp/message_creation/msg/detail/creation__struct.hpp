// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_creation:msg/Creation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_CREATION__MSG__DETAIL__CREATION__STRUCT_HPP_
#define MESSAGE_CREATION__MSG__DETAIL__CREATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__message_creation__msg__Creation __attribute__((deprecated))
#else
# define DEPRECATED__message_creation__msg__Creation __declspec(deprecated)
#endif

namespace message_creation
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Creation_
{
  using Type = Creation_<ContainerAllocator>;

  explicit Creation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->day = 0l;
      this->month = "";
      this->year = 0l;
    }
  }

  explicit Creation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : month(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->day = 0l;
      this->month = "";
      this->year = 0l;
    }
  }

  // field types and members
  using _day_type =
    int32_t;
  _day_type day;
  using _month_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _month_type month;
  using _year_type =
    int32_t;
  _year_type year;

  // setters for named parameter idiom
  Type & set__day(
    const int32_t & _arg)
  {
    this->day = _arg;
    return *this;
  }
  Type & set__month(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->month = _arg;
    return *this;
  }
  Type & set__year(
    const int32_t & _arg)
  {
    this->year = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_creation::msg::Creation_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_creation::msg::Creation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_creation::msg::Creation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_creation::msg::Creation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_creation::msg::Creation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_creation::msg::Creation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_creation::msg::Creation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_creation::msg::Creation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_creation::msg::Creation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_creation::msg::Creation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_creation__msg__Creation
    std::shared_ptr<message_creation::msg::Creation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_creation__msg__Creation
    std::shared_ptr<message_creation::msg::Creation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Creation_ & other) const
  {
    if (this->day != other.day) {
      return false;
    }
    if (this->month != other.month) {
      return false;
    }
    if (this->year != other.year) {
      return false;
    }
    return true;
  }
  bool operator!=(const Creation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Creation_

// alias to use template instance with default allocator
using Creation =
  message_creation::msg::Creation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_creation

#endif  // MESSAGE_CREATION__MSG__DETAIL__CREATION__STRUCT_HPP_
