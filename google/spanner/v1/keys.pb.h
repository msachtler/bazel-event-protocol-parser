// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/spanner/v1/keys.proto

#ifndef PROTOBUF_google_2fspanner_2fv1_2fkeys_2eproto__INCLUDED
#define PROTOBUF_google_2fspanner_2fv1_2fkeys_2eproto__INCLUDED

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
#include <google/protobuf/struct.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace protobuf {
class ListValue;
class ListValueDefaultTypeInternal;
extern ListValueDefaultTypeInternal _ListValue_default_instance_;
class Struct;
class StructDefaultTypeInternal;
extern StructDefaultTypeInternal _Struct_default_instance_;
class Struct_FieldsEntry;
class Struct_FieldsEntryDefaultTypeInternal;
extern Struct_FieldsEntryDefaultTypeInternal _Struct_FieldsEntry_default_instance_;
class Value;
class ValueDefaultTypeInternal;
extern ValueDefaultTypeInternal _Value_default_instance_;
}  // namespace protobuf
namespace spanner {
namespace v1 {
class KeyRange;
class KeyRangeDefaultTypeInternal;
extern KeyRangeDefaultTypeInternal _KeyRange_default_instance_;
class KeySet;
class KeySetDefaultTypeInternal;
extern KeySetDefaultTypeInternal _KeySet_default_instance_;
}  // namespace v1
}  // namespace spanner
}  // namespace google

namespace google {
namespace spanner {
namespace v1 {

namespace protobuf_google_2fspanner_2fv1_2fkeys_2eproto {
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
}  // namespace protobuf_google_2fspanner_2fv1_2fkeys_2eproto

// ===================================================================

class KeyRange : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.KeyRange) */ {
 public:
  KeyRange();
  virtual ~KeyRange();

  KeyRange(const KeyRange& from);

