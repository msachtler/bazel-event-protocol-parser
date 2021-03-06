// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/billing.proto

#ifndef PROTOBUF_google_2fapi_2fbilling_2eproto__INCLUDED
#define PROTOBUF_google_2fapi_2fbilling_2eproto__INCLUDED

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
#include "google/api/metric.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
class Billing;
class BillingDefaultTypeInternal;
extern BillingDefaultTypeInternal _Billing_default_instance_;
class BillingStatusRule;
class BillingStatusRuleDefaultTypeInternal;
extern BillingStatusRuleDefaultTypeInternal _BillingStatusRule_default_instance_;
class Metric;
class MetricDefaultTypeInternal;
extern MetricDefaultTypeInternal _Metric_default_instance_;
class MetricDescriptor;
class MetricDescriptorDefaultTypeInternal;
extern MetricDescriptorDefaultTypeInternal _MetricDescriptor_default_instance_;
class Metric_LabelsEntry;
class Metric_LabelsEntryDefaultTypeInternal;
extern Metric_LabelsEntryDefaultTypeInternal _Metric_LabelsEntry_default_instance_;
}  // namespace api
}  // namespace google

namespace google {
namespace api {

namespace protobuf_google_2fapi_2fbilling_2eproto {
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
}  // namespace protobuf_google_2fapi_2fbilling_2eproto

// ===================================================================

class Billing : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Billing) */ {
 public:
  Billing();
  virtual ~Billing();

  Billing(const Billing& from);

