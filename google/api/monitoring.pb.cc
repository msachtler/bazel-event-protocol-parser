// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/monitoring.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/monitoring.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace api {
class Monitoring_MonitoringDestinationDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Monitoring_MonitoringDestination> {
} _Monitoring_MonitoringDestination_default_instance_;
class MonitoringDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Monitoring> {
} _Monitoring_default_instance_;

namespace protobuf_google_2fapi_2fmonitoring_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Monitoring_MonitoringDestination, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Monitoring_MonitoringDestination, monitored_resource_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Monitoring_MonitoringDestination, metrics_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Monitoring, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Monitoring, producer_destinations_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Monitoring, consumer_destinations_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Monitoring_MonitoringDestination)},
  { 7, -1, sizeof(Monitoring)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Monitoring_MonitoringDestination_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Monitoring_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/api/monitoring.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Monitoring_MonitoringDestination_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Monitoring_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  _Monitoring_MonitoringDestination_default_instance_.DefaultConstruct();
  _Monitoring_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\033google/api/monitoring.proto\022\ngoogle.ap"
      "i\032\034google/api/annotations.proto\"\354\001\n\nMoni"
      "toring\022K\n\025producer_destinations\030\001 \003(\0132,."
      "google.api.Monitoring.MonitoringDestinat"
      "ion\022K\n\025consumer_destinations\030\002 \003(\0132,.goo"
      "gle.api.Monitoring.MonitoringDestination"
      "\032D\n\025MonitoringDestination\022\032\n\022monitored_r"
      "esource\030\001 \001(\t\022\017\n\007metrics\030\002 \003(\tBq\n\016com.go"
      "ogle.apiB\017MonitoringProtoP\001ZEgoogle.gola"
      "ng.org/genproto/googleapis/api/serviceco"
      "nfig;serviceconfig\242\002\004GAPIb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 433);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/monitoring.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_google_2fapi_2fmonitoring_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Monitoring_MonitoringDestination::kMonitoredResourceFieldNumber;
const int Monitoring_MonitoringDestination::kMetricsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Monitoring_MonitoringDestination::Monitoring_MonitoringDestination()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2fmonitoring_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Monitoring.MonitoringDestination)
}
Monitoring_MonitoringDestination::Monitoring_MonitoringDestination(const Monitoring_MonitoringDestination& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      metrics_(from.metrics_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  monitored_resource_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.monitored_resource().size() > 0) {
    monitored_resource_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.monitored_resource_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.Monitoring.MonitoringDestination)
}

