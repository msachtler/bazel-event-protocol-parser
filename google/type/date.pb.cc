// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/date.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/type/date.pb.h"

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
class DateDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Date> {
} _Date_default_instance_;

namespace protobuf_google_2ftype_2fdate_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Date, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Date, year_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Date, month_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Date, day_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Date)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Date_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/type/date.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _Date_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Date_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\026google/type/date.proto\022\013google.type\"0\n"
      "\004Date\022\014\n\004year\030\001 \001(\005\022\r\n\005month\030\002 \001(\005\022\013\n\003da"
      "y\030\003 \001(\005B]\n\017com.google.typeB\tDateProtoP\001Z"
      "4google.golang.org/genproto/googleapis/t"
      "ype/date;date\370\001\001\242\002\003GTPb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 190);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/type/date.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_google_2ftype_2fdate_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Date::kYearFieldNumber;
const int Date::kMonthFieldNumber;
const int Date::kDayFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Date::Date()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2ftype_2fdate_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.type.Date)
}
Date::Date(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_google_2ftype_2fdate_2eproto::InitDefaults();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.type.Date)
}
Date::Date(const Date& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&year_, &from.year_,
    reinterpret_cast<char*>(&day_) -
    reinterpret_cast<char*>(&year_) + sizeof(day_));
  // @@protoc_insertion_point(copy_constructor:google.type.Date)
}

void Date::SharedCtor() {
  ::memset(&year_, 0, reinterpret_cast<char*>(&day_) -
    reinterpret_cast<char*>(&year_) + sizeof(day_));
  _cached_size_ = 0;
}

Date::~Date() {
  // @@protoc_insertion_point(destructor:google.type.Date)
  SharedDtor();
}

void Date::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void Date::ArenaDtor(void* object) {
  Date* _this = reinterpret_cast< Date* >(object);
  (void)_this;
}
void Date::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Date::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Date::descriptor() {
  protobuf_google_2ftype_2fdate_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2ftype_2fdate_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Date& Date::default_instance() {
  protobuf_google_2ftype_2fdate_2eproto::InitDefaults();
  return *internal_default_instance();
}

Date* Date::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Date>(arena);
}

void Date::Clear() {
// @@protoc_insertion_point(message_clear_start:google.type.Date)
  ::memset(&year_, 0, reinterpret_cast<char*>(&day_) -
    reinterpret_cast<char*>(&year_) + sizeof(day_));
}

bool Date::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.type.Date)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 year = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &year_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 month = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &month_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 day = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &day_)));
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
  // @@protoc_insertion_point(parse_success:google.type.Date)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.type.Date)
  return false;
#undef DO_
}

void Date::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.type.Date)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 year = 1;
  if (this->year() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->year(), output);
  }

  // int32 month = 2;
  if (this->month() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->month(), output);
  }

  // int32 day = 3;
  if (this->day() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->day(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.type.Date)
}

::google::protobuf::uint8* Date::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.type.Date)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 year = 1;
  if (this->year() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->year(), target);
  }

  // int32 month = 2;
  if (this->month() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->month(), target);
  }

  // int32 day = 3;
  if (this->day() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->day(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.type.Date)
  return target;
}

size_t Date::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.type.Date)
  size_t total_size = 0;

  // int32 year = 1;
  if (this->year() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->year());
  }

  // int32 month = 2;
  if (this->month() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->month());
  }

  // int32 day = 3;
  if (this->day() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->day());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Date::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.type.Date)
  GOOGLE_DCHECK_NE(&from, this);
  const Date* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Date>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.type.Date)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.type.Date)
    MergeFrom(*source);
  }
}

void Date::MergeFrom(const Date& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.type.Date)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.year() != 0) {
    set_year(from.year());
  }
  if (from.month() != 0) {
    set_month(from.month());
  }
  if (from.day() != 0) {
    set_day(from.day());
  }
}

void Date::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.type.Date)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Date::CopyFrom(const Date& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.type.Date)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Date::IsInitialized() const {
  return true;
}

void Date::Swap(Date* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Date* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Date::UnsafeArenaSwap(Date* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Date::InternalSwap(Date* other) {
  std::swap(year_, other->year_);
  std::swap(month_, other->month_);
  std::swap(day_, other->day_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Date::GetMetadata() const {
  protobuf_google_2ftype_2fdate_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2ftype_2fdate_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Date

// int32 year = 1;
void Date::clear_year() {
  year_ = 0;
}
::google::protobuf::int32 Date::year() const {
  // @@protoc_insertion_point(field_get:google.type.Date.year)
  return year_;
}
void Date::set_year(::google::protobuf::int32 value) {
  
  year_ = value;
  // @@protoc_insertion_point(field_set:google.type.Date.year)
}

// int32 month = 2;
void Date::clear_month() {
  month_ = 0;
}
::google::protobuf::int32 Date::month() const {
  // @@protoc_insertion_point(field_get:google.type.Date.month)
  return month_;
}
void Date::set_month(::google::protobuf::int32 value) {
  
  month_ = value;
  // @@protoc_insertion_point(field_set:google.type.Date.month)
}

// int32 day = 3;
void Date::clear_day() {
  day_ = 0;
}
::google::protobuf::int32 Date::day() const {
  // @@protoc_insertion_point(field_get:google.type.Date.day)
  return day_;
}
void Date::set_day(::google::protobuf::int32 value) {
  
  day_ = value;
  // @@protoc_insertion_point(field_set:google.type.Date.day)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)