  inline Billing& operator=(const Billing& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Billing& default_instance();

  static inline const Billing* internal_default_instance() {
    return reinterpret_cast<const Billing*>(
               &_Billing_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Billing* other);

  // implements Message ----------------------------------------------

  inline Billing* New() const PROTOBUF_FINAL { return New(NULL); }

  Billing* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Billing& from);
  void MergeFrom(const Billing& from);
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
  void InternalSwap(Billing* other);
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

  // repeated string metrics = 1;
  int metrics_size() const;
  void clear_metrics();
  static const int kMetricsFieldNumber = 1;
  const ::std::string& metrics(int index) const;
  ::std::string* mutable_metrics(int index);
  void set_metrics(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_metrics(int index, ::std::string&& value);
  #endif
  void set_metrics(int index, const char* value);
  void set_metrics(int index, const char* value, size_t size);
  ::std::string* add_metrics();
  void add_metrics(const ::std::string& value);
  #if LANG_CXX11
  void add_metrics(::std::string&& value);
  #endif
  void add_metrics(const char* value);
  void add_metrics(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& metrics() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_metrics();

  // repeated .google.api.BillingStatusRule rules = 5;
  int rules_size() const;
  void clear_rules();
  static const int kRulesFieldNumber = 5;
  const ::google::api::BillingStatusRule& rules(int index) const;
  ::google::api::BillingStatusRule* mutable_rules(int index);
  ::google::api::BillingStatusRule* add_rules();
  ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule >*
      mutable_rules();
  const ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule >&
      rules() const;

  // @@protoc_insertion_point(class_scope:google.api.Billing)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> metrics_;
  ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule > rules_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fapi_2fbilling_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BillingStatusRule : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.BillingStatusRule) */ {
 public:
  BillingStatusRule();
  virtual ~BillingStatusRule();

  BillingStatusRule(const BillingStatusRule& from);

  inline BillingStatusRule& operator=(const BillingStatusRule& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BillingStatusRule& default_instance();

  static inline const BillingStatusRule* internal_default_instance() {
    return reinterpret_cast<const BillingStatusRule*>(
               &_BillingStatusRule_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(BillingStatusRule* other);

  // implements Message ----------------------------------------------

  inline BillingStatusRule* New() const PROTOBUF_FINAL { return New(NULL); }

  BillingStatusRule* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const BillingStatusRule& from);
  void MergeFrom(const BillingStatusRule& from);
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
  void InternalSwap(BillingStatusRule* other);
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

  // repeated string allowed_statuses = 2;
  int allowed_statuses_size() const;
  void clear_allowed_statuses();
  static const int kAllowedStatusesFieldNumber = 2;
  const ::std::string& allowed_statuses(int index) const;
  ::std::string* mutable_allowed_statuses(int index);
  void set_allowed_statuses(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_allowed_statuses(int index, ::std::string&& value);
  #endif
  void set_allowed_statuses(int index, const char* value);
  void set_allowed_statuses(int index, const char* value, size_t size);
  ::std::string* add_allowed_statuses();
  void add_allowed_statuses(const ::std::string& value);
  #if LANG_CXX11
  void add_allowed_statuses(::std::string&& value);
  #endif
  void add_allowed_statuses(const char* value);
  void add_allowed_statuses(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& allowed_statuses() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_allowed_statuses();

  // string selector = 1;
  void clear_selector();
  static const int kSelectorFieldNumber = 1;
  const ::std::string& selector() const;
  void set_selector(const ::std::string& value);
  #if LANG_CXX11
  void set_selector(::std::string&& value);
  #endif
  void set_selector(const char* value);
  void set_selector(const char* value, size_t size);
  ::std::string* mutable_selector();
  ::std::string* release_selector();
  void set_allocated_selector(::std::string* selector);

  // @@protoc_insertion_point(class_scope:google.api.BillingStatusRule)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> allowed_statuses_;
  ::google::protobuf::internal::ArenaStringPtr selector_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fapi_2fbilling_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Billing

// repeated string metrics = 1;
inline int Billing::metrics_size() const {
  return metrics_.size();
}
inline void Billing::clear_metrics() {
  metrics_.Clear();
}
inline const ::std::string& Billing::metrics(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Billing.metrics)
  return metrics_.Get(index);
}
inline ::std::string* Billing::mutable_metrics(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Billing.metrics)
  return metrics_.Mutable(index);
}
inline void Billing::set_metrics(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Billing.metrics)
  metrics_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Billing::set_metrics(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Billing.metrics)
  metrics_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Billing::set_metrics(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  metrics_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Billing.metrics)
}
inline void Billing::set_metrics(int index, const char* value, size_t size) {
  metrics_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Billing.metrics)
}
inline ::std::string* Billing::add_metrics() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Billing.metrics)
  return metrics_.Add();
}
inline void Billing::add_metrics(const ::std::string& value) {
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Billing.metrics)
}
#if LANG_CXX11
inline void Billing::add_metrics(::std::string&& value) {
  metrics_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Billing.metrics)
}
#endif
inline void Billing::add_metrics(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Billing.metrics)
}
inline void Billing::add_metrics(const char* value, size_t size) {
  metrics_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Billing.metrics)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Billing::metrics() const {
  // @@protoc_insertion_point(field_list:google.api.Billing.metrics)
  return metrics_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Billing::mutable_metrics() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Billing.metrics)
  return &metrics_;
}

// repeated .google.api.BillingStatusRule rules = 5;
inline int Billing::rules_size() const {
  return rules_.size();
}
inline void Billing::clear_rules() {
  rules_.Clear();
}
inline const ::google::api::BillingStatusRule& Billing::rules(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Billing.rules)
  return rules_.Get(index);
}
inline ::google::api::BillingStatusRule* Billing::mutable_rules(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Billing.rules)
  return rules_.Mutable(index);
}
inline ::google::api::BillingStatusRule* Billing::add_rules() {
  // @@protoc_insertion_point(field_add:google.api.Billing.rules)
  return rules_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule >*
Billing::mutable_rules() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Billing.rules)
  return &rules_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::BillingStatusRule >&
Billing::rules() const {
  // @@protoc_insertion_point(field_list:google.api.Billing.rules)
  return rules_;
}

// -------------------------------------------------------------------

// BillingStatusRule

