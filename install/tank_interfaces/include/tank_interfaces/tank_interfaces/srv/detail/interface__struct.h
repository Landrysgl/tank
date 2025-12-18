// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tank_interfaces:srv/Interface.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tank_interfaces/srv/interface.h"


#ifndef TANK_INTERFACES__SRV__DETAIL__INTERFACE__STRUCT_H_
#define TANK_INTERFACES__SRV__DETAIL__INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Interface in the package tank_interfaces.
typedef struct tank_interfaces__srv__Interface_Request
{
  uint8_t structure_needs_at_least_one_member;
} tank_interfaces__srv__Interface_Request;

// Struct for a sequence of tank_interfaces__srv__Interface_Request.
typedef struct tank_interfaces__srv__Interface_Request__Sequence
{
  tank_interfaces__srv__Interface_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tank_interfaces__srv__Interface_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Interface in the package tank_interfaces.
typedef struct tank_interfaces__srv__Interface_Response
{
  uint8_t structure_needs_at_least_one_member;
} tank_interfaces__srv__Interface_Response;

// Struct for a sequence of tank_interfaces__srv__Interface_Response.
typedef struct tank_interfaces__srv__Interface_Response__Sequence
{
  tank_interfaces__srv__Interface_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tank_interfaces__srv__Interface_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tank_interfaces__srv__Interface_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tank_interfaces__srv__Interface_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Interface in the package tank_interfaces.
typedef struct tank_interfaces__srv__Interface_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tank_interfaces__srv__Interface_Request__Sequence request;
  tank_interfaces__srv__Interface_Response__Sequence response;
} tank_interfaces__srv__Interface_Event;

// Struct for a sequence of tank_interfaces__srv__Interface_Event.
typedef struct tank_interfaces__srv__Interface_Event__Sequence
{
  tank_interfaces__srv__Interface_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tank_interfaces__srv__Interface_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TANK_INTERFACES__SRV__DETAIL__INTERFACE__STRUCT_H_
