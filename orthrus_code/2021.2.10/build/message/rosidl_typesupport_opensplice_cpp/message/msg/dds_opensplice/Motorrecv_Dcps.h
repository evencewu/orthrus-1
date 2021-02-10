#ifndef _H_1E86FEEAEFBAD5CB0E7BD50C3036792E_Motorrecv_DCPS_H_
#define _H_1E86FEEAEFBAD5CB0E7BD50C3036792E_Motorrecv_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Motorrecv_.h"


namespace message
{
    namespace msg
    {
        namespace dds_
        {
            class Motorrecv_TypeSupportInterface;

            typedef Motorrecv_TypeSupportInterface * Motorrecv_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Motorrecv_TypeSupportInterface> Motorrecv_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Motorrecv_TypeSupportInterface> Motorrecv_TypeSupportInterface_out;


            class Motorrecv_DataWriter;

            typedef Motorrecv_DataWriter * Motorrecv_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Motorrecv_DataWriter> Motorrecv_DataWriter_var;
            typedef DDS_DCPSInterface_out < Motorrecv_DataWriter> Motorrecv_DataWriter_out;


            class Motorrecv_DataReader;

            typedef Motorrecv_DataReader * Motorrecv_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Motorrecv_DataReader> Motorrecv_DataReader_var;
            typedef DDS_DCPSInterface_out < Motorrecv_DataReader> Motorrecv_DataReader_out;


            class Motorrecv_DataReaderView;

            typedef Motorrecv_DataReaderView * Motorrecv_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Motorrecv_DataReaderView> Motorrecv_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Motorrecv_DataReaderView> Motorrecv_DataReaderView_out;

            struct Motorrecv_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Motorrecv_, struct Motorrecv_Seq_uniq_> Motorrecv_Seq;
            typedef DDS_DCPSSequence_var < Motorrecv_Seq> Motorrecv_Seq_var;
            typedef DDS_DCPSSequence_out < Motorrecv_Seq> Motorrecv_Seq_out;

            class  Motorrecv_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Motorrecv_TypeSupportInterface_ptr _ptr_type;
                typedef Motorrecv_TypeSupportInterface_var _var_type;

                static Motorrecv_TypeSupportInterface_ptr _duplicate (Motorrecv_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorrecv_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Motorrecv_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorrecv_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorrecv_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Motorrecv_TypeSupportInterface () {};
                ~Motorrecv_TypeSupportInterface () {};
            private:
                Motorrecv_TypeSupportInterface (const Motorrecv_TypeSupportInterface &);
                Motorrecv_TypeSupportInterface & operator = (const Motorrecv_TypeSupportInterface &);
            };

            class  Motorrecv_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Motorrecv_DataWriter_ptr _ptr_type;
                typedef Motorrecv_DataWriter_var _var_type;

                static Motorrecv_DataWriter_ptr _duplicate (Motorrecv_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorrecv_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Motorrecv_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorrecv_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorrecv_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Motorrecv_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Motorrecv_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Motorrecv_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Motorrecv_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Motorrecv_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Motorrecv_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Motorrecv_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Motorrecv_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Motorrecv_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Motorrecv_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Motorrecv_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorrecv_& instance_data) = 0;

            protected:
                Motorrecv_DataWriter () {};
                ~Motorrecv_DataWriter () {};
            private:
                Motorrecv_DataWriter (const Motorrecv_DataWriter &);
                Motorrecv_DataWriter & operator = (const Motorrecv_DataWriter &);
            };

            class  Motorrecv_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Motorrecv_DataReader_ptr _ptr_type;
                typedef Motorrecv_DataReader_var _var_type;

                static Motorrecv_DataReader_ptr _duplicate (Motorrecv_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorrecv_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Motorrecv_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorrecv_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorrecv_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Motorrecv_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Motorrecv_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Motorrecv_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorrecv_& instance) = 0;

            protected:
                Motorrecv_DataReader () {};
                ~Motorrecv_DataReader () {};
            private:
                Motorrecv_DataReader (const Motorrecv_DataReader &);
                Motorrecv_DataReader & operator = (const Motorrecv_DataReader &);
            };

            class  Motorrecv_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Motorrecv_DataReaderView_ptr _ptr_type;
                typedef Motorrecv_DataReaderView_var _var_type;

                static Motorrecv_DataReaderView_ptr _duplicate (Motorrecv_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorrecv_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Motorrecv_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorrecv_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorrecv_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Motorrecv_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Motorrecv_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Motorrecv_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Motorrecv_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorrecv_& instance) = 0;

            protected:
                Motorrecv_DataReaderView () {};
                ~Motorrecv_DataReaderView () {};
            private:
                Motorrecv_DataReaderView (const Motorrecv_DataReaderView &);
                Motorrecv_DataReaderView & operator = (const Motorrecv_DataReaderView &);
            };
        }

    }

}

#endif
