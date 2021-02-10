#ifndef H_1B4089511B788222B681C79C981FB8CE_Motorsend_SPLTYPES_H
#define H_1B4089511B788222B681C79C981FB8CE_Motorsend_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Motorsend_.h"


extern c_metaObject __Motorsend__message__load (c_base base);

extern c_metaObject __Motorsend__message_srv__load (c_base base);

extern c_metaObject __Motorsend__message_srv_dds___load (c_base base);

extern const char *message_srv_dds__Motorsend_Request__metaDescriptor[];
extern const int message_srv_dds__Motorsend_Request__metaDescriptorArrLength;
extern const int message_srv_dds__Motorsend_Request__metaDescriptorLength;
extern c_metaObject __message_srv_dds__Motorsend_Request___load (c_base base);
struct _message_srv_dds__Motorsend_Request_ ;
extern  v_copyin_result __message_srv_dds__Motorsend_Request___copyIn(c_base base, const struct message::srv::dds_::Motorsend_Request_ *from, struct _message_srv_dds__Motorsend_Request_ *to);
extern  void __message_srv_dds__Motorsend_Request___copyOut(const void *_from, void *_to);
struct _message_srv_dds__Motorsend_Request_ {
    c_double mode_0_;
    c_double t_0_;
    c_double w_0_;
    c_double pos_0_;
    c_double k_p_0_;
    c_double k_w_0_;
    c_double mode_1_;
    c_double t_1_;
    c_double w_1_;
    c_double pos_1_;
    c_double k_p_1_;
    c_double k_w_1_;
    c_double mode_2_;
    c_double t_2_;
    c_double w_2_;
    c_double pos_2_;
    c_double k_p_2_;
    c_double k_w_2_;
};

extern const char *message_srv_dds__Motorsend_Response__metaDescriptor[];
extern const int message_srv_dds__Motorsend_Response__metaDescriptorArrLength;
extern const int message_srv_dds__Motorsend_Response__metaDescriptorLength;
extern c_metaObject __message_srv_dds__Motorsend_Response___load (c_base base);
struct _message_srv_dds__Motorsend_Response_ ;
extern  v_copyin_result __message_srv_dds__Motorsend_Response___copyIn(c_base base, const struct message::srv::dds_::Motorsend_Response_ *from, struct _message_srv_dds__Motorsend_Response_ *to);
extern  void __message_srv_dds__Motorsend_Response___copyOut(const void *_from, void *_to);
struct _message_srv_dds__Motorsend_Response_ {
    c_longlong temp_0_;
    c_double t_0_;
    c_double w_0_;
    c_double lw_0_;
    c_longlong acc_0_;
    c_double pos_0_;
    c_double gyro_0_x_;
    c_double gyro_0_y_;
    c_double gyro_0_z_;
    c_double acc_0_x_;
    c_double acc_0_y_;
    c_double acc_0_z_;
    c_longlong temp_1_;
    c_double t_1_;
    c_double w_1_;
    c_double lw_1_;
    c_longlong acc_1_;
    c_double pos_1_;
    c_double gyro_1_x_;
    c_double gyro_1_y_;
    c_double gyro_1_z_;
    c_double acc_1_x_;
    c_double acc_1_y_;
    c_double acc_1_z_;
    c_longlong temp_2_;
    c_double t_2_;
    c_double w_2_;
    c_double lw_2_;
    c_longlong acc_2_;
    c_double pos_2_;
    c_double gyro_2_x_;
    c_double gyro_2_y_;
    c_double gyro_2_z_;
    c_double acc_2_x_;
    c_double acc_2_y_;
    c_double acc_2_z_;
};

extern const char *message_srv_dds__Sample_Motorsend_Request__metaDescriptor[];
extern const int message_srv_dds__Sample_Motorsend_Request__metaDescriptorArrLength;
extern const int message_srv_dds__Sample_Motorsend_Request__metaDescriptorLength;
extern c_metaObject __message_srv_dds__Sample_Motorsend_Request___load (c_base base);
struct _message_srv_dds__Sample_Motorsend_Request_ ;
extern  v_copyin_result __message_srv_dds__Sample_Motorsend_Request___copyIn(c_base base, const struct message::srv::dds_::Sample_Motorsend_Request_ *from, struct _message_srv_dds__Sample_Motorsend_Request_ *to);
extern  void __message_srv_dds__Sample_Motorsend_Request___copyOut(const void *_from, void *_to);
struct _message_srv_dds__Sample_Motorsend_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _message_srv_dds__Motorsend_Request_ request_;
};

extern const char *message_srv_dds__Sample_Motorsend_Response__metaDescriptor[];
extern const int message_srv_dds__Sample_Motorsend_Response__metaDescriptorArrLength;
extern const int message_srv_dds__Sample_Motorsend_Response__metaDescriptorLength;
extern c_metaObject __message_srv_dds__Sample_Motorsend_Response___load (c_base base);
struct _message_srv_dds__Sample_Motorsend_Response_ ;
extern  v_copyin_result __message_srv_dds__Sample_Motorsend_Response___copyIn(c_base base, const struct message::srv::dds_::Sample_Motorsend_Response_ *from, struct _message_srv_dds__Sample_Motorsend_Response_ *to);
extern  void __message_srv_dds__Sample_Motorsend_Response___copyOut(const void *_from, void *_to);
struct _message_srv_dds__Sample_Motorsend_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _message_srv_dds__Motorsend_Response_ response_;
};

#undef OS_API
#endif
