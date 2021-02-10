#include "Motorcarryout_SplDcps.h"
#include "ccpp_Motorcarryout_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__message_msg_dds__Motorcarryout___copyIn(
    c_base base,
    const struct ::message::msg::dds_::Motorcarryout_ *from,
    struct _message_msg_dds__Motorcarryout_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->mode_lf_1_ = (c_long)from->mode_lf_1_;
    to->t_lf_1_ = (c_float)from->t_lf_1_;
    to->w_lf_1_ = (c_float)from->w_lf_1_;
    to->pos_lf_1_ = (c_float)from->pos_lf_1_;
    to->k_p_lf_1_ = (c_float)from->k_p_lf_1_;
    to->k_w_lf_1_ = (c_float)from->k_w_lf_1_;
    to->mode_lf_2_ = (c_long)from->mode_lf_2_;
    to->t_lf_2_ = (c_float)from->t_lf_2_;
    to->w_lf_2_ = (c_float)from->w_lf_2_;
    to->pos_lf_2_ = (c_float)from->pos_lf_2_;
    to->k_p_lf_2_ = (c_float)from->k_p_lf_2_;
    to->k_w_lf_2_ = (c_float)from->k_w_lf_2_;
    to->mode_lf_3_ = (c_long)from->mode_lf_3_;
    to->t_lf_3_ = (c_float)from->t_lf_3_;
    to->w_lf_3_ = (c_float)from->w_lf_3_;
    to->pos_lf_3_ = (c_float)from->pos_lf_3_;
    to->k_p_lf_3_ = (c_float)from->k_p_lf_3_;
    to->k_w_lf_3_ = (c_float)from->k_w_lf_3_;
    to->mode_rf_1_ = (c_long)from->mode_rf_1_;
    to->t_rf_1_ = (c_float)from->t_rf_1_;
    to->w_rf_1_ = (c_float)from->w_rf_1_;
    to->pos_rf_1_ = (c_float)from->pos_rf_1_;
    to->k_p_rf_1_ = (c_float)from->k_p_rf_1_;
    to->k_w_rf_1_ = (c_float)from->k_w_rf_1_;
    to->mode_rf_2_ = (c_long)from->mode_rf_2_;
    to->t_rf_2_ = (c_float)from->t_rf_2_;
    to->w_rf_2_ = (c_float)from->w_rf_2_;
    to->pos_rf_2_ = (c_float)from->pos_rf_2_;
    to->k_p_rf_2_ = (c_float)from->k_p_rf_2_;
    to->k_w_rf_2_ = (c_float)from->k_w_rf_2_;
    to->mode_rf_3_ = (c_long)from->mode_rf_3_;
    to->t_rf_3_ = (c_float)from->t_rf_3_;
    to->w_rf_3_ = (c_float)from->w_rf_3_;
    to->pos_rf_3_ = (c_float)from->pos_rf_3_;
    to->k_p_rf_3_ = (c_float)from->k_p_rf_3_;
    to->k_w_rf_3_ = (c_float)from->k_w_rf_3_;
    to->mode_lb_1_ = (c_long)from->mode_lb_1_;
    to->t_lb_1_ = (c_float)from->t_lb_1_;
    to->w_lb_1_ = (c_float)from->w_lb_1_;
    to->pos_lb_1_ = (c_float)from->pos_lb_1_;
    to->k_p_lb_1_ = (c_float)from->k_p_lb_1_;
    to->k_w_lb_1_ = (c_float)from->k_w_lb_1_;
    to->mode_lb_2_ = (c_long)from->mode_lb_2_;
    to->t_lb_2_ = (c_float)from->t_lb_2_;
    to->w_lb_2_ = (c_float)from->w_lb_2_;
    to->pos_lb_2_ = (c_float)from->pos_lb_2_;
    to->k_p_lb_2_ = (c_float)from->k_p_lb_2_;
    to->k_w_lb_2_ = (c_float)from->k_w_lb_2_;
    to->mode_lb_3_ = (c_long)from->mode_lb_3_;
    to->t_lb_3_ = (c_float)from->t_lb_3_;
    to->w_lb_3_ = (c_float)from->w_lb_3_;
    to->pos_lb_3_ = (c_float)from->pos_lb_3_;
    to->k_p_lb_3_ = (c_float)from->k_p_lb_3_;
    to->k_w_lb_3_ = (c_float)from->k_w_lb_3_;
    to->mode_rb_1_ = (c_long)from->mode_rb_1_;
    to->t_rb_1_ = (c_float)from->t_rb_1_;
    to->w_rb_1_ = (c_float)from->w_rb_1_;
    to->pos_rb_1_ = (c_float)from->pos_rb_1_;
    to->k_p_rb_1_ = (c_float)from->k_p_rb_1_;
    to->k_w_rb_1_ = (c_float)from->k_w_rb_1_;
    to->mode_rb_2_ = (c_long)from->mode_rb_2_;
    to->t_rb_2_ = (c_float)from->t_rb_2_;
    to->w_rb_2_ = (c_float)from->w_rb_2_;
    to->pos_rb_2_ = (c_float)from->pos_rb_2_;
    to->k_p_rb_2_ = (c_float)from->k_p_rb_2_;
    to->k_w_rb_2_ = (c_float)from->k_w_rb_2_;
    to->mode_rb_3_ = (c_long)from->mode_rb_3_;
    to->t_rb_3_ = (c_float)from->t_rb_3_;
    to->w_rb_3_ = (c_float)from->w_rb_3_;
    to->pos_rb_3_ = (c_float)from->pos_rb_3_;
    to->k_p_rb_3_ = (c_float)from->k_p_rb_3_;
    to->k_w_rb_3_ = (c_float)from->k_w_rb_3_;
    return result;
}

