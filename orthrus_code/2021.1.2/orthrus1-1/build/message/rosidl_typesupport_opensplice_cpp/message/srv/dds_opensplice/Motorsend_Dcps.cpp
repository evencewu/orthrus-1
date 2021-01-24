#include "Motorsend_.h"
#include "Motorsend_Dcps.h"

namespace message
{
    namespace srv
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < message::srv::dds_::Motorsend_Request_, struct Motorsend_Request_Seq_uniq_>;
#endif

const char * message::srv::dds_::Motorsend_Request_TypeSupportInterface::_local_id = "IDL:::message::srv::dds_/Motorsend_Request_TypeSupportInterface:1.0";

message::srv::dds_::Motorsend_Request_TypeSupportInterface_ptr message::srv::dds_::Motorsend_Request_TypeSupportInterface::_duplicate (message::srv::dds_::Motorsend_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Motorsend_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Motorsend_Request_TypeSupportInterface::_local_id) == 0)
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

message::srv::dds_::Motorsend_Request_TypeSupportInterface_ptr message::srv::dds_::Motorsend_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Motorsend_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Motorsend_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Motorsend_Request_TypeSupportInterface_ptr message::srv::dds_::Motorsend_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < message::srv::dds_::Motorsend_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Motorsend_Request_DataWriter::_local_id = "IDL:::message::srv::dds_/Motorsend_Request_DataWriter:1.0";

message::srv::dds_::Motorsend_Request_DataWriter_ptr message::srv::dds_::Motorsend_Request_DataWriter::_duplicate (message::srv::dds_::Motorsend_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Motorsend_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Motorsend_Request_DataWriter::_local_id) == 0)
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

message::srv::dds_::Motorsend_Request_DataWriter_ptr message::srv::dds_::Motorsend_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Motorsend_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Motorsend_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Motorsend_Request_DataWriter_ptr message::srv::dds_::Motorsend_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Request_DataWriter_ptr result;
    result = dynamic_cast < message::srv::dds_::Motorsend_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Motorsend_Request_DataReader::_local_id = "IDL:::message::srv::dds_/Motorsend_Request_DataReader:1.0";

message::srv::dds_::Motorsend_Request_DataReader_ptr message::srv::dds_::Motorsend_Request_DataReader::_duplicate (message::srv::dds_::Motorsend_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Motorsend_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Motorsend_Request_DataReader::_local_id) == 0)
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

message::srv::dds_::Motorsend_Request_DataReader_ptr message::srv::dds_::Motorsend_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Motorsend_Request_DataReader::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Motorsend_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Motorsend_Request_DataReader_ptr message::srv::dds_::Motorsend_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Request_DataReader_ptr result;
    result = dynamic_cast < message::srv::dds_::Motorsend_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Motorsend_Request_DataReaderView::_local_id = "IDL:::message::srv::dds_/Motorsend_Request_DataReaderView:1.0";

message::srv::dds_::Motorsend_Request_DataReaderView_ptr message::srv::dds_::Motorsend_Request_DataReaderView::_duplicate (message::srv::dds_::Motorsend_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Motorsend_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Motorsend_Request_DataReaderView::_local_id) == 0)
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

message::srv::dds_::Motorsend_Request_DataReaderView_ptr message::srv::dds_::Motorsend_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Motorsend_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Motorsend_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Motorsend_Request_DataReaderView_ptr message::srv::dds_::Motorsend_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Request_DataReaderView_ptr result;
    result = dynamic_cast < message::srv::dds_::Motorsend_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < message::srv::dds_::Motorsend_Response_, struct Motorsend_Response_Seq_uniq_>;
#endif

const char * message::srv::dds_::Motorsend_Response_TypeSupportInterface::_local_id = "IDL:::message::srv::dds_/Motorsend_Response_TypeSupportInterface:1.0";

message::srv::dds_::Motorsend_Response_TypeSupportInterface_ptr message::srv::dds_::Motorsend_Response_TypeSupportInterface::_duplicate (message::srv::dds_::Motorsend_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Motorsend_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Motorsend_Response_TypeSupportInterface::_local_id) == 0)
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

