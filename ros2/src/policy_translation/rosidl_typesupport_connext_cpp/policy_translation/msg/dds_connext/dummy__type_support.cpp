// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "policy_translation/msg/dummy__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace dds_
{
class Image_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const sensor_msgs::msg::Image &,
  sensor_msgs::msg::dds_::Image_ &);
bool convert_dds_message_to_ros(
  const sensor_msgs::msg::dds_::Image_ &,
  sensor_msgs::msg::Image &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace policy_translation
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Dummy()
{
  return policy_translation::msg::dds_::Dummy_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const policy_translation::msg::Dummy & ros_message,
  policy_translation::msg::dds_::Dummy_ & dds_message)
{
  // member.name image
  if (
    !sensor_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.image,
      dds_message.image_))
  {
    return false;
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const policy_translation::msg::dds_::Dummy_ & dds_message,
  policy_translation::msg::Dummy & ros_message)
{
  // member.name image
  if (
    !sensor_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.image_,
      ros_message.image))
  {
    return false;
  }

  return true;
}

bool
to_cdr_stream__Dummy(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const policy_translation::msg::Dummy & ros_message =
    *(const policy_translation::msg::Dummy *)untyped_ros_message;

  // create a respective connext dds type
  policy_translation::msg::dds_::Dummy_ * dds_message = policy_translation::msg::dds_::Dummy_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (policy_translation::msg::dds_::Dummy_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call policy_translation::msg::dds_::Dummy_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < cdr_stream->buffer_length) {
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(cdr_stream->buffer_length, cdr_stream->allocator.state));
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(cdr_stream->buffer_length);
  if (policy_translation::msg::dds_::Dummy_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    return false;
  }
  if (policy_translation::msg::dds_::Dummy_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Dummy(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  policy_translation::msg::dds_::Dummy_ * dds_message =
    policy_translation::msg::dds_::Dummy_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (policy_translation::msg::dds_::Dummy_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  policy_translation::msg::Dummy & ros_message =
    *(policy_translation::msg::Dummy *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (policy_translation::msg::dds_::Dummy_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Dummy__callbacks = {
  "policy_translation::msg",
  "Dummy",
  &get_type_code__Dummy,
  nullptr,
  nullptr,
  &to_cdr_stream__Dummy,
  &to_message__Dummy
};

static rosidl_message_type_support_t _Dummy__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Dummy__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace policy_translation


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_policy_translation
const rosidl_message_type_support_t *
get_message_type_support_handle<policy_translation::msg::Dummy>()
{
  return &policy_translation::msg::typesupport_connext_cpp::_Dummy__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  policy_translation, msg,
  Dummy)()
{
  return &policy_translation::msg::typesupport_connext_cpp::_Dummy__handle;
}

#ifdef __cplusplus
}
#endif
