#ifndef _H_1E86FEEAEFBAD5CB0E7BD50C3036792E_Motorrecv__H_
#define _H_1E86FEEAEFBAD5CB0E7BD50C3036792E_Motorrecv__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message
{
    namespace msg
    {
        namespace dds_
        {
            struct  Motorrecv_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<Motorrecv_> Motorrecv__var;
            typedef Motorrecv_& Motorrecv__out;

        }

    }

}

#endif /* _H_1E86FEEAEFBAD5CB0E7BD50C3036792E_Motorrecv__H_ */
