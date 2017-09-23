// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/speech/v1beta1/cloud_speech.proto
// Original file comments:
// Copyright 2017 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_google_2fcloud_2fspeech_2fv1beta1_2fcloud_5fspeech_2eproto__INCLUDED
#define GRPC_google_2fcloud_2fspeech_2fv1beta1_2fcloud_5fspeech_2eproto__INCLUDED

#include "google/cloud/speech/v1beta1/cloud_speech.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace google {
namespace cloud {
namespace speech {
namespace v1beta1 {

// Service that implements Google Cloud Speech API.
class Speech final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.speech.v1beta1.Speech";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Performs synchronous speech recognition: receive results after all audio
    // has been sent and processed.
    virtual ::grpc::Status SyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest& request, ::google::cloud::speech::v1beta1::SyncRecognizeResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::speech::v1beta1::SyncRecognizeResponse>> AsyncSyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::speech::v1beta1::SyncRecognizeResponse>>(AsyncSyncRecognizeRaw(context, request, cq));
    }
    // Performs asynchronous speech recognition: receive results via the
    // [google.longrunning.Operations]
    // (/speech/reference/rest/v1beta1/operations#Operation)
    // interface. Returns either an
    // `Operation.error` or an `Operation.response` which contains
    // an `AsyncRecognizeResponse` message.
    virtual ::grpc::Status AsyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest& request, ::google::longrunning::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> AsyncAsyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(AsyncAsyncRecognizeRaw(context, request, cq));
    }
    // Performs bidirectional streaming speech recognition: receive results while
    // sending audio. This method is only available via the gRPC API (not REST).
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>> StreamingRecognize(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>>(StreamingRecognizeRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>> AsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>>(AsyncStreamingRecognizeRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::speech::v1beta1::SyncRecognizeResponse>* AsyncSyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* AsyncAsyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>* StreamingRecognizeRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>* AsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest& request, ::google::cloud::speech::v1beta1::SyncRecognizeResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1beta1::SyncRecognizeResponse>> AsyncSyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1beta1::SyncRecognizeResponse>>(AsyncSyncRecognizeRaw(context, request, cq));
    }
    ::grpc::Status AsyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest& request, ::google::longrunning::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> AsyncAsyncRecognize(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(AsyncAsyncRecognizeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>> StreamingRecognize(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>>(StreamingRecognizeRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>> AsyncStreamingRecognize(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>>(AsyncStreamingRecognizeRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::speech::v1beta1::SyncRecognizeResponse>* AsyncSyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* AsyncAsyncRecognizeRaw(::grpc::ClientContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>* StreamingRecognizeRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeRequest, ::google::cloud::speech::v1beta1::StreamingRecognizeResponse>* AsyncStreamingRecognizeRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    const ::grpc::RpcMethod rpcmethod_SyncRecognize_;
    const ::grpc::RpcMethod rpcmethod_AsyncRecognize_;
    const ::grpc::RpcMethod rpcmethod_StreamingRecognize_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Performs synchronous speech recognition: receive results after all audio
    // has been sent and processed.
    virtual ::grpc::Status SyncRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest* request, ::google::cloud::speech::v1beta1::SyncRecognizeResponse* response);
    // Performs asynchronous speech recognition: receive results via the
    // [google.longrunning.Operations]
    // (/speech/reference/rest/v1beta1/operations#Operation)
    // interface. Returns either an
    // `Operation.error` or an `Operation.response` which contains
    // an `AsyncRecognizeResponse` message.
    virtual ::grpc::Status AsyncRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest* request, ::google::longrunning::Operation* response);
    // Performs bidirectional streaming speech recognition: receive results while
    // sending audio. This method is only available via the gRPC API (not REST).
    virtual ::grpc::Status StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1beta1::StreamingRecognizeRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_SyncRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SyncRecognize() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SyncRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SyncRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest* request, ::google::cloud::speech::v1beta1::SyncRecognizeResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSyncRecognize(::grpc::ServerContext* context, ::google::cloud::speech::v1beta1::SyncRecognizeRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::speech::v1beta1::SyncRecognizeResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_AsyncRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AsyncRecognize() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_AsyncRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AsyncRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAsyncRecognize(::grpc::ServerContext* context, ::google::cloud::speech::v1beta1::AsyncRecognizeRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::longrunning::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_StreamingRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_StreamingRecognize() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_StreamingRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1beta1::StreamingRecognizeRequest>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1beta1::StreamingRecognizeRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(2, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SyncRecognize<WithAsyncMethod_AsyncRecognize<WithAsyncMethod_StreamingRecognize<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SyncRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SyncRecognize() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SyncRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SyncRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest* request, ::google::cloud::speech::v1beta1::SyncRecognizeResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_AsyncRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AsyncRecognize() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_AsyncRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AsyncRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_StreamingRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_StreamingRecognize() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_StreamingRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingRecognize(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::google::cloud::speech::v1beta1::StreamingRecognizeResponse, ::google::cloud::speech::v1beta1::StreamingRecognizeRequest>* stream) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SyncRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SyncRecognize() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::speech::v1beta1::SyncRecognizeRequest, ::google::cloud::speech::v1beta1::SyncRecognizeResponse>(std::bind(&WithStreamedUnaryMethod_SyncRecognize<BaseClass>::StreamedSyncRecognize, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SyncRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SyncRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1beta1::SyncRecognizeRequest* request, ::google::cloud::speech::v1beta1::SyncRecognizeResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSyncRecognize(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::speech::v1beta1::SyncRecognizeRequest,::google::cloud::speech::v1beta1::SyncRecognizeResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AsyncRecognize : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AsyncRecognize() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::google::cloud::speech::v1beta1::AsyncRecognizeRequest, ::google::longrunning::Operation>(std::bind(&WithStreamedUnaryMethod_AsyncRecognize<BaseClass>::StreamedAsyncRecognize, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AsyncRecognize() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AsyncRecognize(::grpc::ServerContext* context, const ::google::cloud::speech::v1beta1::AsyncRecognizeRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAsyncRecognize(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::speech::v1beta1::AsyncRecognizeRequest,::google::longrunning::Operation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SyncRecognize<WithStreamedUnaryMethod_AsyncRecognize<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SyncRecognize<WithStreamedUnaryMethod_AsyncRecognize<Service > > StreamedService;
};

}  // namespace v1beta1
}  // namespace speech
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2fspeech_2fv1beta1_2fcloud_5fspeech_2eproto__INCLUDED
