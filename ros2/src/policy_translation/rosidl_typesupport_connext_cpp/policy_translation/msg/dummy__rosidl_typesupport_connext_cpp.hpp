// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice


#ifndef POLICY_TRANSLATION__MSG__DUMMY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define POLICY_TRANSLATION__MSG__DUMMY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "policy_translation/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "policy_translation/msg/dummy__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "policy_translation/msg/dds_connext/Dummy_Support.h"
#include "policy_translation/msg/dds_connext/Dummy_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace policy_translation
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Dummy();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
convert_ros_message_to_dds(
  const policy_translation::msg::Dummy & ros_message,
  policy_translation::msg::dds_::Dummy_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
convert_dds_message_to_ros(
  const policy_translation::msg::dds_::Dummy_ & dds_message,
  policy_translation::msg::Dummy & ros_message);

bool
to_cdr_stream__Dummy(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Dummy(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace policy_translation


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  policy_translation, msg,
  Dummy)();

#ifdef __cplusplus
}
#endif


#endif  // POLICY_TRANSLATION__MSG__DUMMY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
