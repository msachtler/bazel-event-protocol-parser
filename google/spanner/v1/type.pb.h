// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/spanner/v1/type.proto

#ifndef PROTOBUF_google_2fspanner_2fv1_2ftype_2eproto__INCLUDED
#define PROTOBUF_google_2fspanner_2fv1_2ftype_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace spanner {
namespace v1 {
class StructType;
class StructTypeDefaultTypeInternal;
extern StructTypeDefaultTypeInternal _StructType_default_instance_;
class StructType_Field;
class StructType_FieldDefaultTypeInternal;
extern StructType_FieldDefaultTypeInternal _StructType_Field_default_instance_;
class Type;
class TypeDefaultTypeInternal;
extern TypeDefaultTypeInternal _Type_default_instance_;
}  // namespace v1
}  // namespace spanner
}  // namespace google

namespace google {
namespace spanner {
namespace v1 {

namespace protobuf_google_2fspanner_2fv1_2ftype_2eproto {
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
}  // namespace protobuf_google_2fspanner_2fv1_2ftype_2eproto

enum TypeCode {
  TYPE_CODE_UNSPECIFIED = 0,
  BOOL = 1,
  INT64 = 2,
  FLOAT64 = 3,
  TIMESTAMP = 4,
  DATE = 5,
  STRING = 6,
  BYTES = 7,
  ARRAY = 8,
  STRUCT = 9,
  TypeCode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  TypeCode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool TypeCode_IsValid(int value);
const TypeCode TypeCode_MIN = TYPE_CODE_UNSPECIFIED;
const TypeCode TypeCode_MAX = STRUCT;
const int TypeCode_ARRAYSIZE = TypeCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* TypeCode_descriptor();
inline const ::std::string& TypeCode_Name(TypeCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    TypeCode_descriptor(), value);
}
inline bool TypeCode_Parse(
    const ::std::string& name, TypeCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TypeCode>(
    TypeCode_descriptor(), name, value);
}
// ===================================================================

class Type : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.Type) */ {
 public:
  Type();
  virtual ~Type();

  Type(const Type& from);

