// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/experimental/authorization_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/api/experimental/authorization_config.pb.h"

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
class AuthorizationConfigDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<AuthorizationConfig> {
} _AuthorizationConfig_default_instance_;

namespace protobuf_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthorizationConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthorizationConfig, provider_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(AuthorizationConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_AuthorizationConfig_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/api/experimental/authorization_config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _AuthorizationConfig_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _AuthorizationConfig_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n2google/api/experimental/authorization_"
      "config.proto\022\ngoogle.api\"\'\n\023Authorizatio"
      "nConfig\022\020\n\010provider\030\001 \001(\tBb\n\016com.google."
      "apiB\030AuthorizationConfigProtoP\001Z-google."
      "golang.org/genproto/googleapis/api;api\242\002"
      "\004GAPIb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 213);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/experimental/authorization_config.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AuthorizationConfig::kProviderFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AuthorizationConfig::AuthorizationConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.AuthorizationConfig)
}
AuthorizationConfig::AuthorizationConfig(const AuthorizationConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  provider_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.provider().size() > 0) {
    provider_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.provider_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.AuthorizationConfig)
}

void AuthorizationConfig::SharedCtor() {
  provider_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

AuthorizationConfig::~AuthorizationConfig() {
  // @@protoc_insertion_point(destructor:google.api.AuthorizationConfig)
  SharedDtor();
}

void AuthorizationConfig::SharedDtor() {
  provider_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AuthorizationConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AuthorizationConfig::descriptor() {
  protobuf_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AuthorizationConfig& AuthorizationConfig::default_instance() {
  protobuf_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto::InitDefaults();
  return *internal_default_instance();
}

AuthorizationConfig* AuthorizationConfig::New(::google::protobuf::Arena* arena) const {
  AuthorizationConfig* n = new AuthorizationConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AuthorizationConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.AuthorizationConfig)
  provider_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool AuthorizationConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.AuthorizationConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string provider = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_provider()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->provider().data(), this->provider().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.AuthorizationConfig.provider"));
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
  // @@protoc_insertion_point(parse_success:google.api.AuthorizationConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.AuthorizationConfig)
  return false;
#undef DO_
}

void AuthorizationConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.AuthorizationConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string provider = 1;
  if (this->provider().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->provider().data(), this->provider().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.AuthorizationConfig.provider");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->provider(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.api.AuthorizationConfig)
}

::google::protobuf::uint8* AuthorizationConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.AuthorizationConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string provider = 1;
  if (this->provider().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->provider().data(), this->provider().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.AuthorizationConfig.provider");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->provider(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.api.AuthorizationConfig)
  return target;
}

size_t AuthorizationConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.AuthorizationConfig)
  size_t total_size = 0;

  // string provider = 1;
  if (this->provider().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->provider());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AuthorizationConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.AuthorizationConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const AuthorizationConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AuthorizationConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.AuthorizationConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.AuthorizationConfig)
    MergeFrom(*source);
  }
}

void AuthorizationConfig::MergeFrom(const AuthorizationConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.AuthorizationConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.provider().size() > 0) {

    provider_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.provider_);
  }
}

void AuthorizationConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.AuthorizationConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthorizationConfig::CopyFrom(const AuthorizationConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.AuthorizationConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthorizationConfig::IsInitialized() const {
  return true;
}

void AuthorizationConfig::Swap(AuthorizationConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AuthorizationConfig::InternalSwap(AuthorizationConfig* other) {
  provider_.Swap(&other->provider_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AuthorizationConfig::GetMetadata() const {
  protobuf_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fapi_2fexperimental_2fauthorization_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AuthorizationConfig

// string provider = 1;
void AuthorizationConfig::clear_provider() {
  provider_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& AuthorizationConfig::provider() const {
  // @@protoc_insertion_point(field_get:google.api.AuthorizationConfig.provider)
  return provider_.GetNoArena();
}
void AuthorizationConfig::set_provider(const ::std::string& value) {
  
  provider_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.AuthorizationConfig.provider)
}
#if LANG_CXX11
void AuthorizationConfig::set_provider(::std::string&& value) {
  
  provider_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.AuthorizationConfig.provider)
}
#endif
void AuthorizationConfig::set_provider(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  provider_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.AuthorizationConfig.provider)
}
void AuthorizationConfig::set_provider(const char* value, size_t size) {
  
  provider_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.AuthorizationConfig.provider)
}
::std::string* AuthorizationConfig::mutable_provider() {
  
  // @@protoc_insertion_point(field_mutable:google.api.AuthorizationConfig.provider)
  return provider_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AuthorizationConfig::release_provider() {
  // @@protoc_insertion_point(field_release:google.api.AuthorizationConfig.provider)
  
  return provider_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AuthorizationConfig::set_allocated_provider(::std::string* provider) {
  if (provider != NULL) {
    
  } else {
    
  }
  provider_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), provider);
  // @@protoc_insertion_point(field_set_allocated:google.api.AuthorizationConfig.provider)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)
