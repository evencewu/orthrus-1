#ifndef _H_04EE1B85EC0813C319E20B319685E01C_Motorcarryout__H_
#define _H_04EE1B85EC0813C319E20B319685E01C_Motorcarryout__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message
{
    namespace msg
    {
        namespace dds_
        {
            struct  Motorcarryout_
            {
                ::DDS::Long mode_;
                ::DDS::String_mgr name_;
            };

            typedef DDS_DCPSStruct_var<Motorcarryout_> Motorcarryout__var;
            typedef DDS_DCPSStruct_out < Motorcarryout_> Motorcarryout__out;

        }

    }

}

#endif /* _H_04EE1B85EC0813C319E20B319685E01C_Motorcarryout__H_ */
