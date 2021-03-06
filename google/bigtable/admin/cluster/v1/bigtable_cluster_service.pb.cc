// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/bigtable/admin/cluster/v1/bigtable_cluster_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/bigtable/admin/cluster/v1/bigtable_cluster_service.pb.h"

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
namespace bigtable {
namespace admin {
namespace cluster {
namespace v1 {

namespace protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fservice_2eproto {


namespace {


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

const ::google::protobuf::uint32 TableStruct::offsets[] = { ~0u };
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/bigtable/admin/cluster/v1/bigtable_cluster_service.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void TableStruct::Shutdown() {
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  ::google::bigtable::admin::cluster::v1::protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto::InitDefaults();
  ::google::bigtable::admin::cluster::v1::protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fservice_5fmessages_2eproto::InitDefaults();
  ::google::longrunning::protobuf_google_2flongrunning_2foperations_2eproto::InitDefaults();
  ::google::protobuf::protobuf_google_2fprotobuf_2fempty_2eproto::InitDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\?google/bigtable/admin/cluster/v1/bigta"
      "ble_cluster_service.proto\022 google.bigtab"
      "le.admin.cluster.v1\032\034google/api/annotati"
      "ons.proto\032<google/bigtable/admin/cluster"
      "/v1/bigtable_cluster_data.proto\032Hgoogle/"
      "bigtable/admin/cluster/v1/bigtable_clust"
      "er_service_messages.proto\032#google/longru"
      "nning/operations.proto\032\033google/protobuf/"
      "empty.proto2\211\t\n\026BigtableClusterService\022\231"
      "\001\n\tListZones\0222.google.bigtable.admin.clu"
      "ster.v1.ListZonesRequest\0323.google.bigtab"
      "le.admin.cluster.v1.ListZonesResponse\"#\202"
      "\323\344\223\002\035\022\033/v1/{name=projects/*}/zones\022\236\001\n\nG"
      "etCluster\0223.google.bigtable.admin.cluste"
      "r.v1.GetClusterRequest\032).google.bigtable"
      ".admin.cluster.v1.Cluster\"0\202\323\344\223\002*\022(/v1/{"
      "name=projects/*/zones/*/clusters/*}\022\260\001\n\014"
      "ListClusters\0225.google.bigtable.admin.clu"
      "ster.v1.ListClustersRequest\0326.google.big"
      "table.admin.cluster.v1.ListClustersRespo"
      "nse\"1\202\323\344\223\002+\022)/v1/{name=projects/*}/aggre"
      "gated/clusters\022\245\001\n\rCreateCluster\0226.googl"
      "e.bigtable.admin.cluster.v1.CreateCluste"
      "rRequest\032).google.bigtable.admin.cluster"
      ".v1.Cluster\"1\202\323\344\223\002+\"&/v1/{name=projects/"
      "*/zones/*}/clusters:\001*\022\232\001\n\rUpdateCluster"
      "\022).google.bigtable.admin.cluster.v1.Clus"
      "ter\032).google.bigtable.admin.cluster.v1.C"
      "luster\"3\202\323\344\223\002-\032(/v1/{name=projects/*/zon"
      "es/*/clusters/*}:\001*\022\221\001\n\rDeleteCluster\0226."
      "google.bigtable.admin.cluster.v1.DeleteC"
      "lusterRequest\032\026.google.protobuf.Empty\"0\202"
      "\323\344\223\002**(/v1/{name=projects/*/zones/*/clus"
      "ters/*}\022\245\001\n\017UndeleteCluster\0228.google.big"
      "table.admin.cluster.v1.UndeleteClusterRe"
      "quest\032\035.google.longrunning.Operation\"9\202\323"
      "\344\223\0023\"1/v1/{name=projects/*/zones/*/clust"
      "ers/*}:undeleteB\217\001\n$com.google.bigtable."
      "admin.cluster.v1B\034BigtableClusterService"
      "sProtoP\001ZGgoogle.golang.org/genproto/goo"
      "gleapis/bigtable/admin/cluster/v1;cluste"
      "rb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1649);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/bigtable/admin/cluster/v1/bigtable_cluster_service.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::google::bigtable::admin::cluster::v1::protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fdata_2eproto::AddDescriptors();
  ::google::bigtable::admin::cluster::v1::protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fservice_5fmessages_2eproto::AddDescriptors();
  ::google::longrunning::protobuf_google_2flongrunning_2foperations_2eproto::AddDescriptors();
  ::google::protobuf::protobuf_google_2fprotobuf_2fempty_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fbigtable_2fadmin_2fcluster_2fv1_2fbigtable_5fcluster_5fservice_2eproto


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace cluster
}  // namespace admin
}  // namespace bigtable
}  // namespace google

// @@protoc_insertion_point(global_scope)
