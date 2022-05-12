// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from policy_translation:srv/TuneNetwork.idl
// generated code does not contain a copyright notice


#ifndef POLICY_TRANSLATION__SRV__TUNE_NETWORK__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define POLICY_TRANSLATION__SRV__TUNE_NETWORK__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "policy_translation/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "policy_translation/srv/tune_network__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "policy_translation/srv/dds_connext/TuneNetwork_Support.h"
#include "policy_translation/srv/dds_connext/TuneNetwork_Plugin.h"
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

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__TuneNetwork_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
convert_ros_message_to_dds(
  const policy_translation::srv::TuneNetwork_Request & ros_message,
  policy_translation::srv::dds_::TuneNetwork_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
convert_dds_message_to_ros(
  const policy_translation::srv::dds_::TuneNetwork_Request_ & dds_message,
  policy_translation::srv::TuneNetwork_Request & ros_message);

bool
to_cdr_stream__TuneNetwork_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__TuneNetwork_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace policy_translation


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  policy_translation, srv,
  TuneNetwork_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "policy_translation/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "policy_translation/srv/tune_network__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "policy_translation/srv/dds_connext/TuneNetwork_Support.h"
// already included above
// #include "policy_translation/srv/dds_connext/TuneNetwork_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

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

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__TuneNetwork_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
convert_ros_message_to_dds(
  const policy_translation::srv::TuneNetwork_Response & ros_message,
  policy_translation::srv::dds_::TuneNetwork_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
convert_dds_message_to_ros(
  const policy_translation::srv::dds_::TuneNetwork_Response_ & dds_message,
  policy_translation::srv::TuneNetwork_Response & ros_message);

bool
to_cdr_stream__TuneNetwork_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__TuneNetwork_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace policy_translation


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  policy_translation, srv,
  TuneNetwork_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "policy_translation/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace policy_translation
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
void *
create_requester__TuneNetwork(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
const char *
destroy_requester__TuneNetwork(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
int64_t
send_request__TuneNetwork(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
void *
create_replier__TuneNetwork(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
const char *
destroy_replier__TuneNetwork(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
bool
take_request__TuneNetwork(
  void * untyped_replier,
  rmw_request_id_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
bool
take_response__TuneNetwork(
  void * untyped_requester,
  rmw_request_id_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
bool
send_response__TuneNetwork(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
void *
get_request_datawriter__TuneNetwork(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
void *
get_reply_datareader__TuneNetwork(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
void *
get_request_datareader__TuneNetwork(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
void *
get_reply_datawriter__TuneNetwork(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace policy_translation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_policy_translation
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  policy_translation, srv,
  TuneNetwork)();

#ifdef __cplusplus
}
#endif

#endif  // POLICY_TRANSLATION__SRV__TUNE_NETWORK__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
