// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/annotations.proto

#ifndef PROTOBUF_google_2fapi_2fannotations_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fannotations_2eproto__INCLUDED

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
#include "google/api/http.pb.h"
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
class CustomHttpPattern;
class CustomHttpPatternDefaultTypeInternal;
extern CustomHttpPatternDefaultTypeInternal _CustomHttpPattern_default_instance_;
class Http;
class HttpDefaultTypeInternal;
extern HttpDefaultTypeInternal _Http_default_instance_;
class HttpRule;
class HttpRuleDefaultTypeInternal;
extern HttpRuleDefaultTypeInternal _HttpRule_default_instance_;
}  // namespace api
namespace protobuf {
class DescriptorProto;
class DescriptorProtoDefaultTypeInternal;
extern DescriptorProtoDefaultTypeInternal _DescriptorProto_default_instance_;
class DescriptorProto_ExtensionRange;
class DescriptorProto_ExtensionRangeDefaultTypeInternal;
extern DescriptorProto_ExtensionRangeDefaultTypeInternal _DescriptorProto_ExtensionRange_default_instance_;
class DescriptorProto_ReservedRange;
class DescriptorProto_ReservedRangeDefaultTypeInternal;
extern DescriptorProto_ReservedRangeDefaultTypeInternal _DescriptorProto_ReservedRange_default_instance_;
class EnumDescriptorProto;
class EnumDescriptorProtoDefaultTypeInternal;
extern EnumDescriptorProtoDefaultTypeInternal _EnumDescriptorProto_default_instance_;
class EnumOptions;
class EnumOptionsDefaultTypeInternal;
extern EnumOptionsDefaultTypeInternal _EnumOptions_default_instance_;
class EnumValueDescriptorProto;
class EnumValueDescriptorProtoDefaultTypeInternal;
extern EnumValueDescriptorProtoDefaultTypeInternal _EnumValueDescriptorProto_default_instance_;
class EnumValueOptions;
class EnumValueOptionsDefaultTypeInternal;
extern EnumValueOptionsDefaultTypeInternal _EnumValueOptions_default_instance_;
class ExtensionRangeOptions;
class ExtensionRangeOptionsDefaultTypeInternal;
extern ExtensionRangeOptionsDefaultTypeInternal _ExtensionRangeOptions_default_instance_;
class FieldDescriptorProto;
class FieldDescriptorProtoDefaultTypeInternal;
extern FieldDescriptorProtoDefaultTypeInternal _FieldDescriptorProto_default_instance_;
class FieldOptions;
class FieldOptionsDefaultTypeInternal;
extern FieldOptionsDefaultTypeInternal _FieldOptions_default_instance_;
class FileDescriptorProto;
class FileDescriptorProtoDefaultTypeInternal;
extern FileDescriptorProtoDefaultTypeInternal _FileDescriptorProto_default_instance_;
class FileDescriptorSet;
class FileDescriptorSetDefaultTypeInternal;
extern FileDescriptorSetDefaultTypeInternal _FileDescriptorSet_default_instance_;
class FileOptions;
class FileOptionsDefaultTypeInternal;
extern FileOptionsDefaultTypeInternal _FileOptions_default_instance_;
class GeneratedCodeInfo;
class GeneratedCodeInfoDefaultTypeInternal;
extern GeneratedCodeInfoDefaultTypeInternal _GeneratedCodeInfo_default_instance_;
class GeneratedCodeInfo_Annotation;
class GeneratedCodeInfo_AnnotationDefaultTypeInternal;
extern GeneratedCodeInfo_AnnotationDefaultTypeInternal _GeneratedCodeInfo_Annotation_default_instance_;
class MessageOptions;
class MessageOptionsDefaultTypeInternal;
extern MessageOptionsDefaultTypeInternal _MessageOptions_default_instance_;
class MethodDescriptorProto;
class MethodDescriptorProtoDefaultTypeInternal;
extern MethodDescriptorProtoDefaultTypeInternal _MethodDescriptorProto_default_instance_;
class MethodOptions;
class MethodOptionsDefaultTypeInternal;
extern MethodOptionsDefaultTypeInternal _MethodOptions_default_instance_;
class OneofDescriptorProto;
class OneofDescriptorProtoDefaultTypeInternal;
extern OneofDescriptorProtoDefaultTypeInternal _OneofDescriptorProto_default_instance_;
class OneofOptions;
class OneofOptionsDefaultTypeInternal;
extern OneofOptionsDefaultTypeInternal _OneofOptions_default_instance_;
class ServiceDescriptorProto;
class ServiceDescriptorProtoDefaultTypeInternal;
extern ServiceDescriptorProtoDefaultTypeInternal _ServiceDescriptorProto_default_instance_;
class ServiceOptions;
class ServiceOptionsDefaultTypeInternal;
extern ServiceOptionsDefaultTypeInternal _ServiceOptions_default_instance_;
class SourceCodeInfo;
class SourceCodeInfoDefaultTypeInternal;
extern SourceCodeInfoDefaultTypeInternal _SourceCodeInfo_default_instance_;
class SourceCodeInfo_Location;
class SourceCodeInfo_LocationDefaultTypeInternal;
extern SourceCodeInfo_LocationDefaultTypeInternal _SourceCodeInfo_Location_default_instance_;
class UninterpretedOption;
class UninterpretedOptionDefaultTypeInternal;
extern UninterpretedOptionDefaultTypeInternal _UninterpretedOption_default_instance_;
class UninterpretedOption_NamePart;
class UninterpretedOption_NamePartDefaultTypeInternal;
extern UninterpretedOption_NamePartDefaultTypeInternal _UninterpretedOption_NamePart_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace api {

namespace protobuf_google_2fapi_2fannotations_2eproto {
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
}  // namespace protobuf_google_2fapi_2fannotations_2eproto

// ===================================================================


// ===================================================================

static const int kHttpFieldNumber = 72295728;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::google::api::HttpRule >, 11, false >
  http;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fannotations_2eproto__INCLUDED