// string selector = 1;
inline void BillingStatusRule::clear_selector() {
  selector_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BillingStatusRule::selector() const {
  // @@protoc_insertion_point(field_get:google.api.BillingStatusRule.selector)
  return selector_.GetNoArena();
}
inline void BillingStatusRule::set_selector(const ::std::string& value) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.BillingStatusRule.selector)
}
#if LANG_CXX11
inline void BillingStatusRule::set_selector(::std::string&& value) {
  
  selector_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.BillingStatusRule.selector)
}
#endif
inline void BillingStatusRule::set_selector(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.BillingStatusRule.selector)
}
inline void BillingStatusRule::set_selector(const char* value, size_t size) {
  
  selector_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.BillingStatusRule.selector)
}
inline ::std::string* BillingStatusRule::mutable_selector() {
  
  // @@protoc_insertion_point(field_mutable:google.api.BillingStatusRule.selector)
  return selector_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BillingStatusRule::release_selector() {
  // @@protoc_insertion_point(field_release:google.api.BillingStatusRule.selector)
  
  return selector_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BillingStatusRule::set_allocated_selector(::std::string* selector) {
  if (selector != NULL) {
    
  } else {
    
  }
  selector_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), selector);
  // @@protoc_insertion_point(field_set_allocated:google.api.BillingStatusRule.selector)
}

// repeated string allowed_statuses = 2;
inline int BillingStatusRule::allowed_statuses_size() const {
  return allowed_statuses_.size();
}
inline void BillingStatusRule::clear_allowed_statuses() {
  allowed_statuses_.Clear();
}
inline const ::std::string& BillingStatusRule::allowed_statuses(int index) const {
  // @@protoc_insertion_point(field_get:google.api.BillingStatusRule.allowed_statuses)
  return allowed_statuses_.Get(index);
}
inline ::std::string* BillingStatusRule::mutable_allowed_statuses(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.BillingStatusRule.allowed_statuses)
  return allowed_statuses_.Mutable(index);
}
inline void BillingStatusRule::set_allowed_statuses(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.BillingStatusRule.allowed_statuses)
  allowed_statuses_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void BillingStatusRule::set_allowed_statuses(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.BillingStatusRule.allowed_statuses)
  allowed_statuses_.Mutable(index)->assign(std::move(value));
}
#endif
inline void BillingStatusRule::set_allowed_statuses(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  allowed_statuses_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.BillingStatusRule.allowed_statuses)
}
inline void BillingStatusRule::set_allowed_statuses(int index, const char* value, size_t size) {
  allowed_statuses_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.BillingStatusRule.allowed_statuses)
}
inline ::std::string* BillingStatusRule::add_allowed_statuses() {
  // @@protoc_insertion_point(field_add_mutable:google.api.BillingStatusRule.allowed_statuses)
  return allowed_statuses_.Add();
}
inline void BillingStatusRule::add_allowed_statuses(const ::std::string& value) {
  allowed_statuses_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.BillingStatusRule.allowed_statuses)
}
#if LANG_CXX11
inline void BillingStatusRule::add_allowed_statuses(::std::string&& value) {
  allowed_statuses_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.BillingStatusRule.allowed_statuses)
}
#endif
inline void BillingStatusRule::add_allowed_statuses(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  allowed_statuses_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.BillingStatusRule.allowed_statuses)
}
inline void BillingStatusRule::add_allowed_statuses(const char* value, size_t size) {
  allowed_statuses_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.BillingStatusRule.allowed_statuses)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BillingStatusRule::allowed_statuses() const {
  // @@protoc_insertion_point(field_list:google.api.BillingStatusRule.allowed_statuses)
  return allowed_statuses_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BillingStatusRule::mutable_allowed_statuses() {
  // @@protoc_insertion_point(field_mutable_list:google.api.BillingStatusRule.allowed_statuses)
  return &allowed_statuses_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fapi_2fbilling_2eproto__INCLUDED
