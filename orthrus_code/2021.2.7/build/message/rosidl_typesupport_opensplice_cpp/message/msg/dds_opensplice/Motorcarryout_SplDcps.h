#ifndef H_04EE1B85EC0813C319E20B319685E01C_Motorcarryout_SPLTYPES_H
#define H_04EE1B85EC0813C319E20B319685E01C_Motorcarryout_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Motorcarryout_.h"


extern c_metaObject __Motorcarryout__message__load (c_base base);

extern c_metaObject __Motorcarryout__message_msg__load (c_base base);

extern c_metaObject __Motorcarryout__message_msg_dds___load (c_base base);

extern const char *message_msg_dds__Motorcarryout__metaDescriptor[];
extern const int message_msg_dds__Motorcarryout__metaDescriptorArrLength;
extern const int message_msg_dds__Motorcarryout__metaDescriptorLength;
extern c_metaObject __message_msg_dds__Motorcarryout___load (c_base base);
struct _message_msg_dds__Motorcarryout_ ;
extern  v_copyin_result __message_msg_dds__Motorcarryout___copyIn(c_base base, const struct message::msg::dds_::Motorcarryout_ *from, struct _message_msg_dds__Motorcarryout_ *to);
extern  void __message_msg_dds__Motorcarryout___copyOut(const void *_from, void *_to);
struct _message_msg_dds__Motorcarryout_ {
    c_long mode_;
    c_string name_;
};

#undef OS_API
#endif