void
__message_msg_dds__Motorcarryout___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_msg_dds__Motorcarryout_ *from = (const struct _message_msg_dds__Motorcarryout_ *)_from;
    struct ::message::msg::dds_::Motorcarryout_ *to = (struct ::message::msg::dds_::Motorcarryout_ *)_to;
    to->mode_lf_1_ = (::DDS::Long)from->mode_lf_1_;
    to->t_lf_1_ = (::DDS::Float)from->t_lf_1_;
    to->w_lf_1_ = (::DDS::Float)from->w_lf_1_;
    to->pos_lf_1_ = (::DDS::Float)from->pos_lf_1_;
    to->k_p_lf_1_ = (::DDS::Float)from->k_p_lf_1_;
    to->k_w_lf_1_ = (::DDS::Float)from->k_w_lf_1_;
    to->mode_lf_2_ = (::DDS::Long)from->mode_lf_2_;
    to->t_lf_2_ = (::DDS::Float)from->t_lf_2_;
    to->w_lf_2_ = (::DDS::Float)from->w_lf_2_;
    to->pos_lf_2_ = (::DDS::Float)from->pos_lf_2_;
    to->k_p_lf_2_ = (::DDS::Float)from->k_p_lf_2_;
    to->k_w_lf_2_ = (::DDS::Float)from->k_w_lf_2_;
    to->mode_lf_3_ = (::DDS::Long)from->mode_lf_3_;
    to->t_lf_3_ = (::DDS::Float)from->t_lf_3_;
    to->w_lf_3_ = (::DDS::Float)from->w_lf_3_;
    to->pos_lf_3_ = (::DDS::Float)from->pos_lf_3_;
    to->k_p_lf_3_ = (::DDS::Float)from->k_p_lf_3_;
    to->k_w_lf_3_ = (::DDS::Float)from->k_w_lf_3_;
    to->mode_rf_1_ = (::DDS::Long)from->mode_rf_1_;
    to->t_rf_1_ = (::DDS::Float)from->t_rf_1_;
    to->w_rf_1_ = (::DDS::Float)from->w_rf_1_;
    to->pos_rf_1_ = (::DDS::Float)from->pos_rf_1_;
    to->k_p_rf_1_ = (::DDS::Float)from->k_p_rf_1_;
    to->k_w_rf_1_ = (::DDS::Float)from->k_w_rf_1_;
    to->mode_rf_2_ = (::DDS::Long)from->mode_rf_2_;
    to->t_rf_2_ = (::DDS::Float)from->t_rf_2_;
    to->w_rf_2_ = (::DDS::Float)from->w_rf_2_;
    to->pos_rf_2_ = (::DDS::Float)from->pos_rf_2_;
    to->k_p_rf_2_ = (::DDS::Float)from->k_p_rf_2_;
    to->k_w_rf_2_ = (::DDS::Float)from->k_w_rf_2_;
    to->mode_rf_3_ = (::DDS::Long)from->mode_rf_3_;
    to->t_rf_3_ = (::DDS::Float)from->t_rf_3_;
    to->w_rf_3_ = (::DDS::Float)from->w_rf_3_;
    to->pos_rf_3_ = (::DDS::Float)from->pos_rf_3_;
    to->k_p_rf_3_ = (::DDS::Float)from->k_p_rf_3_;
    to->k_w_rf_3_ = (::DDS::Float)from->k_w_rf_3_;
    to->mode_lb_1_ = (::DDS::Long)from->mode_lb_1_;
    to->t_lb_1_ = (::DDS::Float)from->t_lb_1_;
    to->w_lb_1_ = (::DDS::Float)from->w_lb_1_;
    to->pos_lb_1_ = (::DDS::Float)from->pos_lb_1_;
    to->k_p_lb_1_ = (::DDS::Float)from->k_p_lb_1_;
    to->k_w_lb_1_ = (::DDS::Float)from->k_w_lb_1_;
    to->mode_lb_2_ = (::DDS::Long)from->mode_lb_2_;
    to->t_lb_2_ = (::DDS::Float)from->t_lb_2_;
    to->w_lb_2_ = (::DDS::Float)from->w_lb_2_;
    to->pos_lb_2_ = (::DDS::Float)from->pos_lb_2_;
    to->k_p_lb_2_ = (::DDS::Float)from->k_p_lb_2_;
    to->k_w_lb_2_ = (::DDS::Float)from->k_w_lb_2_;
    to->mode_lb_3_ = (::DDS::Long)from->mode_lb_3_;
    to->t_lb_3_ = (::DDS::Float)from->t_lb_3_;
    to->w_lb_3_ = (::DDS::Float)from->w_lb_3_;
    to->pos_lb_3_ = (::DDS::Float)from->pos_lb_3_;
    to->k_p_lb_3_ = (::DDS::Float)from->k_p_lb_3_;
    to->k_w_lb_3_ = (::DDS::Float)from->k_w_lb_3_;
    to->mode_rb_1_ = (::DDS::Long)from->mode_rb_1_;
    to->t_rb_1_ = (::DDS::Float)from->t_rb_1_;
    to->w_rb_1_ = (::DDS::Float)from->w_rb_1_;
    to->pos_rb_1_ = (::DDS::Float)from->pos_rb_1_;
    to->k_p_rb_1_ = (::DDS::Float)from->k_p_rb_1_;
    to->k_w_rb_1_ = (::DDS::Float)from->k_w_rb_1_;
    to->mode_rb_2_ = (::DDS::Long)from->mode_rb_2_;
    to->t_rb_2_ = (::DDS::Float)from->t_rb_2_;
    to->w_rb_2_ = (::DDS::Float)from->w_rb_2_;
    to->pos_rb_2_ = (::DDS::Float)from->pos_rb_2_;
    to->k_p_rb_2_ = (::DDS::Float)from->k_p_rb_2_;
    to->k_w_rb_2_ = (::DDS::Float)from->k_w_rb_2_;
    to->mode_rb_3_ = (::DDS::Long)from->mode_rb_3_;
    to->t_rb_3_ = (::DDS::Float)from->t_rb_3_;
    to->w_rb_3_ = (::DDS::Float)from->w_rb_3_;
    to->pos_rb_3_ = (::DDS::Float)from->pos_rb_3_;
    to->k_p_rb_3_ = (::DDS::Float)from->k_p_rb_3_;
    to->k_w_rb_3_ = (::DDS::Float)from->k_w_rb_3_;
}

