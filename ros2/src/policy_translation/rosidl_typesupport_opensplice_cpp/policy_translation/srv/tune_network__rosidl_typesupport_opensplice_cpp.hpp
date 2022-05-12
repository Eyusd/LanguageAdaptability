// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef POLICY_TRANSLATION__SRV__TUNE_NETWORK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define POLICY_TRANSLATION__SRV__TUNE_NETWORK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "policy_translation/srv/tune_network__struct.hpp"
#include "policy_translation/srv/dds_opensplice/ccpp_TuneNetwork_.h"
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
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void register_type__TuneNetwork_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void convert_ros_message_to_dds(
  const policy_translation::srv::TuneNetwork_Request & ros_message,
  policy_translation::srv::dds_::TuneNetwork_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void publish__TuneNetwork_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void convert_dds_message_to_ros(
  const policy_translation::srv::dds_::TuneNetwork_Request_ & dds_message,
  policy_translation::srv::TuneNetwork_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern bool take__TuneNetwork_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_policy_translation
const char *
serialize__TuneNetwork_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_policy_translation
const char *
deserialize__TuneNetwork_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace policy_translation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  policy_translation, srv,
  TuneNetwork_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "policy_translation/srv/tune_network__struct.hpp"
// already included above
// #include "policy_translation/srv/dds_opensplice/ccpp_TuneNetwork_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "policy_translation/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace policy_translation
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void register_type__TuneNetwork_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void convert_ros_message_to_dds(
  const policy_translation::srv::TuneNetwork_Response & ros_message,
  policy_translation::srv::dds_::TuneNetwork_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void publish__TuneNetwork_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern void convert_dds_message_to_ros(
  const policy_translation::srv::dds_::TuneNetwork_Response_ & dds_message,
  policy_translation::srv::TuneNetwork_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
extern bool take__TuneNetwork_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_policy_translation
const char *
serialize__TuneNetwork_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_policy_translation
const char *
deserialize__TuneNetwork_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace policy_translation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  policy_translation, srv,
  TuneNetwork_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "policy_translation/srv/tune_network__struct.hpp"
// already included above
// #include "policy_translation/srv/dds_opensplice/ccpp_TuneNetwork_.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "policy_translation/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_policy_translation
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  policy_translation, srv,
  TuneNetwork)();

#ifdef __cplusplus
}
#endif
#endif  // POLICY_TRANSLATION__SRV__TUNE_NETWORK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
