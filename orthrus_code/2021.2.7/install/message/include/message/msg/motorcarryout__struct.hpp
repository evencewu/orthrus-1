// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message:msg/Motorcarryout.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__MOTORCARRYOUT__STRUCT_HPP_
#define MESSAGE__MSG__MOTORCARRYOUT__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__message__msg__Motorcarryout __attribute__((deprecated))
#else
# define DEPRECATED__message__msg__Motorcarryout __declspec(deprecated)
#endif

namespace message
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motorcarryout_
{
  using Type = Motorcarryout_<ContainerAllocator>;

  explicit Motorcarryout_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->name = "";
    }
  }

  explicit Motorcarryout_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->name = "";
    }
  }

  // field types and members
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message::msg::Motorcarryout_<ContainerAllocator> *;
  using ConstRawPtr =
    const message::msg::Motorcarryout_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message::msg::Motorcarryout_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message::msg::Motorcarryout_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message::msg::Motorcarryout_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message::msg::Motorcarryout_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message::msg::Motorcarryout_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message::msg::Motorcarryout_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message::msg::Motorcarryout_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message::msg::Motorcarryout_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message__msg__Motorcarryout
    std::shared_ptr<message::msg::Motorcarryout_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message__msg__Motorcarryout
    std::shared_ptr<message::msg::Motorcarryout_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motorcarryout_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motorcarryout_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motorcarryout_

// alias to use template instance with default allocator
using Motorcarryout =
  message::msg::Motorcarryout_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message

#endif  // MESSAGE__MSG__MOTORCARRYOUT__STRUCT_HPP_
