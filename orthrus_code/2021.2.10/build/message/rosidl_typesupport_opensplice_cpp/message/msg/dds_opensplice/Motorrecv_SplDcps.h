#ifndef H_1E86FEEAEFBAD5CB0E7BD50C3036792E_Motorrecv_SPLTYPES_H
#define H_1E86FEEAEFBAD5CB0E7BD50C3036792E_Motorrecv_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Motorrecv_.h"


extern c_metaObject __Motorrecv__message__load (c_base base);

extern c_metaObject __Motorrecv__message_msg__load (c_base base);

extern c_metaObject __Motorrecv__message_msg_dds___load (c_base base);

extern const char *message_msg_dds__Motorrecv__metaDescriptor[];
extern const int message_msg_dds__Motorrecv__metaDescriptorArrLength;
extern const int message_msg_dds__Motorrecv__metaDescriptorLength;
extern c_metaObject __message_msg_dds__Motorrecv___load (c_base base);
struct _message_msg_dds__Motorrecv_ ;
extern  v_copyin_result __message_msg_dds__Motorrecv___copyIn(c_base base, const struct message::msg::dds_::Motorrecv_ *from, struct _message_msg_dds__Motorrecv_ *to);
extern  void __message_msg_dds__Motorrecv___copyOut(const void *_from, void *_to);
struct _message_msg_dds__Motorrecv_ {
    c_octet structure_needs_at_least_one_member_;
};

#undef OS_API
#endif