void Monitoring_MonitoringDestination::SharedCtor() {
  monitored_resource_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Monitoring_MonitoringDestination::~Monitoring_MonitoringDestination() {
  // @@protoc_insertion_point(destructor:google.api.Monitoring.MonitoringDestination)
  SharedDtor();
}

void Monitoring_MonitoringDestination::SharedDtor() {
  monitored_resource_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Monitoring_MonitoringDestination::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Monitoring_MonitoringDestination::descriptor() {
  protobuf_google_2fapi_2fmonitoring_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fmonitoring_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Monitoring_MonitoringDestination& Monitoring_MonitoringDestination::default_instance() {
  protobuf_google_2fapi_2fmonitoring_2eproto::InitDefaults();
  return *internal_default_instance();
}

Monitoring_MonitoringDestination* Monitoring_MonitoringDestination::New(::google::protobuf::Arena* arena) const {
  Monitoring_MonitoringDestination* n = new Monitoring_MonitoringDestination;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Monitoring_MonitoringDestination::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Monitoring.MonitoringDestination)
  metrics_.Clear();
  monitored_resource_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Monitoring_MonitoringDestination::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.Monitoring.MonitoringDestination)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string monitored_resource = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_monitored_resource()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->monitored_resource().data(), this->monitored_resource().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Monitoring.MonitoringDestination.monitored_resource"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string metrics = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_metrics()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->metrics(this->metrics_size() - 1).data(),
            this->metrics(this->metrics_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.Monitoring.MonitoringDestination.metrics"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.api.Monitoring.MonitoringDestination)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.Monitoring.MonitoringDestination)
  return false;
#undef DO_
}

void Monitoring_MonitoringDestination::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.Monitoring.MonitoringDestination)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string monitored_resource = 1;
  if (this->monitored_resource().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->monitored_resource().data(), this->monitored_resource().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Monitoring.MonitoringDestination.monitored_resource");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->monitored_resource(), output);
  }

  // repeated string metrics = 2;
  for (int i = 0, n = this->metrics_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->metrics(i).data(), this->metrics(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Monitoring.MonitoringDestination.metrics");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->metrics(i), output);
  }

  // @@protoc_insertion_point(serialize_end:google.api.Monitoring.MonitoringDestination)
}

::google::protobuf::uint8* Monitoring_MonitoringDestination::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Monitoring.MonitoringDestination)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string monitored_resource = 1;
  if (this->monitored_resource().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->monitored_resource().data(), this->monitored_resource().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Monitoring.MonitoringDestination.monitored_resource");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->monitored_resource(), target);
  }

  // repeated string metrics = 2;
  for (int i = 0, n = this->metrics_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->metrics(i).data(), this->metrics(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.Monitoring.MonitoringDestination.metrics");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->metrics(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.api.Monitoring.MonitoringDestination)
  return target;
}

size_t Monitoring_MonitoringDestination::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Monitoring.MonitoringDestination)
  size_t total_size = 0;

  // repeated string metrics = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->metrics_size());
  for (int i = 0, n = this->metrics_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->metrics(i));
  }

  // string monitored_resource = 1;
  if (this->monitored_resource().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->monitored_resource());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Monitoring_MonitoringDestination::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Monitoring.MonitoringDestination)
  GOOGLE_DCHECK_NE(&from, this);
  const Monitoring_MonitoringDestination* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Monitoring_MonitoringDestination>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Monitoring.MonitoringDestination)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Monitoring.MonitoringDestination)
    MergeFrom(*source);
  }
}

void Monitoring_MonitoringDestination::MergeFrom(const Monitoring_MonitoringDestination& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Monitoring.MonitoringDestination)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  metrics_.MergeFrom(from.metrics_);
  if (from.monitored_resource().size() > 0) {

    monitored_resource_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.monitored_resource_);
  }
}

void Monitoring_MonitoringDestination::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Monitoring.MonitoringDestination)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Monitoring_MonitoringDestination::CopyFrom(const Monitoring_MonitoringDestination& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Monitoring.MonitoringDestination)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Monitoring_MonitoringDestination::IsInitialized() const {
  return true;
}

