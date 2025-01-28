// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2025 Intel Corporation. All Rights Reserved.

/*!
 * @file NodeEntitiesInfo.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_RMW_DDS_COMMON_MSG_NODEENTITIESINFO_H_
#define _FAST_DDS_GENERATED_RMW_DDS_COMMON_MSG_NODEENTITIESINFO_H_

#include "Gid.h"

#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(NodeEntitiesInfo_SOURCE)
#define NodeEntitiesInfo_DllAPI __declspec( dllexport )
#else
#define NodeEntitiesInfo_DllAPI __declspec( dllimport )
#endif // NodeEntitiesInfo_SOURCE
#else
#define NodeEntitiesInfo_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define NodeEntitiesInfo_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace rmw_dds_common {
    namespace msg {
        /*!
         * @brief This class represents the structure NodeEntitiesInfo defined by the user in the IDL file.
         * @ingroup NODEENTITIESINFO
         */
        class NodeEntitiesInfo
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport NodeEntitiesInfo();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~NodeEntitiesInfo();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object rmw_dds_common::msg::NodeEntitiesInfo that will be copied.
             */
            eProsima_user_DllExport NodeEntitiesInfo(
                    const NodeEntitiesInfo& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object rmw_dds_common::msg::NodeEntitiesInfo that will be copied.
             */
            eProsima_user_DllExport NodeEntitiesInfo(
                    NodeEntitiesInfo&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object rmw_dds_common::msg::NodeEntitiesInfo that will be copied.
             */
            eProsima_user_DllExport NodeEntitiesInfo& operator =(
                    const NodeEntitiesInfo& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object rmw_dds_common::msg::NodeEntitiesInfo that will be copied.
             */
            eProsima_user_DllExport NodeEntitiesInfo& operator =(
                    NodeEntitiesInfo&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x rmw_dds_common::msg::NodeEntitiesInfo object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const NodeEntitiesInfo& x) const;

            /*!
             * @brief Comparison operator.
             * @param x rmw_dds_common::msg::NodeEntitiesInfo object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const NodeEntitiesInfo& x) const;

            /*!
             * @brief This function copies the value in member node_namespace
             * @param _node_namespace New value to be copied in member node_namespace
             */
            eProsima_user_DllExport void node_namespace(
                    const eprosima::fastrtps::fixed_string<256>& _node_namespace);

            /*!
             * @brief This function moves the value in member node_namespace
             * @param _node_namespace New value to be moved in member node_namespace
             */
            eProsima_user_DllExport void node_namespace(
                    eprosima::fastrtps::fixed_string<256>&& _node_namespace);

            /*!
             * @brief This function returns a constant reference to member node_namespace
             * @return Constant reference to member node_namespace
             */
            eProsima_user_DllExport const eprosima::fastrtps::fixed_string<256>& node_namespace() const;

            /*!
             * @brief This function returns a reference to member node_namespace
             * @return Reference to member node_namespace
             */
            eProsima_user_DllExport eprosima::fastrtps::fixed_string<256>& node_namespace();
            /*!
             * @brief This function copies the value in member node_name
             * @param _node_name New value to be copied in member node_name
             */
            eProsima_user_DllExport void node_name(
                    const eprosima::fastrtps::fixed_string<256>& _node_name);

            /*!
             * @brief This function moves the value in member node_name
             * @param _node_name New value to be moved in member node_name
             */
            eProsima_user_DllExport void node_name(
                    eprosima::fastrtps::fixed_string<256>&& _node_name);

            /*!
             * @brief This function returns a constant reference to member node_name
             * @return Constant reference to member node_name
             */
            eProsima_user_DllExport const eprosima::fastrtps::fixed_string<256>& node_name() const;

            /*!
             * @brief This function returns a reference to member node_name
             * @return Reference to member node_name
             */
            eProsima_user_DllExport eprosima::fastrtps::fixed_string<256>& node_name();
            /*!
             * @brief This function copies the value in member reader_gid_seq
             * @param _reader_gid_seq New value to be copied in member reader_gid_seq
             */
            eProsima_user_DllExport void reader_gid_seq(
                    const std::vector<rmw_dds_common::msg::Gid>& _reader_gid_seq);

            /*!
             * @brief This function moves the value in member reader_gid_seq
             * @param _reader_gid_seq New value to be moved in member reader_gid_seq
             */
            eProsima_user_DllExport void reader_gid_seq(
                    std::vector<rmw_dds_common::msg::Gid>&& _reader_gid_seq);

            /*!
             * @brief This function returns a constant reference to member reader_gid_seq
             * @return Constant reference to member reader_gid_seq
             */
            eProsima_user_DllExport const std::vector<rmw_dds_common::msg::Gid>& reader_gid_seq() const;

            /*!
             * @brief This function returns a reference to member reader_gid_seq
             * @return Reference to member reader_gid_seq
             */
            eProsima_user_DllExport std::vector<rmw_dds_common::msg::Gid>& reader_gid_seq();
            /*!
             * @brief This function copies the value in member writer_gid_seq
             * @param _writer_gid_seq New value to be copied in member writer_gid_seq
             */
            eProsima_user_DllExport void writer_gid_seq(
                    const std::vector<rmw_dds_common::msg::Gid>& _writer_gid_seq);

            /*!
             * @brief This function moves the value in member writer_gid_seq
             * @param _writer_gid_seq New value to be moved in member writer_gid_seq
             */
            eProsima_user_DllExport void writer_gid_seq(
                    std::vector<rmw_dds_common::msg::Gid>&& _writer_gid_seq);

            /*!
             * @brief This function returns a constant reference to member writer_gid_seq
             * @return Constant reference to member writer_gid_seq
             */
            eProsima_user_DllExport const std::vector<rmw_dds_common::msg::Gid>& writer_gid_seq() const;

            /*!
             * @brief This function returns a reference to member writer_gid_seq
             * @return Reference to member writer_gid_seq
             */
            eProsima_user_DllExport std::vector<rmw_dds_common::msg::Gid>& writer_gid_seq();

            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const rmw_dds_common::msg::NodeEntitiesInfo& data,
                    size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:

            eprosima::fastrtps::fixed_string<256> m_node_namespace;
            eprosima::fastrtps::fixed_string<256> m_node_name;
            std::vector<rmw_dds_common::msg::Gid> m_reader_gid_seq;
            std::vector<rmw_dds_common::msg::Gid> m_writer_gid_seq;
        };
    } // namespace msg
} // namespace rmw_dds_common

#endif // _FAST_DDS_GENERATED_RMW_DDS_COMMON_MSG_NODEENTITIESINFO_H_