message::srv::dds_::Motorsend_Response_TypeSupportInterface_ptr message::srv::dds_::Motorsend_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Motorsend_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Motorsend_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Motorsend_Response_TypeSupportInterface_ptr message::srv::dds_::Motorsend_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < message::srv::dds_::Motorsend_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Motorsend_Response_DataWriter::_local_id = "IDL:::message::srv::dds_/Motorsend_Response_DataWriter:1.0";

message::srv::dds_::Motorsend_Response_DataWriter_ptr message::srv::dds_::Motorsend_Response_DataWriter::_duplicate (message::srv::dds_::Motorsend_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Motorsend_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Motorsend_Response_DataWriter::_local_id) == 0)
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

message::srv::dds_::Motorsend_Response_DataWriter_ptr message::srv::dds_::Motorsend_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Motorsend_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Motorsend_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Motorsend_Response_DataWriter_ptr message::srv::dds_::Motorsend_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Response_DataWriter_ptr result;
    result = dynamic_cast < message::srv::dds_::Motorsend_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Motorsend_Response_DataReader::_local_id = "IDL:::message::srv::dds_/Motorsend_Response_DataReader:1.0";

message::srv::dds_::Motorsend_Response_DataReader_ptr message::srv::dds_::Motorsend_Response_DataReader::_duplicate (message::srv::dds_::Motorsend_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Motorsend_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Motorsend_Response_DataReader::_local_id) == 0)
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

message::srv::dds_::Motorsend_Response_DataReader_ptr message::srv::dds_::Motorsend_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Motorsend_Response_DataReader::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Motorsend_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Motorsend_Response_DataReader_ptr message::srv::dds_::Motorsend_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Response_DataReader_ptr result;
    result = dynamic_cast < message::srv::dds_::Motorsend_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Motorsend_Response_DataReaderView::_local_id = "IDL:::message::srv::dds_/Motorsend_Response_DataReaderView:1.0";

message::srv::dds_::Motorsend_Response_DataReaderView_ptr message::srv::dds_::Motorsend_Response_DataReaderView::_duplicate (message::srv::dds_::Motorsend_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Motorsend_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Motorsend_Response_DataReaderView::_local_id) == 0)
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

message::srv::dds_::Motorsend_Response_DataReaderView_ptr message::srv::dds_::Motorsend_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Motorsend_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Motorsend_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Motorsend_Response_DataReaderView_ptr message::srv::dds_::Motorsend_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Motorsend_Response_DataReaderView_ptr result;
    result = dynamic_cast < message::srv::dds_::Motorsend_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < message::srv::dds_::Sample_Motorsend_Request_, struct Sample_Motorsend_Request_Seq_uniq_>;
#endif

const char * message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface::_local_id = "IDL:::message::srv::dds_/Sample_Motorsend_Request_TypeSupportInterface:1.0";

message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface_ptr message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface::_duplicate (message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface::_local_id) == 0)
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

message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface_ptr message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface_ptr message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Sample_Motorsend_Request_DataWriter::_local_id = "IDL:::message::srv::dds_/Sample_Motorsend_Request_DataWriter:1.0";

message::srv::dds_::Sample_Motorsend_Request_DataWriter_ptr message::srv::dds_::Sample_Motorsend_Request_DataWriter::_duplicate (message::srv::dds_::Sample_Motorsend_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Sample_Motorsend_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Sample_Motorsend_Request_DataWriter::_local_id) == 0)
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

message::srv::dds_::Sample_Motorsend_Request_DataWriter_ptr message::srv::dds_::Sample_Motorsend_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Sample_Motorsend_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Sample_Motorsend_Request_DataWriter_ptr message::srv::dds_::Sample_Motorsend_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Request_DataWriter_ptr result;
    result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Sample_Motorsend_Request_DataReader::_local_id = "IDL:::message::srv::dds_/Sample_Motorsend_Request_DataReader:1.0";

message::srv::dds_::Sample_Motorsend_Request_DataReader_ptr message::srv::dds_::Sample_Motorsend_Request_DataReader::_duplicate (message::srv::dds_::Sample_Motorsend_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Sample_Motorsend_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Sample_Motorsend_Request_DataReader::_local_id) == 0)
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