  inline Type& operator=(const Type& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Type& default_instance();

  static inline const Type* internal_default_instance() {
    return reinterpret_cast<const Type*>(
               &_Type_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Type* other);

  // implements Message ----------------------------------------------

  inline Type* New() const PROTOBUF_FINAL { return New(NULL); }

  Type* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Type& from);
  void MergeFrom(const Type& from);
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
  void InternalSwap(Type* other);
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

  // .google.spanner.v1.Type array_element_type = 2;
  bool has_array_element_type() const;
  void clear_array_element_type();
  static const int kArrayElementTypeFieldNumber = 2;
  const ::google::spanner::v1::Type& array_element_type() const;
  ::google::spanner::v1::Type* mutable_array_element_type();
  ::google::spanner::v1::Type* release_array_element_type();
  void set_allocated_array_element_type(::google::spanner::v1::Type* array_element_type);

  // .google.spanner.v1.StructType struct_type = 3;
  bool has_struct_type() const;
  void clear_struct_type();
  static const int kStructTypeFieldNumber = 3;
  const ::google::spanner::v1::StructType& struct_type() const;
  ::google::spanner::v1::StructType* mutable_struct_type();
  ::google::spanner::v1::StructType* release_struct_type();
  void set_allocated_struct_type(::google::spanner::v1::StructType* struct_type);

  // .google.spanner.v1.TypeCode code = 1;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  ::google::spanner::v1::TypeCode code() const;
  void set_code(::google::spanner::v1::TypeCode value);

  // @@protoc_insertion_point(class_scope:google.spanner.v1.Type)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::spanner::v1::Type* array_element_type_;
  ::google::spanner::v1::StructType* struct_type_;
  int code_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2ftype_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class StructType_Field : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.StructType.Field) */ {
 public:
  StructType_Field();
  virtual ~StructType_Field();

  StructType_Field(const StructType_Field& from);

  inline StructType_Field& operator=(const StructType_Field& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StructType_Field& default_instance();

  static inline const StructType_Field* internal_default_instance() {
    return reinterpret_cast<const StructType_Field*>(
               &_StructType_Field_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(StructType_Field* other);

  // implements Message ----------------------------------------------

  inline StructType_Field* New() const PROTOBUF_FINAL { return New(NULL); }

  StructType_Field* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StructType_Field& from);
  void MergeFrom(const StructType_Field& from);
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
  void InternalSwap(StructType_Field* other);
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

  // .google.spanner.v1.Type type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  const ::google::spanner::v1::Type& type() const;
  ::google::spanner::v1::Type* mutable_type();
  ::google::spanner::v1::Type* release_type();
  void set_allocated_type(::google::spanner::v1::Type* type);

  // @@protoc_insertion_point(class_scope:google.spanner.v1.StructType.Field)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::spanner::v1::Type* type_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2ftype_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class StructType : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.StructType) */ {
 public:
  StructType();
  virtual ~StructType();

  StructType(const StructType& from);

  inline StructType& operator=(const StructType& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StructType& default_instance();

  static inline const StructType* internal_default_instance() {
    return reinterpret_cast<const StructType*>(
               &_StructType_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(StructType* other);

  // implements Message ----------------------------------------------

  inline StructType* New() const PROTOBUF_FINAL { return New(NULL); }

  StructType* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const StructType& from);
  void MergeFrom(const StructType& from);
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
  void InternalSwap(StructType* other);
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

  typedef StructType_Field Field;

  // accessors -------------------------------------------------------

  // repeated .google.spanner.v1.StructType.Field fields = 1;
  int fields_size() const;
  void clear_fields();
  static const int kFieldsFieldNumber = 1;
  const ::google::spanner::v1::StructType_Field& fields(int index) const;
  ::google::spanner::v1::StructType_Field* mutable_fields(int index);
  ::google::spanner::v1::StructType_Field* add_fields();
  ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::StructType_Field >*
      mutable_fields();
  const ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::StructType_Field >&
      fields() const;

  // @@protoc_insertion_point(class_scope:google.spanner.v1.StructType)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::StructType_Field > fields_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2ftype_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Type

// .google.spanner.v1.TypeCode code = 1;
inline void Type::clear_code() {
  code_ = 0;
}
inline ::google::spanner::v1::TypeCode Type::code() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Type.code)
  return static_cast< ::google::spanner::v1::TypeCode >(code_);
}
inline void Type::set_code(::google::spanner::v1::TypeCode value) {
  
  code_ = value;
  // @@protoc_insertion_point(field_set:google.spanner.v1.Type.code)
}

// .google.spanner.v1.Type array_element_type = 2;
inline bool Type::has_array_element_type() const {
  return this != internal_default_instance() && array_element_type_ != NULL;
}
inline void Type::clear_array_element_type() {
  if (GetArenaNoVirtual() == NULL && array_element_type_ != NULL) delete array_element_type_;
  array_element_type_ = NULL;
}
inline const ::google::spanner::v1::Type& Type::array_element_type() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Type.array_element_type)
  return array_element_type_ != NULL ? *array_element_type_
                         : *::google::spanner::v1::Type::internal_default_instance();
}
inline ::google::spanner::v1::Type* Type::mutable_array_element_type() {
  
  if (array_element_type_ == NULL) {
    array_element_type_ = new ::google::spanner::v1::Type;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Type.array_element_type)
  return array_element_type_;
}
inline ::google::spanner::v1::Type* Type::release_array_element_type() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Type.array_element_type)
  
