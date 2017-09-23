// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/spanner/v1/result_set.proto

#ifndef PROTOBUF_google_2fspanner_2fv1_2fresult_5fset_2eproto__INCLUDED
#define PROTOBUF_google_2fspanner_2fv1_2fresult_5fset_2eproto__INCLUDED

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
#include "google/spanner/v1/query_plan.pb.h"
#include "google/spanner/v1/transaction.pb.h"
#include "google/spanner/v1/type.pb.h"
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
class PartialResultSet;
class PartialResultSetDefaultTypeInternal;
extern PartialResultSetDefaultTypeInternal _PartialResultSet_default_instance_;
class PlanNode;
class PlanNodeDefaultTypeInternal;
extern PlanNodeDefaultTypeInternal _PlanNode_default_instance_;
class PlanNode_ChildLink;
class PlanNode_ChildLinkDefaultTypeInternal;
extern PlanNode_ChildLinkDefaultTypeInternal _PlanNode_ChildLink_default_instance_;
class PlanNode_ShortRepresentation;
class PlanNode_ShortRepresentationDefaultTypeInternal;
extern PlanNode_ShortRepresentationDefaultTypeInternal _PlanNode_ShortRepresentation_default_instance_;
class PlanNode_ShortRepresentation_SubqueriesEntry;
class PlanNode_ShortRepresentation_SubqueriesEntryDefaultTypeInternal;
extern PlanNode_ShortRepresentation_SubqueriesEntryDefaultTypeInternal _PlanNode_ShortRepresentation_SubqueriesEntry_default_instance_;
class QueryPlan;
class QueryPlanDefaultTypeInternal;
extern QueryPlanDefaultTypeInternal _QueryPlan_default_instance_;
class ResultSet;
class ResultSetDefaultTypeInternal;
extern ResultSetDefaultTypeInternal _ResultSet_default_instance_;
class ResultSetMetadata;
class ResultSetMetadataDefaultTypeInternal;
extern ResultSetMetadataDefaultTypeInternal _ResultSetMetadata_default_instance_;
class ResultSetStats;
class ResultSetStatsDefaultTypeInternal;
extern ResultSetStatsDefaultTypeInternal _ResultSetStats_default_instance_;
class StructType;
class StructTypeDefaultTypeInternal;
extern StructTypeDefaultTypeInternal _StructType_default_instance_;
class StructType_Field;
class StructType_FieldDefaultTypeInternal;
extern StructType_FieldDefaultTypeInternal _StructType_Field_default_instance_;
class Transaction;
class TransactionDefaultTypeInternal;
extern TransactionDefaultTypeInternal _Transaction_default_instance_;
class TransactionOptions;
class TransactionOptionsDefaultTypeInternal;
extern TransactionOptionsDefaultTypeInternal _TransactionOptions_default_instance_;
class TransactionOptions_ReadOnly;
class TransactionOptions_ReadOnlyDefaultTypeInternal;
extern TransactionOptions_ReadOnlyDefaultTypeInternal _TransactionOptions_ReadOnly_default_instance_;
class TransactionOptions_ReadWrite;
class TransactionOptions_ReadWriteDefaultTypeInternal;
extern TransactionOptions_ReadWriteDefaultTypeInternal _TransactionOptions_ReadWrite_default_instance_;
class TransactionSelector;
class TransactionSelectorDefaultTypeInternal;
extern TransactionSelectorDefaultTypeInternal _TransactionSelector_default_instance_;
class Type;
class TypeDefaultTypeInternal;
extern TypeDefaultTypeInternal _Type_default_instance_;
}  // namespace v1
}  // namespace spanner
}  // namespace google

namespace google {
namespace spanner {
namespace v1 {

namespace protobuf_google_2fspanner_2fv1_2fresult_5fset_2eproto {
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
}  // namespace protobuf_google_2fspanner_2fv1_2fresult_5fset_2eproto

// ===================================================================

class ResultSet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.ResultSet) */ {
 public:
  ResultSet();
  virtual ~ResultSet();

  ResultSet(const ResultSet& from);

