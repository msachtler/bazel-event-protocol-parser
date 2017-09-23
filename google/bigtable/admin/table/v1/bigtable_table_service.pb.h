// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/bigtable/admin/table/v1/bigtable_table_service.proto

#ifndef PROTOBUF_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto__INCLUDED
#define PROTOBUF_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "google/api/annotations.pb.h"
#include "google/bigtable/admin/table/v1/bigtable_table_data.pb.h"
#include "google/bigtable/admin/table/v1/bigtable_table_service_messages.pb.h"
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace bigtable {
namespace admin {
namespace table {
namespace v1 {
class BulkDeleteRowsRequest;
class BulkDeleteRowsRequestDefaultTypeInternal;
extern BulkDeleteRowsRequestDefaultTypeInternal _BulkDeleteRowsRequest_default_instance_;
class ColumnFamily;
class ColumnFamilyDefaultTypeInternal;
extern ColumnFamilyDefaultTypeInternal _ColumnFamily_default_instance_;
class CreateColumnFamilyRequest;
class CreateColumnFamilyRequestDefaultTypeInternal;
extern CreateColumnFamilyRequestDefaultTypeInternal _CreateColumnFamilyRequest_default_instance_;
class CreateTableRequest;
class CreateTableRequestDefaultTypeInternal;
extern CreateTableRequestDefaultTypeInternal _CreateTableRequest_default_instance_;
class DeleteColumnFamilyRequest;
class DeleteColumnFamilyRequestDefaultTypeInternal;
extern DeleteColumnFamilyRequestDefaultTypeInternal _DeleteColumnFamilyRequest_default_instance_;
class DeleteTableRequest;
class DeleteTableRequestDefaultTypeInternal;
extern DeleteTableRequestDefaultTypeInternal _DeleteTableRequest_default_instance_;
class GcRule;
class GcRuleDefaultTypeInternal;
extern GcRuleDefaultTypeInternal _GcRule_default_instance_;
class GcRule_Intersection;
class GcRule_IntersectionDefaultTypeInternal;
extern GcRule_IntersectionDefaultTypeInternal _GcRule_Intersection_default_instance_;
class GcRule_Union;
class GcRule_UnionDefaultTypeInternal;
extern GcRule_UnionDefaultTypeInternal _GcRule_Union_default_instance_;
class GetTableRequest;
class GetTableRequestDefaultTypeInternal;
extern GetTableRequestDefaultTypeInternal _GetTableRequest_default_instance_;
class ListTablesRequest;
class ListTablesRequestDefaultTypeInternal;
extern ListTablesRequestDefaultTypeInternal _ListTablesRequest_default_instance_;
class ListTablesResponse;
class ListTablesResponseDefaultTypeInternal;
extern ListTablesResponseDefaultTypeInternal _ListTablesResponse_default_instance_;
class RenameTableRequest;
class RenameTableRequestDefaultTypeInternal;
extern RenameTableRequestDefaultTypeInternal _RenameTableRequest_default_instance_;
class Table;
class TableDefaultTypeInternal;
extern TableDefaultTypeInternal _Table_default_instance_;
class Table_ColumnFamiliesEntry;
class Table_ColumnFamiliesEntryDefaultTypeInternal;
extern Table_ColumnFamiliesEntryDefaultTypeInternal _Table_ColumnFamiliesEntry_default_instance_;
}  // namespace v1
}  // namespace table
}  // namespace admin
}  // namespace bigtable
namespace protobuf {
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace bigtable {
namespace admin {
namespace table {
namespace v1 {

namespace protobuf_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto {
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
}  // namespace protobuf_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto

// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace table
}  // namespace admin
}  // namespace bigtable
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fbigtable_2fadmin_2ftable_2fv1_2fbigtable_5ftable_5fservice_2eproto__INCLUDED
