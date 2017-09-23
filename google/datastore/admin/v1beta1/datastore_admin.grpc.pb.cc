// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/datastore/admin/v1beta1/datastore_admin.proto

#include "google/datastore/admin/v1beta1/datastore_admin.pb.h"
#include "google/datastore/admin/v1beta1/datastore_admin.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace datastore {
namespace admin {
namespace v1beta1 {

static const char* DatastoreAdmin_method_names[] = {
  "/google.datastore.admin.v1beta1.DatastoreAdmin/ExportEntities",
  "/google.datastore.admin.v1beta1.DatastoreAdmin/ImportEntities",
};

std::unique_ptr< DatastoreAdmin::Stub> DatastoreAdmin::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< DatastoreAdmin::Stub> stub(new DatastoreAdmin::Stub(channel));
  return stub;
}

DatastoreAdmin::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ExportEntities_(DatastoreAdmin_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ImportEntities_(DatastoreAdmin_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status DatastoreAdmin::Stub::ExportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ExportEntities_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* DatastoreAdmin::Stub::AsyncExportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ExportEntities_, context, request);
}

::grpc::Status DatastoreAdmin::Stub::ImportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ImportEntities_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* DatastoreAdmin::Stub::AsyncImportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_ImportEntities_, context, request);
}

DatastoreAdmin::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      DatastoreAdmin_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< DatastoreAdmin::Service, ::google::datastore::admin::v1beta1::ExportEntitiesRequest, ::google::longrunning::Operation>(
          std::mem_fn(&DatastoreAdmin::Service::ExportEntities), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      DatastoreAdmin_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< DatastoreAdmin::Service, ::google::datastore::admin::v1beta1::ImportEntitiesRequest, ::google::longrunning::Operation>(
          std::mem_fn(&DatastoreAdmin::Service::ImportEntities), this)));
}

DatastoreAdmin::Service::~Service() {
}

::grpc::Status DatastoreAdmin::Service::ExportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DatastoreAdmin::Service::ImportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace datastore
}  // namespace admin
}  // namespace v1beta1
