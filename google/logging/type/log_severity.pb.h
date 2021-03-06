// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/logging/type/log_severity.proto

#ifndef PROTOBUF_google_2flogging_2ftype_2flog_5fseverity_2eproto__INCLUDED
#define PROTOBUF_google_2flogging_2ftype_2flog_5fseverity_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace logging {
namespace type {
}  // namespace type
}  // namespace logging
}  // namespace google

namespace google {
namespace logging {
namespace type {

namespace protobuf_google_2flogging_2ftype_2flog_5fseverity_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_google_2flogging_2ftype_2flog_5fseverity_2eproto

enum LogSeverity {
  DEFAULT = 0,
  DEBUG = 100,
  INFO = 200,
  NOTICE = 300,
  WARNING = 400,
  ERROR = 500,
  CRITICAL = 600,
  ALERT = 700,
  EMERGENCY = 800,
  LogSeverity_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LogSeverity_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LogSeverity_IsValid(int value);
const LogSeverity LogSeverity_MIN = DEFAULT;
const LogSeverity LogSeverity_MAX = EMERGENCY;
const int LogSeverity_ARRAYSIZE = LogSeverity_MAX + 1;

const ::google::protobuf::EnumDescriptor* LogSeverity_descriptor();
inline const ::std::string& LogSeverity_Name(LogSeverity value) {
  return ::google::protobuf::internal::NameOfEnum(
    LogSeverity_descriptor(), value);
}
inline bool LogSeverity_Parse(
    const ::std::string& name, LogSeverity* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LogSeverity>(
    LogSeverity_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace type
}  // namespace logging
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::logging::type::LogSeverity> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::logging::type::LogSeverity>() {
  return ::google::logging::type::LogSeverity_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2flogging_2ftype_2flog_5fseverity_2eproto__INCLUDED