  inline ResultSet& operator=(const ResultSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResultSet& default_instance();

  static inline const ResultSet* internal_default_instance() {
    return reinterpret_cast<const ResultSet*>(
               &_ResultSet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ResultSet* other);

  // implements Message ----------------------------------------------

  inline ResultSet* New() const PROTOBUF_FINAL { return New(NULL); }

  ResultSet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResultSet& from);
  void MergeFrom(const ResultSet& from);
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
  void InternalSwap(ResultSet* other);
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

  // repeated .google.protobuf.ListValue rows = 2;
  int rows_size() const;
  void clear_rows();
  static const int kRowsFieldNumber = 2;
  const ::google::protobuf::ListValue& rows(int index) const;
  ::google::protobuf::ListValue* mutable_rows(int index);
  ::google::protobuf::ListValue* add_rows();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >*
      mutable_rows();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >&
      rows() const;

  // .google.spanner.v1.ResultSetMetadata metadata = 1;
  bool has_metadata() const;
  void clear_metadata();
  static const int kMetadataFieldNumber = 1;
  const ::google::spanner::v1::ResultSetMetadata& metadata() const;
  ::google::spanner::v1::ResultSetMetadata* mutable_metadata();
  ::google::spanner::v1::ResultSetMetadata* release_metadata();
  void set_allocated_metadata(::google::spanner::v1::ResultSetMetadata* metadata);

  // .google.spanner.v1.ResultSetStats stats = 3;
  bool has_stats() const;
  void clear_stats();
  static const int kStatsFieldNumber = 3;
  const ::google::spanner::v1::ResultSetStats& stats() const;
  ::google::spanner::v1::ResultSetStats* mutable_stats();
  ::google::spanner::v1::ResultSetStats* release_stats();
  void set_allocated_stats(::google::spanner::v1::ResultSetStats* stats);

  // @@protoc_insertion_point(class_scope:google.spanner.v1.ResultSet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue > rows_;
  ::google::spanner::v1::ResultSetMetadata* metadata_;
  ::google::spanner::v1::ResultSetStats* stats_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2fresult_5fset_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PartialResultSet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.PartialResultSet) */ {
 public:
  PartialResultSet();
  virtual ~PartialResultSet();

  PartialResultSet(const PartialResultSet& from);

  inline PartialResultSet& operator=(const PartialResultSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PartialResultSet& default_instance();

  static inline const PartialResultSet* internal_default_instance() {
    return reinterpret_cast<const PartialResultSet*>(
               &_PartialResultSet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(PartialResultSet* other);

  // implements Message ----------------------------------------------

  inline PartialResultSet* New() const PROTOBUF_FINAL { return New(NULL); }

  PartialResultSet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PartialResultSet& from);
  void MergeFrom(const PartialResultSet& from);
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
  void InternalSwap(PartialResultSet* other);
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

  // repeated .google.protobuf.Value values = 2;
  int values_size() const;
  void clear_values();
  static const int kValuesFieldNumber = 2;
  const ::google::protobuf::Value& values(int index) const;
  ::google::protobuf::Value* mutable_values(int index);
  ::google::protobuf::Value* add_values();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >*
      mutable_values();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >&
      values() const;

  // bytes resume_token = 4;
  void clear_resume_token();
  static const int kResumeTokenFieldNumber = 4;
  const ::std::string& resume_token() const;
  void set_resume_token(const ::std::string& value);
  #if LANG_CXX11
  void set_resume_token(::std::string&& value);
  #endif
  void set_resume_token(const char* value);
  void set_resume_token(const void* value, size_t size);
  ::std::string* mutable_resume_token();
  ::std::string* release_resume_token();
  void set_allocated_resume_token(::std::string* resume_token);

  // .google.spanner.v1.ResultSetMetadata metadata = 1;
  bool has_metadata() const;
  void clear_metadata();
  static const int kMetadataFieldNumber = 1;
  const ::google::spanner::v1::ResultSetMetadata& metadata() const;
  ::google::spanner::v1::ResultSetMetadata* mutable_metadata();
  ::google::spanner::v1::ResultSetMetadata* release_metadata();
  void set_allocated_metadata(::google::spanner::v1::ResultSetMetadata* metadata);

  // .google.spanner.v1.ResultSetStats stats = 5;
  bool has_stats() const;
  void clear_stats();
  static const int kStatsFieldNumber = 5;
  const ::google::spanner::v1::ResultSetStats& stats() const;
  ::google::spanner::v1::ResultSetStats* mutable_stats();
  ::google::spanner::v1::ResultSetStats* release_stats();
  void set_allocated_stats(::google::spanner::v1::ResultSetStats* stats);

  // bool chunked_value = 3;
  void clear_chunked_value();
  static const int kChunkedValueFieldNumber = 3;
  bool chunked_value() const;
  void set_chunked_value(bool value);

  // @@protoc_insertion_point(class_scope:google.spanner.v1.PartialResultSet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value > values_;
  ::google::protobuf::internal::ArenaStringPtr resume_token_;
  ::google::spanner::v1::ResultSetMetadata* metadata_;
  ::google::spanner::v1::ResultSetStats* stats_;
  bool chunked_value_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2fresult_5fset_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ResultSetMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.ResultSetMetadata) */ {
 public:
  ResultSetMetadata();
  virtual ~ResultSetMetadata();

  ResultSetMetadata(const ResultSetMetadata& from);

  inline ResultSetMetadata& operator=(const ResultSetMetadata& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResultSetMetadata& default_instance();

  static inline const ResultSetMetadata* internal_default_instance() {
    return reinterpret_cast<const ResultSetMetadata*>(
               &_ResultSetMetadata_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(ResultSetMetadata* other);

  // implements Message ----------------------------------------------

  inline ResultSetMetadata* New() const PROTOBUF_FINAL { return New(NULL); }

  ResultSetMetadata* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResultSetMetadata& from);
  void MergeFrom(const ResultSetMetadata& from);
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
  void InternalSwap(ResultSetMetadata* other);
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

  // .google.spanner.v1.StructType row_type = 1;
  bool has_row_type() const;
  void clear_row_type();
  static const int kRowTypeFieldNumber = 1;
  const ::google::spanner::v1::StructType& row_type() const;
  ::google::spanner::v1::StructType* mutable_row_type();
  ::google::spanner::v1::StructType* release_row_type();
  void set_allocated_row_type(::google::spanner::v1::StructType* row_type);

  // .google.spanner.v1.Transaction transaction = 2;
  bool has_transaction() const;
  void clear_transaction();
  static const int kTransactionFieldNumber = 2;
  const ::google::spanner::v1::Transaction& transaction() const;
  ::google::spanner::v1::Transaction* mutable_transaction();
  ::google::spanner::v1::Transaction* release_transaction();
  void set_allocated_transaction(::google::spanner::v1::Transaction* transaction);

  // @@protoc_insertion_point(class_scope:google.spanner.v1.ResultSetMetadata)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::spanner::v1::StructType* row_type_;
  ::google::spanner::v1::Transaction* transaction_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2fresult_5fset_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ResultSetStats : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.spanner.v1.ResultSetStats) */ {
 public:
  ResultSetStats();
  virtual ~ResultSetStats();

  ResultSetStats(const ResultSetStats& from);

  inline ResultSetStats& operator=(const ResultSetStats& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResultSetStats& default_instance();

  static inline const ResultSetStats* internal_default_instance() {
    return reinterpret_cast<const ResultSetStats*>(
               &_ResultSetStats_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(ResultSetStats* other);

  // implements Message ----------------------------------------------

  inline ResultSetStats* New() const PROTOBUF_FINAL { return New(NULL); }

  ResultSetStats* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResultSetStats& from);
  void MergeFrom(const ResultSetStats& from);
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
  void InternalSwap(ResultSetStats* other);
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

  // .google.spanner.v1.QueryPlan query_plan = 1;
  bool has_query_plan() const;
  void clear_query_plan();
  static const int kQueryPlanFieldNumber = 1;
  const ::google::spanner::v1::QueryPlan& query_plan() const;
  ::google::spanner::v1::QueryPlan* mutable_query_plan();
  ::google::spanner::v1::QueryPlan* release_query_plan();
  void set_allocated_query_plan(::google::spanner::v1::QueryPlan* query_plan);

  // .google.protobuf.Struct query_stats = 2;
  bool has_query_stats() const;
  void clear_query_stats();
  static const int kQueryStatsFieldNumber = 2;
  const ::google::protobuf::Struct& query_stats() const;
  ::google::protobuf::Struct* mutable_query_stats();
  ::google::protobuf::Struct* release_query_stats();
  void set_allocated_query_stats(::google::protobuf::Struct* query_stats);

  // @@protoc_insertion_point(class_scope:google.spanner.v1.ResultSetStats)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::spanner::v1::QueryPlan* query_plan_;
  ::google::protobuf::Struct* query_stats_;
  mutable int _cached_size_;
  friend struct protobuf_google_2fspanner_2fv1_2fresult_5fset_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ResultSet

// .google.spanner.v1.ResultSetMetadata metadata = 1;
inline bool ResultSet::has_metadata() const {
  return this != internal_default_instance() && metadata_ != NULL;
}
inline void ResultSet::clear_metadata() {
  if (GetArenaNoVirtual() == NULL && metadata_ != NULL) delete metadata_;
  metadata_ = NULL;
}
inline const ::google::spanner::v1::ResultSetMetadata& ResultSet::metadata() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.ResultSet.metadata)
  return metadata_ != NULL ? *metadata_
                         : *::google::spanner::v1::ResultSetMetadata::internal_default_instance();
}
inline ::google::spanner::v1::ResultSetMetadata* ResultSet::mutable_metadata() {
  
  if (metadata_ == NULL) {
    metadata_ = new ::google::spanner::v1::ResultSetMetadata;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.ResultSet.metadata)
  return metadata_;
}
inline ::google::spanner::v1::ResultSetMetadata* ResultSet::release_metadata() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.ResultSet.metadata)
  
  ::google::spanner::v1::ResultSetMetadata* temp = metadata_;
  metadata_ = NULL;
  return temp;
}
inline void ResultSet::set_allocated_metadata(::google::spanner::v1::ResultSetMetadata* metadata) {
  delete metadata_;
  metadata_ = metadata;
  if (metadata) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.ResultSet.metadata)
}

// repeated .google.protobuf.ListValue rows = 2;
inline int ResultSet::rows_size() const {
  return rows_.size();
}
inline void ResultSet::clear_rows() {
  rows_.Clear();
}
inline const ::google::protobuf::ListValue& ResultSet::rows(int index) const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.ResultSet.rows)
  return rows_.Get(index);
}
inline ::google::protobuf::ListValue* ResultSet::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.ResultSet.rows)
  return rows_.Mutable(index);
}
inline ::google::protobuf::ListValue* ResultSet::add_rows() {
  // @@protoc_insertion_point(field_add:google.spanner.v1.ResultSet.rows)
  return rows_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >*
ResultSet::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:google.spanner.v1.ResultSet.rows)
  return &rows_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::ListValue >&
ResultSet::rows() const {
  // @@protoc_insertion_point(field_list:google.spanner.v1.ResultSet.rows)
  return rows_;
}

// .google.spanner.v1.ResultSetStats stats = 3;
inline bool ResultSet::has_stats() const {
  return this != internal_default_instance() && stats_ != NULL;
}
inline void ResultSet::clear_stats() {
  if (GetArenaNoVirtual() == NULL && stats_ != NULL) delete stats_;
  stats_ = NULL;
}
inline const ::google::spanner::v1::ResultSetStats& ResultSet::stats() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.ResultSet.stats)
  return stats_ != NULL ? *stats_
                         : *::google::spanner::v1::ResultSetStats::internal_default_instance();
}
inline ::google::spanner::v1::ResultSetStats* ResultSet::mutable_stats() {
  
  if (stats_ == NULL) {
    stats_ = new ::google::spanner::v1::ResultSetStats;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.ResultSet.stats)
  return stats_;
}
inline ::google::spanner::v1::ResultSetStats* ResultSet::release_stats() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.ResultSet.stats)
  
  ::google::spanner::v1::ResultSetStats* temp = stats_;
  stats_ = NULL;
  return temp;
}
inline void ResultSet::set_allocated_stats(::google::spanner::v1::ResultSetStats* stats) {
  delete stats_;
  stats_ = stats;
  if (stats) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.ResultSet.stats)
}

