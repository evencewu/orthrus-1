#ifndef _H_1B4089511B788222B681C79C981FB8CE_Motorsend__H_
#define _H_1B4089511B788222B681C79C981FB8CE_Motorsend__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message
{
    namespace srv
    {
        namespace dds_
        {
            struct  Motorsend_Request_
            {
                ::DDS::Double mode_0_;
                ::DDS::Double t_0_;
                ::DDS::Double w_0_;
                ::DDS::Double pos_0_;
                ::DDS::Double k_p_0_;
                ::DDS::Double k_w_0_;
                ::DDS::Double mode_1_;
                ::DDS::Double t_1_;
                ::DDS::Double w_1_;
                ::DDS::Double pos_1_;
                ::DDS::Double k_p_1_;
                ::DDS::Double k_w_1_;
                ::DDS::Double mode_2_;
                ::DDS::Double t_2_;
                ::DDS::Double w_2_;
                ::DDS::Double pos_2_;
                ::DDS::Double k_p_2_;
                ::DDS::Double k_w_2_;
            };

            typedef DDS_DCPSStruct_var<Motorsend_Request_> Motorsend_Request__var;
            typedef Motorsend_Request_& Motorsend_Request__out;

            struct  Motorsend_Response_
            {
                ::DDS::LongLong temp_0_;
                ::DDS::Double t_0_;
                ::DDS::Double w_0_;
                ::DDS::Double lw_0_;
                ::DDS::LongLong acc_0_;
                ::DDS::Double pos_0_;
                ::DDS::Double gyro_0_x_;
                ::DDS::Double gyro_0_y_;
                ::DDS::Double gyro_0_z_;
                ::DDS::Double acc_0_x_;
                ::DDS::Double acc_0_y_;
                ::DDS::Double acc_0_z_;
                ::DDS::LongLong temp_1_;
                ::DDS::Double t_1_;
                ::DDS::Double w_1_;
                ::DDS::Double lw_1_;
                ::DDS::LongLong acc_1_;
                ::DDS::Double pos_1_;
                ::DDS::Double gyro_1_x_;
                ::DDS::Double gyro_1_y_;
                ::DDS::Double gyro_1_z_;
                ::DDS::Double acc_1_x_;
                ::DDS::Double acc_1_y_;
                ::DDS::Double acc_1_z_;
                ::DDS::LongLong temp_2_;
                ::DDS::Double t_2_;
                ::DDS::Double w_2_;
                ::DDS::Double lw_2_;
                ::DDS::LongLong acc_2_;
                ::DDS::Double pos_2_;
                ::DDS::Double gyro_2_x_;
                ::DDS::Double gyro_2_y_;
                ::DDS::Double gyro_2_z_;
                ::DDS::Double acc_2_x_;
                ::DDS::Double acc_2_y_;
                ::DDS::Double acc_2_z_;
            };

            typedef DDS_DCPSStruct_var<Motorsend_Response_> Motorsend_Response__var;
            typedef Motorsend_Response_& Motorsend_Response__out;

            struct  Sample_Motorsend_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::message::srv::dds_::Motorsend_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_Motorsend_Request_> Sample_Motorsend_Request__var;
            typedef Sample_Motorsend_Request_& Sample_Motorsend_Request__out;

            struct  Sample_Motorsend_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::message::srv::dds_::Motorsend_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_Motorsend_Response_> Sample_Motorsend_Response__var;
            typedef Sample_Motorsend_Response_& Sample_Motorsend_Response__out;

        }

    }

}

#endif /* _H_1B4089511B788222B681C79C981FB8CE_Motorsend__H_ */
