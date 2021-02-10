#include "Motorsend_Dcps_impl.h"
#include "Motorsend_SplDcps.h"
//

extern v_copyin_result
__message_srv_dds__Motorsend_Request___copyIn (
    c_base base,
    const struct message::srv::dds_::Motorsend_Request_ *from,
    struct _message_srv_dds__Motorsend_Request_ *to);

extern void
__message_srv_dds__Motorsend_Request___copyOut (
    const void *_from,
    void *_to);

// DDS message::srv::dds_::Motorsend_Request_ TypeSupportMetaHolder Object Body
message::srv::dds_::Motorsend_Request_TypeSupportMetaHolder::Motorsend_Request_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("message::srv::dds_::Motorsend_Request_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __message_srv_dds__Motorsend_Request___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __message_srv_dds__Motorsend_Request___copyOut;
    metaDescriptorArrLength = 9;
    metaDescriptorLength = 926;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"message\"><Module name=\"srv\"><Module name=\"dds_\"><Struct name=\"Motorsend_Request_\">",
"<Member name=\"mode_0_\"><Double/></Member><Member name=\"t_0_\"><Double/></Member><Member name=\"w_0_\">",
"<Double/></Member><Member name=\"pos_0_\"><Double/></Member><Member name=\"k_p_0_\"><Double/></Member>",
"<Member name=\"k_w_0_\"><Double/></Member><Member name=\"mode_1_\"><Double/></Member><Member name=\"t_1_\">",
"<Double/></Member><Member name=\"w_1_\"><Double/></Member><Member name=\"pos_1_\"><Double/></Member><Member name=\"k_p_1_\">",
"<Double/></Member><Member name=\"k_w_1_\"><Double/></Member><Member name=\"mode_2_\"><Double/></Member>",
"<Member name=\"t_2_\"><Double/></Member><Member name=\"w_2_\"><Double/></Member><Member name=\"pos_2_\">",
"<Double/></Member><Member name=\"k_p_2_\"><Double/></Member><Member name=\"k_w_2_\"><Double/></Member>",
"</Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

message::srv::dds_::Motorsend_Request_TypeSupportMetaHolder::~Motorsend_Request_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
message::srv::dds_::Motorsend_Request_TypeSupportMetaHolder::clone()
{
    return new message::srv::dds_::Motorsend_Request_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
message::srv::dds_::Motorsend_Request_TypeSupportMetaHolder::create_datawriter ()
{
    return new message::srv::dds_::Motorsend_Request_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
message::srv::dds_::Motorsend_Request_TypeSupportMetaHolder::create_datareader ()
{
    return new message::srv::dds_::Motorsend_Request_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
message::srv::dds_::Motorsend_Request_TypeSupportMetaHolder::create_view ()
{
    return new message::srv::dds_::Motorsend_Request_DataReaderView_impl();
}

// DDS message::srv::dds_::Motorsend_Request_ TypeSupport Object Body
message::srv::dds_::Motorsend_Request_TypeSupport::Motorsend_Request_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new message::srv::dds_::Motorsend_Request_TypeSupportMetaHolder();
}

message::srv::dds_::Motorsend_Request_TypeSupport::~Motorsend_Request_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS message::srv::dds_::Motorsend_Request_ DataWriter_impl Object Body
message::srv::dds_::Motorsend_Request_DataWriter_impl::Motorsend_Request_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Motorsend_Request_DataWriter_impl::~Motorsend_Request_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::register_instance (
    const message::srv::dds_::Motorsend_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::register_instance_w_timestamp (
    const Motorsend_Request_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::unregister_instance (
    const message::srv::dds_::Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::unregister_instance_w_timestamp (
    const Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::write (
    const message::srv::dds_::Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::write_w_timestamp (
    const Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::dispose (
    const message::srv::dds_::Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::dispose_w_timestamp (
    const Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::writedispose (
    const message::srv::dds_::Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::writedispose_w_timestamp (
    const Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::get_key_value (
    Motorsend_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Request_DataWriter_impl::lookup_instance (
    const message::srv::dds_::Motorsend_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS message::srv::dds_::Motorsend_Request_ DataReader_impl Object Body
message::srv::dds_::Motorsend_Request_DataReader_impl::Motorsend_Request_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Motorsend_Request_DataReader_impl::~Motorsend_Request_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::read (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::take (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::read_w_condition (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::take_w_condition (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::read_next_sample (
    message::srv::dds_::Motorsend_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::take_next_sample (
    message::srv::dds_::Motorsend_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::read_instance (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::take_instance (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::read_next_instance (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::take_next_instance (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::read_next_instance_w_condition (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::take_next_instance_w_condition (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::return_loan (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            message::srv::dds_::Motorsend_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::get_key_value (
    message::srv::dds_::Motorsend_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Request_DataReader_impl::lookup_instance (
    const message::srv::dds_::Motorsend_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
message::srv::dds_::Motorsend_Request_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    message::srv::dds_::Motorsend_Request_Seq *data_seq = reinterpret_cast<message::srv::dds_::Motorsend_Request_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
message::srv::dds_::Motorsend_Request_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	message::srv::dds_::Motorsend_Request_Seq *data_seq = reinterpret_cast<message::srv::dds_::Motorsend_Request_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
message::srv::dds_::Motorsend_Request_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    message::srv::dds_::Motorsend_Request_Seq *data_seq = reinterpret_cast<message::srv::dds_::Motorsend_Request_Seq *>(received_data);
    data_seq->length(len);
}

void
message::srv::dds_::Motorsend_Request_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    message::srv::dds_::Motorsend_Request_ *data = reinterpret_cast<message::srv::dds_::Motorsend_Request_ *>(to);
    __message_srv_dds__Motorsend_Request___copyOut(from, data);
}

void
message::srv::dds_::Motorsend_Request_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    message::srv::dds_::Motorsend_Request_ *data = reinterpret_cast<message::srv::dds_::Motorsend_Request_ *>(to);
    __message_srv_dds__Motorsend_Request___copyOut(from, data);
}


// DDS message::srv::dds_::Motorsend_Request_ DataReaderView_impl Object Body
message::srv::dds_::Motorsend_Request_DataReaderView_impl::Motorsend_Request_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Motorsend_Request_DataReaderView_impl::~Motorsend_Request_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, message::srv::dds_::Motorsend_Request_DataReader_impl::dataSeqAlloc,
            message::srv::dds_::Motorsend_Request_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::read (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::take (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::read_w_condition (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::take_w_condition (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::read_next_sample (
    message::srv::dds_::Motorsend_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::take_next_sample (
    message::srv::dds_::Motorsend_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::read_instance (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::take_instance (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::read_next_instance (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::take_next_instance (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::read_next_instance_w_condition (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::take_next_instance_w_condition (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::return_loan (
    message::srv::dds_::Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            message::srv::dds_::Motorsend_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::get_key_value (
    message::srv::dds_::Motorsend_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Request_DataReaderView_impl::lookup_instance (
    const message::srv::dds_::Motorsend_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__message_srv_dds__Motorsend_Response___copyIn (
    c_base base,
    const struct message::srv::dds_::Motorsend_Response_ *from,
    struct _message_srv_dds__Motorsend_Response_ *to);

extern void
__message_srv_dds__Motorsend_Response___copyOut (
    const void *_from,
    void *_to);

// DDS message::srv::dds_::Motorsend_Response_ TypeSupportMetaHolder Object Body
message::srv::dds_::Motorsend_Response_TypeSupportMetaHolder::Motorsend_Response_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("message::srv::dds_::Motorsend_Response_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __message_srv_dds__Motorsend_Response___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __message_srv_dds__Motorsend_Response___copyOut;
    metaDescriptorArrLength = 16;
    metaDescriptorLength = 1737;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"message\"><Module name=\"srv\"><Module name=\"dds_\"><Struct name=\"Motorsend_Response_\">",
"<Member name=\"temp_0_\"><LongLong/></Member><Member name=\"t_0_\"><Double/></Member><Member name=\"w_0_\">",
"<Double/></Member><Member name=\"lw_0_\"><Double/></Member><Member name=\"acc_0_\"><LongLong/></Member>",
"<Member name=\"pos_0_\"><Double/></Member><Member name=\"gyro_0_x_\"><Double/></Member><Member name=\"gyro_0_y_\">",
"<Double/></Member><Member name=\"gyro_0_z_\"><Double/></Member><Member name=\"acc_0_x_\"><Double/></Member>",
"<Member name=\"acc_0_y_\"><Double/></Member><Member name=\"acc_0_z_\"><Double/></Member><Member name=\"temp_1_\">",
"<LongLong/></Member><Member name=\"t_1_\"><Double/></Member><Member name=\"w_1_\"><Double/></Member><Member name=\"lw_1_\">",
"<Double/></Member><Member name=\"acc_1_\"><LongLong/></Member><Member name=\"pos_1_\"><Double/></Member>",
"<Member name=\"gyro_1_x_\"><Double/></Member><Member name=\"gyro_1_y_\"><Double/></Member><Member name=\"gyro_1_z_\">",
"<Double/></Member><Member name=\"acc_1_x_\"><Double/></Member><Member name=\"acc_1_y_\"><Double/></Member>",
"<Member name=\"acc_1_z_\"><Double/></Member><Member name=\"temp_2_\"><LongLong/></Member><Member name=\"t_2_\">",
"<Double/></Member><Member name=\"w_2_\"><Double/></Member><Member name=\"lw_2_\"><Double/></Member><Member name=\"acc_2_\">",
"<LongLong/></Member><Member name=\"pos_2_\"><Double/></Member><Member name=\"gyro_2_x_\"><Double/></Member>",
"<Member name=\"gyro_2_y_\"><Double/></Member><Member name=\"gyro_2_z_\"><Double/></Member><Member name=\"acc_2_x_\">",
"<Double/></Member><Member name=\"acc_2_y_\"><Double/></Member><Member name=\"acc_2_z_\"><Double/></Member>",
"</Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

message::srv::dds_::Motorsend_Response_TypeSupportMetaHolder::~Motorsend_Response_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
message::srv::dds_::Motorsend_Response_TypeSupportMetaHolder::clone()
{
    return new message::srv::dds_::Motorsend_Response_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
message::srv::dds_::Motorsend_Response_TypeSupportMetaHolder::create_datawriter ()
{
    return new message::srv::dds_::Motorsend_Response_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
message::srv::dds_::Motorsend_Response_TypeSupportMetaHolder::create_datareader ()
{
    return new message::srv::dds_::Motorsend_Response_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
message::srv::dds_::Motorsend_Response_TypeSupportMetaHolder::create_view ()
{
    return new message::srv::dds_::Motorsend_Response_DataReaderView_impl();
}

// DDS message::srv::dds_::Motorsend_Response_ TypeSupport Object Body
message::srv::dds_::Motorsend_Response_TypeSupport::Motorsend_Response_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new message::srv::dds_::Motorsend_Response_TypeSupportMetaHolder();
}

message::srv::dds_::Motorsend_Response_TypeSupport::~Motorsend_Response_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS message::srv::dds_::Motorsend_Response_ DataWriter_impl Object Body
message::srv::dds_::Motorsend_Response_DataWriter_impl::Motorsend_Response_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Motorsend_Response_DataWriter_impl::~Motorsend_Response_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::register_instance (
    const message::srv::dds_::Motorsend_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::register_instance_w_timestamp (
    const Motorsend_Response_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::unregister_instance (
    const message::srv::dds_::Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::unregister_instance_w_timestamp (
    const Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::write (
    const message::srv::dds_::Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::write_w_timestamp (
    const Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::dispose (
    const message::srv::dds_::Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::dispose_w_timestamp (
    const Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::writedispose (
    const message::srv::dds_::Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::writedispose_w_timestamp (
    const Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::get_key_value (
    Motorsend_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Response_DataWriter_impl::lookup_instance (
    const message::srv::dds_::Motorsend_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS message::srv::dds_::Motorsend_Response_ DataReader_impl Object Body
message::srv::dds_::Motorsend_Response_DataReader_impl::Motorsend_Response_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Motorsend_Response_DataReader_impl::~Motorsend_Response_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::read (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::take (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::read_w_condition (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::take_w_condition (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::read_next_sample (
    message::srv::dds_::Motorsend_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::take_next_sample (
    message::srv::dds_::Motorsend_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::read_instance (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::take_instance (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::read_next_instance (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::take_next_instance (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::read_next_instance_w_condition (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::take_next_instance_w_condition (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::return_loan (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            message::srv::dds_::Motorsend_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::get_key_value (
    message::srv::dds_::Motorsend_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Response_DataReader_impl::lookup_instance (
    const message::srv::dds_::Motorsend_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
message::srv::dds_::Motorsend_Response_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    message::srv::dds_::Motorsend_Response_Seq *data_seq = reinterpret_cast<message::srv::dds_::Motorsend_Response_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
message::srv::dds_::Motorsend_Response_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	message::srv::dds_::Motorsend_Response_Seq *data_seq = reinterpret_cast<message::srv::dds_::Motorsend_Response_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
message::srv::dds_::Motorsend_Response_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    message::srv::dds_::Motorsend_Response_Seq *data_seq = reinterpret_cast<message::srv::dds_::Motorsend_Response_Seq *>(received_data);
    data_seq->length(len);
}

void
message::srv::dds_::Motorsend_Response_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    message::srv::dds_::Motorsend_Response_ *data = reinterpret_cast<message::srv::dds_::Motorsend_Response_ *>(to);
    __message_srv_dds__Motorsend_Response___copyOut(from, data);
}

void
message::srv::dds_::Motorsend_Response_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    message::srv::dds_::Motorsend_Response_ *data = reinterpret_cast<message::srv::dds_::Motorsend_Response_ *>(to);
    __message_srv_dds__Motorsend_Response___copyOut(from, data);
}


// DDS message::srv::dds_::Motorsend_Response_ DataReaderView_impl Object Body
message::srv::dds_::Motorsend_Response_DataReaderView_impl::Motorsend_Response_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Motorsend_Response_DataReaderView_impl::~Motorsend_Response_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, message::srv::dds_::Motorsend_Response_DataReader_impl::dataSeqAlloc,
            message::srv::dds_::Motorsend_Response_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::read (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::take (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::read_w_condition (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::take_w_condition (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::read_next_sample (
    message::srv::dds_::Motorsend_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::take_next_sample (
    message::srv::dds_::Motorsend_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::read_instance (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::take_instance (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::read_next_instance (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::take_next_instance (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::read_next_instance_w_condition (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::take_next_instance_w_condition (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::return_loan (
    message::srv::dds_::Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            message::srv::dds_::Motorsend_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::get_key_value (
    message::srv::dds_::Motorsend_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Motorsend_Response_DataReaderView_impl::lookup_instance (
    const message::srv::dds_::Motorsend_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__message_srv_dds__Sample_Motorsend_Request___copyIn (
    c_base base,
    const struct message::srv::dds_::Sample_Motorsend_Request_ *from,
    struct _message_srv_dds__Sample_Motorsend_Request_ *to);

extern void
__message_srv_dds__Sample_Motorsend_Request___copyOut (
    const void *_from,
    void *_to);

// DDS message::srv::dds_::Sample_Motorsend_Request_ TypeSupportMetaHolder Object Body
message::srv::dds_::Sample_Motorsend_Request_TypeSupportMetaHolder::Sample_Motorsend_Request_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("message::srv::dds_::Sample_Motorsend_Request_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __message_srv_dds__Sample_Motorsend_Request___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __message_srv_dds__Sample_Motorsend_Request___copyOut;
    metaDescriptorArrLength = 12;
    metaDescriptorLength = 1208;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"message\"><Module name=\"srv\"><Module name=\"dds_\"><Struct name=\"Motorsend_Request_\">",
"<Member name=\"mode_0_\"><Double/></Member><Member name=\"t_0_\"><Double/></Member><Member name=\"w_0_\">",
"<Double/></Member><Member name=\"pos_0_\"><Double/></Member><Member name=\"k_p_0_\"><Double/></Member>",
"<Member name=\"k_w_0_\"><Double/></Member><Member name=\"mode_1_\"><Double/></Member><Member name=\"t_1_\">",
"<Double/></Member><Member name=\"w_1_\"><Double/></Member><Member name=\"pos_1_\"><Double/></Member><Member name=\"k_p_1_\">",
"<Double/></Member><Member name=\"k_w_1_\"><Double/></Member><Member name=\"mode_2_\"><Double/></Member>",
"<Member name=\"t_2_\"><Double/></Member><Member name=\"w_2_\"><Double/></Member><Member name=\"pos_2_\">",
"<Double/></Member><Member name=\"k_p_2_\"><Double/></Member><Member name=\"k_w_2_\"><Double/></Member>",
"</Struct><Struct name=\"Sample_Motorsend_Request_\"><Member name=\"client_guid_0_\"><ULongLong/></Member>",
"<Member name=\"client_guid_1_\"><ULongLong/></Member><Member name=\"sequence_number_\"><LongLong/></Member>",
"<Member name=\"request_\"><Type name=\"Motorsend_Request_\"/></Member></Struct></Module></Module></Module>",
"</MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

message::srv::dds_::Sample_Motorsend_Request_TypeSupportMetaHolder::~Sample_Motorsend_Request_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
message::srv::dds_::Sample_Motorsend_Request_TypeSupportMetaHolder::clone()
{
    return new message::srv::dds_::Sample_Motorsend_Request_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
message::srv::dds_::Sample_Motorsend_Request_TypeSupportMetaHolder::create_datawriter ()
{
    return new message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
message::srv::dds_::Sample_Motorsend_Request_TypeSupportMetaHolder::create_datareader ()
{
    return new message::srv::dds_::Sample_Motorsend_Request_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
message::srv::dds_::Sample_Motorsend_Request_TypeSupportMetaHolder::create_view ()
{
    return new message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl();
}

// DDS message::srv::dds_::Sample_Motorsend_Request_ TypeSupport Object Body
message::srv::dds_::Sample_Motorsend_Request_TypeSupport::Sample_Motorsend_Request_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new message::srv::dds_::Sample_Motorsend_Request_TypeSupportMetaHolder();
}

message::srv::dds_::Sample_Motorsend_Request_TypeSupport::~Sample_Motorsend_Request_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS message::srv::dds_::Sample_Motorsend_Request_ DataWriter_impl Object Body
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::Sample_Motorsend_Request_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::~Sample_Motorsend_Request_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::register_instance (
    const message::srv::dds_::Sample_Motorsend_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::register_instance_w_timestamp (
    const Sample_Motorsend_Request_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::unregister_instance (
    const message::srv::dds_::Sample_Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::unregister_instance_w_timestamp (
    const Sample_Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::write (
    const message::srv::dds_::Sample_Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::write_w_timestamp (
    const Sample_Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::dispose (
    const message::srv::dds_::Sample_Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::dispose_w_timestamp (
    const Sample_Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::writedispose (
    const message::srv::dds_::Sample_Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::writedispose_w_timestamp (
    const Sample_Motorsend_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::get_key_value (
    Sample_Motorsend_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Request_DataWriter_impl::lookup_instance (
    const message::srv::dds_::Sample_Motorsend_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS message::srv::dds_::Sample_Motorsend_Request_ DataReader_impl Object Body
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::Sample_Motorsend_Request_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::~Sample_Motorsend_Request_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::read (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::take (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::read_w_condition (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::take_w_condition (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::read_next_sample (
    message::srv::dds_::Sample_Motorsend_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::take_next_sample (
    message::srv::dds_::Sample_Motorsend_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::read_instance (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::take_instance (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::read_next_instance (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::take_next_instance (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::read_next_instance_w_condition (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::take_next_instance_w_condition (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::return_loan (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            message::srv::dds_::Sample_Motorsend_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::get_key_value (
    message::srv::dds_::Sample_Motorsend_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::lookup_instance (
    const message::srv::dds_::Sample_Motorsend_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    message::srv::dds_::Sample_Motorsend_Request_Seq *data_seq = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Request_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	message::srv::dds_::Sample_Motorsend_Request_Seq *data_seq = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Request_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    message::srv::dds_::Sample_Motorsend_Request_Seq *data_seq = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Request_Seq *>(received_data);
    data_seq->length(len);
}

void
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    message::srv::dds_::Sample_Motorsend_Request_ *data = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Request_ *>(to);
    __message_srv_dds__Sample_Motorsend_Request___copyOut(from, data);
}

void
message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    message::srv::dds_::Sample_Motorsend_Request_ *data = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Request_ *>(to);
    __message_srv_dds__Sample_Motorsend_Request___copyOut(from, data);
}


// DDS message::srv::dds_::Sample_Motorsend_Request_ DataReaderView_impl Object Body
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::Sample_Motorsend_Request_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::~Sample_Motorsend_Request_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::dataSeqAlloc,
            message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::read (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::take (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::read_w_condition (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::take_w_condition (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::read_next_sample (
    message::srv::dds_::Sample_Motorsend_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::take_next_sample (
    message::srv::dds_::Sample_Motorsend_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::read_instance (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::take_instance (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::read_next_instance (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::take_next_instance (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::read_next_instance_w_condition (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::take_next_instance_w_condition (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::return_loan (
    message::srv::dds_::Sample_Motorsend_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            message::srv::dds_::Sample_Motorsend_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::get_key_value (
    message::srv::dds_::Sample_Motorsend_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Request_DataReaderView_impl::lookup_instance (
    const message::srv::dds_::Sample_Motorsend_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__message_srv_dds__Sample_Motorsend_Response___copyIn (
    c_base base,
    const struct message::srv::dds_::Sample_Motorsend_Response_ *from,
    struct _message_srv_dds__Sample_Motorsend_Response_ *to);

extern void
__message_srv_dds__Sample_Motorsend_Response___copyOut (
    const void *_from,
    void *_to);

// DDS message::srv::dds_::Sample_Motorsend_Response_ TypeSupportMetaHolder Object Body
message::srv::dds_::Sample_Motorsend_Response_TypeSupportMetaHolder::Sample_Motorsend_Response_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("message::srv::dds_::Sample_Motorsend_Response_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __message_srv_dds__Sample_Motorsend_Response___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __message_srv_dds__Sample_Motorsend_Response___copyOut;
    metaDescriptorArrLength = 19;
    metaDescriptorLength = 2022;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"message\"><Module name=\"srv\"><Module name=\"dds_\"><Struct name=\"Motorsend_Response_\">",
"<Member name=\"temp_0_\"><LongLong/></Member><Member name=\"t_0_\"><Double/></Member><Member name=\"w_0_\">",
"<Double/></Member><Member name=\"lw_0_\"><Double/></Member><Member name=\"acc_0_\"><LongLong/></Member>",
"<Member name=\"pos_0_\"><Double/></Member><Member name=\"gyro_0_x_\"><Double/></Member><Member name=\"gyro_0_y_\">",
"<Double/></Member><Member name=\"gyro_0_z_\"><Double/></Member><Member name=\"acc_0_x_\"><Double/></Member>",
"<Member name=\"acc_0_y_\"><Double/></Member><Member name=\"acc_0_z_\"><Double/></Member><Member name=\"temp_1_\">",
"<LongLong/></Member><Member name=\"t_1_\"><Double/></Member><Member name=\"w_1_\"><Double/></Member><Member name=\"lw_1_\">",
"<Double/></Member><Member name=\"acc_1_\"><LongLong/></Member><Member name=\"pos_1_\"><Double/></Member>",
"<Member name=\"gyro_1_x_\"><Double/></Member><Member name=\"gyro_1_y_\"><Double/></Member><Member name=\"gyro_1_z_\">",
"<Double/></Member><Member name=\"acc_1_x_\"><Double/></Member><Member name=\"acc_1_y_\"><Double/></Member>",
"<Member name=\"acc_1_z_\"><Double/></Member><Member name=\"temp_2_\"><LongLong/></Member><Member name=\"t_2_\">",
"<Double/></Member><Member name=\"w_2_\"><Double/></Member><Member name=\"lw_2_\"><Double/></Member><Member name=\"acc_2_\">",
"<LongLong/></Member><Member name=\"pos_2_\"><Double/></Member><Member name=\"gyro_2_x_\"><Double/></Member>",
"<Member name=\"gyro_2_y_\"><Double/></Member><Member name=\"gyro_2_z_\"><Double/></Member><Member name=\"acc_2_x_\">",
"<Double/></Member><Member name=\"acc_2_y_\"><Double/></Member><Member name=\"acc_2_z_\"><Double/></Member>",
"</Struct><Struct name=\"Sample_Motorsend_Response_\"><Member name=\"client_guid_0_\"><ULongLong/></Member>",
"<Member name=\"client_guid_1_\"><ULongLong/></Member><Member name=\"sequence_number_\"><LongLong/></Member>",
"<Member name=\"response_\"><Type name=\"Motorsend_Response_\"/></Member></Struct></Module></Module></Module>",
"</MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

message::srv::dds_::Sample_Motorsend_Response_TypeSupportMetaHolder::~Sample_Motorsend_Response_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
message::srv::dds_::Sample_Motorsend_Response_TypeSupportMetaHolder::clone()
{
    return new message::srv::dds_::Sample_Motorsend_Response_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
message::srv::dds_::Sample_Motorsend_Response_TypeSupportMetaHolder::create_datawriter ()
{
    return new message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
message::srv::dds_::Sample_Motorsend_Response_TypeSupportMetaHolder::create_datareader ()
{
    return new message::srv::dds_::Sample_Motorsend_Response_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
message::srv::dds_::Sample_Motorsend_Response_TypeSupportMetaHolder::create_view ()
{
    return new message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl();
}

// DDS message::srv::dds_::Sample_Motorsend_Response_ TypeSupport Object Body
message::srv::dds_::Sample_Motorsend_Response_TypeSupport::Sample_Motorsend_Response_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new message::srv::dds_::Sample_Motorsend_Response_TypeSupportMetaHolder();
}

message::srv::dds_::Sample_Motorsend_Response_TypeSupport::~Sample_Motorsend_Response_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS message::srv::dds_::Sample_Motorsend_Response_ DataWriter_impl Object Body
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::Sample_Motorsend_Response_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::~Sample_Motorsend_Response_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::register_instance (
    const message::srv::dds_::Sample_Motorsend_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::register_instance_w_timestamp (
    const Sample_Motorsend_Response_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::unregister_instance (
    const message::srv::dds_::Sample_Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::unregister_instance_w_timestamp (
    const Sample_Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::write (
    const message::srv::dds_::Sample_Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::write_w_timestamp (
    const Sample_Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::dispose (
    const message::srv::dds_::Sample_Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::dispose_w_timestamp (
    const Sample_Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::writedispose (
    const message::srv::dds_::Sample_Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::writedispose_w_timestamp (
    const Sample_Motorsend_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::get_key_value (
    Sample_Motorsend_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Response_DataWriter_impl::lookup_instance (
    const message::srv::dds_::Sample_Motorsend_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS message::srv::dds_::Sample_Motorsend_Response_ DataReader_impl Object Body
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::Sample_Motorsend_Response_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::~Sample_Motorsend_Response_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::read (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::take (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::read_w_condition (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::take_w_condition (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::read_next_sample (
    message::srv::dds_::Sample_Motorsend_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::take_next_sample (
    message::srv::dds_::Sample_Motorsend_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::read_instance (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::take_instance (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::read_next_instance (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::take_next_instance (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::read_next_instance_w_condition (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::take_next_instance_w_condition (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::return_loan (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            message::srv::dds_::Sample_Motorsend_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::get_key_value (
    message::srv::dds_::Sample_Motorsend_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::lookup_instance (
    const message::srv::dds_::Sample_Motorsend_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    message::srv::dds_::Sample_Motorsend_Response_Seq *data_seq = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Response_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	message::srv::dds_::Sample_Motorsend_Response_Seq *data_seq = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Response_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    message::srv::dds_::Sample_Motorsend_Response_Seq *data_seq = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Response_Seq *>(received_data);
    data_seq->length(len);
}

void
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    message::srv::dds_::Sample_Motorsend_Response_ *data = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Response_ *>(to);
    __message_srv_dds__Sample_Motorsend_Response___copyOut(from, data);
}

void
message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    message::srv::dds_::Sample_Motorsend_Response_ *data = reinterpret_cast<message::srv::dds_::Sample_Motorsend_Response_ *>(to);
    __message_srv_dds__Sample_Motorsend_Response___copyOut(from, data);
}


// DDS message::srv::dds_::Sample_Motorsend_Response_ DataReaderView_impl Object Body
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::Sample_Motorsend_Response_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::~Sample_Motorsend_Response_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::dataSeqAlloc,
            message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::read (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::take (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::read_w_condition (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::take_w_condition (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::read_next_sample (
    message::srv::dds_::Sample_Motorsend_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::take_next_sample (
    message::srv::dds_::Sample_Motorsend_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::read_instance (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::take_instance (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::read_next_instance (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::take_next_instance (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::read_next_instance_w_condition (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::take_next_instance_w_condition (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = message::srv::dds_::Sample_Motorsend_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::return_loan (
    message::srv::dds_::Sample_Motorsend_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            message::srv::dds_::Sample_Motorsend_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::get_key_value (
    message::srv::dds_::Sample_Motorsend_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
message::srv::dds_::Sample_Motorsend_Response_DataReaderView_impl::lookup_instance (
    const message::srv::dds_::Sample_Motorsend_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
