// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/money.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/type/money.pb.h"

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
namespace type {
class MoneyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Money> {
} _Money_default_instance_;

namespace protobuf_google_2ftype_2fmoney_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Money, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Money, currency_code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Money, units_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Money, nanos_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Money)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Money_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/type/money.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _Money_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Money_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\027google/type/money.proto\022\013google.type\"<"
      "\n\005Money\022\025\n\rcurrency_code\030\001 \001(\t\022\r\n\005units\030"
      "\002 \001(\003\022\r\n\005nanos\030\003 \001(\005B]\n\017com.google.typeB"
      "\nMoneyProtoP\001Z6google.golang.org/genprot"
      "o/googleapis/type/money;money\242\002\003GTPb\006pro"
      "to3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 203);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/type/money.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_google_2ftype_2fmoney_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Money::kCurrencyCodeFieldNumber;
const int Money::kUnitsFieldNumber;
const int Money::kNanosFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Money::Money()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2ftype_2fmoney_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.type.Money)
}
Money::Money(const Money& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  currency_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.currency_code().size() > 0) {
    currency_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.currency_code_);
  }
  ::memcpy(&units_, &from.units_,
    reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&units_) + sizeof(nanos_));
  // @@protoc_insertion_point(copy_constructor:google.type.Money)
}

void Money::SharedCtor() {
  currency_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&units_, 0, reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&units_) + sizeof(nanos_));
  _cached_size_ = 0;
}

Money::~Money() {
  // @@protoc_insertion_point(destructor:google.type.Money)
  SharedDtor();
}

void Money::SharedDtor() {
  currency_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Money::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Money::descriptor() {
  protobuf_google_2ftype_2fmoney_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2ftype_2fmoney_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Money& Money::default_instance() {
  protobuf_google_2ftype_2fmoney_2eproto::InitDefaults();
  return *internal_default_instance();
}

Money* Money::New(::google::protobuf::Arena* arena) const {
  Money* n = new Money;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Money::Clear() {
// @@protoc_insertion_point(message_clear_start:google.type.Money)
  currency_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&units_, 0, reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&units_) + sizeof(nanos_));
}

bool Money::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.type.Money)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string currency_code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_currency_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->currency_code().data(), this->currency_code().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.type.Money.currency_code"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 units = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &units_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nanos = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nanos_)));
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
  // @@protoc_insertion_point(parse_success:google.type.Money)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.type.Money)
  return false;
#undef DO_
}

void Money::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.type.Money)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string currency_code = 1;
  if (this->currency_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->currency_code().data(), this->currency_code().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.type.Money.currency_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->currency_code(), output);
  }

  // int64 units = 2;
  if (this->units() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->units(), output);
  }

  // int32 nanos = 3;
  if (this->nanos() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->nanos(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.type.Money)
}

::google::protobuf::uint8* Money::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.type.Money)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string currency_code = 1;
  if (this->currency_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->currency_code().data(), this->currency_code().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.type.Money.currency_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->currency_code(), target);
  }

  // int64 units = 2;
  if (this->units() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->units(), target);
  }

  // int32 nanos = 3;
  if (this->nanos() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->nanos(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.type.Money)
  return target;
}

size_t Money::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.type.Money)
  size_t total_size = 0;

  // string currency_code = 1;
  if (this->currency_code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->currency_code());
  }

  // int64 units = 2;
  if (this->units() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->units());
  }

  // int32 nanos = 3;
  if (this->nanos() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nanos());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Money::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.type.Money)
  GOOGLE_DCHECK_NE(&from, this);
  const Money* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Money>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.type.Money)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.type.Money)
    MergeFrom(*source);
  }
}

void Money::MergeFrom(const Money& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.type.Money)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.currency_code().size() > 0) {

    currency_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.currency_code_);
  }
  if (from.units() != 0) {
    set_units(from.units());
  }
  if (from.nanos() != 0) {
    set_nanos(from.nanos());
  }
}

void Money::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.type.Money)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Money::CopyFrom(const Money& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.type.Money)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Money::IsInitialized() const {
  return true;
}

void Money::Swap(Money* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Money::InternalSwap(Money* other) {
  currency_code_.Swap(&other->currency_code_);
  std::swap(units_, other->units_);
  std::swap(nanos_, other->nanos_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Money::GetMetadata() const {
  protobuf_google_2ftype_2fmoney_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2ftype_2fmoney_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Money

// string currency_code = 1;
void Money::clear_currency_code() {
  currency_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Money::currency_code() const {
  // @@protoc_insertion_point(field_get:google.type.Money.currency_code)
  return currency_code_.GetNoArena();
}
void Money::set_currency_code(const ::std::string& value) {
  
  currency_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.type.Money.currency_code)
}
#if LANG_CXX11
void Money::set_currency_code(::std::string&& value) {
  
  currency_code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.type.Money.currency_code)
}
#endif
void Money::set_currency_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  currency_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.type.Money.currency_code)
}
void Money::set_currency_code(const char* value, size_t size) {
  
  currency_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.type.Money.currency_code)
}
::std::string* Money::mutable_currency_code() {
  
  // @@protoc_insertion_point(field_mutable:google.type.Money.currency_code)
  return currency_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Money::release_currency_code() {
  // @@protoc_insertion_point(field_release:google.type.Money.currency_code)
  
  return currency_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Money::set_allocated_currency_code(::std::string* currency_code) {
  if (currency_code != NULL) {
    
  } else {
    
  }
  currency_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), currency_code);
  // @@protoc_insertion_point(field_set_allocated:google.type.Money.currency_code)
}

// int64 units = 2;
void Money::clear_units() {
  units_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 Money::units() const {
  // @@protoc_insertion_point(field_get:google.type.Money.units)
  return units_;
}
void Money::set_units(::google::protobuf::int64 value) {
  
  units_ = value;
  // @@protoc_insertion_point(field_set:google.type.Money.units)
}

// int32 nanos = 3;
void Money::clear_nanos() {
  nanos_ = 0;
}
::google::protobuf::int32 Money::nanos() const {
  // @@protoc_insertion_point(field_get:google.type.Money.nanos)
  return nanos_;
}
void Money::set_nanos(::google::protobuf::int32 value) {
  
  nanos_ = value;
  // @@protoc_insertion_point(field_set:google.type.Money.nanos)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)
