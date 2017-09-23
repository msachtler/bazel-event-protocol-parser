// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#include "google/devtools/cloudbuild/v1/cloudbuild.pb.h"
#include "google/devtools/cloudbuild/v1/cloudbuild.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace google {
namespace devtools {
namespace cloudbuild {
namespace v1 {

static const char* CloudBuild_method_names[] = {
  "/google.devtools.cloudbuild.v1.CloudBuild/CreateBuild",
  "/google.devtools.cloudbuild.v1.CloudBuild/GetBuild",
  "/google.devtools.cloudbuild.v1.CloudBuild/ListBuilds",
  "/google.devtools.cloudbuild.v1.CloudBuild/CancelBuild",
  "/google.devtools.cloudbuild.v1.CloudBuild/CreateBuildTrigger",
  "/google.devtools.cloudbuild.v1.CloudBuild/GetBuildTrigger",
  "/google.devtools.cloudbuild.v1.CloudBuild/ListBuildTriggers",
  "/google.devtools.cloudbuild.v1.CloudBuild/DeleteBuildTrigger",
  "/google.devtools.cloudbuild.v1.CloudBuild/UpdateBuildTrigger",
};

std::unique_ptr< CloudBuild::Stub> CloudBuild::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< CloudBuild::Stub> stub(new CloudBuild::Stub(channel));
  return stub;
}

CloudBuild::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateBuild_(CloudBuild_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetBuild_(CloudBuild_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListBuilds_(CloudBuild_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CancelBuild_(CloudBuild_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateBuildTrigger_(CloudBuild_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetBuildTrigger_(CloudBuild_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListBuildTriggers_(CloudBuild_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteBuildTrigger_(CloudBuild_method_names[7], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateBuildTrigger_(CloudBuild_method_names[8], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status CloudBuild::Stub::CreateBuild(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::CreateBuildRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateBuild_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* CloudBuild::Stub::AsyncCreateBuildRaw(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::CreateBuildRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateBuild_, context, request);
}

::grpc::Status CloudBuild::Stub::GetBuild(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::GetBuildRequest& request, ::google::devtools::cloudbuild::v1::Build* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetBuild_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::Build>* CloudBuild::Stub::AsyncGetBuildRaw(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::GetBuildRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::Build>::Create(channel_.get(), cq, rpcmethod_GetBuild_, context, request);
}

::grpc::Status CloudBuild::Stub::ListBuilds(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::ListBuildsRequest& request, ::google::devtools::cloudbuild::v1::ListBuildsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListBuilds_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::ListBuildsResponse>* CloudBuild::Stub::AsyncListBuildsRaw(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::ListBuildsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::ListBuildsResponse>::Create(channel_.get(), cq, rpcmethod_ListBuilds_, context, request);
}

::grpc::Status CloudBuild::Stub::CancelBuild(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::CancelBuildRequest& request, ::google::devtools::cloudbuild::v1::Build* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CancelBuild_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::Build>* CloudBuild::Stub::AsyncCancelBuildRaw(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::CancelBuildRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::Build>::Create(channel_.get(), cq, rpcmethod_CancelBuild_, context, request);
}

::grpc::Status CloudBuild::Stub::CreateBuildTrigger(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::CreateBuildTriggerRequest& request, ::google::devtools::cloudbuild::v1::BuildTrigger* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateBuildTrigger_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::BuildTrigger>* CloudBuild::Stub::AsyncCreateBuildTriggerRaw(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::CreateBuildTriggerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::BuildTrigger>::Create(channel_.get(), cq, rpcmethod_CreateBuildTrigger_, context, request);
}

::grpc::Status CloudBuild::Stub::GetBuildTrigger(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::GetBuildTriggerRequest& request, ::google::devtools::cloudbuild::v1::BuildTrigger* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetBuildTrigger_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::BuildTrigger>* CloudBuild::Stub::AsyncGetBuildTriggerRaw(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::GetBuildTriggerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::BuildTrigger>::Create(channel_.get(), cq, rpcmethod_GetBuildTrigger_, context, request);
}

::grpc::Status CloudBuild::Stub::ListBuildTriggers(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::ListBuildTriggersRequest& request, ::google::devtools::cloudbuild::v1::ListBuildTriggersResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListBuildTriggers_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::ListBuildTriggersResponse>* CloudBuild::Stub::AsyncListBuildTriggersRaw(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::ListBuildTriggersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::ListBuildTriggersResponse>::Create(channel_.get(), cq, rpcmethod_ListBuildTriggers_, context, request);
}

::grpc::Status CloudBuild::Stub::DeleteBuildTrigger(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteBuildTrigger_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* CloudBuild::Stub::AsyncDeleteBuildTriggerRaw(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteBuildTrigger_, context, request);
}

::grpc::Status CloudBuild::Stub::UpdateBuildTrigger(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest& request, ::google::devtools::cloudbuild::v1::BuildTrigger* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateBuildTrigger_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::BuildTrigger>* CloudBuild::Stub::AsyncUpdateBuildTriggerRaw(::grpc::ClientContext* context, const ::google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::cloudbuild::v1::BuildTrigger>::Create(channel_.get(), cq, rpcmethod_UpdateBuildTrigger_, context, request);
}

CloudBuild::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      CloudBuild_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CloudBuild::Service, ::google::devtools::cloudbuild::v1::CreateBuildRequest, ::google::longrunning::Operation>(
          std::mem_fn(&CloudBuild::Service::CreateBuild), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      CloudBuild_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CloudBuild::Service, ::google::devtools::cloudbuild::v1::GetBuildRequest, ::google::devtools::cloudbuild::v1::Build>(
          std::mem_fn(&CloudBuild::Service::GetBuild), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      CloudBuild_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CloudBuild::Service, ::google::devtools::cloudbuild::v1::ListBuildsRequest, ::google::devtools::cloudbuild::v1::ListBuildsResponse>(
          std::mem_fn(&CloudBuild::Service::ListBuilds), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      CloudBuild_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CloudBuild::Service, ::google::devtools::cloudbuild::v1::CancelBuildRequest, ::google::devtools::cloudbuild::v1::Build>(
          std::mem_fn(&CloudBuild::Service::CancelBuild), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      CloudBuild_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CloudBuild::Service, ::google::devtools::cloudbuild::v1::CreateBuildTriggerRequest, ::google::devtools::cloudbuild::v1::BuildTrigger>(
          std::mem_fn(&CloudBuild::Service::CreateBuildTrigger), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      CloudBuild_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CloudBuild::Service, ::google::devtools::cloudbuild::v1::GetBuildTriggerRequest, ::google::devtools::cloudbuild::v1::BuildTrigger>(
          std::mem_fn(&CloudBuild::Service::GetBuildTrigger), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      CloudBuild_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CloudBuild::Service, ::google::devtools::cloudbuild::v1::ListBuildTriggersRequest, ::google::devtools::cloudbuild::v1::ListBuildTriggersResponse>(
          std::mem_fn(&CloudBuild::Service::ListBuildTriggers), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      CloudBuild_method_names[7],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CloudBuild::Service, ::google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest, ::google::protobuf::Empty>(
          std::mem_fn(&CloudBuild::Service::DeleteBuildTrigger), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      CloudBuild_method_names[8],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CloudBuild::Service, ::google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest, ::google::devtools::cloudbuild::v1::BuildTrigger>(
          std::mem_fn(&CloudBuild::Service::UpdateBuildTrigger), this)));
}

CloudBuild::Service::~Service() {
}

::grpc::Status CloudBuild::Service::CreateBuild(::grpc::ServerContext* context, const ::google::devtools::cloudbuild::v1::CreateBuildRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBuild::Service::GetBuild(::grpc::ServerContext* context, const ::google::devtools::cloudbuild::v1::GetBuildRequest* request, ::google::devtools::cloudbuild::v1::Build* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBuild::Service::ListBuilds(::grpc::ServerContext* context, const ::google::devtools::cloudbuild::v1::ListBuildsRequest* request, ::google::devtools::cloudbuild::v1::ListBuildsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBuild::Service::CancelBuild(::grpc::ServerContext* context, const ::google::devtools::cloudbuild::v1::CancelBuildRequest* request, ::google::devtools::cloudbuild::v1::Build* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBuild::Service::CreateBuildTrigger(::grpc::ServerContext* context, const ::google::devtools::cloudbuild::v1::CreateBuildTriggerRequest* request, ::google::devtools::cloudbuild::v1::BuildTrigger* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBuild::Service::GetBuildTrigger(::grpc::ServerContext* context, const ::google::devtools::cloudbuild::v1::GetBuildTriggerRequest* request, ::google::devtools::cloudbuild::v1::BuildTrigger* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBuild::Service::ListBuildTriggers(::grpc::ServerContext* context, const ::google::devtools::cloudbuild::v1::ListBuildTriggersRequest* request, ::google::devtools::cloudbuild::v1::ListBuildTriggersResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBuild::Service::DeleteBuildTrigger(::grpc::ServerContext* context, const ::google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CloudBuild::Service::UpdateBuildTrigger(::grpc::ServerContext* context, const ::google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest* request, ::google::devtools::cloudbuild::v1::BuildTrigger* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace devtools
}  // namespace cloudbuild
}  // namespace v1

