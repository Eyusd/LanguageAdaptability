// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef POLICY_TRANSLATION__MSG__DUMMY__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define POLICY_TRANSLATION__MSG__DUMMY__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "policy_translation/msg/dummy__struct.hpp"
#include "policy_translation/msg/dds_opensplice/ccpp_Dummy_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "policy_translation/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace policy_translation
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void register_type__Dummy(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void convert_ros_message_to_dds(
  const policy_translation::msg::Dummy & ros_message,
  policy_translation::msg::dds_::Dummy_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void publish__Dummy(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void convert_dds_message_to_ros(
  const policy_translation::msg::dds_::Dummy_ & dds_message,
  policy_translation::msg::Dummy & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern bool take__Dummy(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_policy_translation
const char *
serialize__Dummy(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_policy_translation
const char *
deserialize__Dummy(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace policy_translation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  policy_translation, msg,
  Dummy)();

#ifdef __cplusplus
}
#endif
#endif  // POLICY_TRANSLATION__MSG__DUMMY__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
