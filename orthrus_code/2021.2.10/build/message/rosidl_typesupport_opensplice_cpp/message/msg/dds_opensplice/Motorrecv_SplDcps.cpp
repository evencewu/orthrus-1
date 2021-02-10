#include "Motorrecv_SplDcps.h"
#include "ccpp_Motorrecv_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__message_msg_dds__Motorrecv___copyIn(
    c_base base,
    const struct ::message::msg::dds_::Motorrecv_ *from,
    struct _message_msg_dds__Motorrecv_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->structure_needs_at_least_one_member_ = (c_octet)from->structure_needs_at_least_one_member_;
    return result;
}

void
__message_msg_dds__Motorrecv___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_msg_dds__Motorrecv_ *from = (const struct _message_msg_dds__Motorrecv_ *)_from;
    struct ::message::msg::dds_::Motorrecv_ *to = (struct ::message::msg::dds_::Motorrecv_ *)_to;
    to->structure_needs_at_least_one_member_ = (::DDS::Octet)from->structure_needs_at_least_one_member_;
}

