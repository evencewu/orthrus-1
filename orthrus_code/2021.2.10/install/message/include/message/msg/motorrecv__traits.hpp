// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message:msg/Motorrecv.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__MOTORRECV__TRAITS_HPP_
#define MESSAGE__MSG__MOTORRECV__TRAITS_HPP_

#include "message/msg/motorrecv__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message::msg::Motorrecv>()
{
  return "message::msg::Motorrecv";
}

template<>
struct has_fixed_size<message::msg::Motorrecv>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<message::msg::Motorrecv>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE__MSG__MOTORRECV__TRAITS_HPP_
