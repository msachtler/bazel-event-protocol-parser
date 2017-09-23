// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/ml/v1/operation_metadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/cloud/ml/v1/operation_metadata.pb.h"

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
namespace cloud {
namespace ml {
namespace v1 {
class OperationMetadataDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<OperationMetadata> {
} _OperationMetadata_default_instance_;

namespace protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, create_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, start_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, end_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, is_cancellation_requested_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, operation_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, model_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OperationMetadata, version_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(OperationMetadata)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_OperationMetadata_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/cloud/ml/v1/operation_metadata.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
  _OperationMetadata_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  ::google::cloud::ml::v1::protobuf_google_2fcloud_2fml_2fv1_2fmodel_5fservice_2eproto::InitDefaults();
  ::google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::InitDefaults();
  _OperationMetadata_default_instance_.DefaultConstruct();
  _OperationMetadata_default_instance_.get_mutable()->create_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  _OperationMetadata_default_instance_.get_mutable()->start_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  _OperationMetadata_default_instance_.get_mutable()->end_time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  _OperationMetadata_default_instance_.get_mutable()->version_ = const_cast< ::google::cloud::ml::v1::Version*>(
      ::google::cloud::ml::v1::Version::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n+google/cloud/ml/v1/operation_metadata."
      "proto\022\022google.cloud.ml.v1\032\034google/api/an"
      "notations.proto\032&google/cloud/ml/v1/mode"
      "l_service.proto\032\037google/protobuf/timesta"
      "mp.proto\"\277\003\n\021OperationMetadata\022/\n\013create"
      "_time\030\001 \001(\0132\032.google.protobuf.Timestamp\022"
      ".\n\nstart_time\030\002 \001(\0132\032.google.protobuf.Ti"
      "mestamp\022,\n\010end_time\030\003 \001(\0132\032.google.proto"
      "buf.Timestamp\022!\n\031is_cancellation_request"
      "ed\030\004 \001(\010\022K\n\016operation_type\030\005 \001(\01623.googl"
      "e.cloud.ml.v1.OperationMetadata.Operatio"
      "nType\022\022\n\nmodel_name\030\006 \001(\t\022,\n\007version\030\007 \001"
      "(\0132\033.google.cloud.ml.v1.Version\"i\n\rOpera"
      "tionType\022\036\n\032OPERATION_TYPE_UNSPECIFIED\020\000"
      "\022\022\n\016CREATE_VERSION\020\001\022\022\n\016DELETE_VERSION\020\002"
      "\022\020\n\014DELETE_MODEL\020\003Bl\n\032com.google.cloud.m"
      "l.api.v1B\026OperationMetadataProtoP\001Z4goog"
      "le.golang.org/genproto/googleapis/cloud/"
      "ml/v1;mlb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 736);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/cloud/ml/v1/operation_metadata.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::google::cloud::ml::v1::protobuf_google_2fcloud_2fml_2fv1_2fmodel_5fservice_2eproto::AddDescriptors();
  ::google::protobuf::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto

const ::google::protobuf::EnumDescriptor* OperationMetadata_OperationType_descriptor() {
  protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto::file_level_enum_descriptors[0];
}
bool OperationMetadata_OperationType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const OperationMetadata_OperationType OperationMetadata::OPERATION_TYPE_UNSPECIFIED;
const OperationMetadata_OperationType OperationMetadata::CREATE_VERSION;
const OperationMetadata_OperationType OperationMetadata::DELETE_VERSION;
const OperationMetadata_OperationType OperationMetadata::DELETE_MODEL;
const OperationMetadata_OperationType OperationMetadata::OperationType_MIN;
const OperationMetadata_OperationType OperationMetadata::OperationType_MAX;
const int OperationMetadata::OperationType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationMetadata::kCreateTimeFieldNumber;
const int OperationMetadata::kStartTimeFieldNumber;
const int OperationMetadata::kEndTimeFieldNumber;
const int OperationMetadata::kIsCancellationRequestedFieldNumber;
const int OperationMetadata::kOperationTypeFieldNumber;
const int OperationMetadata::kModelNameFieldNumber;
const int OperationMetadata::kVersionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationMetadata::OperationMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.cloud.ml.v1.OperationMetadata)
}
OperationMetadata::OperationMetadata(const OperationMetadata& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  model_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.model_name().size() > 0) {
    model_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.model_name_);
  }
  if (from.has_create_time()) {
    create_time_ = new ::google::protobuf::Timestamp(*from.create_time_);
  } else {
    create_time_ = NULL;
  }
  if (from.has_start_time()) {
    start_time_ = new ::google::protobuf::Timestamp(*from.start_time_);
  } else {
    start_time_ = NULL;
  }
  if (from.has_end_time()) {
    end_time_ = new ::google::protobuf::Timestamp(*from.end_time_);
  } else {
    end_time_ = NULL;
  }
  if (from.has_version()) {
    version_ = new ::google::cloud::ml::v1::Version(*from.version_);
  } else {
    version_ = NULL;
  }
  ::memcpy(&is_cancellation_requested_, &from.is_cancellation_requested_,
    reinterpret_cast<char*>(&operation_type_) -
    reinterpret_cast<char*>(&is_cancellation_requested_) + sizeof(operation_type_));
  // @@protoc_insertion_point(copy_constructor:google.cloud.ml.v1.OperationMetadata)
}

