// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2025 Intel Corporation. All Rights Reserved.

/*!
 * @file SetParametersResult.cpp
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

#include <realdds/topics/ros2/rcl_interfaces/msg/SetParametersResult.h>
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

rcl_interfaces::msg::SetParametersResult::SetParametersResult()
{
    // m_successful com.eprosima.idl.parser.typecode.PrimitiveTypeCode@564718df
    m_successful = false;
    // m_reason com.eprosima.idl.parser.typecode.StringTypeCode@51b7e5df
    m_reason ="";

}

rcl_interfaces::msg::SetParametersResult::~SetParametersResult()
{


}

rcl_interfaces::msg::SetParametersResult::SetParametersResult(
        const SetParametersResult& x)
{
    m_successful = x.m_successful;
    m_reason = x.m_reason;
}

rcl_interfaces::msg::SetParametersResult::SetParametersResult(
        SetParametersResult&& x) noexcept 
{
    m_successful = x.m_successful;
    m_reason = std::move(x.m_reason);
}

rcl_interfaces::msg::SetParametersResult& rcl_interfaces::msg::SetParametersResult::operator =(
        const SetParametersResult& x)
{

    m_successful = x.m_successful;
    m_reason = x.m_reason;

    return *this;
}

rcl_interfaces::msg::SetParametersResult& rcl_interfaces::msg::SetParametersResult::operator =(
        SetParametersResult&& x) noexcept
{

    m_successful = x.m_successful;
    m_reason = std::move(x.m_reason);

    return *this;
}

bool rcl_interfaces::msg::SetParametersResult::operator ==(
        const SetParametersResult& x) const
{

    return (m_successful == x.m_successful && m_reason == x.m_reason);
}

bool rcl_interfaces::msg::SetParametersResult::operator !=(
        const SetParametersResult& x) const
{
    return !(*this == x);
}

size_t rcl_interfaces::msg::SetParametersResult::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;


    return current_alignment - initial_alignment;
}

size_t rcl_interfaces::msg::SetParametersResult::getCdrSerializedSize(
        const rcl_interfaces::msg::SetParametersResult& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.reason().size() + 1;


    return current_alignment - initial_alignment;
}

void rcl_interfaces::msg::SetParametersResult::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_successful;
    scdr << m_reason.c_str();

}

void rcl_interfaces::msg::SetParametersResult::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_successful;
    dcdr >> m_reason;
}

/*!
 * @brief This function sets a value in member successful
 * @param _successful New value for member successful
 */
void rcl_interfaces::msg::SetParametersResult::successful(
        bool _successful)
{
    m_successful = _successful;
}

/*!
 * @brief This function returns the value of member successful
 * @return Value of member successful
 */
bool rcl_interfaces::msg::SetParametersResult::successful() const
{
    return m_successful;
}

/*!
 * @brief This function returns a reference to member successful
 * @return Reference to member successful
 */
bool& rcl_interfaces::msg::SetParametersResult::successful()
{
    return m_successful;
}

/*!
 * @brief This function copies the value in member reason
 * @param _reason New value to be copied in member reason
 */
void rcl_interfaces::msg::SetParametersResult::reason(
        const std::string& _reason)
{
    m_reason = _reason;
}

/*!
 * @brief This function moves the value in member reason
 * @param _reason New value to be moved in member reason
 */
void rcl_interfaces::msg::SetParametersResult::reason(
        std::string&& _reason)
{
    m_reason = std::move(_reason);
}

/*!
 * @brief This function returns a constant reference to member reason
 * @return Constant reference to member reason
 */
const std::string& rcl_interfaces::msg::SetParametersResult::reason() const
{
    return m_reason;
}

/*!
 * @brief This function returns a reference to member reason
 * @return Reference to member reason
 */
std::string& rcl_interfaces::msg::SetParametersResult::reason()
{
    return m_reason;
}

size_t rcl_interfaces::msg::SetParametersResult::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool rcl_interfaces::msg::SetParametersResult::isKeyDefined()
{
    return false;
}

void rcl_interfaces::msg::SetParametersResult::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}


