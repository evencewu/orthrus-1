// generated from rosidl_typesupport_opensplice_c/resource/idl__dds_opensplice__type_support.c.em
// generated code does not contain a copyright notice

#include <cassert>
#include <codecvt>
#include <cstring>
#include <iostream>
#include <limits>
#include <locale>
#include <sstream>

#include <CdrTypeSupport.h>
#include <u_instanceHandle.h>

// generated from rosidl_typesupport_opensplice_c/resource/srv__type_support_c.cpp.em
// generated code does not contain a copyright notice

#include "message/srv/motorsend__rosidl_typesupport_opensplice_c.h"
#include "rmw/rmw.h"
#include "message/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
#include "message/srv/motorsend.h"
#include "message/srv/dds_opensplice/ccpp_Motorsend_.h"
#include "rosidl_typesupport_opensplice_c/identifier.h"
#include "message/srv/dds_opensplice/motorsend__type_support.cpp"
#include "message/msg/rosidl_generator_c__visibility_control.h"

// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "message/srv/motorsend__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "message/msg/rosidl_generator_c__visibility_control.h"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "message/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "message/srv/motorsend.h"
// already included above
// #include "message/srv/dds_opensplice/ccpp_Motorsend_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies

// forward declare type support functions

using __dds_msg_type_message__srv__Motorsend_Request = message::srv::dds_::Motorsend_Request_;
using __ros_msg_type_message__srv__Motorsend_Request = message__srv__Motorsend_Request;

static message::srv::dds_::Motorsend_Request_TypeSupport _type_support_message__srv__Motorsend_Request;

