#ifndef _H_E2992AF4107ED81F40D666805E46F042_Motorcarryout_DCPS_H_
#define _H_E2992AF4107ED81F40D666805E46F042_Motorcarryout_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Motorcarryout_.h"


namespace message
{
    namespace msg
    {
        namespace dds_
        {
            class Motorcarryout_TypeSupportInterface;

            typedef Motorcarryout_TypeSupportInterface * Motorcarryout_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Motorcarryout_TypeSupportInterface> Motorcarryout_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Motorcarryout_TypeSupportInterface> Motorcarryout_TypeSupportInterface_out;


            class Motorcarryout_DataWriter;

            typedef Motorcarryout_DataWriter * Motorcarryout_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Motorcarryout_DataWriter> Motorcarryout_DataWriter_var;
            typedef DDS_DCPSInterface_out < Motorcarryout_DataWriter> Motorcarryout_DataWriter_out;


            class Motorcarryout_DataReader;

            typedef Motorcarryout_DataReader * Motorcarryout_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Motorcarryout_DataReader> Motorcarryout_DataReader_var;
            typedef DDS_DCPSInterface_out < Motorcarryout_DataReader> Motorcarryout_DataReader_out;


            class Motorcarryout_DataReaderView;

            typedef Motorcarryout_DataReaderView * Motorcarryout_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Motorcarryout_DataReaderView> Motorcarryout_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Motorcarryout_DataReaderView> Motorcarryout_DataReaderView_out;

            struct Motorcarryout_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Motorcarryout_, struct Motorcarryout_Seq_uniq_> Motorcarryout_Seq;
            typedef DDS_DCPSSequence_var < Motorcarryout_Seq> Motorcarryout_Seq_var;
            typedef DDS_DCPSSequence_out < Motorcarryout_Seq> Motorcarryout_Seq_out;

            class  Motorcarryout_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Motorcarryout_TypeSupportInterface_ptr _ptr_type;
                typedef Motorcarryout_TypeSupportInterface_var _var_type;

                static Motorcarryout_TypeSupportInterface_ptr _duplicate (Motorcarryout_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorcarryout_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Motorcarryout_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorcarryout_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorcarryout_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Motorcarryout_TypeSupportInterface () {};
                ~Motorcarryout_TypeSupportInterface () {};
            private:
                Motorcarryout_TypeSupportInterface (const Motorcarryout_TypeSupportInterface &);
                Motorcarryout_TypeSupportInterface & operator = (const Motorcarryout_TypeSupportInterface &);
            };

            class  Motorcarryout_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Motorcarryout_DataWriter_ptr _ptr_type;
                typedef Motorcarryout_DataWriter_var _var_type;

                static Motorcarryout_DataWriter_ptr _duplicate (Motorcarryout_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorcarryout_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Motorcarryout_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorcarryout_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorcarryout_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Motorcarryout_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Motorcarryout_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Motorcarryout_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Motorcarryout_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Motorcarryout_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Motorcarryout_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Motorcarryout_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Motorcarryout_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Motorcarryout_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Motorcarryout_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Motorcarryout_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorcarryout_& instance_data) = 0;

            protected:
                Motorcarryout_DataWriter () {};
                ~Motorcarryout_DataWriter () {};
            private:
                Motorcarryout_DataWriter (const Motorcarryout_DataWriter &);
                Motorcarryout_DataWriter & operator = (const Motorcarryout_DataWriter &);
            };

            class  Motorcarryout_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Motorcarryout_DataReader_ptr _ptr_type;
                typedef Motorcarryout_DataReader_var _var_type;

                static Motorcarryout_DataReader_ptr _duplicate (Motorcarryout_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorcarryout_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Motorcarryout_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorcarryout_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorcarryout_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Motorcarryout_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Motorcarryout_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Motorcarryout_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorcarryout_& instance) = 0;

            protected:
                Motorcarryout_DataReader () {};
                ~Motorcarryout_DataReader () {};
            private:
                Motorcarryout_DataReader (const Motorcarryout_DataReader &);
                Motorcarryout_DataReader & operator = (const Motorcarryout_DataReader &);
            };

            class  Motorcarryout_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Motorcarryout_DataReaderView_ptr _ptr_type;
                typedef Motorcarryout_DataReaderView_var _var_type;

                static Motorcarryout_DataReaderView_ptr _duplicate (Motorcarryout_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorcarryout_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Motorcarryout_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorcarryout_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorcarryout_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Motorcarryout_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Motorcarryout_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Motorcarryout_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Motorcarryout_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorcarryout_& instance) = 0;

            protected:
                Motorcarryout_DataReaderView () {};
                ~Motorcarryout_DataReaderView () {};
            private:
                Motorcarryout_DataReaderView (const Motorcarryout_DataReaderView &);
                Motorcarryout_DataReaderView & operator = (const Motorcarryout_DataReaderView &);
            };
        }

    }

}

#endif
