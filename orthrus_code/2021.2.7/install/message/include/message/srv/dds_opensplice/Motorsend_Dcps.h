#ifndef _H_1B4089511B788222B681C79C981FB8CE_Motorsend_DCPS_H_
#define _H_1B4089511B788222B681C79C981FB8CE_Motorsend_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Motorsend_.h"


namespace message
{
    namespace srv
    {
        namespace dds_
        {
            class Motorsend_Request_TypeSupportInterface;

            typedef Motorsend_Request_TypeSupportInterface * Motorsend_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Motorsend_Request_TypeSupportInterface> Motorsend_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Motorsend_Request_TypeSupportInterface> Motorsend_Request_TypeSupportInterface_out;


            class Motorsend_Request_DataWriter;

            typedef Motorsend_Request_DataWriter * Motorsend_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Motorsend_Request_DataWriter> Motorsend_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Motorsend_Request_DataWriter> Motorsend_Request_DataWriter_out;


            class Motorsend_Request_DataReader;

            typedef Motorsend_Request_DataReader * Motorsend_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Motorsend_Request_DataReader> Motorsend_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Motorsend_Request_DataReader> Motorsend_Request_DataReader_out;


            class Motorsend_Request_DataReaderView;

            typedef Motorsend_Request_DataReaderView * Motorsend_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Motorsend_Request_DataReaderView> Motorsend_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Motorsend_Request_DataReaderView> Motorsend_Request_DataReaderView_out;

            struct Motorsend_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Motorsend_Request_, struct Motorsend_Request_Seq_uniq_> Motorsend_Request_Seq;
            typedef DDS_DCPSSequence_var < Motorsend_Request_Seq> Motorsend_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Motorsend_Request_Seq> Motorsend_Request_Seq_out;

            class  Motorsend_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Motorsend_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Motorsend_Request_TypeSupportInterface_var _var_type;

                static Motorsend_Request_TypeSupportInterface_ptr _duplicate (Motorsend_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorsend_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Motorsend_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorsend_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorsend_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Motorsend_Request_TypeSupportInterface () {};
                ~Motorsend_Request_TypeSupportInterface () {};
            private:
                Motorsend_Request_TypeSupportInterface (const Motorsend_Request_TypeSupportInterface &);
                Motorsend_Request_TypeSupportInterface & operator = (const Motorsend_Request_TypeSupportInterface &);
            };

            class  Motorsend_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Motorsend_Request_DataWriter_ptr _ptr_type;
                typedef Motorsend_Request_DataWriter_var _var_type;

                static Motorsend_Request_DataWriter_ptr _duplicate (Motorsend_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorsend_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Motorsend_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorsend_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorsend_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Motorsend_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Motorsend_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Motorsend_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Motorsend_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Motorsend_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Motorsend_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Motorsend_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Motorsend_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Motorsend_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Motorsend_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Motorsend_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorsend_Request_& instance_data) = 0;

            protected:
                Motorsend_Request_DataWriter () {};
                ~Motorsend_Request_DataWriter () {};
            private:
                Motorsend_Request_DataWriter (const Motorsend_Request_DataWriter &);
                Motorsend_Request_DataWriter & operator = (const Motorsend_Request_DataWriter &);
            };

            class  Motorsend_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Motorsend_Request_DataReader_ptr _ptr_type;
                typedef Motorsend_Request_DataReader_var _var_type;

                static Motorsend_Request_DataReader_ptr _duplicate (Motorsend_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorsend_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Motorsend_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorsend_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorsend_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Motorsend_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Motorsend_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Motorsend_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorsend_Request_& instance) = 0;

            protected:
                Motorsend_Request_DataReader () {};
                ~Motorsend_Request_DataReader () {};
            private:
                Motorsend_Request_DataReader (const Motorsend_Request_DataReader &);
                Motorsend_Request_DataReader & operator = (const Motorsend_Request_DataReader &);
            };

            class  Motorsend_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Motorsend_Request_DataReaderView_ptr _ptr_type;
                typedef Motorsend_Request_DataReaderView_var _var_type;

                static Motorsend_Request_DataReaderView_ptr _duplicate (Motorsend_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorsend_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Motorsend_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorsend_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorsend_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Motorsend_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Motorsend_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Motorsend_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorsend_Request_& instance) = 0;