// -------------------------------------------------------------------

// PartialResultSet

// .google.spanner.v1.ResultSetMetadata metadata = 1;
inline bool PartialResultSet::has_metadata() const {
  return this != internal_default_instance() && metadata_ != NULL;
}
inline void PartialResultSet::clear_metadata() {
  if (GetArenaNoVirtual() == NULL && metadata_ != NULL) delete metadata_;
  metadata_ = NULL;
}
inline const ::google::spanner::v1::ResultSetMetadata& PartialResultSet::metadata() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.PartialResultSet.metadata)
  return metadata_ != NULL ? *metadata_
                         : *::google::spanner::v1::ResultSetMetadata::internal_default_instance();
}
inline ::google::spanner::v1::ResultSetMetadata* PartialResultSet::mutable_metadata() {
  
  if (metadata_ == NULL) {
    metadata_ = new ::google::spanner::v1::ResultSetMetadata;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.PartialResultSet.metadata)
  return metadata_;
}
inline ::google::spanner::v1::ResultSetMetadata* PartialResultSet::release_metadata() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.PartialResultSet.metadata)
  
  ::google::spanner::v1::ResultSetMetadata* temp = metadata_;
  metadata_ = NULL;
  return temp;
}
inline void PartialResultSet::set_allocated_metadata(::google::spanner::v1::ResultSetMetadata* metadata) {
  delete metadata_;
  metadata_ = metadata;
  if (metadata) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.PartialResultSet.metadata)
}

