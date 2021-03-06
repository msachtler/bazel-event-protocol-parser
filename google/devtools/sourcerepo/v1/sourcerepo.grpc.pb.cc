// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/devtools/sourcerepo/v1/sourcerepo.proto

#include "google/devtools/sourcerepo/v1/sourcerepo.pb.h"
#include "google/devtools/sourcerepo/v1/sourcerepo.grpc.pb.h"

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
namespace sourcerepo {
namespace v1 {

static const char* SourceRepo_method_names[] = {
  "/google.devtools.sourcerepo.v1.SourceRepo/ListRepos",
  "/google.devtools.sourcerepo.v1.SourceRepo/GetRepo",
  "/google.devtools.sourcerepo.v1.SourceRepo/CreateRepo",
  "/google.devtools.sourcerepo.v1.SourceRepo/DeleteRepo",
  "/google.devtools.sourcerepo.v1.SourceRepo/SetIamPolicy",
  "/google.devtools.sourcerepo.v1.SourceRepo/GetIamPolicy",
  "/google.devtools.sourcerepo.v1.SourceRepo/TestIamPermissions",
};

std::unique_ptr< SourceRepo::Stub> SourceRepo::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< SourceRepo::Stub> stub(new SourceRepo::Stub(channel));
  return stub;
}

SourceRepo::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListRepos_(SourceRepo_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetRepo_(SourceRepo_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateRepo_(SourceRepo_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteRepo_(SourceRepo_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetIamPolicy_(SourceRepo_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetIamPolicy_(SourceRepo_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TestIamPermissions_(SourceRepo_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SourceRepo::Stub::ListRepos(::grpc::ClientContext* context, const ::google::devtools::sourcerepo::v1::ListReposRequest& request, ::google::devtools::sourcerepo::v1::ListReposResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ListRepos_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::sourcerepo::v1::ListReposResponse>* SourceRepo::Stub::AsyncListReposRaw(::grpc::ClientContext* context, const ::google::devtools::sourcerepo::v1::ListReposRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::sourcerepo::v1::ListReposResponse>::Create(channel_.get(), cq, rpcmethod_ListRepos_, context, request);
}

::grpc::Status SourceRepo::Stub::GetRepo(::grpc::ClientContext* context, const ::google::devtools::sourcerepo::v1::GetRepoRequest& request, ::google::devtools::sourcerepo::v1::Repo* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetRepo_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::sourcerepo::v1::Repo>* SourceRepo::Stub::AsyncGetRepoRaw(::grpc::ClientContext* context, const ::google::devtools::sourcerepo::v1::GetRepoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::sourcerepo::v1::Repo>::Create(channel_.get(), cq, rpcmethod_GetRepo_, context, request);
}

::grpc::Status SourceRepo::Stub::CreateRepo(::grpc::ClientContext* context, const ::google::devtools::sourcerepo::v1::CreateRepoRequest& request, ::google::devtools::sourcerepo::v1::Repo* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateRepo_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::devtools::sourcerepo::v1::Repo>* SourceRepo::Stub::AsyncCreateRepoRaw(::grpc::ClientContext* context, const ::google::devtools::sourcerepo::v1::CreateRepoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::devtools::sourcerepo::v1::Repo>::Create(channel_.get(), cq, rpcmethod_CreateRepo_, context, request);
}

::grpc::Status SourceRepo::Stub::DeleteRepo(::grpc::ClientContext* context, const ::google::devtools::sourcerepo::v1::DeleteRepoRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteRepo_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* SourceRepo::Stub::AsyncDeleteRepoRaw(::grpc::ClientContext* context, const ::google::devtools::sourcerepo::v1::DeleteRepoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteRepo_, context, request);
}

::grpc::Status SourceRepo::Stub::SetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::google::iam::v1::Policy* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SetIamPolicy_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* SourceRepo::Stub::AsyncSetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::SetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>::Create(channel_.get(), cq, rpcmethod_SetIamPolicy_, context, request);
}

::grpc::Status SourceRepo::Stub::GetIamPolicy(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::google::iam::v1::Policy* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetIamPolicy_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>* SourceRepo::Stub::AsyncGetIamPolicyRaw(::grpc::ClientContext* context, const ::google::iam::v1::GetIamPolicyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::v1::Policy>::Create(channel_.get(), cq, rpcmethod_GetIamPolicy_, context, request);
}

::grpc::Status SourceRepo::Stub::TestIamPermissions(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::google::iam::v1::TestIamPermissionsResponse* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_TestIamPermissions_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>* SourceRepo::Stub::AsyncTestIamPermissionsRaw(::grpc::ClientContext* context, const ::google::iam::v1::TestIamPermissionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< ::google::iam::v1::TestIamPermissionsResponse>::Create(channel_.get(), cq, rpcmethod_TestIamPermissions_, context, request);
}

SourceRepo::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      SourceRepo_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SourceRepo::Service, ::google::devtools::sourcerepo::v1::ListReposRequest, ::google::devtools::sourcerepo::v1::ListReposResponse>(
          std::mem_fn(&SourceRepo::Service::ListRepos), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SourceRepo_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SourceRepo::Service, ::google::devtools::sourcerepo::v1::GetRepoRequest, ::google::devtools::sourcerepo::v1::Repo>(
          std::mem_fn(&SourceRepo::Service::GetRepo), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SourceRepo_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SourceRepo::Service, ::google::devtools::sourcerepo::v1::CreateRepoRequest, ::google::devtools::sourcerepo::v1::Repo>(
          std::mem_fn(&SourceRepo::Service::CreateRepo), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SourceRepo_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SourceRepo::Service, ::google::devtools::sourcerepo::v1::DeleteRepoRequest, ::google::protobuf::Empty>(
          std::mem_fn(&SourceRepo::Service::DeleteRepo), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SourceRepo_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SourceRepo::Service, ::google::iam::v1::SetIamPolicyRequest, ::google::iam::v1::Policy>(
          std::mem_fn(&SourceRepo::Service::SetIamPolicy), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SourceRepo_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SourceRepo::Service, ::google::iam::v1::GetIamPolicyRequest, ::google::iam::v1::Policy>(
          std::mem_fn(&SourceRepo::Service::GetIamPolicy), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      SourceRepo_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< SourceRepo::Service, ::google::iam::v1::TestIamPermissionsRequest, ::google::iam::v1::TestIamPermissionsResponse>(
          std::mem_fn(&SourceRepo::Service::TestIamPermissions), this)));
}

SourceRepo::Service::~Service() {
}

::grpc::Status SourceRepo::Service::ListRepos(::grpc::ServerContext* context, const ::google::devtools::sourcerepo::v1::ListReposRequest* request, ::google::devtools::sourcerepo::v1::ListReposResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SourceRepo::Service::GetRepo(::grpc::ServerContext* context, const ::google::devtools::sourcerepo::v1::GetRepoRequest* request, ::google::devtools::sourcerepo::v1::Repo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SourceRepo::Service::CreateRepo(::grpc::ServerContext* context, const ::google::devtools::sourcerepo::v1::CreateRepoRequest* request, ::google::devtools::sourcerepo::v1::Repo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SourceRepo::Service::DeleteRepo(::grpc::ServerContext* context, const ::google::devtools::sourcerepo::v1::DeleteRepoRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SourceRepo::Service::SetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::SetIamPolicyRequest* request, ::google::iam::v1::Policy* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SourceRepo::Service::GetIamPolicy(::grpc::ServerContext* context, const ::google::iam::v1::GetIamPolicyRequest* request, ::google::iam::v1::Policy* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SourceRepo::Service::TestIamPermissions(::grpc::ServerContext* context, const ::google::iam::v1::TestIamPermissionsRequest* request, ::google::iam::v1::TestIamPermissionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace devtools
}  // namespace sourcerepo
}  // namespace v1

