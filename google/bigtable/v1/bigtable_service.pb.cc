// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/bigtable/v1/bigtable_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/bigtable/v1/bigtable_service.pb.h"

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
namespace v1 {

namespace protobuf_google_2fbigtable_2fv1_2fbigtable_5fservice_2eproto {


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
      "google/bigtable/v1/bigtable_service.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  ::google::bigtable::v1::protobuf_google_2fbigtable_2fv1_2fbigtable_5fdata_2eproto::InitDefaults();
  ::google::bigtable::v1::protobuf_google_2fbigtable_2fv1_2fbigtable_5fservice_5fmessages_2eproto::InitDefaults();
  ::google::protobuf::protobuf_google_2fprotobuf_2fempty_2eproto::InitDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n)google/bigtable/v1/bigtable_service.pr"
      "oto\022\022google.bigtable.v1\032\034google/api/anno"
      "tations.proto\032&google/bigtable/v1/bigtab"
      "le_data.proto\0322google/bigtable/v1/bigtab"
      "le_service_messages.proto\032\033google/protob"
      "uf/empty.proto2\335\010\n\017BigtableService\022\245\001\n\010R"
      "eadRows\022#.google.bigtable.v1.ReadRowsReq"
      "uest\032$.google.bigtable.v1.ReadRowsRespon"
      "se\"L\202\323\344\223\002F\"A/v1/{table_name=projects/*/z"
      "ones/*/clusters/*/tables/*}/rows:read:\001*"
      "0\001\022\267\001\n\rSampleRowKeys\022(.google.bigtable.v"
      "1.SampleRowKeysRequest\032).google.bigtable"
      ".v1.SampleRowKeysResponse\"O\202\323\344\223\002I\022G/v1/{"
      "table_name=projects/*/zones/*/clusters/*"
      "/tables/*}/rows:sampleKeys0\001\022\243\001\n\tMutateR"
      "ow\022$.google.bigtable.v1.MutateRowRequest"
      "\032\026.google.protobuf.Empty\"X\202\323\344\223\002R\"M/v1/{t"
      "able_name=projects/*/zones/*/clusters/*/"
      "tables/*}/rows/{row_key}:mutate:\001*\022\252\001\n\nM"
      "utateRows\022%.google.bigtable.v1.MutateRow"
      "sRequest\032&.google.bigtable.v1.MutateRows"
      "Response\"M\202\323\344\223\002G\"B/v1/{table_name=projec"
      "ts/*/zones/*/clusters/*/tables/*}:mutate"
      "Rows:\001*\022\322\001\n\021CheckAndMutateRow\022,.google.b"
      "igtable.v1.CheckAndMutateRowRequest\032-.go"
      "ogle.bigtable.v1.CheckAndMutateRowRespon"
      "se\"`\202\323\344\223\002Z\"U/v1/{table_name=projects/*/z"
      "ones/*/clusters/*/tables/*}/rows/{row_ke"
      "y}:checkAndMutate:\001*\022\277\001\n\022ReadModifyWrite"
      "Row\022-.google.bigtable.v1.ReadModifyWrite"
      "RowRequest\032\027.google.bigtable.v1.Row\"a\202\323\344"
      "\223\002[\"V/v1/{table_name=projects/*/zones/*/"
      "clusters/*/tables/*}/rows/{row_key}:read"
      "ModifyWrite:\001*Bp\n\026com.google.bigtable.v1"
      "B\025BigtableServicesProtoP\001Z:google.golang"
      ".org/genproto/googleapis/bigtable/v1;big"
      "table\210\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1456);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/bigtable/v1/bigtable_service.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
  ::google::bigtable::v1::protobuf_google_2fbigtable_2fv1_2fbigtable_5fdata_2eproto::AddDescriptors();
  ::google::bigtable::v1::protobuf_google_2fbigtable_2fv1_2fbigtable_5fservice_5fmessages_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fbigtable_2fv1_2fbigtable_5fservice_2eproto


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace bigtable
}  // namespace google

// @@protoc_insertion_point(global_scope)