// repeated .google.protobuf.Value values = 2;
inline int PartialResultSet::values_size() const {
  return values_.size();
}
inline void PartialResultSet::clear_values() {
  values_.Clear();
}
inline const ::google::protobuf::Value& PartialResultSet::values(int index) const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.PartialResultSet.values)
  return values_.Get(index);
}
inline ::google::protobuf::Value* PartialResultSet::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.PartialResultSet.values)
  return values_.Mutable(index);
}
inline ::google::protobuf::Value* PartialResultSet::add_values() {
  // @@protoc_insertion_point(field_add:google.spanner.v1.PartialResultSet.values)
  return values_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >*
PartialResultSet::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:google.spanner.v1.PartialResultSet.values)
  return &values_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >&
PartialResultSet::values() const {
  // @@protoc_insertion_point(field_list:google.spanner.v1.PartialResultSet.values)
  return values_;
}

// bool chunked_value = 3;
inline void PartialResultSet::clear_chunked_value() {
  chunked_value_ = false;
}
inline bool PartialResultSet::chunked_value() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.PartialResultSet.chunked_value)
  return chunked_value_;
}
inline void PartialResultSet::set_chunked_value(bool value) {
  
  chunked_value_ = value;
  // @@protoc_insertion_point(field_set:google.spanner.v1.PartialResultSet.chunked_value)
}

