// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from message:srv/Motorsend.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "message/msg/rosidl_typesupport_c__visibility_control.h"
#include "message/srv/motorsend__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace message
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Motorsend_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Motorsend_Request_type_support_ids_t;

static const _Motorsend_Request_type_support_ids_t _Motorsend_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_opensplice_c",  // ::rosidl_typesupport_opensplice_c::typesupport_identifier,
  }
};

typedef struct _Motorsend_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Motorsend_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motorsend_Request_type_support_symbol_names_t _Motorsend_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message, srv, Motorsend_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, Motorsend_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend_Request)),
  }
};

typedef struct _Motorsend_Request_type_support_data_t
{
  void * data[3];
} _Motorsend_Request_type_support_data_t;

static _Motorsend_Request_type_support_data_t _Motorsend_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motorsend_Request_message_typesupport_map = {
  3,
  "message",
  &_Motorsend_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Motorsend_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Motorsend_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motorsend_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motorsend_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, message, srv, Motorsend_Request)() {
  return &::message::srv::rosidl_typesupport_c::Motorsend_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "message/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "message/srv/motorsend__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace message
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Motorsend_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Motorsend_Response_type_support_ids_t;

static const _Motorsend_Response_type_support_ids_t _Motorsend_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_opensplice_c",  // ::rosidl_typesupport_opensplice_c::typesupport_identifier,
  }
};

typedef struct _Motorsend_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Motorsend_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motorsend_Response_type_support_symbol_names_t _Motorsend_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message, srv, Motorsend_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, Motorsend_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend_Response)),
  }
};

typedef struct _Motorsend_Response_type_support_data_t
{
  void * data[3];
} _Motorsend_Response_type_support_data_t;

static _Motorsend_Response_type_support_data_t _Motorsend_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motorsend_Response_message_typesupport_map = {
  3,
  "message",
  &_Motorsend_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Motorsend_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Motorsend_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motorsend_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motorsend_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, message, srv, Motorsend_Response)() {
  return &::message::srv::rosidl_typesupport_c::Motorsend_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "message/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace message
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Motorsend_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _Motorsend_type_support_ids_t;

static const _Motorsend_type_support_ids_t _Motorsend_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_opensplice_c",  // ::rosidl_typesupport_opensplice_c::typesupport_identifier,
  }
};

typedef struct _Motorsend_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _Motorsend_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motorsend_type_support_symbol_names_t _Motorsend_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message, srv, Motorsend)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message, srv, Motorsend)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend)),
  }
};

typedef struct _Motorsend_type_support_data_t
{
  void * data[3];
} _Motorsend_type_support_data_t;

static _Motorsend_type_support_data_t _Motorsend_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motorsend_service_typesupport_map = {
  3,
  "message",
  &_Motorsend_service_typesupport_ids.typesupport_identifier[0],
  &_Motorsend_service_typesupport_symbol_names.symbol_name[0],
  &_Motorsend_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Motorsend_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motorsend_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_message
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, message, srv, Motorsend)() {
  return &::message::srv::rosidl_typesupport_c::Motorsend_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