static const char *
register_type_message__srv__Motorsend_Request(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_message__srv__Motorsend_Request.register_type(participant, type_name);
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

static const char *
convert_ros_to_dds_message__srv__Motorsend_Request(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_message__srv__Motorsend_Request * ros_message = static_cast<const __ros_msg_type_message__srv__Motorsend_Request *>(untyped_ros_message);
  __dds_msg_type_message__srv__Motorsend_Request * dds_message = static_cast<__dds_msg_type_message__srv__Motorsend_Request *>(untyped_dds_message);
  // Field name: mode_0
  {
    dds_message->mode_0_ = ros_message->mode_0;
  }

  // Field name: t_0
  {
    dds_message->t_0_ = ros_message->t_0;
  }

  // Field name: w_0
  {
    dds_message->w_0_ = ros_message->w_0;
  }

  // Field name: pos_0
  {
    dds_message->pos_0_ = ros_message->pos_0;
  }

  // Field name: k_p_0
  {
    dds_message->k_p_0_ = ros_message->k_p_0;
  }

  // Field name: k_w_0
  {
    dds_message->k_w_0_ = ros_message->k_w_0;
  }

  // Field name: mode_1
  {
    dds_message->mode_1_ = ros_message->mode_1;
  }

  // Field name: t_1
  {
    dds_message->t_1_ = ros_message->t_1;
  }

  // Field name: w_1
  {
    dds_message->w_1_ = ros_message->w_1;
  }

  // Field name: pos_1
  {
    dds_message->pos_1_ = ros_message->pos_1;
  }

  // Field name: k_p_1
  {
    dds_message->k_p_1_ = ros_message->k_p_1;
  }

  // Field name: k_w_1
  {
    dds_message->k_w_1_ = ros_message->k_w_1;
  }

  // Field name: mode_2
  {
    dds_message->mode_2_ = ros_message->mode_2;
  }

  // Field name: t_2
  {
    dds_message->t_2_ = ros_message->t_2;
  }

  // Field name: w_2
  {
    dds_message->w_2_ = ros_message->w_2;
  }

  // Field name: pos_2
  {
    dds_message->pos_2_ = ros_message->pos_2;
  }

  // Field name: k_p_2
  {
    dds_message->k_p_2_ = ros_message->k_p_2;
  }

  // Field name: k_w_2
  {
    dds_message->k_w_2_ = ros_message->k_w_2;
  }

  return 0;
}

static const char *
publish_message__srv__Motorsend_Request(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_message__srv__Motorsend_Request dds_message;
  const char * err_msg = convert_ros_to_dds_message__srv__Motorsend_Request(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

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

static const char *
convert_dds_to_ros_message__srv__Motorsend_Request(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_message__srv__Motorsend_Request * dds_message = static_cast<const __dds_msg_type_message__srv__Motorsend_Request *>(untyped_dds_message);
  __ros_msg_type_message__srv__Motorsend_Request * ros_message = static_cast<__ros_msg_type_message__srv__Motorsend_Request *>(untyped_ros_message);
  // Field name: mode_0
  {
    ros_message->mode_0 = dds_message->mode_0_;
  }

  // Field name: t_0
  {
    ros_message->t_0 = dds_message->t_0_;
  }

  // Field name: w_0
  {
    ros_message->w_0 = dds_message->w_0_;
  }

  // Field name: pos_0
  {
    ros_message->pos_0 = dds_message->pos_0_;
  }

  // Field name: k_p_0
  {
    ros_message->k_p_0 = dds_message->k_p_0_;
  }

  // Field name: k_w_0
  {
    ros_message->k_w_0 = dds_message->k_w_0_;
  }

  // Field name: mode_1
  {
    ros_message->mode_1 = dds_message->mode_1_;
  }

  // Field name: t_1
  {
    ros_message->t_1 = dds_message->t_1_;
  }

  // Field name: w_1
  {
    ros_message->w_1 = dds_message->w_1_;
  }

  // Field name: pos_1
  {
    ros_message->pos_1 = dds_message->pos_1_;
  }

  // Field name: k_p_1
  {
    ros_message->k_p_1 = dds_message->k_p_1_;
  }

  // Field name: k_w_1
  {
    ros_message->k_w_1 = dds_message->k_w_1_;
  }

  // Field name: mode_2
  {
    ros_message->mode_2 = dds_message->mode_2_;
  }

  // Field name: t_2
  {
    ros_message->t_2 = dds_message->t_2_;
  }

  // Field name: w_2
  {
    ros_message->w_2 = dds_message->w_2_;
  }

  // Field name: pos_2
  {
    ros_message->pos_2 = dds_message->pos_2_;
  }

  // Field name: k_p_2
  {
    ros_message->k_p_2 = dds_message->k_p_2_;
  }

  // Field name: k_w_2
  {
    ros_message->k_w_2 = dds_message->k_w_2_;
  }

  return 0;
}

static const char *
take_message__srv__Motorsend_Request(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

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
    errs = convert_dds_to_ros_message__srv__Motorsend_Request(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
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
      return nullptr;
    default:
      return "message::srv::dds_::Motorsend_Request_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_message__srv__Motorsend_Request(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_message__srv__Motorsend_Request dds_message;
  const char * err_msg = convert_ros_to_dds_message__srv__Motorsend_Request(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_message__srv__Motorsend_Request);

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

static const char *
deserialize_message__srv__Motorsend_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_message__srv__Motorsend_Request);

  __dds_msg_type_message__srv__Motorsend_Request dds_message;
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

  errs = convert_dds_to_ros_message__srv__Motorsend_Request(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Motorsend_Request__callbacks = {
  "message::srv",  // message_namespace
  "Motorsend_Request",  // message_name
  register_type_message__srv__Motorsend_Request,  // register_type
  publish_message__srv__Motorsend_Request,  // publish
  take_message__srv__Motorsend_Request,  // take
  serialize_message__srv__Motorsend_Request,  // serialize message
  deserialize_message__srv__Motorsend_Request,  // deserialize message
  convert_ros_to_dds_message__srv__Motorsend_Request,  // convert_ros_to_dds
  convert_dds_to_ros_message__srv__Motorsend_Request,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Motorsend_Request__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Motorsend_Request__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  message, srv,
  Motorsend_Request)()
{
  return &Motorsend_Request__type_support;
}

#if defined(__cplusplus)
}
#endif
// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "message/srv/motorsend__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "message/msg/rosidl_generator_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "message/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "message/srv/motorsend.h"
// already included above
// #include "message/srv/dds_opensplice/ccpp_Motorsend_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies

// forward declare type support functions

using __dds_msg_type_message__srv__Motorsend_Response = message::srv::dds_::Motorsend_Response_;
using __ros_msg_type_message__srv__Motorsend_Response = message__srv__Motorsend_Response;

static message::srv::dds_::Motorsend_Response_TypeSupport _type_support_message__srv__Motorsend_Response;

static const char *
register_type_message__srv__Motorsend_Response(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_message__srv__Motorsend_Response.register_type(participant, type_name);
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

static const char *
convert_ros_to_dds_message__srv__Motorsend_Response(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_message__srv__Motorsend_Response * ros_message = static_cast<const __ros_msg_type_message__srv__Motorsend_Response *>(untyped_ros_message);
  __dds_msg_type_message__srv__Motorsend_Response * dds_message = static_cast<__dds_msg_type_message__srv__Motorsend_Response *>(untyped_dds_message);
  // Field name: temp_0
  {
    dds_message->temp_0_ = ros_message->temp_0;
  }

  // Field name: t_0
  {
    dds_message->t_0_ = ros_message->t_0;
  }

  // Field name: w_0
  {
    dds_message->w_0_ = ros_message->w_0;
  }

  // Field name: lw_0
  {
    dds_message->lw_0_ = ros_message->lw_0;
  }

  // Field name: acc_0
  {
    dds_message->acc_0_ = ros_message->acc_0;
  }

  // Field name: pos_0
  {
    dds_message->pos_0_ = ros_message->pos_0;
  }

  // Field name: gyro_0_x
  {
    dds_message->gyro_0_x_ = ros_message->gyro_0_x;
  }

  // Field name: gyro_0_y
  {
    dds_message->gyro_0_y_ = ros_message->gyro_0_y;
  }

  // Field name: gyro_0_z
  {
    dds_message->gyro_0_z_ = ros_message->gyro_0_z;
  }

  // Field name: acc_0_x
  {
    dds_message->acc_0_x_ = ros_message->acc_0_x;
  }

  // Field name: acc_0_y
  {
    dds_message->acc_0_y_ = ros_message->acc_0_y;
  }

  // Field name: acc_0_z
  {
    dds_message->acc_0_z_ = ros_message->acc_0_z;
  }

  // Field name: temp_1
  {
    dds_message->temp_1_ = ros_message->temp_1;
  }

  // Field name: t_1
  {
    dds_message->t_1_ = ros_message->t_1;
  }

  // Field name: w_1
  {
    dds_message->w_1_ = ros_message->w_1;
  }

  // Field name: lw_1
  {
    dds_message->lw_1_ = ros_message->lw_1;
  }

  // Field name: acc_1
  {
    dds_message->acc_1_ = ros_message->acc_1;
  }

  // Field name: pos_1
  {
    dds_message->pos_1_ = ros_message->pos_1;
  }

  // Field name: gyro_1_x
  {
    dds_message->gyro_1_x_ = ros_message->gyro_1_x;
  }

  // Field name: gyro_1_y
  {
    dds_message->gyro_1_y_ = ros_message->gyro_1_y;
  }

  // Field name: gyro_1_z
  {
    dds_message->gyro_1_z_ = ros_message->gyro_1_z;
  }

  // Field name: acc_1_x
  {
    dds_message->acc_1_x_ = ros_message->acc_1_x;
  }

  // Field name: acc_1_y
  {
    dds_message->acc_1_y_ = ros_message->acc_1_y;
  }

  // Field name: acc_1_z
  {
    dds_message->acc_1_z_ = ros_message->acc_1_z;
  }

  // Field name: temp_2
  {
    dds_message->temp_2_ = ros_message->temp_2;
  }

  // Field name: t_2
  {
    dds_message->t_2_ = ros_message->t_2;
  }

  // Field name: w_2
  {
    dds_message->w_2_ = ros_message->w_2;
  }

  // Field name: lw_2
  {
    dds_message->lw_2_ = ros_message->lw_2;
  }

  // Field name: acc_2
  {
    dds_message->acc_2_ = ros_message->acc_2;
  }

  // Field name: pos_2
  {
    dds_message->pos_2_ = ros_message->pos_2;
  }

  // Field name: gyro_2_x
  {
    dds_message->gyro_2_x_ = ros_message->gyro_2_x;
  }

  // Field name: gyro_2_y
  {
    dds_message->gyro_2_y_ = ros_message->gyro_2_y;
  }

  // Field name: gyro_2_z
  {
    dds_message->gyro_2_z_ = ros_message->gyro_2_z;
  }

  // Field name: acc_2_x
  {
    dds_message->acc_2_x_ = ros_message->acc_2_x;
  }

  // Field name: acc_2_y
  {
    dds_message->acc_2_y_ = ros_message->acc_2_y;
  }

  // Field name: acc_2_z
  {
    dds_message->acc_2_z_ = ros_message->acc_2_z;
  }

  return 0;
}

static const char *
publish_message__srv__Motorsend_Response(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_message__srv__Motorsend_Response dds_message;
  const char * err_msg = convert_ros_to_dds_message__srv__Motorsend_Response(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

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

static const char *
convert_dds_to_ros_message__srv__Motorsend_Response(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_message__srv__Motorsend_Response * dds_message = static_cast<const __dds_msg_type_message__srv__Motorsend_Response *>(untyped_dds_message);
  __ros_msg_type_message__srv__Motorsend_Response * ros_message = static_cast<__ros_msg_type_message__srv__Motorsend_Response *>(untyped_ros_message);
  // Field name: temp_0
  {
    ros_message->temp_0 = dds_message->temp_0_;
  }

  // Field name: t_0
  {
    ros_message->t_0 = dds_message->t_0_;
  }

  // Field name: w_0
  {
    ros_message->w_0 = dds_message->w_0_;
  }

  // Field name: lw_0
  {
    ros_message->lw_0 = dds_message->lw_0_;
  }

  // Field name: acc_0
  {
    ros_message->acc_0 = dds_message->acc_0_;
  }

  // Field name: pos_0
  {
    ros_message->pos_0 = dds_message->pos_0_;
  }

  // Field name: gyro_0_x
  {
    ros_message->gyro_0_x = dds_message->gyro_0_x_;
  }

  // Field name: gyro_0_y
  {
    ros_message->gyro_0_y = dds_message->gyro_0_y_;
  }

  // Field name: gyro_0_z
  {
    ros_message->gyro_0_z = dds_message->gyro_0_z_;
  }

  // Field name: acc_0_x
  {
    ros_message->acc_0_x = dds_message->acc_0_x_;
  }

  // Field name: acc_0_y
  {
    ros_message->acc_0_y = dds_message->acc_0_y_;
  }

  // Field name: acc_0_z
  {
    ros_message->acc_0_z = dds_message->acc_0_z_;
  }

  // Field name: temp_1
  {
    ros_message->temp_1 = dds_message->temp_1_;
  }

  // Field name: t_1
  {
    ros_message->t_1 = dds_message->t_1_;
  }

  // Field name: w_1
  {
    ros_message->w_1 = dds_message->w_1_;
  }

  // Field name: lw_1
  {
    ros_message->lw_1 = dds_message->lw_1_;
  }

  // Field name: acc_1
  {
    ros_message->acc_1 = dds_message->acc_1_;
  }

  // Field name: pos_1
  {
    ros_message->pos_1 = dds_message->pos_1_;
  }

  // Field name: gyro_1_x
  {
    ros_message->gyro_1_x = dds_message->gyro_1_x_;
  }

  // Field name: gyro_1_y
  {
    ros_message->gyro_1_y = dds_message->gyro_1_y_;
  }

  // Field name: gyro_1_z
  {
    ros_message->gyro_1_z = dds_message->gyro_1_z_;
  }

  // Field name: acc_1_x
  {
    ros_message->acc_1_x = dds_message->acc_1_x_;
  }

  // Field name: acc_1_y
  {
    ros_message->acc_1_y = dds_message->acc_1_y_;
  }

  // Field name: acc_1_z
  {
    ros_message->acc_1_z = dds_message->acc_1_z_;
  }

  // Field name: temp_2
  {
    ros_message->temp_2 = dds_message->temp_2_;
  }

  // Field name: t_2
  {
    ros_message->t_2 = dds_message->t_2_;
  }

  // Field name: w_2
  {
    ros_message->w_2 = dds_message->w_2_;
  }

  // Field name: lw_2
  {
    ros_message->lw_2 = dds_message->lw_2_;
  }

  // Field name: acc_2
  {
    ros_message->acc_2 = dds_message->acc_2_;
  }

  // Field name: pos_2
  {
    ros_message->pos_2 = dds_message->pos_2_;
  }

  // Field name: gyro_2_x
  {
    ros_message->gyro_2_x = dds_message->gyro_2_x_;
  }

  // Field name: gyro_2_y
  {
    ros_message->gyro_2_y = dds_message->gyro_2_y_;
  }

  // Field name: gyro_2_z
  {
    ros_message->gyro_2_z = dds_message->gyro_2_z_;
  }

  // Field name: acc_2_x
  {
    ros_message->acc_2_x = dds_message->acc_2_x_;
  }

  // Field name: acc_2_y
  {
    ros_message->acc_2_y = dds_message->acc_2_y_;
  }

  // Field name: acc_2_z
  {
    ros_message->acc_2_z = dds_message->acc_2_z_;
  }

  return 0;
}

static const char *
take_message__srv__Motorsend_Response(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

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
    errs = convert_dds_to_ros_message__srv__Motorsend_Response(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
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
      return nullptr;
    default:
      return "message::srv::dds_::Motorsend_Response_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_message__srv__Motorsend_Response(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_message__srv__Motorsend_Response dds_message;
  const char * err_msg = convert_ros_to_dds_message__srv__Motorsend_Response(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_message__srv__Motorsend_Response);

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

static const char *
deserialize_message__srv__Motorsend_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_message__srv__Motorsend_Response);

  __dds_msg_type_message__srv__Motorsend_Response dds_message;
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

  errs = convert_dds_to_ros_message__srv__Motorsend_Response(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Motorsend_Response__callbacks = {
  "message::srv",  // message_namespace
  "Motorsend_Response",  // message_name
  register_type_message__srv__Motorsend_Response,  // register_type
  publish_message__srv__Motorsend_Response,  // publish
  take_message__srv__Motorsend_Response,  // take
  serialize_message__srv__Motorsend_Response,  // serialize message
  deserialize_message__srv__Motorsend_Response,  // deserialize message
  convert_ros_to_dds_message__srv__Motorsend_Response,  // convert_ros_to_dds
  convert_dds_to_ros_message__srv__Motorsend_Response,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Motorsend_Response__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Motorsend_Response__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  message, srv,
  Motorsend_Response)()
{
  return &Motorsend_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"
{
#endif

// forward declare type support functions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend_Request)();
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend_Response)();

const char *
register_types__message__srv__Motorsend(
  void * untyped_participant, const char * request_type_name, const char * response_type_name)
{
  return message::srv::typesupport_opensplice_cpp::register_types__Motorsend(
    untyped_participant, request_type_name, response_type_name);
}

const char *
create_requester__message__srv__Motorsend(
  void * untyped_participant, const char * service_name,
  void ** untyped_requester, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  return message::srv::typesupport_opensplice_cpp::create_requester__Motorsend(
    untyped_participant, service_name,
    untyped_requester, untyped_reader,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    avoid_ros_namespace_conventions,
    allocator);
}

const char *
create_responder__message__srv__Motorsend(
  void * untyped_participant, const char * service_name,
  void ** untyped_responder, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  return message::srv::typesupport_opensplice_cpp::create_responder__Motorsend(
    untyped_participant, service_name,
    untyped_responder, untyped_reader,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    avoid_ros_namespace_conventions,
    allocator);
}

const char *
send_request__message__srv__Motorsend(
  void * untyped_requester, const void * untyped_ros_request, int64_t * sequence_number)
{
  using SampleT = rosidl_typesupport_opensplice_cpp::Sample<message::srv::dds_::Motorsend_Request_>;

  SampleT request;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  callbacks->convert_ros_to_dds(untyped_ros_request, static_cast<void *>(&request.data()));

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
take_request__message__srv__Motorsend(
  void * untyped_responder, rmw_request_id_t * request_header, void * untyped_ros_request,
  bool * taken)
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    message::srv::dds_::Motorsend_Request_,
    message::srv::dds_::Motorsend_Response_
  >;

  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  rosidl_typesupport_opensplice_cpp::Sample<message::srv::dds_::Motorsend_Request_> request;
  const char * error_string = responder->take_request(request, taken);
  if (error_string) {
    return error_string;
  }

  if (*taken) {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend_Request)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(static_cast<void *>(&request.data()), untyped_ros_request);

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
send_response__message__srv__Motorsend(
  void * untyped_responder, const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  rosidl_typesupport_opensplice_cpp::Sample<message::srv::dds_::Motorsend_Response_> response;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  callbacks->convert_ros_to_dds(untyped_ros_response, static_cast<void *>(&response.data()));

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
take_response__message__srv__Motorsend(
  void * untyped_requester, rmw_request_id_t * request_header, void * untyped_ros_response,
  bool * taken)
{
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

    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend_Response)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(
      static_cast<void *>(&response.data()), untyped_ros_response);
    return nullptr;
  }

  return nullptr;
}

const char *
destroy_requester__message__srv__Motorsend(void * untyped_requester, void (* deallocator)(void *))
{
  return message::srv::typesupport_opensplice_cpp::destroy_requester__Motorsend(
    untyped_requester, deallocator);
}

const char *
destroy_responder__message__srv__Motorsend(void * untyped_responder, void (* deallocator)(void *))
{
  return message::srv::typesupport_opensplice_cpp::destroy_responder__Motorsend(
    untyped_responder, deallocator);
}

const char *
server_is_available__message__srv__Motorsend(
  void * requester, const rmw_node_t * node, bool * is_available)
{
  return message::srv::typesupport_opensplice_cpp::server_is_available__Motorsend(
    requester, node, is_available);
}

static service_type_support_callbacks_t Motorsend__callbacks = {
  "message::srv",
  "Motorsend",
  &create_requester__message__srv__Motorsend,
  &destroy_requester__message__srv__Motorsend,
  &create_responder__message__srv__Motorsend,
  &destroy_responder__message__srv__Motorsend,
  &send_request__message__srv__Motorsend,
  &take_request__message__srv__Motorsend,
  &send_response__message__srv__Motorsend,
  &take_response__message__srv__Motorsend,
  &server_is_available__message__srv__Motorsend,
};

static rosidl_service_type_support_t Motorsend__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Motorsend__callbacks,  // data
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, message, srv, Motorsend)() {
  return &Motorsend__type_support;
}

#if defined(__cplusplus)
}
#endif