// bytes resume_token = 4;
inline void PartialResultSet::clear_resume_token() {
  resume_token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PartialResultSet::resume_token() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.PartialResultSet.resume_token)
  return resume_token_.GetNoArena();
}
inline void PartialResultSet::set_resume_token(const ::std::string& value) {
  
  resume_token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.spanner.v1.PartialResultSet.resume_token)
}
#if LANG_CXX11
inline void PartialResultSet::set_resume_token(::std::string&& value) {
  
  resume_token_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.spanner.v1.PartialResultSet.resume_token)
}
#endif
inline void PartialResultSet::set_resume_token(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  resume_token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.spanner.v1.PartialResultSet.resume_token)
}
inline void PartialResultSet::set_resume_token(const void* value, size_t size) {
  
  resume_token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.spanner.v1.PartialResultSet.resume_token)
}
inline ::std::string* PartialResultSet::mutable_resume_token() {
  
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.PartialResultSet.resume_token)
  return resume_token_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PartialResultSet::release_resume_token() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.PartialResultSet.resume_token)
  
  return resume_token_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PartialResultSet::set_allocated_resume_token(::std::string* resume_token) {
  if (resume_token != NULL) {
    
  } else {
    
  }
  resume_token_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resume_token);
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.PartialResultSet.resume_token)
}

