// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/devtools/clouderrorreporting/v1beta1/error_group_service.proto

#ifndef PROTOBUF_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto__INCLUDED
#define PROTOBUF_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include "google/devtools/clouderrorreporting/v1beta1/common.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace devtools {
namespace clouderrorreporting {
namespace v1beta1 {
class ErrorContext;
class ErrorContextDefaultTypeInternal;
extern ErrorContextDefaultTypeInternal _ErrorContext_default_instance_;
class ErrorEvent;
class ErrorEventDefaultTypeInternal;
extern ErrorEventDefaultTypeInternal _ErrorEvent_default_instance_;
class ErrorGroup;
class ErrorGroupDefaultTypeInternal;
extern ErrorGroupDefaultTypeInternal _ErrorGroup_default_instance_;
class GetGroupRequest;
class GetGroupRequestDefaultTypeInternal;
extern GetGroupRequestDefaultTypeInternal _GetGroupRequest_default_instance_;
class HttpRequestContext;
class HttpRequestContextDefaultTypeInternal;
extern HttpRequestContextDefaultTypeInternal _HttpRequestContext_default_instance_;
class ServiceContext;
class ServiceContextDefaultTypeInternal;
extern ServiceContextDefaultTypeInternal _ServiceContext_default_instance_;
class SourceLocation;
class SourceLocationDefaultTypeInternal;
extern SourceLocationDefaultTypeInternal _SourceLocation_default_instance_;
class TrackingIssue;
class TrackingIssueDefaultTypeInternal;
extern TrackingIssueDefaultTypeInternal _TrackingIssue_default_instance_;
class UpdateGroupRequest;
class UpdateGroupRequestDefaultTypeInternal;
extern UpdateGroupRequestDefaultTypeInternal _UpdateGroupRequest_default_instance_;
}  // namespace v1beta1
}  // namespace clouderrorreporting
}  // namespace devtools
}  // namespace google

namespace google {
namespace devtools {
namespace clouderrorreporting {
namespace v1beta1 {

namespace protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto {
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
}  // namespace protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto

// ===================================================================

class GetGroupRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest) */ {
 public:
  GetGroupRequest();
  virtual ~GetGroupRequest();

  GetGroupRequest(const GetGroupRequest& from);

  inline GetGroupRequest& operator=(const GetGroupRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetGroupRequest& default_instance();

  static inline const GetGroupRequest* internal_default_instance() {
    return reinterpret_cast<const GetGroupRequest*>(
               &_GetGroupRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(GetGroupRequest* other);

  // implements Message ----------------------------------------------

  inline GetGroupRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  GetGroupRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GetGroupRequest& from);
  void MergeFrom(const GetGroupRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GetGroupRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string group_name = 1;
  void clear_group_name();
  static const int kGroupNameFieldNumber = 1;
  const ::std::string& group_name() const;
  void set_group_name(const ::std::string& value);
  #if LANG_CXX11
  void set_group_name(::std::string&& value);
  #endif
  void set_group_name(const char* value);
  void set_group_name(const char* value, size_t size);
  ::std::string* mutable_group_name();
  ::std::string* release_group_name();
  void set_allocated_group_name(::std::string* group_name);

  // @@protoc_insertion_point(class_scope:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr group_name_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class UpdateGroupRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest) */ {
 public:
  UpdateGroupRequest();
  virtual ~UpdateGroupRequest();

  UpdateGroupRequest(const UpdateGroupRequest& from);

  inline UpdateGroupRequest& operator=(const UpdateGroupRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UpdateGroupRequest& default_instance();

  static inline const UpdateGroupRequest* internal_default_instance() {
    return reinterpret_cast<const UpdateGroupRequest*>(
               &_UpdateGroupRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(UpdateGroupRequest* other);

  // implements Message ----------------------------------------------

  inline UpdateGroupRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  UpdateGroupRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const UpdateGroupRequest& from);
  void MergeFrom(const UpdateGroupRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(UpdateGroupRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
  bool has_group() const;
  void clear_group();
  static const int kGroupFieldNumber = 1;
  const ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup& group() const;
  ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* mutable_group();
  ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* release_group();
  void set_allocated_group(::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* group);

  // @@protoc_insertion_point(class_scope:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* group_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GetGroupRequest

// string group_name = 1;
inline void GetGroupRequest::clear_group_name() {
  group_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetGroupRequest::group_name() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
  return group_name_.GetNoArena();
}
inline void GetGroupRequest::set_group_name(const ::std::string& value) {
  
  group_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
#if LANG_CXX11
inline void GetGroupRequest::set_group_name(::std::string&& value) {
  
  group_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
#endif
inline void GetGroupRequest::set_group_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  group_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
inline void GetGroupRequest::set_group_name(const char* value, size_t size) {
  
  group_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
inline ::std::string* GetGroupRequest::mutable_group_name() {
  
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
  return group_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetGroupRequest::release_group_name() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
  
  return group_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetGroupRequest::set_allocated_group_name(::std::string* group_name) {
  if (group_name != NULL) {
    
  } else {
    
  }
  group_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), group_name);
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}

// -------------------------------------------------------------------

// UpdateGroupRequest

// .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
inline bool UpdateGroupRequest::has_group() const {
  return this != internal_default_instance() && group_ != NULL;
}
inline void UpdateGroupRequest::clear_group() {
  if (GetArenaNoVirtual() == NULL && group_ != NULL) delete group_;
  group_ = NULL;
}
inline const ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup& UpdateGroupRequest::group() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
  return group_ != NULL ? *group_
                         : *::google::devtools::clouderrorreporting::v1beta1::ErrorGroup::internal_default_instance();
}
inline ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* UpdateGroupRequest::mutable_group() {
  
  if (group_ == NULL) {
    group_ = new ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup;
  }
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
  return group_;
}
inline ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* UpdateGroupRequest::release_group() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
  
  ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* temp = group_;
  group_ = NULL;
  return temp;
}
inline void UpdateGroupRequest::set_allocated_group(::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* group) {
  delete group_;
  group_ = group;
  if (group) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v1beta1
}  // namespace clouderrorreporting
}  // namespace devtools
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto__INCLUDED