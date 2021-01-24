#include "Motorsend_SplDcps.h"
#include "ccpp_Motorsend_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__message_srv_dds__Motorsend_Request___copyIn(
    c_base base,
    const struct ::message::srv::dds_::Motorsend_Request_ *from,
    struct _message_srv_dds__Motorsend_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->mode_0_ = (c_double)from->mode_0_;
    to->t_0_ = (c_double)from->t_0_;
    to->w_0_ = (c_double)from->w_0_;
    to->pos_0_ = (c_double)from->pos_0_;
    to->k_p_0_ = (c_double)from->k_p_0_;
    to->k_w_0_ = (c_double)from->k_w_0_;
    to->mode_1_ = (c_double)from->mode_1_;
    to->t_1_ = (c_double)from->t_1_;
    to->w_1_ = (c_double)from->w_1_;
    to->pos_1_ = (c_double)from->pos_1_;
    to->k_p_1_ = (c_double)from->k_p_1_;
    to->k_w_1_ = (c_double)from->k_w_1_;
    to->mode_2_ = (c_double)from->mode_2_;
    to->t_2_ = (c_double)from->t_2_;
    to->w_2_ = (c_double)from->w_2_;
    to->pos_2_ = (c_double)from->pos_2_;
    to->k_p_2_ = (c_double)from->k_p_2_;
    to->k_w_2_ = (c_double)from->k_w_2_;
    return result;
}

v_copyin_result
__message_srv_dds__Motorsend_Response___copyIn(
    c_base base,
    const struct ::message::srv::dds_::Motorsend_Response_ *from,
    struct _message_srv_dds__Motorsend_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->temp_0_ = (c_longlong)from->temp_0_;
    to->t_0_ = (c_double)from->t_0_;
    to->w_0_ = (c_double)from->w_0_;
    to->lw_0_ = (c_double)from->lw_0_;
    to->acc_0_ = (c_longlong)from->acc_0_;
    to->pos_0_ = (c_double)from->pos_0_;
    to->gyro_0_x_ = (c_double)from->gyro_0_x_;
    to->gyro_0_y_ = (c_double)from->gyro_0_y_;
    to->gyro_0_z_ = (c_double)from->gyro_0_z_;
    to->acc_0_x_ = (c_double)from->acc_0_x_;
    to->acc_0_y_ = (c_double)from->acc_0_y_;
    to->acc_0_z_ = (c_double)from->acc_0_z_;
    to->temp_1_ = (c_longlong)from->temp_1_;
    to->t_1_ = (c_double)from->t_1_;
    to->w_1_ = (c_double)from->w_1_;
    to->lw_1_ = (c_double)from->lw_1_;
    to->acc_1_ = (c_longlong)from->acc_1_;
    to->pos_1_ = (c_double)from->pos_1_;
    to->gyro_1_x_ = (c_double)from->gyro_1_x_;
    to->gyro_1_y_ = (c_double)from->gyro_1_y_;
    to->gyro_1_z_ = (c_double)from->gyro_1_z_;
    to->acc_1_x_ = (c_double)from->acc_1_x_;
    to->acc_1_y_ = (c_double)from->acc_1_y_;
    to->acc_1_z_ = (c_double)from->acc_1_z_;
    to->temp_2_ = (c_longlong)from->temp_2_;
    to->t_2_ = (c_double)from->t_2_;
    to->w_2_ = (c_double)from->w_2_;
    to->lw_2_ = (c_double)from->lw_2_;
    to->acc_2_ = (c_longlong)from->acc_2_;
    to->pos_2_ = (c_double)from->pos_2_;
    to->gyro_2_x_ = (c_double)from->gyro_2_x_;
    to->gyro_2_y_ = (c_double)from->gyro_2_y_;
    to->gyro_2_z_ = (c_double)from->gyro_2_z_;
    to->acc_2_x_ = (c_double)from->acc_2_x_;
    to->acc_2_y_ = (c_double)from->acc_2_y_;
    to->acc_2_z_ = (c_double)from->acc_2_z_;
    return result;
}

v_copyin_result
__message_srv_dds__Sample_Motorsend_Request___copyIn(
    c_base base,
    const struct ::message::srv::dds_::Sample_Motorsend_Request_ *from,
    struct _message_srv_dds__Sample_Motorsend_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __message_srv_dds__Motorsend_Request___copyIn(c_base, const ::message::srv::dds_::Motorsend_Request_ *, _message_srv_dds__Motorsend_Request_ *);
        result = __message_srv_dds__Motorsend_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

v_copyin_result
__message_srv_dds__Sample_Motorsend_Response___copyIn(
    c_base base,
    const struct ::message::srv::dds_::Sample_Motorsend_Response_ *from,
    struct _message_srv_dds__Sample_Motorsend_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __message_srv_dds__Motorsend_Response___copyIn(c_base, const ::message::srv::dds_::Motorsend_Response_ *, _message_srv_dds__Motorsend_Response_ *);
        result = __message_srv_dds__Motorsend_Response___copyIn(base, &from->response_, &to->response_);
    }
    return result;
}

