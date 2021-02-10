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

// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

#include "message/msg/motorrecv__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "message/msg/motorrecv__rosidl_typesupport_opensplice_cpp.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "message/msg/motorrecv__struct.hpp"
#include "message/msg/dds_opensplice/ccpp_Motorrecv_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
#include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace message
{
namespace msg
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_Motorrecv = message::msg::dds_::Motorrecv_;
using __ros_msg_type_Motorrecv = message::msg::Motorrecv;

static message::msg::dds_::Motorrecv_TypeSupport __type_support_Motorrecv;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
register_type__Motorrecv(
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

  DDS::ReturnCode_t status = __type_support_Motorrecv.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::msg::dds_::Motorrecv_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::msg::dds_::Motorrecv_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::msg::dds_::Motorrecv_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::msg::dds_::Motorrecv_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "message::msg::dds_::Motorrecv_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
void
convert_ros_message_to_dds(
  const __ros_msg_type_Motorrecv & ros_message,
  __dds_msg_type_Motorrecv & dds_message)
{
  // member.name structure_needs_at_least_one_member
  dds_message.structure_needs_at_least_one_member_ = ros_message.structure_needs_at_least_one_member;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
publish__Motorrecv(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_Motorrecv & ros_message = *static_cast<const __ros_msg_type_Motorrecv *>(untyped_ros_message);
  __dds_msg_type_Motorrecv dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  message::msg::dds_::Motorrecv_DataWriter * data_writer =
    message::msg::dds_::Motorrecv_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::msg::dds_::Motorrecv_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::msg::dds_::Motorrecv_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::msg::dds_::Motorrecv_DataWriter.write: "
             "this message::msg::dds_::Motorrecv_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::msg::dds_::Motorrecv_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "message::msg::dds_::Motorrecv_DataWriter.write: "
             "this message::msg::dds_::Motorrecv_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::msg::dds_::Motorrecv_DataWriter.write: "
             "the handle has not been registered with this message::msg::dds_::Motorrecv_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "message::msg::dds_::Motorrecv_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "message::msg::dds_::Motorrecv_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
void
convert_dds_message_to_ros(
  const __dds_msg_type_Motorrecv & dds_message,
  __ros_msg_type_Motorrecv & ros_message)
{
  // member.name structure_needs_at_least_one_member
  ros_message.structure_needs_at_least_one_member =
    dds_message.structure_needs_at_least_one_member_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
take__Motorrecv(
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

  message::msg::dds_::Motorrecv_DataReader * data_reader =
    message::msg::dds_::Motorrecv_DataReader::_narrow(topic_reader);

  message::msg::dds_::Motorrecv_Seq dds_messages;
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
      errs = "message::msg::dds_::Motorrecv_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "message::msg::dds_::Motorrecv_DataReader.take: "
        "this message::msg::dds_::Motorrecv_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "message::msg::dds_::Motorrecv_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "message::msg::dds_::Motorrecv_DataReader.take: "
        "this message::msg::dds_::Motorrecv_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "message::msg::dds_::Motorrecv_DataReader.take: "
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
      errs = "message::msg::dds_::Motorrecv_DataReader.take: unknown return code";
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
    __ros_msg_type_Motorrecv & ros_message = *static_cast<__ros_msg_type_Motorrecv *>(untyped_ros_message);
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
      return "message::msg::dds_::Motorrecv_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::msg::dds_::Motorrecv_DataReader.return_loan: "
             "this message::msg::dds_::Motorrecv_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::msg::dds_::Motorrecv_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "message::msg::dds_::Motorrecv_DataReader.return_loan: "
             "this message::msg::dds_::Motorrecv_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "message::msg::dds_::Motorrecv_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "message::msg::dds_::Motorrecv_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::msg::dds_::Motorrecv_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const char *
serialize__Motorrecv(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_Motorrecv & ros_message = *static_cast<const __ros_msg_type_Motorrecv *>(untyped_ros_message);
  __dds_msg_type_Motorrecv dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_Motorrecv);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::msg::dds_::Motorrecv_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::msg::dds_::Motorrecv_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::msg::dds_::Motorrecv_TypeSupport.serialize: "
             "this message::msg::dds_::Motorrecv_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::msg::dds_::Motorrecv_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::msg::dds_::Motorrecv_TypeSupport.serialize failed with "
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
      return "message::msg::dds_::Motorrecv_TypeSupport.serialize: "
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
deserialize__Motorrecv(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_Motorrecv dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_Motorrecv);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "message::msg::dds_::Motorrecv_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "message::msg::dds_::Motorrecv_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "message::msg::dds_::Motorrecv_TypeSupport.deserialize: "
             "this message::msg::dds_::Motorrecv_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "message::msg::dds_::Motorrecv_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "message::msg::dds_::Motorrecv_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_Motorrecv & ros_message = *static_cast<__ros_msg_type_Motorrecv *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t Motorrecv_callbacks = {
  "message::msg",
  "Motorrecv",
  &register_type__Motorrecv,
  &publish__Motorrecv,
  &take__Motorrecv,
  &serialize__Motorrecv,
  &deserialize__Motorrecv,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t Motorrecv_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &Motorrecv_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace message

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message
const rosidl_message_type_support_t *
get_message_type_support_handle<message::msg::Motorrecv>()
{
  return &message::msg::typesupport_opensplice_cpp::Motorrecv_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  message, msg,
  Motorrecv)()
{
  return &message::msg::typesupport_opensplice_cpp::Motorrecv_handle;
}

#ifdef __cplusplus
}
#endif