// .google.spanner.v1.ResultSetStats stats = 5;
inline bool PartialResultSet::has_stats() const {
  return this != internal_default_instance() && stats_ != NULL;
}
inline void PartialResultSet::clear_stats() {
  if (GetArenaNoVirtual() == NULL && stats_ != NULL) delete stats_;
  stats_ = NULL;
}
inline const ::google::spanner::v1::ResultSetStats& PartialResultSet::stats() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.PartialResultSet.stats)
  return stats_ != NULL ? *stats_
                         : *::google::spanner::v1::ResultSetStats::internal_default_instance();
}
inline ::google::spanner::v1::ResultSetStats* PartialResultSet::mutable_stats() {
  
  if (stats_ == NULL) {
    stats_ = new ::google::spanner::v1::ResultSetStats;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.PartialResultSet.stats)
  return stats_;
}
inline ::google::spanner::v1::ResultSetStats* PartialResultSet::release_stats() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.PartialResultSet.stats)
  
  ::google::spanner::v1::ResultSetStats* temp = stats_;
  stats_ = NULL;
  return temp;
}
inline void PartialResultSet::set_allocated_stats(::google::spanner::v1::ResultSetStats* stats) {
  delete stats_;
  stats_ = stats;
  if (stats) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.PartialResultSet.stats)
}

// -------------------------------------------------------------------

// ResultSetMetadata

// .google.spanner.v1.StructType row_type = 1;
inline bool ResultSetMetadata::has_row_type() const {
  return this != internal_default_instance() && row_type_ != NULL;
}
inline void ResultSetMetadata::clear_row_type() {
  if (GetArenaNoVirtual() == NULL && row_type_ != NULL) delete row_type_;
  row_type_ = NULL;
}
inline const ::google::spanner::v1::StructType& ResultSetMetadata::row_type() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.ResultSetMetadata.row_type)
  return row_type_ != NULL ? *row_type_
                         : *::google::spanner::v1::StructType::internal_default_instance();
}
inline ::google::spanner::v1::StructType* ResultSetMetadata::mutable_row_type() {
  
  if (row_type_ == NULL) {
    row_type_ = new ::google::spanner::v1::StructType;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.ResultSetMetadata.row_type)
  return row_type_;
}
inline ::google::spanner::v1::StructType* ResultSetMetadata::release_row_type() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.ResultSetMetadata.row_type)
  
  ::google::spanner::v1::StructType* temp = row_type_;
  row_type_ = NULL;
  return temp;
}
inline void ResultSetMetadata::set_allocated_row_type(::google::spanner::v1::StructType* row_type) {
  delete row_type_;
  row_type_ = row_type;
  if (row_type) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.ResultSetMetadata.row_type)
}

// .google.spanner.v1.Transaction transaction = 2;
inline bool ResultSetMetadata::has_transaction() const {
  return this != internal_default_instance() && transaction_ != NULL;
}
inline void ResultSetMetadata::clear_transaction() {
  if (GetArenaNoVirtual() == NULL && transaction_ != NULL) delete transaction_;
  transaction_ = NULL;
}
inline const ::google::spanner::v1::Transaction& ResultSetMetadata::transaction() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.ResultSetMetadata.transaction)
  return transaction_ != NULL ? *transaction_
                         : *::google::spanner::v1::Transaction::internal_default_instance();
}
inline ::google::spanner::v1::Transaction* ResultSetMetadata::mutable_transaction() {
  
  if (transaction_ == NULL) {
    transaction_ = new ::google::spanner::v1::Transaction;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.ResultSetMetadata.transaction)
  return transaction_;
}
inline ::google::spanner::v1::Transaction* ResultSetMetadata::release_transaction() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.ResultSetMetadata.transaction)
  
  ::google::spanner::v1::Transaction* temp = transaction_;
  transaction_ = NULL;
  return temp;
}
inline void ResultSetMetadata::set_allocated_transaction(::google::spanner::v1::Transaction* transaction) {
  delete transaction_;
  transaction_ = transaction;
  if (transaction) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.ResultSetMetadata.transaction)
}