void
__message_srv_dds__Motorsend_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_srv_dds__Motorsend_Request_ *from = (const struct _message_srv_dds__Motorsend_Request_ *)_from;
    struct ::message::srv::dds_::Motorsend_Request_ *to = (struct ::message::srv::dds_::Motorsend_Request_ *)_to;
    to->mode_0_ = (::DDS::Double)from->mode_0_;
    to->t_0_ = (::DDS::Double)from->t_0_;
    to->w_0_ = (::DDS::Double)from->w_0_;
    to->pos_0_ = (::DDS::Double)from->pos_0_;
    to->k_p_0_ = (::DDS::Double)from->k_p_0_;
    to->k_w_0_ = (::DDS::Double)from->k_w_0_;
    to->mode_1_ = (::DDS::Double)from->mode_1_;
    to->t_1_ = (::DDS::Double)from->t_1_;
    to->w_1_ = (::DDS::Double)from->w_1_;
    to->pos_1_ = (::DDS::Double)from->pos_1_;
    to->k_p_1_ = (::DDS::Double)from->k_p_1_;
    to->k_w_1_ = (::DDS::Double)from->k_w_1_;
    to->mode_2_ = (::DDS::Double)from->mode_2_;
    to->t_2_ = (::DDS::Double)from->t_2_;
    to->w_2_ = (::DDS::Double)from->w_2_;
    to->pos_2_ = (::DDS::Double)from->pos_2_;
    to->k_p_2_ = (::DDS::Double)from->k_p_2_;
    to->k_w_2_ = (::DDS::Double)from->k_w_2_;
}

void
__message_srv_dds__Motorsend_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_srv_dds__Motorsend_Response_ *from = (const struct _message_srv_dds__Motorsend_Response_ *)_from;
    struct ::message::srv::dds_::Motorsend_Response_ *to = (struct ::message::srv::dds_::Motorsend_Response_ *)_to;
    to->temp_0_ = (::DDS::LongLong)from->temp_0_;
    to->t_0_ = (::DDS::Double)from->t_0_;
    to->w_0_ = (::DDS::Double)from->w_0_;
    to->lw_0_ = (::DDS::Double)from->lw_0_;
    to->acc_0_ = (::DDS::LongLong)from->acc_0_;
    to->pos_0_ = (::DDS::Double)from->pos_0_;
    to->gyro_0_x_ = (::DDS::Double)from->gyro_0_x_;
    to->gyro_0_y_ = (::DDS::Double)from->gyro_0_y_;
    to->gyro_0_z_ = (::DDS::Double)from->gyro_0_z_;
    to->acc_0_x_ = (::DDS::Double)from->acc_0_x_;
    to->acc_0_y_ = (::DDS::Double)from->acc_0_y_;
    to->acc_0_z_ = (::DDS::Double)from->acc_0_z_;
    to->temp_1_ = (::DDS::LongLong)from->temp_1_;
    to->t_1_ = (::DDS::Double)from->t_1_;
    to->w_1_ = (::DDS::Double)from->w_1_;
    to->lw_1_ = (::DDS::Double)from->lw_1_;
    to->acc_1_ = (::DDS::LongLong)from->acc_1_;
    to->pos_1_ = (::DDS::Double)from->pos_1_;
    to->gyro_1_x_ = (::DDS::Double)from->gyro_1_x_;
    to->gyro_1_y_ = (::DDS::Double)from->gyro_1_y_;
    to->gyro_1_z_ = (::DDS::Double)from->gyro_1_z_;
    to->acc_1_x_ = (::DDS::Double)from->acc_1_x_;
    to->acc_1_y_ = (::DDS::Double)from->acc_1_y_;
    to->acc_1_z_ = (::DDS::Double)from->acc_1_z_;
    to->temp_2_ = (::DDS::LongLong)from->temp_2_;
    to->t_2_ = (::DDS::Double)from->t_2_;
    to->w_2_ = (::DDS::Double)from->w_2_;
    to->lw_2_ = (::DDS::Double)from->lw_2_;
    to->acc_2_ = (::DDS::LongLong)from->acc_2_;
    to->pos_2_ = (::DDS::Double)from->pos_2_;
    to->gyro_2_x_ = (::DDS::Double)from->gyro_2_x_;
    to->gyro_2_y_ = (::DDS::Double)from->gyro_2_y_;
    to->gyro_2_z_ = (::DDS::Double)from->gyro_2_z_;
    to->acc_2_x_ = (::DDS::Double)from->acc_2_x_;
    to->acc_2_y_ = (::DDS::Double)from->acc_2_y_;
    to->acc_2_z_ = (::DDS::Double)from->acc_2_z_;
}

void
__message_srv_dds__Sample_Motorsend_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_srv_dds__Sample_Motorsend_Request_ *from = (const struct _message_srv_dds__Sample_Motorsend_Request_ *)_from;
    struct ::message::srv::dds_::Sample_Motorsend_Request_ *to = (struct ::message::srv::dds_::Sample_Motorsend_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __message_srv_dds__Motorsend_Request___copyOut(const void *, void *);
        __message_srv_dds__Motorsend_Request___copyOut((const void *)&from->request_, (void *)&to->request_);
    }
}

void
__message_srv_dds__Sample_Motorsend_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_srv_dds__Sample_Motorsend_Response_ *from = (const struct _message_srv_dds__Sample_Motorsend_Response_ *)_from;
    struct ::message::srv::dds_::Sample_Motorsend_Response_ *to = (struct ::message::srv::dds_::Sample_Motorsend_Response_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __message_srv_dds__Motorsend_Response___copyOut(const void *, void *);
        __message_srv_dds__Motorsend_Response___copyOut((const void *)&from->response_, (void *)&to->response_);
    }
}