  inline KeyRange& operator=(const KeyRange& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const KeyRange& default_instance();

  enum StartKeyTypeCase {
    kStartClosed = 1,
    kStartOpen = 2,
    START_KEY_TYPE_NOT_SET = 0,
  };

  enum EndKeyTypeCase {
    kEndClosed = 3,
    kEndOpen = 4,
    END_KEY_TYPE_NOT_SET = 0,
  };

  static inline const KeyRange* internal_default_instance() {
    return reinterpret_cast<const KeyRange*>(
               &_KeyRange_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(KeyRange* other);

  // implements Message ----------------------------------------------

  inline KeyRange* New() const PROTOBUF_FINAL { return New(NULL); }

  KeyRange* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const KeyRange& from);
  void MergeFrom(const KeyRange& from);
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
  void InternalSwap(KeyRange* other);
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

  // .google.protobuf.ListValue start_closed = 1;
  bool has_start_closed() const;
  void clear_start_closed();
  static const int kStartClosedFieldNumber = 1;
  const ::google::protobuf::ListValue& start_closed() const;
  ::google::protobuf::ListValue* mutable_start_closed();
  ::google::protobuf::ListValue* release_start_closed();
  void set_allocated_start_closed(::google::protobuf::ListValue* start_closed);

  // .google.protobuf.ListValue start_open = 2;
  bool has_start_open() const;
  void clear_start_open();
  static const int kStartOpenFieldNumber = 2;
  const ::google::protobuf::ListValue& start_open() const;
  ::google::protobuf::ListValue* mutable_start_open();
  ::google::protobuf::ListValue* release_start_open();
  void set_allocated_start_open(::google::protobuf::ListValue* start_open);

  // .google.protobuf.ListValue end_closed = 3;
  bool has_end_closed() const;
  void clear_end_closed();
  static const int kEndClosedFieldNumber = 3;
  const ::google::protobuf::ListValue& end_closed() const;
  ::google::protobuf::ListValue* mutable_end_closed();
  ::google::protobuf::ListValue* release_end_closed();
  void set_allocated_end_closed(::google::protobuf::ListValue* end_closed);

  // .google.protobuf.ListValue end_open = 4;
  bool has_end_open() const;
  void clear_end_open();
  static const int kEndOpenFieldNumber = 4;
  const ::google::protobuf::ListValue& end_open() const;
  ::google::protobuf::ListValue* mutable_end_open();
  ::google::protobuf::ListValue* release_end_open();
  void set_allocated_end_open(::google::protobuf::ListValue* end_open);

  StartKeyTypeCase start_key_type_case() const;
  EndKeyTypeCase end_key_type_case() const;
  // @@protoc_insertion_point(class_scope:google.spanner.v1.KeyRange)
 private:
  void set_has_start_closed();
  void set_has_start_open();
  void set_has_end_closed();
  void set_has_end_open();

  inline bool has_start_key_type() const;
  void clear_start_key_type();
  inline void clear_has_start_key_type();

  inline bool has_end_key_type() const;
  void clear_end_key_type();
  inline void clear_has_end_key_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union StartKeyTypeUnion {
    StartKeyTypeUnion() {}
    ::google::protobuf::ListValue* start_closed_;
    ::google::protobuf::ListValue* start_open_;
  } start_key_type_;
  union EndKeyTypeUnion {
    EndKeyTypeUnion() {}
    ::google::protobuf::ListValue* end_closed_;
    ::google::protobuf::ListValue* end_open_;
  } end_key_type_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[2];

  friend struct protobuf_google_2fspanner_2fv1_2fkeys_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class KeySet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.KeySet) */ {
 public:
  KeySet();
  virtual ~KeySet();

  KeySet(const KeySet& from);

  inline KeySet& operator=(const KeySet& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const KeySet& default_instance();

  static inline const KeySet* internal_default_instance() {
    return reinterpret_cast<const KeySet*>(
               &_KeySet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(KeySet* other);

  // implements Message ----------------------------------------------

  inline KeySet* New() const PROTOBUF_FINAL { return New(NULL); }

  KeySet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const KeySet& from);
  void MergeFrom(const KeySet& from);
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
  void InternalSwap(KeySet* other);
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

  // repeated .google.protobuf.ListValue keys = 1;
  int keys_size() const;
  void clear_keys();
  static const int kKeysFieldNumber = 1;
  const ::google::protobuf::ListValue& keys(int index) const;
  ::google::protobuf::ListValue* mutable_keys(int index);
  ::google::protobuf::ListValue* add_keys();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >*
      mutable_keys();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >&
      keys() const;

  // repeated .google.spanner.v1.KeyRange ranges = 2;
  int ranges_size() const;
  void clear_ranges();
  static const int kRangesFieldNumber = 2;
  const ::google::spanner::v1::KeyRange& ranges(int index) const;
  ::google::spanner::v1::KeyRange* mutable_ranges(int index);
  ::google::spanner::v1::KeyRange* add_ranges();
  ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::KeyRange >*
      mutable_ranges();
  const ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::KeyRange >&
      ranges() const;

  // bool all = 3;
  void clear_all();
  static const int kAllFieldNumber = 3;
  bool all() const;
  void set_all(bool value);

  // @@protoc_insertion_point(class_scope:google.spanner.v1.KeySet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue > keys_;
  ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::KeyRange > ranges_;
  bool all_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2fkeys_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// KeyRange

// .google.protobuf.ListValue start_closed = 1;
inline bool KeyRange::has_start_closed() const {
  return start_key_type_case() == kStartClosed;
}
inline void KeyRange::set_has_start_closed() {
  _oneof_case_[0] = kStartClosed;
}
inline void KeyRange::clear_start_closed() {
  if (has_start_closed()) {
    delete start_key_type_.start_closed_;
    clear_has_start_key_type();
  }
}
inline  const ::google::protobuf::ListValue& KeyRange::start_closed() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeyRange.start_closed)
  return has_start_closed()
      ? *start_key_type_.start_closed_
      : ::google::protobuf::ListValue::default_instance();
}
inline ::google::protobuf::ListValue* KeyRange::mutable_start_closed() {
  if (!has_start_closed()) {
    clear_start_key_type();
    set_has_start_closed();
    start_key_type_.start_closed_ = new ::google::protobuf::ListValue;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeyRange.start_closed)
  return start_key_type_.start_closed_;
}
inline ::google::protobuf::ListValue* KeyRange::release_start_closed() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.KeyRange.start_closed)
  if (has_start_closed()) {
    clear_has_start_key_type();
    ::google::protobuf::ListValue* temp = start_key_type_.start_closed_;
    start_key_type_.start_closed_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void KeyRange::set_allocated_start_closed(::google::protobuf::ListValue* start_closed) {
  clear_start_key_type();
  if (start_closed) {
    if (static_cast< ::google::protobuf::ListValue*>(start_closed)->GetArena() != NULL) {
      ::google::protobuf::ListValue* new_start_closed = new ::google::protobuf::ListValue;
      new_start_closed->CopyFrom(*start_closed);
      start_closed = new_start_closed;
    }
    set_has_start_closed();
    start_key_type_.start_closed_ = start_closed;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.KeyRange.start_closed)
}

// .google.protobuf.ListValue start_open = 2;
inline bool KeyRange::has_start_open() const {
  return start_key_type_case() == kStartOpen;
}
inline void KeyRange::set_has_start_open() {
  _oneof_case_[0] = kStartOpen;
}
inline void KeyRange::clear_start_open() {
  if (has_start_open()) {
    delete start_key_type_.start_open_;
    clear_has_start_key_type();
  }
}
inline  const ::google::protobuf::ListValue& KeyRange::start_open() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeyRange.start_open)
  return has_start_open()
      ? *start_key_type_.start_open_
      : ::google::protobuf::ListValue::default_instance();
}
inline ::google::protobuf::ListValue* KeyRange::mutable_start_open() {
  if (!has_start_open()) {
    clear_start_key_type();
    set_has_start_open();
    start_key_type_.start_open_ = new ::google::protobuf::ListValue;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeyRange.start_open)
  return start_key_type_.start_open_;
}
inline ::google::protobuf::ListValue* KeyRange::release_start_open() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.KeyRange.start_open)
  if (has_start_open()) {
    clear_has_start_key_type();
    ::google::protobuf::ListValue* temp = start_key_type_.start_open_;
    start_key_type_.start_open_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void KeyRange::set_allocated_start_open(::google::protobuf::ListValue* start_open) {
  clear_start_key_type();
  if (start_open) {
    if (static_cast< ::google::protobuf::ListValue*>(start_open)->GetArena() != NULL) {
      ::google::protobuf::ListValue* new_start_open = new ::google::protobuf::ListValue;
      new_start_open->CopyFrom(*start_open);
      start_open = new_start_open;
    }
    set_has_start_open();
    start_key_type_.start_open_ = start_open;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.KeyRange.start_open)
}

// .google.protobuf.ListValue end_closed = 3;
inline bool KeyRange::has_end_closed() const {
  return end_key_type_case() == kEndClosed;
}
inline void KeyRange::set_has_end_closed() {
  _oneof_case_[1] = kEndClosed;
}
inline void KeyRange::clear_end_closed() {
  if (has_end_closed()) {
    delete end_key_type_.end_closed_;
    clear_has_end_key_type();
  }
}
inline  const ::google::protobuf::ListValue& KeyRange::end_closed() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeyRange.end_closed)
  return has_end_closed()
      ? *end_key_type_.end_closed_
      : ::google::protobuf::ListValue::default_instance();
}
inline ::google::protobuf::ListValue* KeyRange::mutable_end_closed() {
  if (!has_end_closed()) {
    clear_end_key_type();
    set_has_end_closed();
    end_key_type_.end_closed_ = new ::google::protobuf::ListValue;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeyRange.end_closed)
  return end_key_type_.end_closed_;
}
inline ::google::protobuf::ListValue* KeyRange::release_end_closed() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.KeyRange.end_closed)
  if (has_end_closed()) {
    clear_has_end_key_type();
    ::google::protobuf::ListValue* temp = end_key_type_.end_closed_;
    end_key_type_.end_closed_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void KeyRange::set_allocated_end_closed(::google::protobuf::ListValue* end_closed) {
  clear_end_key_type();
  if (end_closed) {
    if (static_cast< ::google::protobuf::ListValue*>(end_closed)->GetArena() != NULL) {
      ::google::protobuf::ListValue* new_end_closed = new ::google::protobuf::ListValue;
      new_end_closed->CopyFrom(*end_closed);
      end_closed = new_end_closed;
    }
    set_has_end_closed();
    end_key_type_.end_closed_ = end_closed;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.KeyRange.end_closed)
}

// .google.protobuf.ListValue end_open = 4;
inline bool KeyRange::has_end_open() const {
  return end_key_type_case() == kEndOpen;
}
inline void KeyRange::set_has_end_open() {
  _oneof_case_[1] = kEndOpen;
}
inline void KeyRange::clear_end_open() {
  if (has_end_open()) {
    delete end_key_type_.end_open_;
    clear_has_end_key_type();
  }
}
inline  const ::google::protobuf::ListValue& KeyRange::end_open() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeyRange.end_open)
  return has_end_open()
      ? *end_key_type_.end_open_
      : ::google::protobuf::ListValue::default_instance();
}
inline ::google::protobuf::ListValue* KeyRange::mutable_end_open() {
  if (!has_end_open()) {
    clear_end_key_type();
    set_has_end_open();
    end_key_type_.end_open_ = new ::google::protobuf::ListValue;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeyRange.end_open)
  return end_key_type_.end_open_;
}
inline ::google::protobuf::ListValue* KeyRange::release_end_open() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.KeyRange.end_open)
  if (has_end_open()) {
    clear_has_end_key_type();
    ::google::protobuf::ListValue* temp = end_key_type_.end_open_;
    end_key_type_.end_open_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void KeyRange::set_allocated_end_open(::google::protobuf::ListValue* end_open) {
  clear_end_key_type();
  if (end_open) {
    if (static_cast< ::google::protobuf::ListValue*>(end_open)->GetArena() != NULL) {
      ::google::protobuf::ListValue* new_end_open = new ::google::protobuf::ListValue;
      new_end_open->CopyFrom(*end_open);
      end_open = new_end_open;
    }
    set_has_end_open();
    end_key_type_.end_open_ = end_open;
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.KeyRange.end_open)
}

inline bool KeyRange::has_start_key_type() const {
  return start_key_type_case() != START_KEY_TYPE_NOT_SET;
}
inline void KeyRange::clear_has_start_key_type() {
  _oneof_case_[0] = START_KEY_TYPE_NOT_SET;
}
inline bool KeyRange::has_end_key_type() const {
  return end_key_type_case() != END_KEY_TYPE_NOT_SET;
}
inline void KeyRange::clear_has_end_key_type() {
  _oneof_case_[1] = END_KEY_TYPE_NOT_SET;
}
inline KeyRange::StartKeyTypeCase KeyRange::start_key_type_case() const {
  return KeyRange::StartKeyTypeCase(_oneof_case_[0]);
}
inline KeyRange::EndKeyTypeCase KeyRange::end_key_type_case() const {
  return KeyRange::EndKeyTypeCase(_oneof_case_[1]);
}
// -------------------------------------------------------------------

// KeySet

// repeated .google.protobuf.ListValue keys = 1;
inline int KeySet::keys_size() const {
  return keys_.size();
}
inline void KeySet::clear_keys() {
  keys_.Clear();
}
inline const ::google::protobuf::ListValue& KeySet::keys(int index) const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeySet.keys)
  return keys_.Get(index);
}
inline ::google::protobuf::ListValue* KeySet::mutable_keys(int index) {
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeySet.keys)
  return keys_.Mutable(index);
}
inline ::google::protobuf::ListValue* KeySet::add_keys() {
  // @@protoc_insertion_point(field_add:google.spanner.v1.KeySet.keys)
  return keys_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >*
KeySet::mutable_keys() {
  // @@protoc_insertion_point(field_mutable_list:google.spanner.v1.KeySet.keys)
  return &keys_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >&
KeySet::keys() const {
  // @@protoc_insertion_point(field_list:google.spanner.v1.KeySet.keys)
  return keys_;
}

// repeated .google.spanner.v1.KeyRange ranges = 2;
inline int KeySet::ranges_size() const {
  return ranges_.size();
}
inline void KeySet::clear_ranges() {
  ranges_.Clear();
}
inline const ::google::spanner::v1::KeyRange& KeySet::ranges(int index) const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeySet.ranges)
  return ranges_.Get(index);
}
inline ::google::spanner::v1::KeyRange* KeySet::mutable_ranges(int index) {
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.KeySet.ranges)
  return ranges_.Mutable(index);
}
inline ::google::spanner::v1::KeyRange* KeySet::add_ranges() {
  // @@protoc_insertion_point(field_add:google.spanner.v1.KeySet.ranges)
  return ranges_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::KeyRange >*
KeySet::mutable_ranges() {
  // @@protoc_insertion_point(field_mutable_list:google.spanner.v1.KeySet.ranges)
  return &ranges_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::spanner::v1::KeyRange >&
KeySet::ranges() const {
  // @@protoc_insertion_point(field_list:google.spanner.v1.KeySet.ranges)
  return ranges_;
}

// bool all = 3;
inline void KeySet::clear_all() {
  all_ = false;
}
inline bool KeySet::all() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.KeySet.all)
  return all_;
}
inline void KeySet::set_all(bool value) {
  
  all_ = value;
  // @@protoc_insertion_point(field_set:google.spanner.v1.KeySet.all)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace spanner
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fspanner_2fv1_2fkeys_2eproto__INCLUDED