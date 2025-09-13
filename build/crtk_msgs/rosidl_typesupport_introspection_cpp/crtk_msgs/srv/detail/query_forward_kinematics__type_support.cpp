// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crtk_msgs:srv/QueryForwardKinematics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crtk_msgs/srv/detail/query_forward_kinematics__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace crtk_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void QueryForwardKinematics_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) crtk_msgs::srv::QueryForwardKinematics_Request(_init);
}

void QueryForwardKinematics_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crtk_msgs::srv::QueryForwardKinematics_Request *>(message_memory);
  typed_message->~QueryForwardKinematics_Request();
}

size_t size_function__QueryForwardKinematics_Request__jp(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QueryForwardKinematics_Request__jp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__QueryForwardKinematics_Request__jp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__QueryForwardKinematics_Request__jp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__QueryForwardKinematics_Request__jp(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__QueryForwardKinematics_Request__jp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__QueryForwardKinematics_Request__jp(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__QueryForwardKinematics_Request__jp(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QueryForwardKinematics_Request_message_member_array[2] = {
  {
    "jp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::srv::QueryForwardKinematics_Request, jp),  // bytes offset in struct
    nullptr,  // default value
    size_function__QueryForwardKinematics_Request__jp,  // size() function pointer
    get_const_function__QueryForwardKinematics_Request__jp,  // get_const(index) function pointer
    get_function__QueryForwardKinematics_Request__jp,  // get(index) function pointer
    fetch_function__QueryForwardKinematics_Request__jp,  // fetch(index, &value) function pointer
    assign_function__QueryForwardKinematics_Request__jp,  // assign(index, value) function pointer
    resize_function__QueryForwardKinematics_Request__jp  // resize(index) function pointer
  },
  {
    "cp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::srv::QueryForwardKinematics_Request, cp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QueryForwardKinematics_Request_message_members = {
  "crtk_msgs::srv",  // message namespace
  "QueryForwardKinematics_Request",  // message name
  2,  // number of fields
  sizeof(crtk_msgs::srv::QueryForwardKinematics_Request),
  QueryForwardKinematics_Request_message_member_array,  // message members
  QueryForwardKinematics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryForwardKinematics_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QueryForwardKinematics_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QueryForwardKinematics_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace crtk_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crtk_msgs::srv::QueryForwardKinematics_Request>()
{
  return &::crtk_msgs::srv::rosidl_typesupport_introspection_cpp::QueryForwardKinematics_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crtk_msgs, srv, QueryForwardKinematics_Request)() {
  return &::crtk_msgs::srv::rosidl_typesupport_introspection_cpp::QueryForwardKinematics_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "crtk_msgs/srv/detail/query_forward_kinematics__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace crtk_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void QueryForwardKinematics_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) crtk_msgs::srv::QueryForwardKinematics_Response(_init);
}

void QueryForwardKinematics_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crtk_msgs::srv::QueryForwardKinematics_Response *>(message_memory);
  typed_message->~QueryForwardKinematics_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QueryForwardKinematics_Response_message_member_array[3] = {
  {
    "cp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::srv::QueryForwardKinematics_Response, cp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::srv::QueryForwardKinematics_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::srv::QueryForwardKinematics_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QueryForwardKinematics_Response_message_members = {
  "crtk_msgs::srv",  // message namespace
  "QueryForwardKinematics_Response",  // message name
  3,  // number of fields
  sizeof(crtk_msgs::srv::QueryForwardKinematics_Response),
  QueryForwardKinematics_Response_message_member_array,  // message members
  QueryForwardKinematics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryForwardKinematics_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QueryForwardKinematics_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QueryForwardKinematics_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace crtk_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crtk_msgs::srv::QueryForwardKinematics_Response>()
{
  return &::crtk_msgs::srv::rosidl_typesupport_introspection_cpp::QueryForwardKinematics_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crtk_msgs, srv, QueryForwardKinematics_Response)() {
  return &::crtk_msgs::srv::rosidl_typesupport_introspection_cpp::QueryForwardKinematics_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "crtk_msgs/srv/detail/query_forward_kinematics__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace crtk_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers QueryForwardKinematics_service_members = {
  "crtk_msgs::srv",  // service namespace
  "QueryForwardKinematics",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<crtk_msgs::srv::QueryForwardKinematics>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t QueryForwardKinematics_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QueryForwardKinematics_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace crtk_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<crtk_msgs::srv::QueryForwardKinematics>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::crtk_msgs::srv::rosidl_typesupport_introspection_cpp::QueryForwardKinematics_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::crtk_msgs::srv::QueryForwardKinematics_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::crtk_msgs::srv::QueryForwardKinematics_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crtk_msgs, srv, QueryForwardKinematics)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<crtk_msgs::srv::QueryForwardKinematics>();
}

#ifdef __cplusplus
}
#endif
