// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2025 Intel Corporation. All Rights Reserved.

#include <realdds/topics/ros2/describe-parameters-msg.h>
#include <realdds/topics/ros2/rcl_interfaces/srv/DescribeParameters.h>
#include <realdds/topics/ros2/rcl_interfaces/srv/DescribeParametersPubSubTypes.h>

#include <realdds/dds-topic.h>
#include <realdds/dds-topic-reader.h>
#include <realdds/dds-topic-writer.h>
#include <realdds/dds-utilities.h>

#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/topic/Topic.hpp>


namespace realdds {
namespace topics {
namespace ros2 {


/*static*/ std::shared_ptr< dds_topic >
describe_parameters_response_msg::create_topic( std::shared_ptr< dds_participant > const & participant, char const * topic_name )
{
    return std::make_shared< dds_topic >( participant,
                                          eprosima::fastdds::dds::TypeSupport( new describe_parameters_response_msg::type ),
                                          topic_name );
}


bool describe_parameters_response_msg::take_next( dds_topic_reader & reader, dds_sample * sample )
{
    dds_sample sample_;
    if( ! sample )
        sample = &sample_;  // use the local copy if the user hasn't provided their own
    void const * pcv_data = &_raw;
    auto status = reader->take_next_sample( const_cast< void * >( pcv_data ), sample );
    if( status == ReturnCode_t::RETCODE_OK )
    {
        // Only samples for which valid_data is true should be accessed
        // valid_data indicates that the instance is still ALIVE and the `take` return an
        // updated sample
        if( ! sample->valid_data )
            invalidate();

        return true;
    }
    if ( status == ReturnCode_t::RETCODE_NO_DATA )
    {
        // This is an expected return code and is not an error
        return false;
    }
    DDS_API_CALL_THROW( "describe_parameters_response_msg::take_next", status );
}


dds_sequence_number describe_parameters_response_msg::respond_to( dds_sample const & request_sample,
                                                                  dds_topic_writer & writer ) const
{
    eprosima::fastrtps::rtps::WriteParams params;
    params.related_sample_identity( request_sample.sample_identity );
    const dds_guid & reader_guid = request_sample.related_sample_identity.writer_guid();
    if( reader_guid != dds_guid::unknown() )
        params.related_sample_identity().writer_guid() = reader_guid;

    void const * pcv_data = &_raw;
    bool success = DDS_API_CALL( writer.get()->write( const_cast< void * >( pcv_data ), params ) );
    if( ! success )
    {
        LOG_ERROR( "Error writing message" );
        return 0;
    }
    // The params will contain, after the write, the sequence number (incremented automatically) for the sample that was
    // sent. The source_timestamp is always INVALID for some reason.
    return params.sample_identity().sequence_number().to64long();
}


}  // namespace ros2
}  // namespace topics
}  // namespace realdds
