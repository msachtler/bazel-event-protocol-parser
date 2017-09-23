// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/devtools/clouderrorreporting/v1beta1/error_group_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/devtools/clouderrorreporting/v1beta1/error_group_service.pb.h"

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
namespace devtools {
namespace clouderrorreporting {
namespace v1beta1 {
class GetGroupRequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<GetGroupRequest> {
} _GetGroupRequest_default_instance_;
class UpdateGroupRequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<UpdateGroupRequest> {
} _UpdateGroupRequest_default_instance_;

namespace protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetGroupRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetGroupRequest, group_name_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UpdateGroupRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UpdateGroupRequest, group_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(GetGroupRequest)},
  { 6, -1, sizeof(UpdateGroupRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_GetGroupRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_UpdateGroupRequest_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/devtools/clouderrorreporting/v1beta1/error_group_service.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _GetGroupRequest_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _UpdateGroupRequest_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  ::google::devtools::clouderrorreporting::v1beta1::protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2fcommon_2eproto::InitDefaults();
  _GetGroupRequest_default_instance_.DefaultConstruct();
  _UpdateGroupRequest_default_instance_.DefaultConstruct();
  _UpdateGroupRequest_default_instance_.get_mutable()->group_ = const_cast< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup*>(
      ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\nEgoogle/devtools/clouderrorreporting/v1"
      "beta1/error_group_service.proto\022+google."
      "devtools.clouderrorreporting.v1beta1\032\034go"
      "ogle/api/annotations.proto\0328google/devto"
      "ols/clouderrorreporting/v1beta1/common.p"
      "roto\"%\n\017GetGroupRequest\022\022\n\ngroup_name\030\001 "
      "\001(\t\"\\\n\022UpdateGroupRequest\022F\n\005group\030\001 \001(\013"
      "27.google.devtools.clouderrorreporting.v"
      "1beta1.ErrorGroup2\216\003\n\021ErrorGroupService\022"
      "\264\001\n\010GetGroup\022<.google.devtools.clouderro"
      "rreporting.v1beta1.GetGroupRequest\0327.goo"
      "gle.devtools.clouderrorreporting.v1beta1"
      ".ErrorGroup\"1\202\323\344\223\002+\022)/v1beta1/{group_nam"
      "e=projects/*/groups/*}\022\301\001\n\013UpdateGroup\022\?"
      ".google.devtools.clouderrorreporting.v1b"
      "eta1.UpdateGroupRequest\0327.google.devtool"
      "s.clouderrorreporting.v1beta1.ErrorGroup"
      "\"8\202\323\344\223\0022\032)/v1beta1/{group.name=projects/"
      "*/groups/*}:\005groupB\321\001\n/com.google.devtoo"
      "ls.clouderrorreporting.v1beta1B\026ErrorGro"
      "upServiceProtoP\001Z^google.golang.org/genp"
      "roto/googleapis/devtools/clouderrorrepor"
      "ting/v1beta1;clouderrorreporting\252\002#Googl"
      "e.Cloud.ErrorReporting.V1Beta1b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 958);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/devtools/clouderrorreporting/v1beta1/error_group_service.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::google::devtools::clouderrorreporting::v1beta1::protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2fcommon_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetGroupRequest::kGroupNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetGroupRequest::GetGroupRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
}
GetGroupRequest::GetGroupRequest(const GetGroupRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  group_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.group_name().size() > 0) {
    group_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.group_name_);
  }
  // @@protoc_insertion_point(copy_constructor:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
}

void GetGroupRequest::SharedCtor() {
  group_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

GetGroupRequest::~GetGroupRequest() {
  // @@protoc_insertion_point(destructor:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  SharedDtor();
}

void GetGroupRequest::SharedDtor() {
  group_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GetGroupRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetGroupRequest::descriptor() {
  protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GetGroupRequest& GetGroupRequest::default_instance() {
  protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

GetGroupRequest* GetGroupRequest::New(::google::protobuf::Arena* arena) const {
  GetGroupRequest* n = new GetGroupRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetGroupRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  group_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool GetGroupRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string group_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_group_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->group_name().data(), this->group_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name"));
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
  // @@protoc_insertion_point(parse_success:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  return false;
#undef DO_
}

void GetGroupRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string group_name = 1;
  if (this->group_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->group_name().data(), this->group_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->group_name(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
}

::google::protobuf::uint8* GetGroupRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string group_name = 1;
  if (this->group_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->group_name().data(), this->group_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->group_name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  return target;
}

size_t GetGroupRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  size_t total_size = 0;

  // string group_name = 1;
  if (this->group_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->group_name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetGroupRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const GetGroupRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetGroupRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
    MergeFrom(*source);
  }
}

void GetGroupRequest::MergeFrom(const GetGroupRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.group_name().size() > 0) {

    group_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.group_name_);
  }
}

void GetGroupRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetGroupRequest::CopyFrom(const GetGroupRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetGroupRequest::IsInitialized() const {
  return true;
}

void GetGroupRequest::Swap(GetGroupRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetGroupRequest::InternalSwap(GetGroupRequest* other) {
  group_name_.Swap(&other->group_name_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetGroupRequest::GetMetadata() const {
  protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetGroupRequest

// string group_name = 1;
void GetGroupRequest::clear_group_name() {
  group_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& GetGroupRequest::group_name() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
  return group_name_.GetNoArena();
}
void GetGroupRequest::set_group_name(const ::std::string& value) {
  
  group_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
#if LANG_CXX11
void GetGroupRequest::set_group_name(::std::string&& value) {
  
  group_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
#endif
void GetGroupRequest::set_group_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  group_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
void GetGroupRequest::set_group_name(const char* value, size_t size) {
  
  group_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}
::std::string* GetGroupRequest::mutable_group_name() {
  
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
  return group_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* GetGroupRequest::release_group_name() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
  
  return group_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void GetGroupRequest::set_allocated_group_name(::std::string* group_name) {
  if (group_name != NULL) {
    
  } else {
    
  }
  group_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), group_name);
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.GetGroupRequest.group_name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UpdateGroupRequest::kGroupFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UpdateGroupRequest::UpdateGroupRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
}
UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_group()) {
    group_ = new ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup(*from.group_);
  } else {
    group_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
}

void UpdateGroupRequest::SharedCtor() {
  group_ = NULL;
  _cached_size_ = 0;
}

UpdateGroupRequest::~UpdateGroupRequest() {
  // @@protoc_insertion_point(destructor:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  SharedDtor();
}

void UpdateGroupRequest::SharedDtor() {
  if (this != internal_default_instance()) {
    delete group_;
  }
}

void UpdateGroupRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UpdateGroupRequest::descriptor() {
  protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const UpdateGroupRequest& UpdateGroupRequest::default_instance() {
  protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

UpdateGroupRequest* UpdateGroupRequest::New(::google::protobuf::Arena* arena) const {
  UpdateGroupRequest* n = new UpdateGroupRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UpdateGroupRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  if (GetArenaNoVirtual() == NULL && group_ != NULL) {
    delete group_;
  }
  group_ = NULL;
}

bool UpdateGroupRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_group()));
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
  // @@protoc_insertion_point(parse_success:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  return false;
#undef DO_
}

void UpdateGroupRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
  if (this->has_group()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->group_, output);
  }

  // @@protoc_insertion_point(serialize_end:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
}

::google::protobuf::uint8* UpdateGroupRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
  if (this->has_group()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->group_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  return target;
}

size_t UpdateGroupRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  size_t total_size = 0;

  // .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
  if (this->has_group()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->group_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UpdateGroupRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const UpdateGroupRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const UpdateGroupRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
    MergeFrom(*source);
  }
}

void UpdateGroupRequest::MergeFrom(const UpdateGroupRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_group()) {
    mutable_group()->::google::devtools::clouderrorreporting::v1beta1::ErrorGroup::MergeFrom(from.group());
  }
}

void UpdateGroupRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UpdateGroupRequest::CopyFrom(const UpdateGroupRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UpdateGroupRequest::IsInitialized() const {
  return true;
}

void UpdateGroupRequest::Swap(UpdateGroupRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UpdateGroupRequest::InternalSwap(UpdateGroupRequest* other) {
  std::swap(group_, other->group_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UpdateGroupRequest::GetMetadata() const {
  protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fdevtools_2fclouderrorreporting_2fv1beta1_2ferror_5fgroup_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UpdateGroupRequest

// .google.devtools.clouderrorreporting.v1beta1.ErrorGroup group = 1;
bool UpdateGroupRequest::has_group() const {
  return this != internal_default_instance() && group_ != NULL;
}
void UpdateGroupRequest::clear_group() {
  if (GetArenaNoVirtual() == NULL && group_ != NULL) delete group_;
  group_ = NULL;
}
const ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup& UpdateGroupRequest::group() const {
  // @@protoc_insertion_point(field_get:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
  return group_ != NULL ? *group_
                         : *::google::devtools::clouderrorreporting::v1beta1::ErrorGroup::internal_default_instance();
}
::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* UpdateGroupRequest::mutable_group() {
  
  if (group_ == NULL) {
    group_ = new ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup;
  }
  // @@protoc_insertion_point(field_mutable:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
  return group_;
}
::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* UpdateGroupRequest::release_group() {
  // @@protoc_insertion_point(field_release:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
  
  ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* temp = group_;
  group_ = NULL;
  return temp;
}
void UpdateGroupRequest::set_allocated_group(::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* group) {
  delete group_;
  group_ = group;
  if (group) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.devtools.clouderrorreporting.v1beta1.UpdateGroupRequest.group)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1beta1
}  // namespace clouderrorreporting
}  // namespace devtools
}  // namespace google

// @@protoc_insertion_point(global_scope)
