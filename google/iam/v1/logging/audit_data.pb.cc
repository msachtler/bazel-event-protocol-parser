// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/iam/v1/logging/audit_data.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/iam/v1/logging/audit_data.pb.h"

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
namespace iam {
namespace v1 {
namespace logging {
class AuditDataDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<AuditData> {
} _AuditData_default_instance_;

namespace protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuditData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuditData, policy_delta_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(AuditData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_AuditData_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/iam/v1/logging/audit_data.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _AuditData_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  ::google::iam::v1::protobuf_google_2fiam_2fv1_2fpolicy_2eproto::InitDefaults();
  _AuditData_default_instance_.DefaultConstruct();
  _AuditData_default_instance_.get_mutable()->policy_delta_ = const_cast< ::google::iam::v1::PolicyDelta*>(
      ::google::iam::v1::PolicyDelta::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n&google/iam/v1/logging/audit_data.proto"
      "\022\025google.iam.v1.logging\032\034google/api/anno"
      "tations.proto\032\032google/iam/v1/policy.prot"
      "o\"=\n\tAuditData\0220\n\014policy_delta\030\002 \001(\0132\032.g"
      "oogle.iam.v1.PolicyDeltaB\211\001\n\031com.google."
      "iam.v1.loggingB\016AuditDataProtoP\001Z<google"
      ".golang.org/genproto/googleapis/iam/v1/l"
      "ogging;logging\252\002\033Google.Cloud.Iam.V1.Log"
      "gingb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 332);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/iam/v1/logging/audit_data.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::google::iam::v1::protobuf_google_2fiam_2fv1_2fpolicy_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AuditData::kPolicyDeltaFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AuditData::AuditData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.iam.v1.logging.AuditData)
}
AuditData::AuditData(const AuditData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_policy_delta()) {
    policy_delta_ = new ::google::iam::v1::PolicyDelta(*from.policy_delta_);
  } else {
    policy_delta_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:google.iam.v1.logging.AuditData)
}

void AuditData::SharedCtor() {
  policy_delta_ = NULL;
  _cached_size_ = 0;
}

AuditData::~AuditData() {
  // @@protoc_insertion_point(destructor:google.iam.v1.logging.AuditData)
  SharedDtor();
}

void AuditData::SharedDtor() {
  if (this != internal_default_instance()) {
    delete policy_delta_;
  }
}

void AuditData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AuditData::descriptor() {
  protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AuditData& AuditData::default_instance() {
  protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto::InitDefaults();
  return *internal_default_instance();
}

AuditData* AuditData::New(::google::protobuf::Arena* arena) const {
  AuditData* n = new AuditData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AuditData::Clear() {
// @@protoc_insertion_point(message_clear_start:google.iam.v1.logging.AuditData)
  if (GetArenaNoVirtual() == NULL && policy_delta_ != NULL) {
    delete policy_delta_;
  }
  policy_delta_ = NULL;
}

bool AuditData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.iam.v1.logging.AuditData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.iam.v1.PolicyDelta policy_delta = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_policy_delta()));
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
  // @@protoc_insertion_point(parse_success:google.iam.v1.logging.AuditData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.iam.v1.logging.AuditData)
  return false;
#undef DO_
}

void AuditData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.iam.v1.logging.AuditData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.iam.v1.PolicyDelta policy_delta = 2;
  if (this->has_policy_delta()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->policy_delta_, output);
  }

  // @@protoc_insertion_point(serialize_end:google.iam.v1.logging.AuditData)
}

::google::protobuf::uint8* AuditData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.iam.v1.logging.AuditData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.iam.v1.PolicyDelta policy_delta = 2;
  if (this->has_policy_delta()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->policy_delta_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.iam.v1.logging.AuditData)
  return target;
}

size_t AuditData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.iam.v1.logging.AuditData)
  size_t total_size = 0;

  // .google.iam.v1.PolicyDelta policy_delta = 2;
  if (this->has_policy_delta()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->policy_delta_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AuditData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.iam.v1.logging.AuditData)
  GOOGLE_DCHECK_NE(&from, this);
  const AuditData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AuditData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.iam.v1.logging.AuditData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.iam.v1.logging.AuditData)
    MergeFrom(*source);
  }
}

void AuditData::MergeFrom(const AuditData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.iam.v1.logging.AuditData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_policy_delta()) {
    mutable_policy_delta()->::google::iam::v1::PolicyDelta::MergeFrom(from.policy_delta());
  }
}

void AuditData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.iam.v1.logging.AuditData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuditData::CopyFrom(const AuditData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.iam.v1.logging.AuditData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuditData::IsInitialized() const {
  return true;
}

void AuditData::Swap(AuditData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AuditData::InternalSwap(AuditData* other) {
  std::swap(policy_delta_, other->policy_delta_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AuditData::GetMetadata() const {
  protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fiam_2fv1_2flogging_2faudit_5fdata_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AuditData

// .google.iam.v1.PolicyDelta policy_delta = 2;
bool AuditData::has_policy_delta() const {
  return this != internal_default_instance() && policy_delta_ != NULL;
}
void AuditData::clear_policy_delta() {
  if (GetArenaNoVirtual() == NULL && policy_delta_ != NULL) delete policy_delta_;
  policy_delta_ = NULL;
}
const ::google::iam::v1::PolicyDelta& AuditData::policy_delta() const {
  // @@protoc_insertion_point(field_get:google.iam.v1.logging.AuditData.policy_delta)
  return policy_delta_ != NULL ? *policy_delta_
                         : *::google::iam::v1::PolicyDelta::internal_default_instance();
}
::google::iam::v1::PolicyDelta* AuditData::mutable_policy_delta() {
  
  if (policy_delta_ == NULL) {
    policy_delta_ = new ::google::iam::v1::PolicyDelta;
  }
  // @@protoc_insertion_point(field_mutable:google.iam.v1.logging.AuditData.policy_delta)
  return policy_delta_;
}
::google::iam::v1::PolicyDelta* AuditData::release_policy_delta() {
  // @@protoc_insertion_point(field_release:google.iam.v1.logging.AuditData.policy_delta)
  
  ::google::iam::v1::PolicyDelta* temp = policy_delta_;
  policy_delta_ = NULL;
  return temp;
}
void AuditData::set_allocated_policy_delta(::google::iam::v1::PolicyDelta* policy_delta) {
  delete policy_delta_;
  if (policy_delta != NULL && policy_delta->GetArena() != NULL) {
    ::google::iam::v1::PolicyDelta* new_policy_delta = new ::google::iam::v1::PolicyDelta;
    new_policy_delta->CopyFrom(*policy_delta);
    policy_delta = new_policy_delta;
  }
  policy_delta_ = policy_delta;
  if (policy_delta) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.iam.v1.logging.AuditData.policy_delta)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace logging
}  // namespace v1
}  // namespace iam
}  // namespace google

// @@protoc_insertion_point(global_scope)
