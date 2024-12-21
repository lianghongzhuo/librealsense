// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2024 Intel Corporation. All Rights Reserved.

#include <realdds/topics/ros2/get-parameters-msg.h>
#include <realdds/topics/ros2/GetParameters.h>
#include <realdds/topics/ros2/GetParametersPubSubTypes.h>

#include <realdds/dds-topic.h>
#include <realdds/dds-topic-reader.h>
#include <realdds/dds-utilities.h>

#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/topic/Topic.hpp>


namespace realdds {
namespace topics {
namespace ros2 {


/*static*/ std::shared_ptr< dds_topic >
get_parameters_request_msg::create_topic( std::shared_ptr< dds_participant > const & participant, char const * topic_name )
{
    return std::make_shared< dds_topic >( participant,
                                          eprosima::fastdds::dds::TypeSupport( new get_parameters_request_msg::type ),
                                          topic_name );
}


/*static*/ bool
get_parameters_request_msg::take_next( dds_topic_reader & reader, get_parameters_request_msg * output, dds_sample * sample )
{
    get_parameters_request_msg output_;
    if( ! output )
        output = &output_;  // use the local copy if the user hasn't provided their own
    dds_sample sample_;
    if( ! sample )
        sample = &sample_;  // use the local copy if the user hasn't provided their own
    auto status = reader->take_next_sample( &output->_raw, sample );
    if( status == ReturnCode_t::RETCODE_OK )
    {
        // Only samples for which valid_data is true should be accessed
        // valid_data indicates that the instance is still ALIVE and the `take` return an
        // updated sample
        if( ! sample->valid_data )
            output->invalidate();

        return true;
    }
    if ( status == ReturnCode_t::RETCODE_NO_DATA )
    {
        // This is an expected return code and is not an error
        return false;
    }
    DDS_API_CALL_THROW( "get_parameters_request_msg::take_next", status );
}

}  // namespace ros2
}  // namespace topics
}  // namespace realdds