void OperationMetadata::SharedCtor() {
  model_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&create_time_, 0, reinterpret_cast<char*>(&operation_type_) -
    reinterpret_cast<char*>(&create_time_) + sizeof(operation_type_));
  _cached_size_ = 0;
}

OperationMetadata::~OperationMetadata() {
  // @@protoc_insertion_point(destructor:google.cloud.ml.v1.OperationMetadata)
  SharedDtor();
}

void OperationMetadata::SharedDtor() {
  model_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete create_time_;
  }
  if (this != internal_default_instance()) {
    delete start_time_;
  }
  if (this != internal_default_instance()) {
    delete end_time_;
  }
  if (this != internal_default_instance()) {
    delete version_;
  }
}

void OperationMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OperationMetadata::descriptor() {
  protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const OperationMetadata& OperationMetadata::default_instance() {
  protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto::InitDefaults();
  return *internal_default_instance();
}

OperationMetadata* OperationMetadata::New(::google::protobuf::Arena* arena) const {
  OperationMetadata* n = new OperationMetadata;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OperationMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.ml.v1.OperationMetadata)
  model_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && create_time_ != NULL) {
    delete create_time_;
  }
  create_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && start_time_ != NULL) {
    delete start_time_;
  }
  start_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) {
    delete end_time_;
  }
  end_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && version_ != NULL) {
    delete version_;
  }
  version_ = NULL;
  ::memset(&is_cancellation_requested_, 0, reinterpret_cast<char*>(&operation_type_) -
    reinterpret_cast<char*>(&is_cancellation_requested_) + sizeof(operation_type_));
}

bool OperationMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.cloud.ml.v1.OperationMetadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.Timestamp create_time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_create_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp start_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_start_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp end_time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_end_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_cancellation_requested = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_cancellation_requested_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.cloud.ml.v1.OperationMetadata.OperationType operation_type = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_operation_type(static_cast< ::google::cloud::ml::v1::OperationMetadata_OperationType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string model_name = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_model_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->model_name().data(), this->model_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.cloud.ml.v1.OperationMetadata.model_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.cloud.ml.v1.Version version = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_version()));
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
  // @@protoc_insertion_point(parse_success:google.cloud.ml.v1.OperationMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.cloud.ml.v1.OperationMetadata)
  return false;
#undef DO_
}

void OperationMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.cloud.ml.v1.OperationMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp create_time = 1;
  if (this->has_create_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->create_time_, output);
  }

  // .google.protobuf.Timestamp start_time = 2;
  if (this->has_start_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->start_time_, output);
  }

  // .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->end_time_, output);
  }

  // bool is_cancellation_requested = 4;
  if (this->is_cancellation_requested() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_cancellation_requested(), output);
  }

  // .google.cloud.ml.v1.OperationMetadata.OperationType operation_type = 5;
  if (this->operation_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->operation_type(), output);
  }

  // string model_name = 6;
  if (this->model_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_name().data(), this->model_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.ml.v1.OperationMetadata.model_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->model_name(), output);
  }

  // .google.cloud.ml.v1.Version version = 7;
  if (this->has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->version_, output);
  }

  // @@protoc_insertion_point(serialize_end:google.cloud.ml.v1.OperationMetadata)
}

::google::protobuf::uint8* OperationMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.ml.v1.OperationMetadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp create_time = 1;
  if (this->has_create_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->create_time_, deterministic, target);
  }

  // .google.protobuf.Timestamp start_time = 2;
  if (this->has_start_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->start_time_, deterministic, target);
  }

  // .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->end_time_, deterministic, target);
  }

  // bool is_cancellation_requested = 4;
  if (this->is_cancellation_requested() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_cancellation_requested(), target);
  }

  // .google.cloud.ml.v1.OperationMetadata.OperationType operation_type = 5;
  if (this->operation_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->operation_type(), target);
  }

  // string model_name = 6;
  if (this->model_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_name().data(), this->model_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.cloud.ml.v1.OperationMetadata.model_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->model_name(), target);
  }

  // .google.cloud.ml.v1.Version version = 7;
  if (this->has_version()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->version_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.ml.v1.OperationMetadata)
  return target;
}

size_t OperationMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.ml.v1.OperationMetadata)
  size_t total_size = 0;

  // string model_name = 6;
  if (this->model_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->model_name());
  }

  // .google.protobuf.Timestamp create_time = 1;
  if (this->has_create_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->create_time_);
  }

  // .google.protobuf.Timestamp start_time = 2;
  if (this->has_start_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->start_time_);
  }

  // .google.protobuf.Timestamp end_time = 3;
  if (this->has_end_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->end_time_);
  }

  // .google.cloud.ml.v1.Version version = 7;
  if (this->has_version()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->version_);
  }

  // bool is_cancellation_requested = 4;
  if (this->is_cancellation_requested() != 0) {
    total_size += 1 + 1;
  }

  // .google.cloud.ml.v1.OperationMetadata.OperationType operation_type = 5;
  if (this->operation_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->operation_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void OperationMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.ml.v1.OperationMetadata)
  GOOGLE_DCHECK_NE(&from, this);
  const OperationMetadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const OperationMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.ml.v1.OperationMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.ml.v1.OperationMetadata)
    MergeFrom(*source);
  }
}

void OperationMetadata::MergeFrom(const OperationMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.ml.v1.OperationMetadata)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.model_name().size() > 0) {

    model_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.model_name_);
  }
  if (from.has_create_time()) {
    mutable_create_time()->::google::protobuf::Timestamp::MergeFrom(from.create_time());
  }
  if (from.has_start_time()) {
    mutable_start_time()->::google::protobuf::Timestamp::MergeFrom(from.start_time());
  }
  if (from.has_end_time()) {
    mutable_end_time()->::google::protobuf::Timestamp::MergeFrom(from.end_time());
  }
  if (from.has_version()) {
    mutable_version()->::google::cloud::ml::v1::Version::MergeFrom(from.version());
  }
  if (from.is_cancellation_requested() != 0) {
    set_is_cancellation_requested(from.is_cancellation_requested());
  }
  if (from.operation_type() != 0) {
    set_operation_type(from.operation_type());
  }
}

void OperationMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.ml.v1.OperationMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationMetadata::CopyFrom(const OperationMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.ml.v1.OperationMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationMetadata::IsInitialized() const {
  return true;
}

void OperationMetadata::Swap(OperationMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationMetadata::InternalSwap(OperationMetadata* other) {
  model_name_.Swap(&other->model_name_);
  std::swap(create_time_, other->create_time_);
  std::swap(start_time_, other->start_time_);
  std::swap(end_time_, other->end_time_);
  std::swap(version_, other->version_);
  std::swap(is_cancellation_requested_, other->is_cancellation_requested_);
  std::swap(operation_type_, other->operation_type_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata OperationMetadata::GetMetadata() const {
  protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fcloud_2fml_2fv1_2foperation_5fmetadata_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// OperationMetadata

// .google.protobuf.Timestamp create_time = 1;
bool OperationMetadata::has_create_time() const {
  return this != internal_default_instance() && create_time_ != NULL;
}
void OperationMetadata::clear_create_time() {
  if (GetArenaNoVirtual() == NULL && create_time_ != NULL) delete create_time_;
  create_time_ = NULL;
}
const ::google::protobuf::Timestamp& OperationMetadata::create_time() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1.OperationMetadata.create_time)
  return create_time_ != NULL ? *create_time_
                         : *::google::protobuf::Timestamp::internal_default_instance();
}
::google::protobuf::Timestamp* OperationMetadata::mutable_create_time() {
  
  if (create_time_ == NULL) {
    create_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1.OperationMetadata.create_time)
  return create_time_;
}
::google::protobuf::Timestamp* OperationMetadata::release_create_time() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1.OperationMetadata.create_time)
  
  ::google::protobuf::Timestamp* temp = create_time_;
  create_time_ = NULL;
  return temp;
}
void OperationMetadata::set_allocated_create_time(::google::protobuf::Timestamp* create_time) {
  delete create_time_;
  if (create_time != NULL && create_time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_create_time = new ::google::protobuf::Timestamp;
    new_create_time->CopyFrom(*create_time);
    create_time = new_create_time;
  }
  create_time_ = create_time;
  if (create_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1.OperationMetadata.create_time)
}

// .google.protobuf.Timestamp start_time = 2;
bool OperationMetadata::has_start_time() const {
  return this != internal_default_instance() && start_time_ != NULL;
}
void OperationMetadata::clear_start_time() {
  if (GetArenaNoVirtual() == NULL && start_time_ != NULL) delete start_time_;
  start_time_ = NULL;
}
const ::google::protobuf::Timestamp& OperationMetadata::start_time() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1.OperationMetadata.start_time)
  return start_time_ != NULL ? *start_time_
                         : *::google::protobuf::Timestamp::internal_default_instance();
}
::google::protobuf::Timestamp* OperationMetadata::mutable_start_time() {
  
  if (start_time_ == NULL) {
    start_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1.OperationMetadata.start_time)
  return start_time_;
}
::google::protobuf::Timestamp* OperationMetadata::release_start_time() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1.OperationMetadata.start_time)
  
  ::google::protobuf::Timestamp* temp = start_time_;
  start_time_ = NULL;
  return temp;
}
void OperationMetadata::set_allocated_start_time(::google::protobuf::Timestamp* start_time) {
  delete start_time_;
  if (start_time != NULL && start_time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_start_time = new ::google::protobuf::Timestamp;
    new_start_time->CopyFrom(*start_time);
    start_time = new_start_time;
  }
  start_time_ = start_time;
  if (start_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1.OperationMetadata.start_time)
}

// .google.protobuf.Timestamp end_time = 3;
bool OperationMetadata::has_end_time() const {
  return this != internal_default_instance() && end_time_ != NULL;
}
void OperationMetadata::clear_end_time() {
  if (GetArenaNoVirtual() == NULL && end_time_ != NULL) delete end_time_;
  end_time_ = NULL;
}
const ::google::protobuf::Timestamp& OperationMetadata::end_time() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1.OperationMetadata.end_time)
  return end_time_ != NULL ? *end_time_
                         : *::google::protobuf::Timestamp::internal_default_instance();
}
::google::protobuf::Timestamp* OperationMetadata::mutable_end_time() {
  
  if (end_time_ == NULL) {
    end_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1.OperationMetadata.end_time)
  return end_time_;
}
::google::protobuf::Timestamp* OperationMetadata::release_end_time() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1.OperationMetadata.end_time)
  
  ::google::protobuf::Timestamp* temp = end_time_;
  end_time_ = NULL;
  return temp;
}
void OperationMetadata::set_allocated_end_time(::google::protobuf::Timestamp* end_time) {
  delete end_time_;
  if (end_time != NULL && end_time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_end_time = new ::google::protobuf::Timestamp;
    new_end_time->CopyFrom(*end_time);
    end_time = new_end_time;
  }
  end_time_ = end_time;
  if (end_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1.OperationMetadata.end_time)
}