void Monitoring_MonitoringDestination::Swap(Monitoring_MonitoringDestination* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Monitoring_MonitoringDestination::InternalSwap(Monitoring_MonitoringDestination* other) {
  metrics_.InternalSwap(&other->metrics_);
  monitored_resource_.Swap(&other->monitored_resource_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Monitoring_MonitoringDestination::GetMetadata() const {
  protobuf_google_2fapi_2fmonitoring_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fmonitoring_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Monitoring_MonitoringDestination

// string monitored_resource = 1;
void Monitoring_MonitoringDestination::clear_monitored_resource() {
  monitored_resource_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Monitoring_MonitoringDestination::monitored_resource() const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.MonitoringDestination.monitored_resource)
  return monitored_resource_.GetNoArena();
}
void Monitoring_MonitoringDestination::set_monitored_resource(const ::std::string& value) {
  
  monitored_resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
#if LANG_CXX11
void Monitoring_MonitoringDestination::set_monitored_resource(::std::string&& value) {
  
  monitored_resource_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
#endif
void Monitoring_MonitoringDestination::set_monitored_resource(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  monitored_resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
void Monitoring_MonitoringDestination::set_monitored_resource(const char* value, size_t size) {
  
  monitored_resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
::std::string* Monitoring_MonitoringDestination::mutable_monitored_resource() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.MonitoringDestination.monitored_resource)
  return monitored_resource_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Monitoring_MonitoringDestination::release_monitored_resource() {
  // @@protoc_insertion_point(field_release:google.api.Monitoring.MonitoringDestination.monitored_resource)
  
  return monitored_resource_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Monitoring_MonitoringDestination::set_allocated_monitored_resource(::std::string* monitored_resource) {
  if (monitored_resource != NULL) {
    
  } else {
    
  }
  monitored_resource_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), monitored_resource);
  // @@protoc_insertion_point(field_set_allocated:google.api.Monitoring.MonitoringDestination.monitored_resource)
}

// repeated string metrics = 2;
int Monitoring_MonitoringDestination::metrics_size() const {
  return metrics_.size();
}
void Monitoring_MonitoringDestination::clear_metrics() {
  metrics_.Clear();
}
const ::std::string& Monitoring_MonitoringDestination::metrics(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_.Get(index);
}
::std::string* Monitoring_MonitoringDestination::mutable_metrics(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_.Mutable(index);
}
void Monitoring_MonitoringDestination::set_metrics(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Monitoring.MonitoringDestination.metrics)
  metrics_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void Monitoring_MonitoringDestination::set_metrics(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Monitoring.MonitoringDestination.metrics)
  metrics_.Mutable(index)->assign(std::move(value));
}
#endif
void Monitoring_MonitoringDestination::set_metrics(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  metrics_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Monitoring.MonitoringDestination.metrics)
}
void Monitoring_MonitoringDestination::set_metrics(int index, const char* value, size_t size) {
  metrics_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Monitoring.MonitoringDestination.metrics)
}
::std::string* Monitoring_MonitoringDestination::add_metrics() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_.Add();
}
void Monitoring_MonitoringDestination::add_metrics(const ::std::string& value) {
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Monitoring.MonitoringDestination.metrics)
}
#if LANG_CXX11
void Monitoring_MonitoringDestination::add_metrics(::std::string&& value) {
  metrics_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Monitoring.MonitoringDestination.metrics)
}
#endif
void Monitoring_MonitoringDestination::add_metrics(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Monitoring.MonitoringDestination.metrics)
}
void Monitoring_MonitoringDestination::add_metrics(const char* value, size_t size) {
  metrics_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Monitoring.MonitoringDestination.metrics)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Monitoring_MonitoringDestination::metrics() const {
  // @@protoc_insertion_point(field_list:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Monitoring_MonitoringDestination::mutable_metrics() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Monitoring.MonitoringDestination.metrics)
  return &metrics_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Monitoring::kProducerDestinationsFieldNumber;
const int Monitoring::kConsumerDestinationsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Monitoring::Monitoring()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2fmonitoring_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.Monitoring)
}
Monitoring::Monitoring(const Monitoring& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      producer_destinations_(from.producer_destinations_),
      consumer_destinations_(from.consumer_destinations_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.api.Monitoring)
}

void Monitoring::SharedCtor() {
  _cached_size_ = 0;
}

Monitoring::~Monitoring() {
  // @@protoc_insertion_point(destructor:google.api.Monitoring)
  SharedDtor();
}

void Monitoring::SharedDtor() {
}

void Monitoring::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Monitoring::descriptor() {
  protobuf_google_2fapi_2fmonitoring_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fmonitoring_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Monitoring& Monitoring::default_instance() {
  protobuf_google_2fapi_2fmonitoring_2eproto::InitDefaults();
  return *internal_default_instance();
}

Monitoring* Monitoring::New(::google::protobuf::Arena* arena) const {
  Monitoring* n = new Monitoring;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Monitoring::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.Monitoring)
  producer_destinations_.Clear();
  consumer_destinations_.Clear();
}

bool Monitoring::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.Monitoring)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_producer_destinations()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_consumer_destinations()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.api.Monitoring)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.Monitoring)
  return false;
