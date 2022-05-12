// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from policy_translation:msg/Dummy.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "policy_translation/msg/rosidl_typesupport_c__visibility_control.h"
#include "policy_translation/msg/dummy__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace policy_translation
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Dummy_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _Dummy_type_support_ids_t;

static const _Dummy_type_support_ids_t _Dummy_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_opensplice_c",  // ::rosidl_typesupport_opensplice_c::typesupport_identifier,
  }
};

typedef struct _Dummy_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _Dummy_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Dummy_type_support_symbol_names_t _Dummy_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, policy_translation, msg, Dummy)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, policy_translation, msg, Dummy)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, policy_translation, msg, Dummy)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, policy_translation, msg, Dummy)),
  }
};

typedef struct _Dummy_type_support_data_t
{
  void * data[4];
} _Dummy_type_support_data_t;

static _Dummy_type_support_data_t _Dummy_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Dummy_message_typesupport_map = {
  4,
  "policy_translation",
  &_Dummy_message_typesupport_ids.typesupport_identifier[0],
  &_Dummy_message_typesupport_symbol_names.symbol_name[0],
  &_Dummy_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Dummy_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Dummy_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace policy_translation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_policy_translation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, policy_translation, msg, Dummy)() {
  return &::policy_translation::msg::rosidl_typesupport_c::Dummy_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