            protected:
                Motorsend_Request_DataReaderView () {};
                ~Motorsend_Request_DataReaderView () {};
            private:
                Motorsend_Request_DataReaderView (const Motorsend_Request_DataReaderView &);
                Motorsend_Request_DataReaderView & operator = (const Motorsend_Request_DataReaderView &);
            };
            class Motorsend_Response_TypeSupportInterface;

            typedef Motorsend_Response_TypeSupportInterface * Motorsend_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Motorsend_Response_TypeSupportInterface> Motorsend_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Motorsend_Response_TypeSupportInterface> Motorsend_Response_TypeSupportInterface_out;


            class Motorsend_Response_DataWriter;

            typedef Motorsend_Response_DataWriter * Motorsend_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Motorsend_Response_DataWriter> Motorsend_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Motorsend_Response_DataWriter> Motorsend_Response_DataWriter_out;


            class Motorsend_Response_DataReader;

            typedef Motorsend_Response_DataReader * Motorsend_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Motorsend_Response_DataReader> Motorsend_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Motorsend_Response_DataReader> Motorsend_Response_DataReader_out;


            class Motorsend_Response_DataReaderView;

            typedef Motorsend_Response_DataReaderView * Motorsend_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Motorsend_Response_DataReaderView> Motorsend_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Motorsend_Response_DataReaderView> Motorsend_Response_DataReaderView_out;

            struct Motorsend_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Motorsend_Response_, struct Motorsend_Response_Seq_uniq_> Motorsend_Response_Seq;
            typedef DDS_DCPSSequence_var < Motorsend_Response_Seq> Motorsend_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Motorsend_Response_Seq> Motorsend_Response_Seq_out;

            class  Motorsend_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Motorsend_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Motorsend_Response_TypeSupportInterface_var _var_type;

                static Motorsend_Response_TypeSupportInterface_ptr _duplicate (Motorsend_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorsend_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Motorsend_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorsend_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorsend_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Motorsend_Response_TypeSupportInterface () {};
                ~Motorsend_Response_TypeSupportInterface () {};
            private:
                Motorsend_Response_TypeSupportInterface (const Motorsend_Response_TypeSupportInterface &);
                Motorsend_Response_TypeSupportInterface & operator = (const Motorsend_Response_TypeSupportInterface &);
            };

            class  Motorsend_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Motorsend_Response_DataWriter_ptr _ptr_type;
                typedef Motorsend_Response_DataWriter_var _var_type;

                static Motorsend_Response_DataWriter_ptr _duplicate (Motorsend_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorsend_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Motorsend_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorsend_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorsend_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Motorsend_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Motorsend_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Motorsend_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Motorsend_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Motorsend_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Motorsend_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Motorsend_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Motorsend_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Motorsend_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Motorsend_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Motorsend_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorsend_Response_& instance_data) = 0;

            protected:
                Motorsend_Response_DataWriter () {};
                ~Motorsend_Response_DataWriter () {};
            private:
                Motorsend_Response_DataWriter (const Motorsend_Response_DataWriter &);
                Motorsend_Response_DataWriter & operator = (const Motorsend_Response_DataWriter &);
            };

            class  Motorsend_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Motorsend_Response_DataReader_ptr _ptr_type;
                typedef Motorsend_Response_DataReader_var _var_type;

                static Motorsend_Response_DataReader_ptr _duplicate (Motorsend_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorsend_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Motorsend_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorsend_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorsend_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Motorsend_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Motorsend_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Motorsend_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorsend_Response_& instance) = 0;

            protected:
                Motorsend_Response_DataReader () {};
                ~Motorsend_Response_DataReader () {};
            private:
                Motorsend_Response_DataReader (const Motorsend_Response_DataReader &);
                Motorsend_Response_DataReader & operator = (const Motorsend_Response_DataReader &);
            };

            class  Motorsend_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Motorsend_Response_DataReaderView_ptr _ptr_type;
                typedef Motorsend_Response_DataReaderView_var _var_type;

                static Motorsend_Response_DataReaderView_ptr _duplicate (Motorsend_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Motorsend_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Motorsend_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Motorsend_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Motorsend_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Motorsend_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Motorsend_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Motorsend_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Motorsend_Response_& instance) = 0;

            protected:
                Motorsend_Response_DataReaderView () {};
                ~Motorsend_Response_DataReaderView () {};
            private:
                Motorsend_Response_DataReaderView (const Motorsend_Response_DataReaderView &);
                Motorsend_Response_DataReaderView & operator = (const Motorsend_Response_DataReaderView &);
            };
            class Sample_Motorsend_Request_TypeSupportInterface;

            typedef Sample_Motorsend_Request_TypeSupportInterface * Sample_Motorsend_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Motorsend_Request_TypeSupportInterface> Sample_Motorsend_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Motorsend_Request_TypeSupportInterface> Sample_Motorsend_Request_TypeSupportInterface_out;


            class Sample_Motorsend_Request_DataWriter;

            typedef Sample_Motorsend_Request_DataWriter * Sample_Motorsend_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Motorsend_Request_DataWriter> Sample_Motorsend_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Motorsend_Request_DataWriter> Sample_Motorsend_Request_DataWriter_out;


            class Sample_Motorsend_Request_DataReader;

            typedef Sample_Motorsend_Request_DataReader * Sample_Motorsend_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Motorsend_Request_DataReader> Sample_Motorsend_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Motorsend_Request_DataReader> Sample_Motorsend_Request_DataReader_out;


            class Sample_Motorsend_Request_DataReaderView;

            typedef Sample_Motorsend_Request_DataReaderView * Sample_Motorsend_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Motorsend_Request_DataReaderView> Sample_Motorsend_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Motorsend_Request_DataReaderView> Sample_Motorsend_Request_DataReaderView_out;

            struct Sample_Motorsend_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_Motorsend_Request_, struct Sample_Motorsend_Request_Seq_uniq_> Sample_Motorsend_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_Motorsend_Request_Seq> Sample_Motorsend_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Motorsend_Request_Seq> Sample_Motorsend_Request_Seq_out;

            class  Sample_Motorsend_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Motorsend_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Motorsend_Request_TypeSupportInterface_var _var_type;

                static Sample_Motorsend_Request_TypeSupportInterface_ptr _duplicate (Sample_Motorsend_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Motorsend_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Motorsend_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Motorsend_Request_TypeSupportInterface () {};
                ~Sample_Motorsend_Request_TypeSupportInterface () {};
            private:
                Sample_Motorsend_Request_TypeSupportInterface (const Sample_Motorsend_Request_TypeSupportInterface &);
                Sample_Motorsend_Request_TypeSupportInterface & operator = (const Sample_Motorsend_Request_TypeSupportInterface &);
            };

            class  Sample_Motorsend_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Motorsend_Request_DataWriter_ptr _ptr_type;
                typedef Sample_Motorsend_Request_DataWriter_var _var_type;

                static Sample_Motorsend_Request_DataWriter_ptr _duplicate (Sample_Motorsend_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Motorsend_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Motorsend_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Motorsend_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Motorsend_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Motorsend_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Motorsend_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Motorsend_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Motorsend_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Motorsend_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Motorsend_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Motorsend_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Motorsend_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Motorsend_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Motorsend_Request_& instance_data) = 0;

            protected:
                Sample_Motorsend_Request_DataWriter () {};
                ~Sample_Motorsend_Request_DataWriter () {};
            private:
                Sample_Motorsend_Request_DataWriter (const Sample_Motorsend_Request_DataWriter &);
                Sample_Motorsend_Request_DataWriter & operator = (const Sample_Motorsend_Request_DataWriter &);
            };

            class  Sample_Motorsend_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Motorsend_Request_DataReader_ptr _ptr_type;
                typedef Sample_Motorsend_Request_DataReader_var _var_type;

                static Sample_Motorsend_Request_DataReader_ptr _duplicate (Sample_Motorsend_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Motorsend_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Motorsend_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Motorsend_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Motorsend_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Motorsend_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Motorsend_Request_& instance) = 0;

            protected:
                Sample_Motorsend_Request_DataReader () {};
                ~Sample_Motorsend_Request_DataReader () {};
            private:
                Sample_Motorsend_Request_DataReader (const Sample_Motorsend_Request_DataReader &);
                Sample_Motorsend_Request_DataReader & operator = (const Sample_Motorsend_Request_DataReader &);
            };

            class  Sample_Motorsend_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Motorsend_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_Motorsend_Request_DataReaderView_var _var_type;

                static Sample_Motorsend_Request_DataReaderView_ptr _duplicate (Sample_Motorsend_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Motorsend_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Motorsend_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Motorsend_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Motorsend_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Motorsend_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Motorsend_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Motorsend_Request_& instance) = 0;

            protected:
                Sample_Motorsend_Request_DataReaderView () {};
                ~Sample_Motorsend_Request_DataReaderView () {};
            private:
                Sample_Motorsend_Request_DataReaderView (const Sample_Motorsend_Request_DataReaderView &);
                Sample_Motorsend_Request_DataReaderView & operator = (const Sample_Motorsend_Request_DataReaderView &);
            };
            class Sample_Motorsend_Response_TypeSupportInterface;

            typedef Sample_Motorsend_Response_TypeSupportInterface * Sample_Motorsend_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Motorsend_Response_TypeSupportInterface> Sample_Motorsend_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Motorsend_Response_TypeSupportInterface> Sample_Motorsend_Response_TypeSupportInterface_out;


            class Sample_Motorsend_Response_DataWriter;

            typedef Sample_Motorsend_Response_DataWriter * Sample_Motorsend_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Motorsend_Response_DataWriter> Sample_Motorsend_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Motorsend_Response_DataWriter> Sample_Motorsend_Response_DataWriter_out;


            class Sample_Motorsend_Response_DataReader;

            typedef Sample_Motorsend_Response_DataReader * Sample_Motorsend_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Motorsend_Response_DataReader> Sample_Motorsend_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Motorsend_Response_DataReader> Sample_Motorsend_Response_DataReader_out;


            class Sample_Motorsend_Response_DataReaderView;

            typedef Sample_Motorsend_Response_DataReaderView * Sample_Motorsend_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Motorsend_Response_DataReaderView> Sample_Motorsend_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Motorsend_Response_DataReaderView> Sample_Motorsend_Response_DataReaderView_out;

            struct Sample_Motorsend_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_Motorsend_Response_, struct Sample_Motorsend_Response_Seq_uniq_> Sample_Motorsend_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_Motorsend_Response_Seq> Sample_Motorsend_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Motorsend_Response_Seq> Sample_Motorsend_Response_Seq_out;

            class  Sample_Motorsend_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Motorsend_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Motorsend_Response_TypeSupportInterface_var _var_type;

                static Sample_Motorsend_Response_TypeSupportInterface_ptr _duplicate (Sample_Motorsend_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Motorsend_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Motorsend_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Motorsend_Response_TypeSupportInterface () {};
                ~Sample_Motorsend_Response_TypeSupportInterface () {};
            private:
                Sample_Motorsend_Response_TypeSupportInterface (const Sample_Motorsend_Response_TypeSupportInterface &);
                Sample_Motorsend_Response_TypeSupportInterface & operator = (const Sample_Motorsend_Response_TypeSupportInterface &);
            };

            class  Sample_Motorsend_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Motorsend_Response_DataWriter_ptr _ptr_type;
                typedef Sample_Motorsend_Response_DataWriter_var _var_type;

                static Sample_Motorsend_Response_DataWriter_ptr _duplicate (Sample_Motorsend_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Motorsend_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Motorsend_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Motorsend_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Motorsend_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Motorsend_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Motorsend_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Motorsend_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Motorsend_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Motorsend_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Motorsend_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Motorsend_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Motorsend_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Motorsend_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Motorsend_Response_& instance_data) = 0;

            protected:
                Sample_Motorsend_Response_DataWriter () {};
                ~Sample_Motorsend_Response_DataWriter () {};
            private:
                Sample_Motorsend_Response_DataWriter (const Sample_Motorsend_Response_DataWriter &);
                Sample_Motorsend_Response_DataWriter & operator = (const Sample_Motorsend_Response_DataWriter &);
            };

            class  Sample_Motorsend_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Motorsend_Response_DataReader_ptr _ptr_type;
                typedef Sample_Motorsend_Response_DataReader_var _var_type;

                static Sample_Motorsend_Response_DataReader_ptr _duplicate (Sample_Motorsend_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Motorsend_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Motorsend_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Motorsend_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Motorsend_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Motorsend_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Motorsend_Response_& instance) = 0;

            protected:
                Sample_Motorsend_Response_DataReader () {};
                ~Sample_Motorsend_Response_DataReader () {};
            private:
                Sample_Motorsend_Response_DataReader (const Sample_Motorsend_Response_DataReader &);
                Sample_Motorsend_Response_DataReader & operator = (const Sample_Motorsend_Response_DataReader &);
            };

            class  Sample_Motorsend_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Motorsend_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_Motorsend_Response_DataReaderView_var _var_type;

                static Sample_Motorsend_Response_DataReaderView_ptr _duplicate (Sample_Motorsend_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Motorsend_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Motorsend_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Motorsend_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Motorsend_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Motorsend_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Motorsend_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Motorsend_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Motorsend_Response_& instance) = 0;

            protected:
                Sample_Motorsend_Response_DataReaderView () {};
                ~Sample_Motorsend_Response_DataReaderView () {};
            private:
                Sample_Motorsend_Response_DataReaderView (const Sample_Motorsend_Response_DataReaderView &);
                Sample_Motorsend_Response_DataReaderView & operator = (const Sample_Motorsend_Response_DataReaderView &);
            };
        }

    }

}

#endif
