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

    to->mode_ = (c_long)from->mode_;
#ifdef OSPL_BOUNDS_CHECK
    if(from->name_){
        to->name_ = c_stringNew_s(base, from->name_);
        if(to->name_ == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'message::msg::dds_::Motorcarryout_.name_' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->name_ = c_stringNew_s(base, from->name_);
    if(to->name_ == NULL) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
    return result;
}

void
__message_msg_dds__Motorcarryout___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_msg_dds__Motorcarryout_ *from = (const struct _message_msg_dds__Motorcarryout_ *)_from;
    struct ::message::msg::dds_::Motorcarryout_ *to = (struct ::message::msg::dds_::Motorcarryout_ *)_to;
    to->mode_ = (::DDS::Long)from->mode_;
    to->name_ = DDS::string_dup(from->name_ ? from->name_ : "");
}

