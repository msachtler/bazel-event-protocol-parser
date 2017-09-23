// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/log.proto

#ifndef PROTOBUF_google_2fapi_2flog_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2flog_2eproto__INCLUDED

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
#include "google/api/label.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
class LabelDescriptor;
class LabelDescriptorDefaultTypeInternal;
extern LabelDescriptorDefaultTypeInternal _LabelDescriptor_default_instance_;
class LogDescriptor;
class LogDescriptorDefaultTypeInternal;
extern LogDescriptorDefaultTypeInternal _LogDescriptor_default_instance_;
}  // namespace api
}  // namespace google

namespace google {
namespace api {

namespace protobuf_google_2fapi_2flog_2eproto {
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
}  // namespace protobuf_google_2fapi_2flog_2eproto

// ===================================================================

class LogDescriptor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.LogDescriptor) */ {
 public:
  LogDescriptor();
  virtual ~LogDescriptor();

  LogDescriptor(const LogDescriptor& from);

  inline LogDescriptor& operator=(const LogDescriptor& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LogDescriptor& default_instance();

  static inline const LogDescriptor* internal_default_instance() {
    return reinterpret_cast<const LogDescriptor*>(
               &_LogDescriptor_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LogDescriptor* other);

  // implements Message ----------------------------------------------

  inline LogDescriptor* New() const PROTOBUF_FINAL { return New(NULL); }

  LogDescriptor* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LogDescriptor& from);
  void MergeFrom(const LogDescriptor& from);
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
  void InternalSwap(LogDescriptor* other);
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

  // repeated .google.api.LabelDescriptor labels = 2;
  int labels_size() const;
  void clear_labels();
  static const int kLabelsFieldNumber = 2;
  const ::google::api::LabelDescriptor& labels(int index) const;
  ::google::api::LabelDescriptor* mutable_labels(int index);
  ::google::api::LabelDescriptor* add_labels();
  ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >*
      mutable_labels();
  const ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >&
      labels() const;

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string description = 3;
  void clear_description();
  static const int kDescriptionFieldNumber = 3;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // string display_name = 4;
  void clear_display_name();
  static const int kDisplayNameFieldNumber = 4;
  const ::std::string& display_name() const;
  void set_display_name(const ::std::string& value);
  #if LANG_CXX11
  void set_display_name(::std::string&& value);
  #endif
  void set_display_name(const char* value);
  void set_display_name(const char* value, size_t size);
  ::std::string* mutable_display_name();
  ::std::string* release_display_name();
  void set_allocated_display_name(::std::string* display_name);

  // @@protoc_insertion_point(class_scope:google.api.LogDescriptor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor > labels_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr display_name_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fapi_2flog_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LogDescriptor

// string name = 1;
inline void LogDescriptor::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogDescriptor::name() const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.name)
  return name_.GetNoArena();
}
inline void LogDescriptor::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.LogDescriptor.name)
}
#if LANG_CXX11
inline void LogDescriptor::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.LogDescriptor.name)
}
#endif
inline void LogDescriptor::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.LogDescriptor.name)
}
inline void LogDescriptor::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.LogDescriptor.name)
}
inline ::std::string* LogDescriptor::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:google.api.LogDescriptor.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogDescriptor::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.api.LogDescriptor.name)
}

// repeated .google.api.LabelDescriptor labels = 2;
inline int LogDescriptor::labels_size() const {
  return labels_.size();
}
inline void LogDescriptor::clear_labels() {
  labels_.Clear();
}
inline const ::google::api::LabelDescriptor& LogDescriptor::labels(int index) const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.labels)
  return labels_.Get(index);
}
inline ::google::api::LabelDescriptor* LogDescriptor::mutable_labels(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.labels)
  return labels_.Mutable(index);
}
inline ::google::api::LabelDescriptor* LogDescriptor::add_labels() {
  // @@protoc_insertion_point(field_add:google.api.LogDescriptor.labels)
  return labels_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >*
LogDescriptor::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_list:google.api.LogDescriptor.labels)
  return &labels_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::LabelDescriptor >&
LogDescriptor::labels() const {
  // @@protoc_insertion_point(field_list:google.api.LogDescriptor.labels)
  return labels_;
}

// string description = 3;
inline void LogDescriptor::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogDescriptor::description() const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.description)
  return description_.GetNoArena();
}
inline void LogDescriptor::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.LogDescriptor.description)
}
#if LANG_CXX11
inline void LogDescriptor::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.LogDescriptor.description)
}
#endif
inline void LogDescriptor::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.LogDescriptor.description)
}
inline void LogDescriptor::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.LogDescriptor.description)
}
inline ::std::string* LogDescriptor::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogDescriptor::release_description() {
  // @@protoc_insertion_point(field_release:google.api.LogDescriptor.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogDescriptor::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:google.api.LogDescriptor.description)
}

// string display_name = 4;
inline void LogDescriptor::clear_display_name() {
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogDescriptor::display_name() const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.display_name)
  return display_name_.GetNoArena();
}
inline void LogDescriptor::set_display_name(const ::std::string& value) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.LogDescriptor.display_name)
}
#if LANG_CXX11
inline void LogDescriptor::set_display_name(::std::string&& value) {
  
  display_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.LogDescriptor.display_name)
}
#endif
inline void LogDescriptor::set_display_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.LogDescriptor.display_name)
}
inline void LogDescriptor::set_display_name(const char* value, size_t size) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.LogDescriptor.display_name)
}
inline ::std::string* LogDescriptor::mutable_display_name() {
  
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.display_name)
  return display_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogDescriptor::release_display_name() {
  // @@protoc_insertion_point(field_release:google.api.LogDescriptor.display_name)
  
  return display_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogDescriptor::set_allocated_display_name(::std::string* display_name) {
  if (display_name != NULL) {
    
  } else {
    
  }
  display_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), display_name);
  // @@protoc_insertion_point(field_set_allocated:google.api.LogDescriptor.display_name)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2flog_2eproto__INCLUDED