// -------------------------------------------------------------------

// ResultSetStats

// .google.spanner.v1.QueryPlan query_plan = 1;
inline bool ResultSetStats::has_query_plan() const {
  return this != internal_default_instance() && query_plan_ != NULL;
}
inline void ResultSetStats::clear_query_plan() {
  if (GetArenaNoVirtual() == NULL && query_plan_ != NULL) delete query_plan_;
  query_plan_ = NULL;
}
inline const ::google::spanner::v1::QueryPlan& ResultSetStats::query_plan() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.ResultSetStats.query_plan)
  return query_plan_ != NULL ? *query_plan_
                         : *::google::spanner::v1::QueryPlan::internal_default_instance();
}
inline ::google::spanner::v1::QueryPlan* ResultSetStats::mutable_query_plan() {
  
  if (query_plan_ == NULL) {
    query_plan_ = new ::google::spanner::v1::QueryPlan;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.ResultSetStats.query_plan)
  return query_plan_;
}
inline ::google::spanner::v1::QueryPlan* ResultSetStats::release_query_plan() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.ResultSetStats.query_plan)
  
  ::google::spanner::v1::QueryPlan* temp = query_plan_;
  query_plan_ = NULL;
  return temp;
}
inline void ResultSetStats::set_allocated_query_plan(::google::spanner::v1::QueryPlan* query_plan) {
  delete query_plan_;
  query_plan_ = query_plan;
  if (query_plan) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.ResultSetStats.query_plan)
}

// .google.protobuf.Struct query_stats = 2;
inline bool ResultSetStats::has_query_stats() const {
  return this != internal_default_instance() && query_stats_ != NULL;
}
inline void ResultSetStats::clear_query_stats() {
  if (GetArenaNoVirtual() == NULL && query_stats_ != NULL) delete query_stats_;
  query_stats_ = NULL;
}
inline const ::google::protobuf::Struct& ResultSetStats::query_stats() const {
  // @@protoc_insertion_point(field_get:google.spanner.v1.ResultSetStats.query_stats)
  return query_stats_ != NULL ? *query_stats_
                         : *::google::protobuf::Struct::internal_default_instance();
}
inline ::google::protobuf::Struct* ResultSetStats::mutable_query_stats() {
  
  if (query_stats_ == NULL) {
    query_stats_ = new ::google::protobuf::Struct;
  }
  // @@protoc_insertion_point(field_mutable:google.spanner.v1.ResultSetStats.query_stats)
  return query_stats_;
}
inline ::google::protobuf::Struct* ResultSetStats::release_query_stats() {
  // @@protoc_insertion_point(field_release:google.spanner.v1.ResultSetStats.query_stats)
  
  ::google::protobuf::Struct* temp = query_stats_;
  query_stats_ = NULL;
  return temp;
}
inline void ResultSetStats::set_allocated_query_stats(::google::protobuf::Struct* query_stats) {
  delete query_stats_;
  if (query_stats != NULL && query_stats->GetArena() != NULL) {
    ::google::protobuf::Struct* new_query_stats = new ::google::protobuf::Struct;
    new_query_stats->CopyFrom(*query_stats);
    query_stats = new_query_stats;
  }
  query_stats_ = query_stats;
  if (query_stats) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.spanner.v1.ResultSetStats.query_stats)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace spanner
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fspanner_2fv1_2fresult_5fset_2eproto__INCLUDED