// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tank_interfaces:srv/Interface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tank_interfaces/srv/detail/interface__rosidl_typesupport_introspection_c.h"
#include "tank_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tank_interfaces/srv/detail/interface__functions.h"
#include "tank_interfaces/srv/detail/interface__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tank_interfaces__srv__Interface_Request__init(message_memory);
}

void tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_fini_function(void * message_memory)
{
  tank_interfaces__srv__Interface_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tank_interfaces__srv__Interface_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_message_members = {
  "tank_interfaces__srv",  // message namespace
  "Interface_Request",  // message name
  1,  // number of fields
  sizeof(tank_interfaces__srv__Interface_Request),
  false,  // has_any_key_member_
  tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_message_member_array,  // message members
  tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_message_type_support_handle = {
  0,
  &tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_message_members,
  get_message_typesupport_handle_function,
  &tank_interfaces__srv__Interface_Request__get_type_hash,
  &tank_interfaces__srv__Interface_Request__get_type_description,
  &tank_interfaces__srv__Interface_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tank_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Request)() {
  if (!tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_message_type_support_handle.typesupport_identifier) {
    tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tank_interfaces/srv/detail/interface__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tank_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tank_interfaces/srv/detail/interface__functions.h"
// already included above
// #include "tank_interfaces/srv/detail/interface__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tank_interfaces__srv__Interface_Response__init(message_memory);
}

void tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_fini_function(void * message_memory)
{
  tank_interfaces__srv__Interface_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tank_interfaces__srv__Interface_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_message_members = {
  "tank_interfaces__srv",  // message namespace
  "Interface_Response",  // message name
  1,  // number of fields
  sizeof(tank_interfaces__srv__Interface_Response),
  false,  // has_any_key_member_
  tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_message_member_array,  // message members
  tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_message_type_support_handle = {
  0,
  &tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_message_members,
  get_message_typesupport_handle_function,
  &tank_interfaces__srv__Interface_Response__get_type_hash,
  &tank_interfaces__srv__Interface_Response__get_type_description,
  &tank_interfaces__srv__Interface_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tank_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Response)() {
  if (!tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_message_type_support_handle.typesupport_identifier) {
    tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tank_interfaces/srv/detail/interface__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tank_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tank_interfaces/srv/detail/interface__functions.h"
// already included above
// #include "tank_interfaces/srv/detail/interface__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "tank_interfaces/srv/interface.h"
// Member `request`
// Member `response`
// already included above
// #include "tank_interfaces/srv/detail/interface__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tank_interfaces__srv__Interface_Event__init(message_memory);
}

void tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_fini_function(void * message_memory)
{
  tank_interfaces__srv__Interface_Event__fini(message_memory);
}

size_t tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__size_function__Interface_Event__request(
  const void * untyped_member)
{
  const tank_interfaces__srv__Interface_Request__Sequence * member =
    (const tank_interfaces__srv__Interface_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_const_function__Interface_Event__request(
  const void * untyped_member, size_t index)
{
  const tank_interfaces__srv__Interface_Request__Sequence * member =
    (const tank_interfaces__srv__Interface_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_function__Interface_Event__request(
  void * untyped_member, size_t index)
{
  tank_interfaces__srv__Interface_Request__Sequence * member =
    (tank_interfaces__srv__Interface_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__fetch_function__Interface_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tank_interfaces__srv__Interface_Request * item =
    ((const tank_interfaces__srv__Interface_Request *)
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_const_function__Interface_Event__request(untyped_member, index));
  tank_interfaces__srv__Interface_Request * value =
    (tank_interfaces__srv__Interface_Request *)(untyped_value);
  *value = *item;
}

void tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__assign_function__Interface_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tank_interfaces__srv__Interface_Request * item =
    ((tank_interfaces__srv__Interface_Request *)
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_function__Interface_Event__request(untyped_member, index));
  const tank_interfaces__srv__Interface_Request * value =
    (const tank_interfaces__srv__Interface_Request *)(untyped_value);
  *item = *value;
}

bool tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__resize_function__Interface_Event__request(
  void * untyped_member, size_t size)
{
  tank_interfaces__srv__Interface_Request__Sequence * member =
    (tank_interfaces__srv__Interface_Request__Sequence *)(untyped_member);
  tank_interfaces__srv__Interface_Request__Sequence__fini(member);
  return tank_interfaces__srv__Interface_Request__Sequence__init(member, size);
}

size_t tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__size_function__Interface_Event__response(
  const void * untyped_member)
{
  const tank_interfaces__srv__Interface_Response__Sequence * member =
    (const tank_interfaces__srv__Interface_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_const_function__Interface_Event__response(
  const void * untyped_member, size_t index)
{
  const tank_interfaces__srv__Interface_Response__Sequence * member =
    (const tank_interfaces__srv__Interface_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_function__Interface_Event__response(
  void * untyped_member, size_t index)
{
  tank_interfaces__srv__Interface_Response__Sequence * member =
    (tank_interfaces__srv__Interface_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__fetch_function__Interface_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tank_interfaces__srv__Interface_Response * item =
    ((const tank_interfaces__srv__Interface_Response *)
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_const_function__Interface_Event__response(untyped_member, index));
  tank_interfaces__srv__Interface_Response * value =
    (tank_interfaces__srv__Interface_Response *)(untyped_value);
  *value = *item;
}

void tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__assign_function__Interface_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tank_interfaces__srv__Interface_Response * item =
    ((tank_interfaces__srv__Interface_Response *)
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_function__Interface_Event__response(untyped_member, index));
  const tank_interfaces__srv__Interface_Response * value =
    (const tank_interfaces__srv__Interface_Response *)(untyped_value);
  *item = *value;
}

bool tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__resize_function__Interface_Event__response(
  void * untyped_member, size_t size)
{
  tank_interfaces__srv__Interface_Response__Sequence * member =
    (tank_interfaces__srv__Interface_Response__Sequence *)(untyped_member);
  tank_interfaces__srv__Interface_Response__Sequence__fini(member);
  return tank_interfaces__srv__Interface_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tank_interfaces__srv__Interface_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tank_interfaces__srv__Interface_Event, request),  // bytes offset in struct
    NULL,  // default value
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__size_function__Interface_Event__request,  // size() function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_const_function__Interface_Event__request,  // get_const(index) function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_function__Interface_Event__request,  // get(index) function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__fetch_function__Interface_Event__request,  // fetch(index, &value) function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__assign_function__Interface_Event__request,  // assign(index, value) function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__resize_function__Interface_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tank_interfaces__srv__Interface_Event, response),  // bytes offset in struct
    NULL,  // default value
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__size_function__Interface_Event__response,  // size() function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_const_function__Interface_Event__response,  // get_const(index) function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__get_function__Interface_Event__response,  // get(index) function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__fetch_function__Interface_Event__response,  // fetch(index, &value) function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__assign_function__Interface_Event__response,  // assign(index, value) function pointer
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__resize_function__Interface_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_members = {
  "tank_interfaces__srv",  // message namespace
  "Interface_Event",  // message name
  3,  // number of fields
  sizeof(tank_interfaces__srv__Interface_Event),
  false,  // has_any_key_member_
  tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_member_array,  // message members
  tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_type_support_handle = {
  0,
  &tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_members,
  get_message_typesupport_handle_function,
  &tank_interfaces__srv__Interface_Event__get_type_hash,
  &tank_interfaces__srv__Interface_Event__get_type_description,
  &tank_interfaces__srv__Interface_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tank_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Event)() {
  tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Request)();
  tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Response)();
  if (!tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_type_support_handle.typesupport_identifier) {
    tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tank_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tank_interfaces/srv/detail/interface__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_service_members = {
  "tank_interfaces__srv",  // service namespace
  "Interface",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_Request_message_type_support_handle,
  NULL,  // response message
  // tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_Response_message_type_support_handle
  NULL  // event_message
  // tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_Response_message_type_support_handle
};


static rosidl_service_type_support_t tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_service_type_support_handle = {
  0,
  &tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_service_members,
  get_service_typesupport_handle_function,
  &tank_interfaces__srv__Interface_Request__rosidl_typesupport_introspection_c__Interface_Request_message_type_support_handle,
  &tank_interfaces__srv__Interface_Response__rosidl_typesupport_introspection_c__Interface_Response_message_type_support_handle,
  &tank_interfaces__srv__Interface_Event__rosidl_typesupport_introspection_c__Interface_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tank_interfaces,
    srv,
    Interface
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tank_interfaces,
    srv,
    Interface
  ),
  &tank_interfaces__srv__Interface__get_type_hash,
  &tank_interfaces__srv__Interface__get_type_description,
  &tank_interfaces__srv__Interface__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tank_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface)(void) {
  if (!tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_service_type_support_handle.typesupport_identifier) {
    tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tank_interfaces, srv, Interface_Event)()->data;
  }

  return &tank_interfaces__srv__detail__interface__rosidl_typesupport_introspection_c__Interface_service_type_support_handle;
}