// bool is_cancellation_requested = 4;
void OperationMetadata::clear_is_cancellation_requested() {
  is_cancellation_requested_ = false;
}
bool OperationMetadata::is_cancellation_requested() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1.OperationMetadata.is_cancellation_requested)
  return is_cancellation_requested_;
}
void OperationMetadata::set_is_cancellation_requested(bool value) {
  
  is_cancellation_requested_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1.OperationMetadata.is_cancellation_requested)
}

// .google.cloud.ml.v1.OperationMetadata.OperationType operation_type = 5;
void OperationMetadata::clear_operation_type() {
  operation_type_ = 0;
}
::google::cloud::ml::v1::OperationMetadata_OperationType OperationMetadata::operation_type() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1.OperationMetadata.operation_type)
  return static_cast< ::google::cloud::ml::v1::OperationMetadata_OperationType >(operation_type_);
}
void OperationMetadata::set_operation_type(::google::cloud::ml::v1::OperationMetadata_OperationType value) {
  
  operation_type_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1.OperationMetadata.operation_type)
}

// string model_name = 6;
void OperationMetadata::clear_model_name() {
  model_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& OperationMetadata::model_name() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1.OperationMetadata.model_name)
  return model_name_.GetNoArena();
}
void OperationMetadata::set_model_name(const ::std::string& value) {
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.ml.v1.OperationMetadata.model_name)
}
#if LANG_CXX11
void OperationMetadata::set_model_name(::std::string&& value) {
  
  model_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.ml.v1.OperationMetadata.model_name)
}
#endif
void OperationMetadata::set_model_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.ml.v1.OperationMetadata.model_name)
}
void OperationMetadata::set_model_name(const char* value, size_t size) {
  
  model_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.ml.v1.OperationMetadata.model_name)
}
::std::string* OperationMetadata::mutable_model_name() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1.OperationMetadata.model_name)
  return model_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* OperationMetadata::release_model_name() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1.OperationMetadata.model_name)
  
  return model_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void OperationMetadata::set_allocated_model_name(::std::string* model_name) {
  if (model_name != NULL) {
    
  } else {
    
  }
  model_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_name);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1.OperationMetadata.model_name)
}

// .google.cloud.ml.v1.Version version = 7;
bool OperationMetadata::has_version() const {
  return this != internal_default_instance() && version_ != NULL;
}
void OperationMetadata::clear_version() {
  if (GetArenaNoVirtual() == NULL && version_ != NULL) delete version_;
  version_ = NULL;
}
const ::google::cloud::ml::v1::Version& OperationMetadata::version() const {
  // @@protoc_insertion_point(field_get:google.cloud.ml.v1.OperationMetadata.version)
  return version_ != NULL ? *version_
                         : *::google::cloud::ml::v1::Version::internal_default_instance();
}
::google::cloud::ml::v1::Version* OperationMetadata::mutable_version() {
  
  if (version_ == NULL) {
    version_ = new ::google::cloud::ml::v1::Version;
  }
  // @@protoc_insertion_point(field_mutable:google.cloud.ml.v1.OperationMetadata.version)
  return version_;
}
::google::cloud::ml::v1::Version* OperationMetadata::release_version() {
  // @@protoc_insertion_point(field_release:google.cloud.ml.v1.OperationMetadata.version)
  
  ::google::cloud::ml::v1::Version* temp = version_;
  version_ = NULL;
  return temp;
}
void OperationMetadata::set_allocated_version(::google::cloud::ml::v1::Version* version) {
  delete version_;
  version_ = version;
  if (version) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.cloud.ml.v1.OperationMetadata.version)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace ml
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)