message::srv::dds_::Sample_Motorsend_Request_DataReader_ptr message::srv::dds_::Sample_Motorsend_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Sample_Motorsend_Request_DataReader::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Sample_Motorsend_Request_DataReader_ptr message::srv::dds_::Sample_Motorsend_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Request_DataReader_ptr result;
    result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Sample_Motorsend_Request_DataReaderView::_local_id = "IDL:::message::srv::dds_/Sample_Motorsend_Request_DataReaderView:1.0";

message::srv::dds_::Sample_Motorsend_Request_DataReaderView_ptr message::srv::dds_::Sample_Motorsend_Request_DataReaderView::_duplicate (message::srv::dds_::Sample_Motorsend_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Sample_Motorsend_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Sample_Motorsend_Request_DataReaderView::_local_id) == 0)
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

message::srv::dds_::Sample_Motorsend_Request_DataReaderView_ptr message::srv::dds_::Sample_Motorsend_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Sample_Motorsend_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Sample_Motorsend_Request_DataReaderView_ptr message::srv::dds_::Sample_Motorsend_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Request_DataReaderView_ptr result;
    result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < message::srv::dds_::Sample_Motorsend_Response_, struct Sample_Motorsend_Response_Seq_uniq_>;
#endif

const char * message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface::_local_id = "IDL:::message::srv::dds_/Sample_Motorsend_Response_TypeSupportInterface:1.0";

message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface_ptr message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface::_duplicate (message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface::_local_id) == 0)
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

message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface_ptr message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface_ptr message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Sample_Motorsend_Response_DataWriter::_local_id = "IDL:::message::srv::dds_/Sample_Motorsend_Response_DataWriter:1.0";

message::srv::dds_::Sample_Motorsend_Response_DataWriter_ptr message::srv::dds_::Sample_Motorsend_Response_DataWriter::_duplicate (message::srv::dds_::Sample_Motorsend_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Sample_Motorsend_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Sample_Motorsend_Response_DataWriter::_local_id) == 0)
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

message::srv::dds_::Sample_Motorsend_Response_DataWriter_ptr message::srv::dds_::Sample_Motorsend_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Sample_Motorsend_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Sample_Motorsend_Response_DataWriter_ptr message::srv::dds_::Sample_Motorsend_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Response_DataWriter_ptr result;
    result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Sample_Motorsend_Response_DataReader::_local_id = "IDL:::message::srv::dds_/Sample_Motorsend_Response_DataReader:1.0";

message::srv::dds_::Sample_Motorsend_Response_DataReader_ptr message::srv::dds_::Sample_Motorsend_Response_DataReader::_duplicate (message::srv::dds_::Sample_Motorsend_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Sample_Motorsend_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Sample_Motorsend_Response_DataReader::_local_id) == 0)
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

message::srv::dds_::Sample_Motorsend_Response_DataReader_ptr message::srv::dds_::Sample_Motorsend_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Sample_Motorsend_Response_DataReader::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Sample_Motorsend_Response_DataReader_ptr message::srv::dds_::Sample_Motorsend_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Response_DataReader_ptr result;
    result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * message::srv::dds_::Sample_Motorsend_Response_DataReaderView::_local_id = "IDL:::message::srv::dds_/Sample_Motorsend_Response_DataReaderView:1.0";

message::srv::dds_::Sample_Motorsend_Response_DataReaderView_ptr message::srv::dds_::Sample_Motorsend_Response_DataReaderView::_duplicate (message::srv::dds_::Sample_Motorsend_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean message::srv::dds_::Sample_Motorsend_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, message::srv::dds_::Sample_Motorsend_Response_DataReaderView::_local_id) == 0)
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

message::srv::dds_::Sample_Motorsend_Response_DataReaderView_ptr message::srv::dds_::Sample_Motorsend_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (message::srv::dds_::Sample_Motorsend_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

message::srv::dds_::Sample_Motorsend_Response_DataReaderView_ptr message::srv::dds_::Sample_Motorsend_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    message::srv::dds_::Sample_Motorsend_Response_DataReaderView_ptr result;
    result = dynamic_cast < message::srv::dds_::Sample_Motorsend_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

