#ifndef H_E2992AF4107ED81F40D666805E46F042_Motorcarryout_SPLTYPES_H
#define H_E2992AF4107ED81F40D666805E46F042_Motorcarryout_SPLTYPES_H

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
    c_long mode_lf_1_;
    c_float t_lf_1_;
    c_float w_lf_1_;
    c_float pos_lf_1_;
    c_float k_p_lf_1_;
    c_float k_w_lf_1_;
    c_long mode_lf_2_;
    c_float t_lf_2_;
    c_float w_lf_2_;
    c_float pos_lf_2_;
    c_float k_p_lf_2_;
    c_float k_w_lf_2_;
    c_long mode_lf_3_;
    c_float t_lf_3_;
    c_float w_lf_3_;
    c_float pos_lf_3_;
    c_float k_p_lf_3_;
    c_float k_w_lf_3_;
    c_long mode_rf_1_;
    c_float t_rf_1_;
    c_float w_rf_1_;
    c_float pos_rf_1_;
    c_float k_p_rf_1_;
    c_float k_w_rf_1_;
    c_long mode_rf_2_;
    c_float t_rf_2_;
    c_float w_rf_2_;
    c_float pos_rf_2_;
    c_float k_p_rf_2_;
    c_float k_w_rf_2_;
    c_long mode_rf_3_;
    c_float t_rf_3_;
    c_float w_rf_3_;
    c_float pos_rf_3_;
    c_float k_p_rf_3_;
    c_float k_w_rf_3_;
    c_long mode_lb_1_;
    c_float t_lb_1_;
    c_float w_lb_1_;
    c_float pos_lb_1_;
    c_float k_p_lb_1_;
    c_float k_w_lb_1_;
    c_long mode_lb_2_;
    c_float t_lb_2_;
    c_float w_lb_2_;
    c_float pos_lb_2_;
    c_float k_p_lb_2_;
    c_float k_w_lb_2_;
    c_long mode_lb_3_;
    c_float t_lb_3_;
    c_float w_lb_3_;
    c_float pos_lb_3_;
    c_float k_p_lb_3_;
    c_float k_w_lb_3_;
    c_long mode_rb_1_;
    c_float t_rb_1_;
    c_float w_rb_1_;
    c_float pos_rb_1_;
    c_float k_p_rb_1_;
    c_float k_w_rb_1_;
    c_long mode_rb_2_;
    c_float t_rb_2_;
    c_float w_rb_2_;
    c_float pos_rb_2_;
    c_float k_p_rb_2_;
    c_float k_w_rb_2_;
    c_long mode_rb_3_;
    c_float t_rb_3_;
    c_float w_rb_3_;
    c_float pos_rb_3_;
    c_float k_p_rb_3_;
    c_float k_w_rb_3_;
};

#undef OS_API
#endif
