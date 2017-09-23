// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/appengine/v1/location.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/appengine/v1/location.pb.h"

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
namespace appengine {
namespace v1 {
class LocationMetadataDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LocationMetadata> {
} _LocationMetadata_default_instance_;

namespace protobuf_google_2fappengine_2fv1_2flocation_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

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
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocationMetadata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocationMetadata, standard_environment_available_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocationMetadata, flexible_environment_available_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(LocationMetadata)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LocationMetadata_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/appengine/v1/location.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _LocationMetadata_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  ::google::type::protobuf_google_2ftype_2flatlng_2eproto::InitDefaults();
  _LocationMetadata_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\"google/appengine/v1/location.proto\022\023go"
      "ogle.appengine.v1\032\034google/api/annotation"
      "s.proto\032\030google/type/latlng.proto\"b\n\020Loc"
      "ationMetadata\022&\n\036standard_environment_av"
      "ailable\030\002 \001(\010\022&\n\036flexible_environment_av"
      "ailable\030\004 \001(\010Bh\n\027com.google.appengine.v1"
      "B\rLocationProtoP\001Z<google.golang.org/gen"
      "proto/googleapis/appengine/v1;appengineb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 327);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/appengine/v1/location.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::google::type::protobuf_google_2ftype_2flatlng_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fappengine_2fv1_2flocation_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LocationMetadata::kStandardEnvironmentAvailableFieldNumber;
const int LocationMetadata::kFlexibleEnvironmentAvailableFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LocationMetadata::LocationMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fappengine_2fv1_2flocation_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.appengine.v1.LocationMetadata)
}
LocationMetadata::LocationMetadata(const LocationMetadata& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&standard_environment_available_, &from.standard_environment_available_,
    reinterpret_cast<char*>(&flexible_environment_available_) -
    reinterpret_cast<char*>(&standard_environment_available_) + sizeof(flexible_environment_available_));
  // @@protoc_insertion_point(copy_constructor:google.appengine.v1.LocationMetadata)
}

void LocationMetadata::SharedCtor() {
  ::memset(&standard_environment_available_, 0, reinterpret_cast<char*>(&flexible_environment_available_) -
    reinterpret_cast<char*>(&standard_environment_available_) + sizeof(flexible_environment_available_));
  _cached_size_ = 0;
}

LocationMetadata::~LocationMetadata() {
  // @@protoc_insertion_point(destructor:google.appengine.v1.LocationMetadata)
  SharedDtor();
}

void LocationMetadata::SharedDtor() {
}

void LocationMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LocationMetadata::descriptor() {
  protobuf_google_2fappengine_2fv1_2flocation_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fappengine_2fv1_2flocation_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LocationMetadata& LocationMetadata::default_instance() {
  protobuf_google_2fappengine_2fv1_2flocation_2eproto::InitDefaults();
  return *internal_default_instance();
}

LocationMetadata* LocationMetadata::New(::google::protobuf::Arena* arena) const {
  LocationMetadata* n = new LocationMetadata;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LocationMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:google.appengine.v1.LocationMetadata)
  ::memset(&standard_environment_available_, 0, reinterpret_cast<char*>(&flexible_environment_available_) -
    reinterpret_cast<char*>(&standard_environment_available_) + sizeof(flexible_environment_available_));
}

bool LocationMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.appengine.v1.LocationMetadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool standard_environment_available = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &standard_environment_available_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool flexible_environment_available = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flexible_environment_available_)));
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
  // @@protoc_insertion_point(parse_success:google.appengine.v1.LocationMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.appengine.v1.LocationMetadata)
  return false;
#undef DO_
}

void LocationMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.appengine.v1.LocationMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool standard_environment_available = 2;
  if (this->standard_environment_available() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->standard_environment_available(), output);
  }

  // bool flexible_environment_available = 4;
  if (this->flexible_environment_available() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->flexible_environment_available(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.appengine.v1.LocationMetadata)
}

::google::protobuf::uint8* LocationMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.appengine.v1.LocationMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool standard_environment_available = 2;
  if (this->standard_environment_available() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->standard_environment_available(), target);
  }

  // bool flexible_environment_available = 4;
  if (this->flexible_environment_available() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->flexible_environment_available(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.appengine.v1.LocationMetadata)
  return target;
}

size_t LocationMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.appengine.v1.LocationMetadata)
  size_t total_size = 0;

  // bool standard_environment_available = 2;
  if (this->standard_environment_available() != 0) {
    total_size += 1 + 1;
  }

  // bool flexible_environment_available = 4;
  if (this->flexible_environment_available() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LocationMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.appengine.v1.LocationMetadata)
  GOOGLE_DCHECK_NE(&from, this);
  const LocationMetadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LocationMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.appengine.v1.LocationMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.appengine.v1.LocationMetadata)
    MergeFrom(*source);
  }
}

void LocationMetadata::MergeFrom(const LocationMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.appengine.v1.LocationMetadata)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.standard_environment_available() != 0) {
    set_standard_environment_available(from.standard_environment_available());
  }
  if (from.flexible_environment_available() != 0) {
    set_flexible_environment_available(from.flexible_environment_available());
  }
}

void LocationMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.appengine.v1.LocationMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LocationMetadata::CopyFrom(const LocationMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.appengine.v1.LocationMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LocationMetadata::IsInitialized() const {
  return true;
}

void LocationMetadata::Swap(LocationMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LocationMetadata::InternalSwap(LocationMetadata* other) {
  std::swap(standard_environment_available_, other->standard_environment_available_);
  std::swap(flexible_environment_available_, other->flexible_environment_available_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LocationMetadata::GetMetadata() const {
  protobuf_google_2fappengine_2fv1_2flocation_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fappengine_2fv1_2flocation_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LocationMetadata

// bool standard_environment_available = 2;
void LocationMetadata::clear_standard_environment_available() {
  standard_environment_available_ = false;
}
bool LocationMetadata::standard_environment_available() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.LocationMetadata.standard_environment_available)
  return standard_environment_available_;
}
void LocationMetadata::set_standard_environment_available(bool value) {
  
  standard_environment_available_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.LocationMetadata.standard_environment_available)
}

// bool flexible_environment_available = 4;
void LocationMetadata::clear_flexible_environment_available() {
  flexible_environment_available_ = false;
}
bool LocationMetadata::flexible_environment_available() const {
  // @@protoc_insertion_point(field_get:google.appengine.v1.LocationMetadata.flexible_environment_available)
  return flexible_environment_available_;
}
void LocationMetadata::set_flexible_environment_available(bool value) {
  
  flexible_environment_available_ = value;
  // @@protoc_insertion_point(field_set:google.appengine.v1.LocationMetadata.flexible_environment_available)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace appengine
}  // namespace google

// @@protoc_insertion_point(global_scope)
