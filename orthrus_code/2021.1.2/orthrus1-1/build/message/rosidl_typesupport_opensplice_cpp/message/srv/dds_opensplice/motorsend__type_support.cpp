// generated from rosidl_typesupport_opensplice_cpp/resource/idl__dds_opensplice_type_support.cpp.em
// generated code does not contain a copyright notice

#include <codecvt>
#include <cstring>
#include <iostream>
#include <limits>
#include <locale>
#include <sstream>
#include <stdexcept>
#include <string>

#include <u_instanceHandle.h>
#include <CdrTypeSupport.h>

// generated from rosidl_typesupport_opensplice_cpp/resource/srv__type_support.cpp.em
// generated code does not contain a copyright notice

#include "message/srv/motorsend__rosidl_typesupport_opensplice_cpp.hpp"
#include "rosidl_generator_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_opensplice_cpp/visibility_control.h"
#include "rmw/rmw.h"
#include "message/srv/motorsend__struct.hpp"
// already included above
// #include "message/srv/motorsend__rosidl_typesupport_opensplice_cpp.hpp"
#include "message/srv/dds_opensplice/ccpp_Motorsend_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/service_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/service_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/requester.hpp"
#include "rosidl_typesupport_opensplice_cpp/responder.hpp"

// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "message/srv/motorsend__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "message/srv/motorsend__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "message/srv/motorsend__struct.hpp"
// already included above
// #include "message/srv/dds_opensplice/ccpp_Motorsend_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace message
{
namespace srv
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_Motorsend_Request = message::srv::dds_::Motorsend_Request_;
using __ros_msg_type_Motorsend_Request = message::srv::Motorsend_Request;

static message::srv::dds_::Motorsend_Request_TypeSupport __type_support_Motorsend_Request;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
register_type__Motorsend_Request(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_Motorsend_Request.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
void
convert_ros_message_to_dds(
  const __ros_msg_type_Motorsend_Request & ros_message,
  __dds_msg_type_Motorsend_Request & dds_message)
{
  // member.name mode_0
  dds_message.mode_0_ = ros_message.mode_0;
  // member.name t_0
  dds_message.t_0_ = ros_message.t_0;
  // member.name w_0
  dds_message.w_0_ = ros_message.w_0;
  // member.name pos_0
  dds_message.pos_0_ = ros_message.pos_0;
  // member.name k_p_0
  dds_message.k_p_0_ = ros_message.k_p_0;
  // member.name k_w_0
  dds_message.k_w_0_ = ros_message.k_w_0;
  // member.name mode_1
  dds_message.mode_1_ = ros_message.mode_1;
  // member.name t_1
  dds_message.t_1_ = ros_message.t_1;
  // member.name w_1
  dds_message.w_1_ = ros_message.w_1;
  // member.name pos_1
  dds_message.pos_1_ = ros_message.pos_1;
  // member.name k_p_1
  dds_message.k_p_1_ = ros_message.k_p_1;
  // member.name k_w_1
  dds_message.k_w_1_ = ros_message.k_w_1;
  // member.name mode_2
  dds_message.mode_2_ = ros_message.mode_2;
  // member.name t_2
  dds_message.t_2_ = ros_message.t_2;
  // member.name w_2
  dds_message.w_2_ = ros_message.w_2;
  // member.name pos_2
  dds_message.pos_2_ = ros_message.pos_2;
  // member.name k_p_2
  dds_message.k_p_2_ = ros_message.k_p_2;
  // member.name k_w_2
  dds_message.k_w_2_ = ros_message.k_w_2;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
publish__Motorsend_Request(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_Motorsend_Request & ros_message = *static_cast<const __ros_msg_type_Motorsend_Request *>(untyped_ros_message);
  __dds_msg_type_Motorsend_Request dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  message::srv::dds_::Motorsend_Request_DataWriter * data_writer =
    message::srv::dds_::Motorsend_Request_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Request_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Motorsend_Request_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::srv::dds_::Motorsend_Request_DataWriter.write: "
             "this message::srv::dds_::Motorsend_Request_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Request_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "message::srv::dds_::Motorsend_Request_DataWriter.write: "
             "this message::srv::dds_::Motorsend_Request_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::srv::dds_::Motorsend_Request_DataWriter.write: "
             "the handle has not been registered with this message::srv::dds_::Motorsend_Request_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "message::srv::dds_::Motorsend_Request_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "message::srv::dds_::Motorsend_Request_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
void
convert_dds_message_to_ros(
  const __dds_msg_type_Motorsend_Request & dds_message,
  __ros_msg_type_Motorsend_Request & ros_message)
{
  // member.name mode_0
  ros_message.mode_0 =
    dds_message.mode_0_;
  // member.name t_0
  ros_message.t_0 =
    dds_message.t_0_;
  // member.name w_0
  ros_message.w_0 =
    dds_message.w_0_;
  // member.name pos_0
  ros_message.pos_0 =
    dds_message.pos_0_;
  // member.name k_p_0
  ros_message.k_p_0 =
    dds_message.k_p_0_;
  // member.name k_w_0
  ros_message.k_w_0 =
    dds_message.k_w_0_;
  // member.name mode_1
  ros_message.mode_1 =
    dds_message.mode_1_;
  // member.name t_1
  ros_message.t_1 =
    dds_message.t_1_;
  // member.name w_1
  ros_message.w_1 =
    dds_message.w_1_;
  // member.name pos_1
  ros_message.pos_1 =
    dds_message.pos_1_;
  // member.name k_p_1
  ros_message.k_p_1 =
    dds_message.k_p_1_;
  // member.name k_w_1
  ros_message.k_w_1 =
    dds_message.k_w_1_;
  // member.name mode_2
  ros_message.mode_2 =
    dds_message.mode_2_;
  // member.name t_2
  ros_message.t_2 =
    dds_message.t_2_;
  // member.name w_2
  ros_message.w_2 =
    dds_message.w_2_;
  // member.name pos_2
  ros_message.pos_2 =
    dds_message.pos_2_;
  // member.name k_p_2
  ros_message.k_p_2 =
    dds_message.k_p_2_;
  // member.name k_w_2
  ros_message.k_w_2 =
    dds_message.k_w_2_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
take__Motorsend_Request(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  message::srv::dds_::Motorsend_Request_DataReader * data_reader =
    message::srv::dds_::Motorsend_Request_DataReader::_narrow(topic_reader);

  message::srv::dds_::Motorsend_Request_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "message::srv::dds_::Motorsend_Request_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "message::srv::dds_::Motorsend_Request_DataReader.take: "
        "this message::srv::dds_::Motorsend_Request_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "message::srv::dds_::Motorsend_Request_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "message::srv::dds_::Motorsend_Request_DataReader.take: "
        "this message::srv::dds_::Motorsend_Request_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "message::srv::dds_::Motorsend_Request_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "message::srv::dds_::Motorsend_Request_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_Motorsend_Request & ros_message = *static_cast<__ros_msg_type_Motorsend_Request *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Request_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::srv::dds_::Motorsend_Request_DataReader.return_loan: "
             "this message::srv::dds_::Motorsend_Request_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Request_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "message::srv::dds_::Motorsend_Request_DataReader.return_loan: "
             "this message::srv::dds_::Motorsend_Request_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::srv::dds_::Motorsend_Request_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "message::srv::dds_::Motorsend_Request_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::srv::dds_::Motorsend_Request_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
serialize__Motorsend_Request(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_Motorsend_Request & ros_message = *static_cast<const __ros_msg_type_Motorsend_Request *>(untyped_ros_message);
  __dds_msg_type_Motorsend_Request dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_Motorsend_Request);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.serialize: "
             "this message::srv::dds_::Motorsend_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "message::srv::dds_::Motorsend_Request_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
deserialize__Motorsend_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_Motorsend_Request dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_Motorsend_Request);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.deserialize: "
             "this message::srv::dds_::Motorsend_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::srv::dds_::Motorsend_Request_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_Motorsend_Request & ros_message = *static_cast<__ros_msg_type_Motorsend_Request *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t Motorsend_Request_callbacks = {
  "message::srv",
  "Motorsend_Request",
  &register_type__Motorsend_Request,
  &publish__Motorsend_Request,
  &take__Motorsend_Request,
  &serialize__Motorsend_Request,
  &deserialize__Motorsend_Request,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t Motorsend_Request_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &Motorsend_Request_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace message

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const rosidl_message_type_support_t *
get_message_type_support_handle<message::srv::Motorsend_Request>()
{
  return &message::srv::typesupport_opensplice_cpp::Motorsend_Request_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  message, srv,
  Motorsend_Request)()
{
  return &message::srv::typesupport_opensplice_cpp::Motorsend_Request_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "message/srv/motorsend__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "message/srv/motorsend__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "message/srv/motorsend__struct.hpp"
// already included above
// #include "message/srv/dds_opensplice/ccpp_Motorsend_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace message
{
namespace srv
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_Motorsend_Response = message::srv::dds_::Motorsend_Response_;
using __ros_msg_type_Motorsend_Response = message::srv::Motorsend_Response;

static message::srv::dds_::Motorsend_Response_TypeSupport __type_support_Motorsend_Response;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
register_type__Motorsend_Response(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_Motorsend_Response.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
void
convert_ros_message_to_dds(
  const __ros_msg_type_Motorsend_Response & ros_message,
  __dds_msg_type_Motorsend_Response & dds_message)
{
  // member.name temp_0
  dds_message.temp_0_ = ros_message.temp_0;
  // member.name t_0
  dds_message.t_0_ = ros_message.t_0;
  // member.name w_0
  dds_message.w_0_ = ros_message.w_0;
  // member.name lw_0
  dds_message.lw_0_ = ros_message.lw_0;
  // member.name acc_0
  dds_message.acc_0_ = ros_message.acc_0;
  // member.name pos_0
  dds_message.pos_0_ = ros_message.pos_0;
  // member.name gyro_0_x
  dds_message.gyro_0_x_ = ros_message.gyro_0_x;
  // member.name gyro_0_y
  dds_message.gyro_0_y_ = ros_message.gyro_0_y;
  // member.name gyro_0_z
  dds_message.gyro_0_z_ = ros_message.gyro_0_z;
  // member.name acc_0_x
  dds_message.acc_0_x_ = ros_message.acc_0_x;
  // member.name acc_0_y
  dds_message.acc_0_y_ = ros_message.acc_0_y;
  // member.name acc_0_z
  dds_message.acc_0_z_ = ros_message.acc_0_z;
  // member.name temp_1
  dds_message.temp_1_ = ros_message.temp_1;
  // member.name t_1
  dds_message.t_1_ = ros_message.t_1;
  // member.name w_1
  dds_message.w_1_ = ros_message.w_1;
  // member.name lw_1
  dds_message.lw_1_ = ros_message.lw_1;
  // member.name acc_1
  dds_message.acc_1_ = ros_message.acc_1;
  // member.name pos_1
  dds_message.pos_1_ = ros_message.pos_1;
  // member.name gyro_1_x
  dds_message.gyro_1_x_ = ros_message.gyro_1_x;
  // member.name gyro_1_y
  dds_message.gyro_1_y_ = ros_message.gyro_1_y;
  // member.name gyro_1_z
  dds_message.gyro_1_z_ = ros_message.gyro_1_z;
  // member.name acc_1_x
  dds_message.acc_1_x_ = ros_message.acc_1_x;
  // member.name acc_1_y
  dds_message.acc_1_y_ = ros_message.acc_1_y;
  // member.name acc_1_z
  dds_message.acc_1_z_ = ros_message.acc_1_z;
  // member.name temp_2
  dds_message.temp_2_ = ros_message.temp_2;
  // member.name t_2
  dds_message.t_2_ = ros_message.t_2;
  // member.name w_2
  dds_message.w_2_ = ros_message.w_2;
  // member.name lw_2
  dds_message.lw_2_ = ros_message.lw_2;
  // member.name acc_2
  dds_message.acc_2_ = ros_message.acc_2;
  // member.name pos_2
  dds_message.pos_2_ = ros_message.pos_2;
  // member.name gyro_2_x
  dds_message.gyro_2_x_ = ros_message.gyro_2_x;
  // member.name gyro_2_y
  dds_message.gyro_2_y_ = ros_message.gyro_2_y;
  // member.name gyro_2_z
  dds_message.gyro_2_z_ = ros_message.gyro_2_z;
  // member.name acc_2_x
  dds_message.acc_2_x_ = ros_message.acc_2_x;
  // member.name acc_2_y
  dds_message.acc_2_y_ = ros_message.acc_2_y;
  // member.name acc_2_z
  dds_message.acc_2_z_ = ros_message.acc_2_z;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
publish__Motorsend_Response(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_Motorsend_Response & ros_message = *static_cast<const __ros_msg_type_Motorsend_Response *>(untyped_ros_message);
  __dds_msg_type_Motorsend_Response dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  message::srv::dds_::Motorsend_Response_DataWriter * data_writer =
    message::srv::dds_::Motorsend_Response_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Response_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Motorsend_Response_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::srv::dds_::Motorsend_Response_DataWriter.write: "
             "this message::srv::dds_::Motorsend_Response_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Response_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "message::srv::dds_::Motorsend_Response_DataWriter.write: "
             "this message::srv::dds_::Motorsend_Response_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::srv::dds_::Motorsend_Response_DataWriter.write: "
             "the handle has not been registered with this message::srv::dds_::Motorsend_Response_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "message::srv::dds_::Motorsend_Response_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "message::srv::dds_::Motorsend_Response_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
void
convert_dds_message_to_ros(
  const __dds_msg_type_Motorsend_Response & dds_message,
  __ros_msg_type_Motorsend_Response & ros_message)
{
  // member.name temp_0
  ros_message.temp_0 =
    dds_message.temp_0_;
  // member.name t_0
  ros_message.t_0 =
    dds_message.t_0_;
  // member.name w_0
  ros_message.w_0 =
    dds_message.w_0_;
  // member.name lw_0
  ros_message.lw_0 =
    dds_message.lw_0_;
  // member.name acc_0
  ros_message.acc_0 =
    dds_message.acc_0_;
  // member.name pos_0
  ros_message.pos_0 =
    dds_message.pos_0_;
  // member.name gyro_0_x
  ros_message.gyro_0_x =
    dds_message.gyro_0_x_;
  // member.name gyro_0_y
  ros_message.gyro_0_y =
    dds_message.gyro_0_y_;
  // member.name gyro_0_z
  ros_message.gyro_0_z =
    dds_message.gyro_0_z_;
  // member.name acc_0_x
  ros_message.acc_0_x =
    dds_message.acc_0_x_;
  // member.name acc_0_y
  ros_message.acc_0_y =
    dds_message.acc_0_y_;
  // member.name acc_0_z
  ros_message.acc_0_z =
    dds_message.acc_0_z_;
  // member.name temp_1
  ros_message.temp_1 =
    dds_message.temp_1_;
  // member.name t_1
  ros_message.t_1 =
    dds_message.t_1_;
  // member.name w_1
  ros_message.w_1 =
    dds_message.w_1_;
  // member.name lw_1
  ros_message.lw_1 =
    dds_message.lw_1_;
  // member.name acc_1
  ros_message.acc_1 =
    dds_message.acc_1_;
  // member.name pos_1
  ros_message.pos_1 =
    dds_message.pos_1_;
  // member.name gyro_1_x
  ros_message.gyro_1_x =
    dds_message.gyro_1_x_;
  // member.name gyro_1_y
  ros_message.gyro_1_y =
    dds_message.gyro_1_y_;
  // member.name gyro_1_z
  ros_message.gyro_1_z =
    dds_message.gyro_1_z_;
  // member.name acc_1_x
  ros_message.acc_1_x =
    dds_message.acc_1_x_;
  // member.name acc_1_y
  ros_message.acc_1_y =
    dds_message.acc_1_y_;
  // member.name acc_1_z
  ros_message.acc_1_z =
    dds_message.acc_1_z_;
  // member.name temp_2
  ros_message.temp_2 =
    dds_message.temp_2_;
  // member.name t_2
  ros_message.t_2 =
    dds_message.t_2_;
  // member.name w_2
  ros_message.w_2 =
    dds_message.w_2_;
  // member.name lw_2
  ros_message.lw_2 =
    dds_message.lw_2_;
  // member.name acc_2
  ros_message.acc_2 =
    dds_message.acc_2_;
  // member.name pos_2
  ros_message.pos_2 =
    dds_message.pos_2_;
  // member.name gyro_2_x
  ros_message.gyro_2_x =
    dds_message.gyro_2_x_;
  // member.name gyro_2_y
  ros_message.gyro_2_y =
    dds_message.gyro_2_y_;
  // member.name gyro_2_z
  ros_message.gyro_2_z =
    dds_message.gyro_2_z_;
  // member.name acc_2_x
  ros_message.acc_2_x =
    dds_message.acc_2_x_;
  // member.name acc_2_y
  ros_message.acc_2_y =
    dds_message.acc_2_y_;
  // member.name acc_2_z
  ros_message.acc_2_z =
    dds_message.acc_2_z_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
take__Motorsend_Response(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  message::srv::dds_::Motorsend_Response_DataReader * data_reader =
    message::srv::dds_::Motorsend_Response_DataReader::_narrow(topic_reader);

  message::srv::dds_::Motorsend_Response_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "message::srv::dds_::Motorsend_Response_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "message::srv::dds_::Motorsend_Response_DataReader.take: "
        "this message::srv::dds_::Motorsend_Response_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "message::srv::dds_::Motorsend_Response_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "message::srv::dds_::Motorsend_Response_DataReader.take: "
        "this message::srv::dds_::Motorsend_Response_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "message::srv::dds_::Motorsend_Response_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "message::srv::dds_::Motorsend_Response_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_Motorsend_Response & ros_message = *static_cast<__ros_msg_type_Motorsend_Response *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Response_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::srv::dds_::Motorsend_Response_DataReader.return_loan: "
             "this message::srv::dds_::Motorsend_Response_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Response_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "message::srv::dds_::Motorsend_Response_DataReader.return_loan: "
             "this message::srv::dds_::Motorsend_Response_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::srv::dds_::Motorsend_Response_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "message::srv::dds_::Motorsend_Response_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::srv::dds_::Motorsend_Response_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
serialize__Motorsend_Response(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_Motorsend_Response & ros_message = *static_cast<const __ros_msg_type_Motorsend_Response *>(untyped_ros_message);
  __dds_msg_type_Motorsend_Response dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_Motorsend_Response);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.serialize: "
             "this message::srv::dds_::Motorsend_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "message::srv::dds_::Motorsend_Response_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
deserialize__Motorsend_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_Motorsend_Response dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_Motorsend_Response);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.deserialize: "
             "this message::srv::dds_::Motorsend_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::srv::dds_::Motorsend_Response_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_Motorsend_Response & ros_message = *static_cast<__ros_msg_type_Motorsend_Response *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t Motorsend_Response_callbacks = {
  "message::srv",
  "Motorsend_Response",
  &register_type__Motorsend_Response,
  &publish__Motorsend_Response,
  &take__Motorsend_Response,
  &serialize__Motorsend_Response,
  &deserialize__Motorsend_Response,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t Motorsend_Response_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &Motorsend_Response_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace message

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const rosidl_message_type_support_t *
get_message_type_support_handle<message::srv::Motorsend_Response>()
{
  return &message::srv::typesupport_opensplice_cpp::Motorsend_Response_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  message, srv,
  Motorsend_Response)()
{
  return &message::srv::typesupport_opensplice_cpp::Motorsend_Response_handle;
}

#ifdef __cplusplus
}
#endif


namespace rosidl_typesupport_opensplice_cpp
{

template<>
class Sample<message::srv::dds_::Motorsend_Request_>
  : public message::srv::dds_::Sample_Motorsend_Request_
{
public:
  message::srv::dds_::Motorsend_Request_ & data()
  {
    return request_;
  }
};

template<>
class TemplateDataReader<message::srv::dds_::Sample_Motorsend_Request_>
  : public message::srv::dds_::Sample_Motorsend_Request_DataReader
{
public:
  static const char * take_sample(
    DDS::DataReader * datareader,
    Sample<message::srv::dds_::Motorsend_Request_> & sample,
    bool * taken)
  noexcept
  {
    message::srv::dds_::Sample_Motorsend_Request_DataReader * typed_datareader = _narrow(datareader);

    message::srv::dds_::Sample_Motorsend_Request_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      // See ros2/rclcpp#192 for a justification of this option:
      // https://github.com/ros2/rclcpp/issues/192#issuecomment-183491185
      DDS::ANY_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.take failed with: "
               "this message::srv::dds_::Sample_Motorsend_Request_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.take failed with: "
               "this message::srv::dds_::Sample_Motorsend_Request_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.take failed with "
               "unknown return code";
    }

    *taken = (sample_infos.length() > 0 && sample_infos[0].valid_data);
    if (*taken) {
      sample = reinterpret_cast<Sample<message::srv::dds_::Motorsend_Request_> &>(dds_messages[0]);
    }
    status = typed_datareader->return_loan(dds_messages, sample_infos);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.return_loan failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.return_loan failed with: "
               "this message::srv::dds_::Sample_Motorsend_Request_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.return_loan failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.return_loan failed with: "
               "this message::srv::dds_::Sample_Motorsend_Request_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.return_loan failed with: "
               "a precondition is not met, one of: "
               "the data_values and info_seq do not belong to a single related pair, or "
               "the data_values and info_seq were not obtained from this "
               "message::srv::dds_::Sample_Motorsend_Request_DataReader";
      case DDS::RETCODE_OK:
        break;
      default:
        return "message::srv::dds_::Sample_Motorsend_Request_DataReader.return_loan failed with "
               "unknown return code";
    }

    return nullptr;
  }
};

template<>
class TemplateDataReader<Sample<message::srv::dds_::Motorsend_Request_>>
  : public TemplateDataReader<message::srv::dds_::Sample_Motorsend_Request_>
{
};

template<>
class TemplateDataWriter<message::srv::dds_::Sample_Motorsend_Request_>
  : public message::srv::dds_::Sample_Motorsend_Request_DataWriter
{
public:
  static const char * write_sample(
    DDS::DataWriter * datawriter,
    Sample<message::srv::dds_::Motorsend_Request_> & sample)
  noexcept
  {
    message::srv::dds_::Sample_Motorsend_Request_DataWriter * typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "message::srv::dds_::Sample_Motorsend_Request_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "message::srv::dds_::Sample_Motorsend_Request_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "message::srv::dds_::Sample_Motorsend_Request_DataWriter.write: "
               "this message::srv::dds_::Sample_Motorsend_Request_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "message::srv::dds_::Sample_Motorsend_Request_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "message::srv::dds_::Sample_Motorsend_Request_DataWriter.write: "
               "this message::srv::dds_::Sample_Motorsend_Request_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "message::srv::dds_::Sample_Motorsend_Request_DataWriter.write: "
               "the handle has not been registered with this "
               "message::srv::dds_::Sample_Motorsend_Request_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "message::srv::dds_::Sample_Motorsend_Request_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "message::srv::dds_::Sample_Motorsend_Request_DataWriter.write: unknown return code";
    }
  }
};

template<>
class TemplateDataWriter<Sample<message::srv::dds_::Motorsend_Request_>>
  : public TemplateDataWriter<message::srv::dds_::Sample_Motorsend_Request_>
{
};

template<>
class Sample<message::srv::dds_::Motorsend_Response_>
  : public message::srv::dds_::Sample_Motorsend_Response_
{
public:
  message::srv::dds_::Motorsend_Response_ & data()
  {
    return response_;
  }
};

template<>
class TemplateDataReader<message::srv::dds_::Sample_Motorsend_Response_>
  : public message::srv::dds_::Sample_Motorsend_Response_DataReader
{
public:
  static const char * take_sample(
    DDS::DataReader * datareader,
    Sample<message::srv::dds_::Motorsend_Response_> & sample,
    bool * taken)
  noexcept
  {
    message::srv::dds_::Sample_Motorsend_Response_DataReader * typed_datareader = _narrow(datareader);

    message::srv::dds_::Sample_Motorsend_Response_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      // See ros2/rclcpp#192 for a justification of this option:
      // https://github.com/ros2/rclcpp/issues/192#issuecomment-183491185
      DDS::ANY_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.take failed with: "
               "this message::srv::dds_::Sample_Motorsend_Response_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.take failed with: "
               "this message::srv::dds_::Sample_Motorsend_Response_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.take failed with "
               "unknown return code";
    }

    *taken = (sample_infos.length() > 0 && sample_infos[0].valid_data);
    if (*taken) {
      sample = reinterpret_cast<Sample<message::srv::dds_::Motorsend_Response_> &>(dds_messages[0]);
    }
    status = typed_datareader->return_loan(dds_messages, sample_infos);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.return_loan failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.return_loan failed with: "
               "this message::srv::dds_::Sample_Motorsend_Response_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.return_loan failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.return_loan failed with: "
               "this message::srv::dds_::Sample_Motorsend_Response_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.return_loan failed with: "
               "a precondition is not met, one of: "
               "the data_values and info_seq do not belong to a single related pair, or "
               "the data_values and info_seq were not obtained from this "
               "message::srv::dds_::Sample_Motorsend_Response_DataReader";
      case DDS::RETCODE_OK:
        break;
      default:
        return "message::srv::dds_::Sample_Motorsend_Response_DataReader.return_loan failed with "
               "unknown return code";
    }

    return nullptr;
  }
};

template<>
class TemplateDataReader<Sample<message::srv::dds_::Motorsend_Response_>>
  : public TemplateDataReader<message::srv::dds_::Sample_Motorsend_Response_>
{
};

template<>
class TemplateDataWriter<message::srv::dds_::Sample_Motorsend_Response_>
  : public message::srv::dds_::Sample_Motorsend_Response_DataWriter
{
public:
  static const char * write_sample(
    DDS::DataWriter * datawriter,
    Sample<message::srv::dds_::Motorsend_Response_> & sample)
  noexcept
  {
    message::srv::dds_::Sample_Motorsend_Response_DataWriter * typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "message::srv::dds_::Sample_Motorsend_Response_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "message::srv::dds_::Sample_Motorsend_Response_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "message::srv::dds_::Sample_Motorsend_Response_DataWriter.write: "
               "this message::srv::dds_::Sample_Motorsend_Response_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "message::srv::dds_::Sample_Motorsend_Response_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "message::srv::dds_::Sample_Motorsend_Response_DataWriter.write: "
               "this message::srv::dds_::Sample_Motorsend_Response_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "message::srv::dds_::Sample_Motorsend_Response_DataWriter.write: "
               "the handle has not been registered with this "
               "message::srv::dds_::Sample_Motorsend_Response_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "message::srv::dds_::Sample_Motorsend_Response_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "message::srv::dds_::Sample_Motorsend_Response_DataWriter.write: unknown return code";
    }
  }
};

template<>
class TemplateDataWriter<Sample<message::srv::dds_::Motorsend_Response_>>
  : public TemplateDataWriter<message::srv::dds_::Sample_Motorsend_Response_>
{
};

}  // namespace rosidl_typesupport_opensplice_cpp

namespace message
{
namespace srv
{

namespace typesupport_opensplice_cpp
{

const char *
register_types__Motorsend(
  void * untyped_participant, const char * request_type_name, const char * response_type_name)
{
  DDS::DomainParticipant * participant = static_cast<DDS::DomainParticipant *>(untyped_participant);

  message::srv::dds_::Sample_Motorsend_Request_TypeSupport ros_request_ts;
  DDS::ReturnCode_t status = ros_request_ts.register_type(participant, request_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Sample_Motorsend_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Sample_Motorsend_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Sample_Motorsend_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::srv::dds_::Sample_Motorsend_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::srv::dds_::Sample_Motorsend_Request_TypeSupport.register_type: unkown return code";
  }

  message::srv::dds_::Sample_Motorsend_Response_TypeSupport ros_response_ts;
  status = ros_response_ts.register_type(participant, response_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::srv::dds_::Sample_Motorsend_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::srv::dds_::Sample_Motorsend_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::srv::dds_::Sample_Motorsend_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::srv::dds_::Sample_Motorsend_Response_TypeSupport.register_type: "
             "precondition not met, already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::srv::dds_::Sample_Motorsend_Response_TypeSupport.register_type: unkown return code";
  }
  return nullptr;
}

const char *
create_requester__Motorsend(
  void * untyped_participant, const char * service_name,
  void ** untyped_requester, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("message::srv::dds_::Sample_Motorsend");
  const std::string request_type_name("message::srv::dds_::Sample_Motorsend_Request_");
  const std::string response_type_name("message::srv::dds_::Sample_Motorsend_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

  const char * error_string = register_types__Motorsend(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;

  RequesterT * requester = static_cast<RequesterT *>(_allocator(sizeof(RequesterT)));
  if (!requester) {
    return "failed to allocate memory for requester";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (requester) RequesterT(participant, service_name, service_type_name);
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of RequesterT";
  }
  error_string = requester->init(datareader_qos, datawriter_qos,
      avoid_ros_namespace_conventions);
  if (error_string) {
    return error_string;
  }

  *untyped_requester = requester;
  *untyped_reader = requester->get_response_datareader();

  return nullptr;
}

const char *
create_responder__Motorsend(
  void * untyped_participant, const char * service_name,
  void ** untyped_responder, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("message::srv::dds_::Sample_Motorsend");
  const std::string request_type_name("message::srv::dds_::Sample_Motorsend_Request_");
  const std::string response_type_name("message::srv::dds_::Sample_Motorsend_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

  const char * error_string = register_types__Motorsend(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;

  ResponderT * responder = static_cast<ResponderT *>(_allocator(sizeof(ResponderT)));
  if (!responder) {
    return "failed to allocate memory for responder";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (responder) ResponderT(participant, service_name, service_type_name);
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of ResponderT";
  }
  error_string = responder->init(datareader_qos, datawriter_qos,
      avoid_ros_namespace_conventions);
  if (error_string) {
    return error_string;
  }

  *untyped_responder = responder;
  *untyped_reader = responder->get_request_datareader();

  return nullptr;
}

const char *
send_request__Motorsend(
  void * untyped_requester, const void * untyped_ros_request, int64_t * sequence_number)
{
  using SampleT = rosidl_typesupport_opensplice_cpp::Sample<message::srv::dds_::Motorsend_Request_>;
  using ROSRequestT = message::srv::Motorsend_Request;

  SampleT request;
  auto ros_request = reinterpret_cast<const ROSRequestT *>(untyped_ros_request);
  message::srv::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_request, request.data());

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;

  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  const char * error_string = requester->send_request(request);
  if (error_string) {
    return error_string;
  }
  *sequence_number = request.sequence_number_;

  return nullptr;
}

const char *
take_request__Motorsend(
  void * untyped_responder, rmw_request_id_t * request_header, void * untyped_ros_request,
  bool * taken)
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;
  using ROSRequestT = message::srv::Motorsend_Request;

  auto ros_request = static_cast<ROSRequestT *>(untyped_ros_request);

  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  rosidl_typesupport_opensplice_cpp::Sample<message::srv::dds_::Motorsend_Request_> request;
  const char * error_string = responder->take_request(request, taken);
  if (error_string) {
    return error_string;
  }

  if (*taken) {
    message::srv::typesupport_opensplice_cpp::convert_dds_message_to_ros(request.data(), *ros_request);

    request_header->sequence_number = request.sequence_number_;
    std::memcpy(
      &request_header->writer_guid[0], &request.client_guid_0_, sizeof(request.client_guid_0_));
    std::memcpy(
      &request_header->writer_guid[0] + sizeof(request.client_guid_0_),
      &request.client_guid_1_, sizeof(request.client_guid_1_));

    *taken = true;
    return nullptr;
  }
  *taken = false;
  return nullptr;
}

const char *
send_response__Motorsend(
  void * untyped_responder, const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ROSResponseT = message::srv::Motorsend_Response;
  rosidl_typesupport_opensplice_cpp::Sample<message::srv::dds_::Motorsend_Response_> response;
  auto ros_response = reinterpret_cast<const ROSResponseT *>(untyped_ros_response);
  message::srv::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_response, response.data());


  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;
  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  const char * error_string = responder->send_response(*request_header, response);
  if (error_string) {
    return error_string;
  }
  return nullptr;
}

const char *
take_response__Motorsend(
  void * untyped_requester, rmw_request_id_t * request_header, void * untyped_ros_response,
  bool * taken)
{
  using ROSResponseT = message::srv::Motorsend_Response;
  auto ros_response = static_cast<ROSResponseT *>(untyped_ros_response);

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;
  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  rosidl_typesupport_opensplice_cpp::Sample<message::srv::dds_::Motorsend_Response_> response;
  const char * error_string = requester->take_response(response, taken);
  if (error_string) {
    return error_string;
  }
  if (*taken) {
    request_header->sequence_number = response.sequence_number_;

    message::srv::typesupport_opensplice_cpp::convert_dds_message_to_ros(
      response.data(), *ros_response);
    return nullptr;
  }

  return nullptr;
}

const char *
destroy_requester__Motorsend(void * untyped_requester, void (* deallocator)(void *))
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;

  auto requester = static_cast<RequesterT *>(untyped_requester);
  const char * teardown_status = requester->teardown();
  try {
    requester->~RequesterT();
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of RequesterT";
  }
  if (teardown_status != nullptr) {
    return teardown_status;
  }
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(requester);
  return nullptr;
}

const char *
destroy_responder__Motorsend(void * untyped_responder, void (* deallocator)(void *))
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;
  auto responder = static_cast<ResponderT *>(untyped_responder);
  const char * teardown_status = responder->teardown();
  try {
    responder->~ResponderT();
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of ResponderT";
  }
  if (teardown_status != nullptr) {
    return teardown_status;
  }
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(responder);
  return nullptr;
}

const char *
server_is_available__Motorsend(
  void * requester, const rmw_node_t * node, bool * is_available)
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;

  auto typed_requester = reinterpret_cast<RequesterT *>(requester);

  return typed_requester->server_is_available(node, is_available);
}

static service_type_support_callbacks_t Motorsend_callbacks = {
  "message::srv",
  "Motorsend",
  &create_requester__Motorsend,
  &destroy_requester__Motorsend,
  &create_responder__Motorsend,
  &destroy_responder__Motorsend,
  &send_request__Motorsend,
  &take_request__Motorsend,
  &send_response__Motorsend,
  &take_response__Motorsend,
  &server_is_available__Motorsend,
};

static rosidl_service_type_support_t Motorsend_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &Motorsend_callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace message

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const rosidl_service_type_support_t *
get_service_type_support_handle<message::srv::Motorsend>()
{
  return &message::srv::typesupport_opensplice_cpp::Motorsend_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  message, srv,
  Motorsend)() {
  return &message::srv::typesupport_opensplice_cpp::Motorsend_handle;
}

#ifdef __cplusplus
}
#endif
