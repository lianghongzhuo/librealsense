// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2022 Intel Corporation. All Rights Reserved.

/*!
 * @file deviceInfo.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_REALDDS_TOPICS_RAW_DEVICEINFO_H_
#define _FAST_DDS_GENERATED_REALDDS_TOPICS_RAW_DEVICEINFO_H_


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
#if defined(deviceInfo_SOURCE)
#define deviceInfo_DllAPI __declspec( dllexport )
#else
#define deviceInfo_DllAPI __declspec( dllimport )
#endif // deviceInfo_SOURCE
#else
#define deviceInfo_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define deviceInfo_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace realdds {
    namespace topics {
        namespace raw {
            /*!
             * @brief This class represents the structure device_info defined by the user in the IDL file.
             * @ingroup DEVICEINFO
             */
            class device_info
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport device_info();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~device_info();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object realdds::topics::raw::device_info that will be copied.
                 */
                eProsima_user_DllExport device_info(
                        const device_info& x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object realdds::topics::raw::device_info that will be copied.
                 */
                eProsima_user_DllExport device_info(
                        device_info&& x);

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object realdds::topics::raw::device_info that will be copied.
                 */
                eProsima_user_DllExport device_info& operator =(
                        const device_info& x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object realdds::topics::raw::device_info that will be copied.
                 */
                eProsima_user_DllExport device_info& operator =(
                        device_info&& x);

                /*!
                 * @brief Comparison operator.
                 * @param x realdds::topics::raw::device_info object to compare.
                 */
                eProsima_user_DllExport bool operator ==(
                        const device_info& x) const;

                /*!
                 * @brief Comparison operator.
                 * @param x realdds::topics::raw::device_info object to compare.
                 */
                eProsima_user_DllExport bool operator !=(
                        const device_info& x) const;

                /*!
                 * @brief This function copies the value in member name
                 * @param _name New value to be copied in member name
                 */
                eProsima_user_DllExport void name(
                        const std::array<char, 128>& _name);

                /*!
                 * @brief This function moves the value in member name
                 * @param _name New value to be moved in member name
                 */
                eProsima_user_DllExport void name(
                        std::array<char, 128>&& _name);

                /*!
                 * @brief This function returns a constant reference to member name
                 * @return Constant reference to member name
                 */
                eProsima_user_DllExport const std::array<char, 128>& name() const;

                /*!
                 * @brief This function returns a reference to member name
                 * @return Reference to member name
                 */
                eProsima_user_DllExport std::array<char, 128>& name();
                /*!
                 * @brief This function copies the value in member serial_number
                 * @param _serial_number New value to be copied in member serial_number
                 */
                eProsima_user_DllExport void serial_number(
                        const std::array<char, 32>& _serial_number);

                /*!
                 * @brief This function moves the value in member serial_number
                 * @param _serial_number New value to be moved in member serial_number
                 */
                eProsima_user_DllExport void serial_number(
                        std::array<char, 32>&& _serial_number);

                /*!
                 * @brief This function returns a constant reference to member serial_number
                 * @return Constant reference to member serial_number
                 */
                eProsima_user_DllExport const std::array<char, 32>& serial_number() const;

                /*!
                 * @brief This function returns a reference to member serial_number
                 * @return Reference to member serial_number
                 */
                eProsima_user_DllExport std::array<char, 32>& serial_number();
                /*!
                 * @brief This function copies the value in member product_line
                 * @param _product_line New value to be copied in member product_line
                 */
                eProsima_user_DllExport void product_line(
                        const std::array<char, 16>& _product_line);

                /*!
                 * @brief This function moves the value in member product_line
                 * @param _product_line New value to be moved in member product_line
                 */
                eProsima_user_DllExport void product_line(
                        std::array<char, 16>&& _product_line);

                /*!
                 * @brief This function returns a constant reference to member product_line
                 * @return Constant reference to member product_line
                 */
                eProsima_user_DllExport const std::array<char, 16>& product_line() const;

                /*!
                 * @brief This function returns a reference to member product_line
                 * @return Reference to member product_line
                 */
                eProsima_user_DllExport std::array<char, 16>& product_line();
                /*!
                 * @brief This function copies the value in member topic_root
                 * @param _topic_root New value to be copied in member topic_root
                 */
                eProsima_user_DllExport void topic_root(
                        const std::array<char, 256>& _topic_root);

                /*!
                 * @brief This function moves the value in member topic_root
                 * @param _topic_root New value to be moved in member topic_root
                 */
                eProsima_user_DllExport void topic_root(
                        std::array<char, 256>&& _topic_root);

                /*!
                 * @brief This function returns a constant reference to member topic_root
                 * @return Constant reference to member topic_root
                 */
                eProsima_user_DllExport const std::array<char, 256>& topic_root() const;

                /*!
                 * @brief This function returns a reference to member topic_root
                 * @return Reference to member topic_root
                 */
                eProsima_user_DllExport std::array<char, 256>& topic_root();
                /*!
                 * @brief This function sets a value in member locked
                 * @param _locked New value for member locked
                 */
                eProsima_user_DllExport void locked(
                        bool _locked);

                /*!
                 * @brief This function returns the value of member locked
                 * @return Value of member locked
                 */
                eProsima_user_DllExport bool locked() const;

                /*!
                 * @brief This function returns a reference to member locked
                 * @return Reference to member locked
                 */
                eProsima_user_DllExport bool& locked();


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
                        const realdds::topics::raw::device_info& data,
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

                std::array<char, 128> m_name;
                std::array<char, 32> m_serial_number;
                std::array<char, 16> m_product_line;
                std::array<char, 256> m_topic_root;
                bool m_locked;
            };
        } // namespace raw
    } // namespace topics
} // namespace realdds

#endif // _FAST_DDS_GENERATED_REALDDS_TOPICS_RAW_DEVICEINFO_H_