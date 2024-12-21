// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2024 Intel Corporation. All Rights Reserved.

/*!
 * @file ParameterType.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_RCL_INTERFACES_MSG_PARAMETERTYPE_H_
#define _FAST_DDS_GENERATED_RCL_INTERFACES_MSG_PARAMETERTYPE_H_


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
#if defined(ParameterType_SOURCE)
#define ParameterType_DllAPI __declspec( dllexport )
#else
#define ParameterType_DllAPI __declspec( dllimport )
#endif // ParameterType_SOURCE
#else
#define ParameterType_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define ParameterType_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace rcl_interfaces {
    namespace msg {
        namespace ParameterType_Constants {
            const uint8_t PARAMETER_NOT_SET = 0;
            const uint8_t PARAMETER_BOOL = 1;
            const uint8_t PARAMETER_INTEGER = 2;
            const uint8_t PARAMETER_DOUBLE = 3;
            const uint8_t PARAMETER_STRING = 4;
            const uint8_t PARAMETER_BYTE_ARRAY = 5;
            const uint8_t PARAMETER_BOOL_ARRAY = 6;
            const uint8_t PARAMETER_INTEGER_ARRAY = 7;
            const uint8_t PARAMETER_DOUBLE_ARRAY = 8;
            const uint8_t PARAMETER_STRING_ARRAY = 9;
        } // namespace ParameterType_Constants
        /*!
         * @brief This class represents the structure ParameterType defined by the user in the IDL file.
         * @ingroup PARAMETERTYPE
         */
        class ParameterType
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport ParameterType();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~ParameterType();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object rcl_interfaces::msg::ParameterType that will be copied.
             */
            eProsima_user_DllExport ParameterType(
                    const ParameterType& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object rcl_interfaces::msg::ParameterType that will be copied.
             */
            eProsima_user_DllExport ParameterType(
                    ParameterType&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object rcl_interfaces::msg::ParameterType that will be copied.
             */
            eProsima_user_DllExport ParameterType& operator =(
                    const ParameterType& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object rcl_interfaces::msg::ParameterType that will be copied.
             */
            eProsima_user_DllExport ParameterType& operator =(
                    ParameterType&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::msg::ParameterType object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const ParameterType& x) const;

            /*!
             * @brief Comparison operator.
             * @param x rcl_interfaces::msg::ParameterType object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const ParameterType& x) const;

            /*!
             * @brief This function sets a value in member structure_needs_at_least_one_member
             * @param _structure_needs_at_least_one_member New value for member structure_needs_at_least_one_member
             */
            eProsima_user_DllExport void structure_needs_at_least_one_member(
                    uint8_t _structure_needs_at_least_one_member);

            /*!
             * @brief This function returns the value of member structure_needs_at_least_one_member
             * @return Value of member structure_needs_at_least_one_member
             */
            eProsima_user_DllExport uint8_t structure_needs_at_least_one_member() const;

            /*!
             * @brief This function returns a reference to member structure_needs_at_least_one_member
             * @return Reference to member structure_needs_at_least_one_member
             */
            eProsima_user_DllExport uint8_t& structure_needs_at_least_one_member();


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
                    const rcl_interfaces::msg::ParameterType& data,
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

            uint8_t m_structure_needs_at_least_one_member;
        };
    } // namespace msg
} // namespace rcl_interfaces

#endif // _FAST_DDS_GENERATED_RCL_INTERFACES_MSG_PARAMETERTYPE_H_