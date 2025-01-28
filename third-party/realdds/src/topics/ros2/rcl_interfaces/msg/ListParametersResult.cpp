// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2025 Intel Corporation. All Rights Reserved.

/*!
 * @file ListParametersResult.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include <realdds/topics/ros2/rcl_interfaces/msg/ListParametersResult.h>
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

rcl_interfaces::msg::ListParametersResult::ListParametersResult()
{
    // m_names com.eprosima.idl.parser.typecode.SequenceTypeCode@7f9fcf7f

    // m_prefixes com.eprosima.idl.parser.typecode.SequenceTypeCode@2357d90a


}

rcl_interfaces::msg::ListParametersResult::~ListParametersResult()
{


}

rcl_interfaces::msg::ListParametersResult::ListParametersResult(
        const ListParametersResult& x)
{
    m_names = x.m_names;
    m_prefixes = x.m_prefixes;
}

rcl_interfaces::msg::ListParametersResult::ListParametersResult(
        ListParametersResult&& x) noexcept 
{
    m_names = std::move(x.m_names);
    m_prefixes = std::move(x.m_prefixes);
}

rcl_interfaces::msg::ListParametersResult& rcl_interfaces::msg::ListParametersResult::operator =(
        const ListParametersResult& x)
{

    m_names = x.m_names;
    m_prefixes = x.m_prefixes;

    return *this;
}

rcl_interfaces::msg::ListParametersResult& rcl_interfaces::msg::ListParametersResult::operator =(
        ListParametersResult&& x) noexcept
{

    m_names = std::move(x.m_names);
    m_prefixes = std::move(x.m_prefixes);

    return *this;
}

bool rcl_interfaces::msg::ListParametersResult::operator ==(
        const ListParametersResult& x) const
{

    return (m_names == x.m_names && m_prefixes == x.m_prefixes);
}

bool rcl_interfaces::msg::ListParametersResult::operator !=(
        const ListParametersResult& x) const
{
    return !(*this == x);
}

size_t rcl_interfaces::msg::ListParametersResult::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < 100; ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;
    }

    return current_alignment - initial_alignment;
}

size_t rcl_interfaces::msg::ListParametersResult::getCdrSerializedSize(
        const rcl_interfaces::msg::ListParametersResult& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.names().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) +
            data.names().at(a).size() + 1;
    }
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.prefixes().size(); ++a)
    {
        current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) +
            data.prefixes().at(a).size() + 1;
    }

    return current_alignment - initial_alignment;
}

void rcl_interfaces::msg::ListParametersResult::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_names;
    scdr << m_prefixes;
}

void rcl_interfaces::msg::ListParametersResult::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_names;
    dcdr >> m_prefixes;
}

/*!
 * @brief This function copies the value in member names
 * @param _names New value to be copied in member names
 */
void rcl_interfaces::msg::ListParametersResult::names(
        const std::vector<std::string>& _names)
{
    m_names = _names;
}

/*!
 * @brief This function moves the value in member names
 * @param _names New value to be moved in member names
 */
void rcl_interfaces::msg::ListParametersResult::names(
        std::vector<std::string>&& _names)
{
    m_names = std::move(_names);
}

/*!
 * @brief This function returns a constant reference to member names
 * @return Constant reference to member names
 */
const std::vector<std::string>& rcl_interfaces::msg::ListParametersResult::names() const
{
    return m_names;
}

/*!
 * @brief This function returns a reference to member names
 * @return Reference to member names
 */
std::vector<std::string>& rcl_interfaces::msg::ListParametersResult::names()
{
    return m_names;
}
/*!
 * @brief This function copies the value in member prefixes
 * @param _prefixes New value to be copied in member prefixes
 */
void rcl_interfaces::msg::ListParametersResult::prefixes(
        const std::vector<std::string>& _prefixes)
{
    m_prefixes = _prefixes;
}

/*!
 * @brief This function moves the value in member prefixes
 * @param _prefixes New value to be moved in member prefixes
 */
void rcl_interfaces::msg::ListParametersResult::prefixes(
        std::vector<std::string>&& _prefixes)
{
    m_prefixes = std::move(_prefixes);
}

/*!
 * @brief This function returns a constant reference to member prefixes
 * @return Constant reference to member prefixes
 */
const std::vector<std::string>& rcl_interfaces::msg::ListParametersResult::prefixes() const
{
    return m_prefixes;
}

/*!
 * @brief This function returns a reference to member prefixes
 * @return Reference to member prefixes
 */
std::vector<std::string>& rcl_interfaces::msg::ListParametersResult::prefixes()
{
    return m_prefixes;
}

size_t rcl_interfaces::msg::ListParametersResult::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool rcl_interfaces::msg::ListParametersResult::isKeyDefined()
{
    return false;
}

void rcl_interfaces::msg::ListParametersResult::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