#undef DO_
}

void Monitoring::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.Monitoring)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
  for (unsigned int i = 0, n = this->producer_destinations_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->producer_destinations(i), output);
  }

  // repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
  for (unsigned int i = 0, n = this->consumer_destinations_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->consumer_destinations(i), output);
  }

  // @@protoc_insertion_point(serialize_end:google.api.Monitoring)
}

::google::protobuf::uint8* Monitoring::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.Monitoring)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
  for (unsigned int i = 0, n = this->producer_destinations_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->producer_destinations(i), deterministic, target);
  }

  // repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
  for (unsigned int i = 0, n = this->consumer_destinations_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->consumer_destinations(i), deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.api.Monitoring)
  return target;
}

size_t Monitoring::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.Monitoring)
  size_t total_size = 0;

  // repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
  {
    unsigned int count = this->producer_destinations_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->producer_destinations(i));
    }
  }

  // repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
  {
    unsigned int count = this->consumer_destinations_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->consumer_destinations(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Monitoring::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.Monitoring)
  GOOGLE_DCHECK_NE(&from, this);
  const Monitoring* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Monitoring>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.Monitoring)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.Monitoring)
    MergeFrom(*source);
  }
}

void Monitoring::MergeFrom(const Monitoring& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.Monitoring)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  producer_destinations_.MergeFrom(from.producer_destinations_);
  consumer_destinations_.MergeFrom(from.consumer_destinations_);
}

void Monitoring::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.Monitoring)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Monitoring::CopyFrom(const Monitoring& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.Monitoring)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Monitoring::IsInitialized() const {
  return true;
}

void Monitoring::Swap(Monitoring* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Monitoring::InternalSwap(Monitoring* other) {
  producer_destinations_.InternalSwap(&other->producer_destinations_);
  consumer_destinations_.InternalSwap(&other->consumer_destinations_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Monitoring::GetMetadata() const {
  protobuf_google_2fapi_2fmonitoring_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fmonitoring_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Monitoring

// repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
int Monitoring::producer_destinations_size() const {
  return producer_destinations_.size();
}
void Monitoring::clear_producer_destinations() {
  producer_destinations_.Clear();
}
const ::google::api::Monitoring_MonitoringDestination& Monitoring::producer_destinations(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.producer_destinations)
  return producer_destinations_.Get(index);
}
::google::api::Monitoring_MonitoringDestination* Monitoring::mutable_producer_destinations(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.producer_destinations)
  return producer_destinations_.Mutable(index);
}
::google::api::Monitoring_MonitoringDestination* Monitoring::add_producer_destinations() {
  // @@protoc_insertion_point(field_add:google.api.Monitoring.producer_destinations)
  return producer_destinations_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
Monitoring::mutable_producer_destinations() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Monitoring.producer_destinations)
  return &producer_destinations_;
}
const ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
Monitoring::producer_destinations() const {
  // @@protoc_insertion_point(field_list:google.api.Monitoring.producer_destinations)
  return producer_destinations_;
}

// repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
int Monitoring::consumer_destinations_size() const {
  return consumer_destinations_.size();
}
void Monitoring::clear_consumer_destinations() {
  consumer_destinations_.Clear();
}
const ::google::api::Monitoring_MonitoringDestination& Monitoring::consumer_destinations(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_.Get(index);
}
::google::api::Monitoring_MonitoringDestination* Monitoring::mutable_consumer_destinations(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_.Mutable(index);
}
::google::api::Monitoring_MonitoringDestination* Monitoring::add_consumer_destinations() {
  // @@protoc_insertion_point(field_add:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_.Add();
}
::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
Monitoring::mutable_consumer_destinations() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Monitoring.consumer_destinations)
  return &consumer_destinations_;
}
const ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
Monitoring::consumer_destinations() const {
  // @@protoc_insertion_point(field_list:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
