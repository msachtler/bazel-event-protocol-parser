// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/datastore/admin/v1beta1/datastore_admin.proto
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
#ifndef GRPC_google_2fdatastore_2fadmin_2fv1beta1_2fdatastore_5fadmin_2eproto__INCLUDED
#define GRPC_google_2fdatastore_2fadmin_2fv1beta1_2fdatastore_5fadmin_2eproto__INCLUDED

#include "google/datastore/admin/v1beta1/datastore_admin.pb.h"

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
namespace datastore {
namespace admin {
namespace v1beta1 {

// Google Cloud Datastore Admin API
//
// The Datastore Admin API provides several admin services for Cloud Datastore.
//
// -----------------------------------------------------------------------------
// ## Concepts
//
// Project, namespace, kind, and entity as defined in the Google Cloud Datastore
// API.
//
// Operation: An Operation represents work being performed in the background.
//
// EntityFilter: Allows specifying a subset of entities in a project. This is
// specified as a combination of kinds and namespaces (either or both of which
// may be all).
//
// -----------------------------------------------------------------------------
// ## Services
//
// # Export/Import
//
// The Export/Import service provides the ability to copy all or a subset of
// entities to/from Google Cloud Storage.
//
// Exported data may be imported into Cloud Datastore for any Google Cloud
// Platform project. It is not restricted to the export source project. It is
// possible to export from one project and then import into another.
//
// Exported data can also be loaded into Google BigQuery for analysis.
//
// Exports and imports are performed asynchronously. An Operation resource is
// created for each export/import. The state (including any errors encountered)
// of the export/import may be queried via the Operation resource.
//
// # Operation
//
// The Operations collection provides a record of actions performed for the
// specified project (including any operations in progress). Operations are not
// created directly but through calls on other collections or resources.
//
// An operation that is not yet done may be cancelled. The request to cancel is
// asynchronous and the operation may continue to run for some time after the
// request to cancel is made.
//
// An operation that is done may be deleted so that it is no longer listed as
// part of the Operation collection.
//
// ListOperations returns all pending operations, but not completed operations.
//
// Operations are created by service DatastoreAdmin,
// but are accessed via service google.longrunning.Operations.
class DatastoreAdmin final {
 public:
  static constexpr char const* service_full_name() {
    return "google.datastore.admin.v1beta1.DatastoreAdmin";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Exports a copy of all or a subset of entities from Google Cloud Datastore
    // to another storage system, such as Google Cloud Storage. Recent updates to
    // entities may not be reflected in the export. The export occurs in the
    // background and its progress can be monitored and managed via the
    // Operation resource that is created. The output of an export may only be
    // used once the associated operation is done. If an export operation is
    // cancelled before completion it may leave partial data behind in Google
    // Cloud Storage.
    virtual ::grpc::Status ExportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest& request, ::google::longrunning::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> AsyncExportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(AsyncExportEntitiesRaw(context, request, cq));
    }
    // Imports entities into Google Cloud Datastore. Existing entities with the
    // same key are overwritten. The import occurs in the background and its
    // progress can be monitored and managed via the Operation resource that is
    // created. If an ImportEntities operation is cancelled, it is possible
    // that a subset of the data has already been imported to Cloud Datastore.
    virtual ::grpc::Status ImportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest& request, ::google::longrunning::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>> AsyncImportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>>(AsyncImportEntitiesRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* AsyncExportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::longrunning::Operation>* AsyncImportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ExportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest& request, ::google::longrunning::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> AsyncExportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(AsyncExportEntitiesRaw(context, request, cq));
    }
    ::grpc::Status ImportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest& request, ::google::longrunning::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>> AsyncImportEntities(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>>(AsyncImportEntitiesRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* AsyncExportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* AsyncImportEntitiesRaw(::grpc::ClientContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_ExportEntities_;
    const ::grpc::RpcMethod rpcmethod_ImportEntities_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Exports a copy of all or a subset of entities from Google Cloud Datastore
    // to another storage system, such as Google Cloud Storage. Recent updates to
    // entities may not be reflected in the export. The export occurs in the
    // background and its progress can be monitored and managed via the
    // Operation resource that is created. The output of an export may only be
    // used once the associated operation is done. If an export operation is
    // cancelled before completion it may leave partial data behind in Google
    // Cloud Storage.
    virtual ::grpc::Status ExportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest* request, ::google::longrunning::Operation* response);
    // Imports entities into Google Cloud Datastore. Existing entities with the
    // same key are overwritten. The import occurs in the background and its
    // progress can be monitored and managed via the Operation resource that is
    // created. If an ImportEntities operation is cancelled, it is possible
    // that a subset of the data has already been imported to Cloud Datastore.
    virtual ::grpc::Status ImportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest* request, ::google::longrunning::Operation* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ExportEntities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ExportEntities() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ExportEntities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ExportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestExportEntities(::grpc::ServerContext* context, ::google::datastore::admin::v1beta1::ExportEntitiesRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::longrunning::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ImportEntities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ImportEntities() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ImportEntities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ImportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestImportEntities(::grpc::ServerContext* context, ::google::datastore::admin::v1beta1::ImportEntitiesRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::longrunning::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ExportEntities<WithAsyncMethod_ImportEntities<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_ExportEntities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ExportEntities() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ExportEntities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ExportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ImportEntities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ImportEntities() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ImportEntities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ImportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ExportEntities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ExportEntities() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::google::datastore::admin::v1beta1::ExportEntitiesRequest, ::google::longrunning::Operation>(std::bind(&WithStreamedUnaryMethod_ExportEntities<BaseClass>::StreamedExportEntities, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ExportEntities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ExportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ExportEntitiesRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedExportEntities(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::datastore::admin::v1beta1::ExportEntitiesRequest,::google::longrunning::Operation>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ImportEntities : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ImportEntities() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::google::datastore::admin::v1beta1::ImportEntitiesRequest, ::google::longrunning::Operation>(std::bind(&WithStreamedUnaryMethod_ImportEntities<BaseClass>::StreamedImportEntities, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ImportEntities() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ImportEntities(::grpc::ServerContext* context, const ::google::datastore::admin::v1beta1::ImportEntitiesRequest* request, ::google::longrunning::Operation* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedImportEntities(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::datastore::admin::v1beta1::ImportEntitiesRequest,::google::longrunning::Operation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ExportEntities<WithStreamedUnaryMethod_ImportEntities<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ExportEntities<WithStreamedUnaryMethod_ImportEntities<Service > > StreamedService;
};

}  // namespace v1beta1
}  // namespace admin
}  // namespace datastore
}  // namespace google


#endif  // GRPC_google_2fdatastore_2fadmin_2fv1beta1_2fdatastore_5fadmin_2eproto__INCLUDED
