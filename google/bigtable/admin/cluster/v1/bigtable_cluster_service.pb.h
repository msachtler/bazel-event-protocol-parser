// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/bigtable/admin/cluster/v1/bigtable_cluster_service.proto

#ifndef PROTOBUF_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fservice_2eproto__INCLUDED
#define PROTOBUF_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fservice_2eproto__INCLUDED

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
#include "google/bigtable/admin/cluster/v1/bigtable_cluster_data.pb.h"
#include "google/bigtable/admin/cluster/v1/bigtable_cluster_service_messages.pb.h"
#include "google/longrunning/operations.pb.h"
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)
namespace google {
namespace api {
}  // namespace api
namespace bigtable {
namespace admin {
namespace cluster {
namespace v1 {
class Cluster;
class ClusterDefaultTypeInternal;
extern ClusterDefaultTypeInternal _Cluster_default_instance_;
class CreateClusterMetadata;
class CreateClusterMetadataDefaultTypeInternal;
extern CreateClusterMetadataDefaultTypeInternal _CreateClusterMetadata_default_instance_;
class CreateClusterRequest;
class CreateClusterRequestDefaultTypeInternal;
extern CreateClusterRequestDefaultTypeInternal _CreateClusterRequest_default_instance_;
class DeleteClusterRequest;
class DeleteClusterRequestDefaultTypeInternal;
extern DeleteClusterRequestDefaultTypeInternal _DeleteClusterRequest_default_instance_;
class GetClusterRequest;
class GetClusterRequestDefaultTypeInternal;
extern GetClusterRequestDefaultTypeInternal _GetClusterRequest_default_instance_;
class ListClustersRequest;
class ListClustersRequestDefaultTypeInternal;
extern ListClustersRequestDefaultTypeInternal _ListClustersRequest_default_instance_;
class ListClustersResponse;
class ListClustersResponseDefaultTypeInternal;
extern ListClustersResponseDefaultTypeInternal _ListClustersResponse_default_instance_;
class ListZonesRequest;
class ListZonesRequestDefaultTypeInternal;
extern ListZonesRequestDefaultTypeInternal _ListZonesRequest_default_instance_;
class ListZonesResponse;
class ListZonesResponseDefaultTypeInternal;
extern ListZonesResponseDefaultTypeInternal _ListZonesResponse_default_instance_;
class UndeleteClusterMetadata;
class UndeleteClusterMetadataDefaultTypeInternal;
extern UndeleteClusterMetadataDefaultTypeInternal _UndeleteClusterMetadata_default_instance_;
class UndeleteClusterRequest;
class UndeleteClusterRequestDefaultTypeInternal;
extern UndeleteClusterRequestDefaultTypeInternal _UndeleteClusterRequest_default_instance_;
class UpdateClusterMetadata;
class UpdateClusterMetadataDefaultTypeInternal;
extern UpdateClusterMetadataDefaultTypeInternal _UpdateClusterMetadata_default_instance_;
class V2OperationMetadata;
class V2OperationMetadataDefaultTypeInternal;
extern V2OperationMetadataDefaultTypeInternal _V2OperationMetadata_default_instance_;
class Zone;
class ZoneDefaultTypeInternal;
extern ZoneDefaultTypeInternal _Zone_default_instance_;
}  // namespace v1
}  // namespace cluster
}  // namespace admin
}  // namespace bigtable
namespace longrunning {
class CancelOperationRequest;
class CancelOperationRequestDefaultTypeInternal;
extern CancelOperationRequestDefaultTypeInternal _CancelOperationRequest_default_instance_;
class DeleteOperationRequest;
class DeleteOperationRequestDefaultTypeInternal;
extern DeleteOperationRequestDefaultTypeInternal _DeleteOperationRequest_default_instance_;
class GetOperationRequest;
class GetOperationRequestDefaultTypeInternal;
extern GetOperationRequestDefaultTypeInternal _GetOperationRequest_default_instance_;
class ListOperationsRequest;
class ListOperationsRequestDefaultTypeInternal;
extern ListOperationsRequestDefaultTypeInternal _ListOperationsRequest_default_instance_;
class ListOperationsResponse;
class ListOperationsResponseDefaultTypeInternal;
extern ListOperationsResponseDefaultTypeInternal _ListOperationsResponse_default_instance_;
class Operation;
class OperationDefaultTypeInternal;
extern OperationDefaultTypeInternal _Operation_default_instance_;
}  // namespace longrunning
namespace protobuf {
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace google {
namespace bigtable {
namespace admin {
namespace cluster {
namespace v1 {

namespace protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fservice_2eproto {
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
}  // namespace protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fservice_2eproto

// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace v1
}  // namespace cluster
}  // namespace admin
}  // namespace bigtable
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fservice_2eproto__INCLUDED
