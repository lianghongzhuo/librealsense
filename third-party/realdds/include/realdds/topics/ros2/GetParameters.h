// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2024 Intel Corporation. All Rights Reserved.

/*!
 * @file GetParameters.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_RCL_INTERFACES_SRV_GETPARAMETERS_H_
#define _FAST_DDS_GENERATED_RCL_INTERFACES_SRV_GETPARAMETERS_H_

#include "ParameterValue.h"

//#include <fastrtps/utils/fixed_size_string.hpp>

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
#if defined(GetParameters_SOURCE)
#define GetParameters_DllAPI __declspec( dllexport )
#else
#define GetParameters_DllAPI __declspec( dllimport )
#endif // GetParameters_SOURCE
#else
#define GetParameters_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define GetParameters_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace rcl_interfaces {
    namespace srv {
        /*!
         * @brief This class represents the structure GetParameters_Request defined by the user in the IDL file.
         * @ingroup GETPARAMETERS
         */
        class GetParameters_Request
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport GetParameters_Request();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~GetParameters_Request();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object rcl_interfaces::srv::GetParameters_Request that will be copied.
             */
            eProsima_user_DllExport GetParameters_Request(
                    const GetParameters_Request& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object rcl_interfaces::srv::GetParameters_Request that will be copied.
             */
            eProsima_user_DllExport GetParameters_Request(
                    GetParameters_Request&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object rcl_interfaces::srv::GetParameters_Request that will be copied.
             */
            eProsima_user_DllExport GetParameters_Request& operator =(
                    const GetParameters_Request& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object rcl_interfaces::srv::GetParameters_Request that will be copied.
             */
            eProsima_user_DllExport GetParameters_Request& operator =(
                    GetParameters_Request&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::srv::GetParameters_Request object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const GetParameters_Request& x) const;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::srv::GetParameters_Request object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const GetParameters_Request& x) const;

            /*!
             * @brief This function copies the value in member names
             * @param _names New value to be copied in member names
             */
            eProsima_user_DllExport void names(
                    const std::vector<std::string>& _names);

            /*!
             * @brief This function moves the value in member names
             * @param _names New value to be moved in member names
             */
            eProsima_user_DllExport void names(
                    std::vector<std::string>&& _names);

            /*!
             * @brief This function returns a constant reference to member names
             * @return Constant reference to member names
             */
            eProsima_user_DllExport const std::vector<std::string>& names() const;

            /*!
             * @brief This function returns a reference to member names
             * @return Reference to member names
             */
            eProsima_user_DllExport std::vector<std::string>& names();

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
                    const rcl_interfaces::srv::GetParameters_Request& data,
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

            std::vector<std::string> m_names;
        };
        /*!
         * @brief This class represents the structure GetParameters_Response defined by the user in the IDL file.
         * @ingroup GETPARAMETERS
         */
        class GetParameters_Response
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport GetParameters_Response();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~GetParameters_Response();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object rcl_interfaces::srv::GetParameters_Response that will be copied.
             */
            eProsima_user_DllExport GetParameters_Response(
                    const GetParameters_Response& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object rcl_interfaces::srv::GetParameters_Response that will be copied.
             */
            eProsima_user_DllExport GetParameters_Response(
                    GetParameters_Response&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object rcl_interfaces::srv::GetParameters_Response that will be copied.
             */
            eProsima_user_DllExport GetParameters_Response& operator =(
                    const GetParameters_Response& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object rcl_interfaces::srv::GetParameters_Response that will be copied.
             */
            eProsima_user_DllExport GetParameters_Response& operator =(
                    GetParameters_Response&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::srv::GetParameters_Response object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const GetParameters_Response& x) const;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::srv::GetParameters_Response object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const GetParameters_Response& x) const;

            /*!
             * @brief This function copies the value in member values
             * @param _values New value to be copied in member values
             */
            eProsima_user_DllExport void values(
                    const std::vector<rcl_interfaces::msg::ParameterValue>& _values);

            /*!
             * @brief This function moves the value in member values
             * @param _values New value to be moved in member values
             */
            eProsima_user_DllExport void values(
                    std::vector<rcl_interfaces::msg::ParameterValue>&& _values);

            /*!
             * @brief This function returns a constant reference to member values
             * @return Constant reference to member values
             */
            eProsima_user_DllExport const std::vector<rcl_interfaces::msg::ParameterValue>& values() const;

            /*!
             * @brief This function returns a reference to member values
             * @return Reference to member values
             */
            eProsima_user_DllExport std::vector<rcl_interfaces::msg::ParameterValue>& values();

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
                    const rcl_interfaces::srv::GetParameters_Response& data,
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

            std::vector<rcl_interfaces::msg::ParameterValue> m_values;
        };
    } // namespace srv
} // namespace rcl_interfaces

#endif // _FAST_DDS_GENERATED_RCL_INTERFACES_SRV_GETPARAMETERS_H_