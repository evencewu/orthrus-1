#include "Motorrecv_.h"
#include "Motorrecv_Dcps.h"

namespace message
{
    namespace msg
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < message::msg::dds_::Motorrecv_, struct Motorrecv_Seq_uniq_>;
#endif

const char * message::msg::dds_::Motorrecv_TypeSupportInterface::_local_id = "IDL:::message::msg::dds_/Motorrecv_TypeSupportInterface:1.0";

message::msg::dds_::Motorrecv_TypeSupportInterface_ptr message::msg::dds_::Motorrecv_TypeSupportInterface::_duplicate (message::msg::dds_::Motorrecv_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::msg::dds_::Motorrecv_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::msg::dds_::Motorrecv_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

message::msg::dds_::Motorrecv_TypeSupportInterface_ptr message::msg::dds_::Motorrecv_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    message::msg::dds_::Motorrecv_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (message::msg::dds_::Motorrecv_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < message::msg::dds_::Motorrecv_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::msg::dds_::Motorrecv_TypeSupportInterface_ptr message::msg::dds_::Motorrecv_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    message::msg::dds_::Motorrecv_TypeSupportInterface_ptr result;
    result = dynamic_cast < message::msg::dds_::Motorrecv_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::msg::dds_::Motorrecv_DataWriter::_local_id = "IDL:::message::msg::dds_/Motorrecv_DataWriter:1.0";

message::msg::dds_::Motorrecv_DataWriter_ptr message::msg::dds_::Motorrecv_DataWriter::_duplicate (message::msg::dds_::Motorrecv_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::msg::dds_::Motorrecv_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::msg::dds_::Motorrecv_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

message::msg::dds_::Motorrecv_DataWriter_ptr message::msg::dds_::Motorrecv_DataWriter::_narrow (DDS::Object_ptr p)
{
    message::msg::dds_::Motorrecv_DataWriter_ptr result = NULL;
    if (p && p->_is_a (message::msg::dds_::Motorrecv_DataWriter::_local_id))
    {
        result = dynamic_cast < message::msg::dds_::Motorrecv_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::msg::dds_::Motorrecv_DataWriter_ptr message::msg::dds_::Motorrecv_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    message::msg::dds_::Motorrecv_DataWriter_ptr result;
    result = dynamic_cast < message::msg::dds_::Motorrecv_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::msg::dds_::Motorrecv_DataReader::_local_id = "IDL:::message::msg::dds_/Motorrecv_DataReader:1.0";

message::msg::dds_::Motorrecv_DataReader_ptr message::msg::dds_::Motorrecv_DataReader::_duplicate (message::msg::dds_::Motorrecv_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::msg::dds_::Motorrecv_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::msg::dds_::Motorrecv_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

message::msg::dds_::Motorrecv_DataReader_ptr message::msg::dds_::Motorrecv_DataReader::_narrow (DDS::Object_ptr p)
{
    message::msg::dds_::Motorrecv_DataReader_ptr result = NULL;
    if (p && p->_is_a (message::msg::dds_::Motorrecv_DataReader::_local_id))
    {
        result = dynamic_cast < message::msg::dds_::Motorrecv_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::msg::dds_::Motorrecv_DataReader_ptr message::msg::dds_::Motorrecv_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    message::msg::dds_::Motorrecv_DataReader_ptr result;
    result = dynamic_cast < message::msg::dds_::Motorrecv_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::msg::dds_::Motorrecv_DataReaderView::_local_id = "IDL:::message::msg::dds_/Motorrecv_DataReaderView:1.0";

message::msg::dds_::Motorrecv_DataReaderView_ptr message::msg::dds_::Motorrecv_DataReaderView::_duplicate (message::msg::dds_::Motorrecv_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::msg::dds_::Motorrecv_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::msg::dds_::Motorrecv_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

message::msg::dds_::Motorrecv_DataReaderView_ptr message::msg::dds_::Motorrecv_DataReaderView::_narrow (DDS::Object_ptr p)
{
    message::msg::dds_::Motorrecv_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (message::msg::dds_::Motorrecv_DataReaderView::_local_id))
    {
        result = dynamic_cast < message::msg::dds_::Motorrecv_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::msg::dds_::Motorrecv_DataReaderView_ptr message::msg::dds_::Motorrecv_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    message::msg::dds_::Motorrecv_DataReaderView_ptr result;
    result = dynamic_cast < message::msg::dds_::Motorrecv_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

