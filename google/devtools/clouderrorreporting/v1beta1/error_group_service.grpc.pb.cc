// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/clouderrorreporting/v1beta1/error_group_service.proto

#include "google/devtools/clouderrorreporting/v1beta1/error_group_service.pb.h"
#include "google/devtools/clouderrorreporting/v1beta1/error_group_service.grpc.pb.h"

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
namespace clouderrorreporting {
namespace v1beta1 {

static const char* ErrorGroupService_method_names[] = {
  "/google.devtools.clouderrorreporting.v1beta1.ErrorGroupService/GetGroup",
  "/google.devtools.clouderrorreporting.v1beta1.ErrorGroupService/UpdateGroup",
};

std::unique_ptr< ErrorGroupService::Stub> ErrorGroupService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< ErrorGroupService::Stub> stub(new ErrorGroupService::Stub(channel));
  return stub;
}

ErrorGroupService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetGroup_(ErrorGroupService_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateGroup_(ErrorGroupService_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ErrorGroupService::Stub::GetGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest& request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetGroup_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* ErrorGroupService::Stub::AsyncGetGroupRaw(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>::Create(channel_.get(), cq, rpcmethod_GetGroup_, context, request);
}

::grpc::Status ErrorGroupService::Stub::UpdateGroup(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest& request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateGroup_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>* ErrorGroupService::Stub::AsyncUpdateGroupRaw(::grpc::ClientContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>::Create(channel_.get(), cq, rpcmethod_UpdateGroup_, context, request);
}

ErrorGroupService::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      ErrorGroupService_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ErrorGroupService::Service, ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>(
          std::mem_fn(&ErrorGroupService::Service::GetGroup), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      ErrorGroupService_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< ErrorGroupService::Service, ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup>(
          std::mem_fn(&ErrorGroupService::Service::UpdateGroup), this)));
}

ErrorGroupService::Service::~Service() {
}

::grpc::Status ErrorGroupService::Service::GetGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::GetGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ErrorGroupService::Service::UpdateGroup(::grpc::ServerContext* context, const ::google::devtools::clouderrorreporting::v1beta1::UpdateGroupRequest* request, ::google::devtools::clouderrorreporting::v1beta1::ErrorGroup* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace devtools
}  // namespace clouderrorreporting
}  // namespace v1beta1

