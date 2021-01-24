// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message:srv/Motorsend.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__SRV__MOTORSEND__TRAITS_HPP_
#define MESSAGE__SRV__MOTORSEND__TRAITS_HPP_

#include "message/srv/motorsend__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message::srv::Motorsend_Request>()
{
  return "message::srv::Motorsend_Request";
}

template<>
struct has_fixed_size<message::srv::Motorsend_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<message::srv::Motorsend_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message::srv::Motorsend_Response>()
{
  return "message::srv::Motorsend_Response";
}

template<>
struct has_fixed_size<message::srv::Motorsend_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<message::srv::Motorsend_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message::srv::Motorsend>()
{
  return "message::srv::Motorsend";
}

template<>
struct has_fixed_size<message::srv::Motorsend>
  : std::integral_constant<
    bool,
    has_fixed_size<message::srv::Motorsend_Request>::value &&
    has_fixed_size<message::srv::Motorsend_Response>::value
  >
{
};

template<>
struct has_bounded_size<message::srv::Motorsend>
  : std::integral_constant<
    bool,
    has_bounded_size<message::srv::Motorsend_Request>::value &&
    has_bounded_size<message::srv::Motorsend_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE__SRV__MOTORSEND__TRAITS_HPP_