  ::google::spanner::v1::Type* temp = array_element_type_;
  array_element_type_ = NULL;
  return temp;
}
inline void Type::set_allocated_array_element_type(::google::spanner::v1::Type* array_element_type) {
  delete array_element_type_;
  array_element_type_ = array_element_type;
  if (array_element_type) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Type.array_element_type)
}

// .google.spanner.v1.StructType struct_type = 3;
inline bool Type::has_struct_type() const {
  return this != internal_default_instance() && struct_type_ != NULL;
}
inline void Type::clear_struct_type() {
  if (GetArenaNoVirtual() == NULL && struct_type_ != NULL) delete struct_type_;
  struct_type_ = NULL;
}
inline const ::google::spanner::v1::StructType& Type::struct_type() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.Type.struct_type)
  return struct_type_ != NULL ? *struct_type_
                         : *::google::spanner::v1::StructType::internal_default_instance();
}
inline ::google::spanner::v1::StructType* Type::mutable_struct_type() {
  
  if (struct_type_ == NULL) {
    struct_type_ = new ::google::spanner::v1::StructType;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.Type.struct_type)
  return struct_type_;
}
inline ::google::spanner::v1::StructType* Type::release_struct_type() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.Type.struct_type)
  
  ::google::spanner::v1::StructType* temp = struct_type_;
  struct_type_ = NULL;
  return temp;
}
inline void Type::set_allocated_struct_type(::google::spanner::v1::StructType* struct_type) {
  delete struct_type_;
  struct_type_ = struct_type;
  if (struct_type) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.Type.struct_type)
}

// -------------------------------------------------------------------

// StructType_Field

// string name = 1;
inline void StructType_Field::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& StructType_Field::name() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.StructType.Field.name)
  return name_.GetNoArena();
}
inline void StructType_Field::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.spanner.v1.StructType.Field.name)
}
#if LANG_CXX11
inline void StructType_Field::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.spanner.v1.StructType.Field.name)
}
#endif
inline void StructType_Field::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.spanner.v1.StructType.Field.name)
}
inline void StructType_Field::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.spanner.v1.StructType.Field.name)
}
inline ::std::string* StructType_Field::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.StructType.Field.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StructType_Field::release_name() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.StructType.Field.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StructType_Field::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.StructType.Field.name)
}

// .google.spanner.v1.Type type = 2;
inline bool StructType_Field::has_type() const {
  return this != internal_default_instance() && type_ != NULL;
}
inline void StructType_Field::clear_type() {
  if (GetArenaNoVirtual() == NULL && type_ != NULL) delete type_;
  type_ = NULL;
}
inline const ::google::spanner::v1::Type& StructType_Field::type() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.StructType.Field.type)
  return type_ != NULL ? *type_
                         : *::google::spanner::v1::Type::internal_default_instance();
}
inline ::google::spanner::v1::Type* StructType_Field::mutable_type() {
  
  if (type_ == NULL) {
    type_ = new ::google::spanner::v1::Type;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.StructType.Field.type)
  return type_;
}
inline ::google::spanner::v1::Type* StructType_Field::release_type() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.StructType.Field.type)
  
  ::google::spanner::v1::Type* temp = type_;
  type_ = NULL;
  return temp;
}
inline void StructType_Field::set_allocated_type(::google::spanner::v1::Type* type) {
  delete type_;
  type_ = type;
  if (type) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.StructType.Field.type)
}

// -------------------------------------------------------------------

// StructType

// repeated .google.spanner.v1.StructType.Field fields = 1;
inline int StructType::fields_size() const {
  return fields_.size();
}
inline void StructType::clear_fields() {
  fields_.Clear();
}
inline const ::google::spanner::v1::StructType_Field& StructType::fields(int index) const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.StructType.fields)
  return fields_.Get(index);
}
inline ::google::spanner::v1::StructType_Field* StructType::mutable_fields(int index) {
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.StructType.fields)
  return fields_.Mutable(index);
}
inline ::google::spanner::v1::StructType_Field* StructType::add_fields() {
  // @@protoc_insertion_point(field_add:google.spanner.v1.StructType.fields)
  return fields_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::StructType_Field >*
StructType::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_list:google.spanner.v1.StructType.fields)
  return &fields_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::StructType_Field >&
StructType::fields() const {
  // @@protoc_insertion_point(field_list:google.spanner.v1.StructType.fields)
  return fields_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace spanner
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::spanner::v1::TypeCode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::spanner::v1::TypeCode>() {
  return ::google::spanner::v1::TypeCode_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fspanner_2fv1_2ftype_2eproto__INCLUDED