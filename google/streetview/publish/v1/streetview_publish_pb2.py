# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/streetview/publish/v1/streetview_publish.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2
from google.protobuf import empty_pb2 as google_dot_protobuf_dot_empty__pb2
from google.streetview.publish.v1 import resources_pb2 as google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2
from google.streetview.publish.v1 import rpcmessages_pb2 as google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/streetview/publish/v1/streetview_publish.proto',
  package='google.streetview.publish.v1',
  syntax='proto3',
  serialized_pb=_b('\n5google/streetview/publish/v1/streetview_publish.proto\x12\x1cgoogle.streetview.publish.v1\x1a\x1cgoogle/api/annotations.proto\x1a\x1bgoogle/protobuf/empty.proto\x1a,google/streetview/publish/v1/resources.proto\x1a.google/streetview/publish/v1/rpcmessages.proto2\x8b\n\n\x18StreetViewPublishService\x12p\n\x0bStartUpload\x12\x16.google.protobuf.Empty\x1a\'.google.streetview.publish.v1.UploadRef\" \x82\xd3\xe4\x93\x02\x1a\"\x15/v1/photo:startUpload:\x01*\x12~\n\x0b\x43reatePhoto\x12\x30.google.streetview.publish.v1.CreatePhotoRequest\x1a#.google.streetview.publish.v1.Photo\"\x18\x82\xd3\xe4\x93\x02\x12\"\t/v1/photo:\x05photo\x12|\n\x08GetPhoto\x12-.google.streetview.publish.v1.GetPhotoRequest\x1a#.google.streetview.publish.v1.Photo\"\x1c\x82\xd3\xe4\x93\x02\x16\x12\x14/v1/photo/{photo_id}\x12\x98\x01\n\x0e\x42\x61tchGetPhotos\x12\x33.google.streetview.publish.v1.BatchGetPhotosRequest\x1a\x34.google.streetview.publish.v1.BatchGetPhotosResponse\"\x1b\x82\xd3\xe4\x93\x02\x15\x12\x13/v1/photos:batchGet\x12\x83\x01\n\nListPhotos\x12/.google.streetview.publish.v1.ListPhotosRequest\x1a\x30.google.streetview.publish.v1.ListPhotosResponse\"\x12\x82\xd3\xe4\x93\x02\x0c\x12\n/v1/photos\x12\x92\x01\n\x0bUpdatePhoto\x12\x30.google.streetview.publish.v1.UpdatePhotoRequest\x1a#.google.streetview.publish.v1.Photo\",\x82\xd3\xe4\x93\x02&\x1a\x1d/v1/photo/{photo.photo_id.id}:\x05photo\x12\xa7\x01\n\x11\x42\x61tchUpdatePhotos\x12\x36.google.streetview.publish.v1.BatchUpdatePhotosRequest\x1a\x37.google.streetview.publish.v1.BatchUpdatePhotosResponse\"!\x82\xd3\xe4\x93\x02\x1b\"\x16/v1/photos:batchUpdate:\x01*\x12u\n\x0b\x44\x65letePhoto\x12\x30.google.streetview.publish.v1.DeletePhotoRequest\x1a\x16.google.protobuf.Empty\"\x1c\x82\xd3\xe4\x93\x02\x16*\x14/v1/photo/{photo_id}\x12\xa7\x01\n\x11\x42\x61tchDeletePhotos\x12\x36.google.streetview.publish.v1.BatchDeletePhotosRequest\x1a\x37.google.streetview.publish.v1.BatchDeletePhotosResponse\"!\x82\xd3\xe4\x93\x02\x1b\"\x16/v1/photos:batchDelete:\x01*B\x82\x01\n(com.google.geo.ugc.streetview.publish.v1B\x11StreetViewPublishZCgoogle.golang.org/genproto/googleapis/streetview/publish/v1;publishb\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_protobuf_dot_empty__pb2.DESCRIPTOR,google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.DESCRIPTOR,google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.DESCRIPTOR,])



_sym_db.RegisterFileDescriptor(DESCRIPTOR)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n(com.google.geo.ugc.streetview.publish.v1B\021StreetViewPublishZCgoogle.golang.org/genproto/googleapis/streetview/publish/v1;publish'))
try:
  # THESE ELEMENTS WILL BE DEPRECATED.
  # Please use the generated *_pb2_grpc.py files instead.
  import grpc
  from grpc.beta import implementations as beta_implementations
  from grpc.beta import interfaces as beta_interfaces
  from grpc.framework.common import cardinality
  from grpc.framework.interfaces.face import utilities as face_utilities


  class StreetViewPublishServiceStub(object):
    """Definition of the service that backs the Street View Publish API.

    Publishes and connects user-contributed photos on Street View.
    """

    def __init__(self, channel):
      """Constructor.

      Args:
        channel: A grpc.Channel.
      """
      self.StartUpload = channel.unary_unary(
          '/google.streetview.publish.v1.StreetViewPublishService/StartUpload',
          request_serializer=google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
          response_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.UploadRef.FromString,
          )
      self.CreatePhoto = channel.unary_unary(
          '/google.streetview.publish.v1.StreetViewPublishService/CreatePhoto',
          request_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.CreatePhotoRequest.SerializeToString,
          response_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.FromString,
          )
      self.GetPhoto = channel.unary_unary(
          '/google.streetview.publish.v1.StreetViewPublishService/GetPhoto',
          request_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.GetPhotoRequest.SerializeToString,
          response_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.FromString,
          )
      self.BatchGetPhotos = channel.unary_unary(
          '/google.streetview.publish.v1.StreetViewPublishService/BatchGetPhotos',
          request_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchGetPhotosRequest.SerializeToString,
          response_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchGetPhotosResponse.FromString,
          )
      self.ListPhotos = channel.unary_unary(
          '/google.streetview.publish.v1.StreetViewPublishService/ListPhotos',
          request_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.ListPhotosRequest.SerializeToString,
          response_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.ListPhotosResponse.FromString,
          )
      self.UpdatePhoto = channel.unary_unary(
          '/google.streetview.publish.v1.StreetViewPublishService/UpdatePhoto',
          request_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.UpdatePhotoRequest.SerializeToString,
          response_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.FromString,
          )
      self.BatchUpdatePhotos = channel.unary_unary(
          '/google.streetview.publish.v1.StreetViewPublishService/BatchUpdatePhotos',
          request_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchUpdatePhotosRequest.SerializeToString,
          response_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchUpdatePhotosResponse.FromString,
          )
      self.DeletePhoto = channel.unary_unary(
          '/google.streetview.publish.v1.StreetViewPublishService/DeletePhoto',
          request_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.DeletePhotoRequest.SerializeToString,
          response_deserializer=google_dot_protobuf_dot_empty__pb2.Empty.FromString,
          )
      self.BatchDeletePhotos = channel.unary_unary(
          '/google.streetview.publish.v1.StreetViewPublishService/BatchDeletePhotos',
          request_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchDeletePhotosRequest.SerializeToString,
          response_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchDeletePhotosResponse.FromString,
          )


  class StreetViewPublishServiceServicer(object):
    """Definition of the service that backs the Street View Publish API.

    Publishes and connects user-contributed photos on Street View.
    """

    def StartUpload(self, request, context):
      """Creates an upload session to start uploading photo data. The upload URL of
      the returned `UploadRef` is used to upload the data for the photo.

      After the upload is complete, the `UploadRef` is used with
      `StreetViewPublishService:CreatePhoto()` to create the `Photo` object
      entry.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def CreatePhoto(self, request, context):
      """After the client finishes uploading the photo with the returned
      `UploadRef`, `photo.create` publishes the uploaded photo to Street View on
      Google Maps.

      This method returns the following error codes:

      * `INVALID_ARGUMENT` if the request is malformed.
      * `NOT_FOUND` if the upload reference does not exist.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def GetPhoto(self, request, context):
      """Gets the metadata of the specified `Photo`.

      This method returns the following error codes:

      * `PERMISSION_DENIED` if the requesting user did not create the requested
      photo.
      * `NOT_FOUND` if the requested photo does not exist.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def BatchGetPhotos(self, request, context):
      """Gets the metadata of the specified `Photo` batch.

      Note that if `photos.batchGet` fails, either critical fields are
      missing or there was an authentication error.
      Even if `photos.batchGet` succeeds, there may have been failures
      for single photos in the batch. These failures will be specified in
      `BatchGetPhotosResponse.results.status`.
      See `photo.get` for specific failures that will occur per photo.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def ListPhotos(self, request, context):
      """Lists all the photos that belong to the user.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def UpdatePhoto(self, request, context):
      """Updates the metadata of a photo, such as pose, place association, etc.
      Changing the pixels of a photo is not supported.

      This method returns the following error codes:

      * `PERMISSION_DENIED` if the requesting user did not create the requested
      photo.
      * `INVALID_ARGUMENT` if the request is malformed.
      * `NOT_FOUND` if the photo ID does not exist.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def BatchUpdatePhotos(self, request, context):
      """Updates the metadata of photos, such as pose, place association, etc.
      Changing the pixels of a photo is not supported.

      Note that if `photos.batchUpdate` fails, either critical fields
      are missing or there was an authentication error.
      Even if `photos.batchUpdate` succeeds, there may have been
      failures for single photos in the batch. These failures will be specified
      in `BatchUpdatePhotosResponse.results.status`.
      See `UpdatePhoto` for specific failures that will occur per photo.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def DeletePhoto(self, request, context):
      """Deletes a photo and its metadata.

      This method returns the following error codes:

      * `PERMISSION_DENIED` if the requesting user did not create the requested
      photo.
      * `NOT_FOUND` if the photo ID does not exist.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def BatchDeletePhotos(self, request, context):
      """Deletes a list of photos and their metadata.

      Note that if `photos.batchDelete` fails, either critical fields
      are missing or there was an authentication error.
      Even if `photos.batchDelete` succeeds, there may have been
      failures for single photos in the batch. These failures will be specified
      in `BatchDeletePhotosResponse.status`.
      See `photo.update` for specific failures that will occur per photo.
      """
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')


  def add_StreetViewPublishServiceServicer_to_server(servicer, server):
    rpc_method_handlers = {
        'StartUpload': grpc.unary_unary_rpc_method_handler(
            servicer.StartUpload,
            request_deserializer=google_dot_protobuf_dot_empty__pb2.Empty.FromString,
            response_serializer=google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.UploadRef.SerializeToString,
        ),
        'CreatePhoto': grpc.unary_unary_rpc_method_handler(
            servicer.CreatePhoto,
            request_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.CreatePhotoRequest.FromString,
            response_serializer=google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.SerializeToString,
        ),
        'GetPhoto': grpc.unary_unary_rpc_method_handler(
            servicer.GetPhoto,
            request_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.GetPhotoRequest.FromString,
            response_serializer=google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.SerializeToString,
        ),
        'BatchGetPhotos': grpc.unary_unary_rpc_method_handler(
            servicer.BatchGetPhotos,
            request_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchGetPhotosRequest.FromString,
            response_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchGetPhotosResponse.SerializeToString,
        ),
        'ListPhotos': grpc.unary_unary_rpc_method_handler(
            servicer.ListPhotos,
            request_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.ListPhotosRequest.FromString,
            response_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.ListPhotosResponse.SerializeToString,
        ),
        'UpdatePhoto': grpc.unary_unary_rpc_method_handler(
            servicer.UpdatePhoto,
            request_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.UpdatePhotoRequest.FromString,
            response_serializer=google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.SerializeToString,
        ),
        'BatchUpdatePhotos': grpc.unary_unary_rpc_method_handler(
            servicer.BatchUpdatePhotos,
            request_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchUpdatePhotosRequest.FromString,
            response_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchUpdatePhotosResponse.SerializeToString,
        ),
        'DeletePhoto': grpc.unary_unary_rpc_method_handler(
            servicer.DeletePhoto,
            request_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.DeletePhotoRequest.FromString,
            response_serializer=google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
        ),
        'BatchDeletePhotos': grpc.unary_unary_rpc_method_handler(
            servicer.BatchDeletePhotos,
            request_deserializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchDeletePhotosRequest.FromString,
            response_serializer=google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchDeletePhotosResponse.SerializeToString,
        ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
        'google.streetview.publish.v1.StreetViewPublishService', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


  class BetaStreetViewPublishServiceServicer(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    """Definition of the service that backs the Street View Publish API.

    Publishes and connects user-contributed photos on Street View.
    """
    def StartUpload(self, request, context):
      """Creates an upload session to start uploading photo data. The upload URL of
      the returned `UploadRef` is used to upload the data for the photo.

      After the upload is complete, the `UploadRef` is used with
      `StreetViewPublishService:CreatePhoto()` to create the `Photo` object
      entry.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def CreatePhoto(self, request, context):
      """After the client finishes uploading the photo with the returned
      `UploadRef`, `photo.create` publishes the uploaded photo to Street View on
      Google Maps.

      This method returns the following error codes:

      * `INVALID_ARGUMENT` if the request is malformed.
      * `NOT_FOUND` if the upload reference does not exist.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def GetPhoto(self, request, context):
      """Gets the metadata of the specified `Photo`.

      This method returns the following error codes:

      * `PERMISSION_DENIED` if the requesting user did not create the requested
      photo.
      * `NOT_FOUND` if the requested photo does not exist.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def BatchGetPhotos(self, request, context):
      """Gets the metadata of the specified `Photo` batch.

      Note that if `photos.batchGet` fails, either critical fields are
      missing or there was an authentication error.
      Even if `photos.batchGet` succeeds, there may have been failures
      for single photos in the batch. These failures will be specified in
      `BatchGetPhotosResponse.results.status`.
      See `photo.get` for specific failures that will occur per photo.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def ListPhotos(self, request, context):
      """Lists all the photos that belong to the user.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def UpdatePhoto(self, request, context):
      """Updates the metadata of a photo, such as pose, place association, etc.
      Changing the pixels of a photo is not supported.

      This method returns the following error codes:

      * `PERMISSION_DENIED` if the requesting user did not create the requested
      photo.
      * `INVALID_ARGUMENT` if the request is malformed.
      * `NOT_FOUND` if the photo ID does not exist.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def BatchUpdatePhotos(self, request, context):
      """Updates the metadata of photos, such as pose, place association, etc.
      Changing the pixels of a photo is not supported.

      Note that if `photos.batchUpdate` fails, either critical fields
      are missing or there was an authentication error.
      Even if `photos.batchUpdate` succeeds, there may have been
      failures for single photos in the batch. These failures will be specified
      in `BatchUpdatePhotosResponse.results.status`.
      See `UpdatePhoto` for specific failures that will occur per photo.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def DeletePhoto(self, request, context):
      """Deletes a photo and its metadata.

      This method returns the following error codes:

      * `PERMISSION_DENIED` if the requesting user did not create the requested
      photo.
      * `NOT_FOUND` if the photo ID does not exist.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def BatchDeletePhotos(self, request, context):
      """Deletes a list of photos and their metadata.

      Note that if `photos.batchDelete` fails, either critical fields
      are missing or there was an authentication error.
      Even if `photos.batchDelete` succeeds, there may have been
      failures for single photos in the batch. These failures will be specified
      in `BatchDeletePhotosResponse.status`.
      See `photo.update` for specific failures that will occur per photo.
      """
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)


  class BetaStreetViewPublishServiceStub(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    """Definition of the service that backs the Street View Publish API.

    Publishes and connects user-contributed photos on Street View.
    """
    def StartUpload(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Creates an upload session to start uploading photo data. The upload URL of
      the returned `UploadRef` is used to upload the data for the photo.

      After the upload is complete, the `UploadRef` is used with
      `StreetViewPublishService:CreatePhoto()` to create the `Photo` object
      entry.
      """
      raise NotImplementedError()
    StartUpload.future = None
    def CreatePhoto(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """After the client finishes uploading the photo with the returned
      `UploadRef`, `photo.create` publishes the uploaded photo to Street View on
      Google Maps.

      This method returns the following error codes:

      * `INVALID_ARGUMENT` if the request is malformed.
      * `NOT_FOUND` if the upload reference does not exist.
      """
      raise NotImplementedError()
    CreatePhoto.future = None
    def GetPhoto(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Gets the metadata of the specified `Photo`.

      This method returns the following error codes:

      * `PERMISSION_DENIED` if the requesting user did not create the requested
      photo.
      * `NOT_FOUND` if the requested photo does not exist.
      """
      raise NotImplementedError()
    GetPhoto.future = None
    def BatchGetPhotos(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Gets the metadata of the specified `Photo` batch.

      Note that if `photos.batchGet` fails, either critical fields are
      missing or there was an authentication error.
      Even if `photos.batchGet` succeeds, there may have been failures
      for single photos in the batch. These failures will be specified in
      `BatchGetPhotosResponse.results.status`.
      See `photo.get` for specific failures that will occur per photo.
      """
      raise NotImplementedError()
    BatchGetPhotos.future = None
    def ListPhotos(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Lists all the photos that belong to the user.
      """
      raise NotImplementedError()
    ListPhotos.future = None
    def UpdatePhoto(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Updates the metadata of a photo, such as pose, place association, etc.
      Changing the pixels of a photo is not supported.

      This method returns the following error codes:

      * `PERMISSION_DENIED` if the requesting user did not create the requested
      photo.
      * `INVALID_ARGUMENT` if the request is malformed.
      * `NOT_FOUND` if the photo ID does not exist.
      """
      raise NotImplementedError()
    UpdatePhoto.future = None
    def BatchUpdatePhotos(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Updates the metadata of photos, such as pose, place association, etc.
      Changing the pixels of a photo is not supported.

      Note that if `photos.batchUpdate` fails, either critical fields
      are missing or there was an authentication error.
      Even if `photos.batchUpdate` succeeds, there may have been
      failures for single photos in the batch. These failures will be specified
      in `BatchUpdatePhotosResponse.results.status`.
      See `UpdatePhoto` for specific failures that will occur per photo.
      """
      raise NotImplementedError()
    BatchUpdatePhotos.future = None
    def DeletePhoto(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Deletes a photo and its metadata.

      This method returns the following error codes:

      * `PERMISSION_DENIED` if the requesting user did not create the requested
      photo.
      * `NOT_FOUND` if the photo ID does not exist.
      """
      raise NotImplementedError()
    DeletePhoto.future = None
    def BatchDeletePhotos(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      """Deletes a list of photos and their metadata.

      Note that if `photos.batchDelete` fails, either critical fields
      are missing or there was an authentication error.
      Even if `photos.batchDelete` succeeds, there may have been
      failures for single photos in the batch. These failures will be specified
      in `BatchDeletePhotosResponse.status`.
      See `photo.update` for specific failures that will occur per photo.
      """
      raise NotImplementedError()
    BatchDeletePhotos.future = None


  def beta_create_StreetViewPublishService_server(servicer, pool=None, pool_size=None, default_timeout=None, maximum_timeout=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_deserializers = {
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchDeletePhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchDeletePhotosRequest.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchGetPhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchGetPhotosRequest.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchUpdatePhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchUpdatePhotosRequest.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'CreatePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.CreatePhotoRequest.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'DeletePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.DeletePhotoRequest.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'GetPhoto'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.GetPhotoRequest.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'ListPhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.ListPhotosRequest.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'StartUpload'): google_dot_protobuf_dot_empty__pb2.Empty.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'UpdatePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.UpdatePhotoRequest.FromString,
    }
    response_serializers = {
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchDeletePhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchDeletePhotosResponse.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchGetPhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchGetPhotosResponse.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchUpdatePhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchUpdatePhotosResponse.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'CreatePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'DeletePhoto'): google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'GetPhoto'): google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'ListPhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.ListPhotosResponse.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'StartUpload'): google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.UploadRef.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'UpdatePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.SerializeToString,
    }
    method_implementations = {
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchDeletePhotos'): face_utilities.unary_unary_inline(servicer.BatchDeletePhotos),
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchGetPhotos'): face_utilities.unary_unary_inline(servicer.BatchGetPhotos),
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchUpdatePhotos'): face_utilities.unary_unary_inline(servicer.BatchUpdatePhotos),
      ('google.streetview.publish.v1.StreetViewPublishService', 'CreatePhoto'): face_utilities.unary_unary_inline(servicer.CreatePhoto),
      ('google.streetview.publish.v1.StreetViewPublishService', 'DeletePhoto'): face_utilities.unary_unary_inline(servicer.DeletePhoto),
      ('google.streetview.publish.v1.StreetViewPublishService', 'GetPhoto'): face_utilities.unary_unary_inline(servicer.GetPhoto),
      ('google.streetview.publish.v1.StreetViewPublishService', 'ListPhotos'): face_utilities.unary_unary_inline(servicer.ListPhotos),
      ('google.streetview.publish.v1.StreetViewPublishService', 'StartUpload'): face_utilities.unary_unary_inline(servicer.StartUpload),
      ('google.streetview.publish.v1.StreetViewPublishService', 'UpdatePhoto'): face_utilities.unary_unary_inline(servicer.UpdatePhoto),
    }
    server_options = beta_implementations.server_options(request_deserializers=request_deserializers, response_serializers=response_serializers, thread_pool=pool, thread_pool_size=pool_size, default_timeout=default_timeout, maximum_timeout=maximum_timeout)
    return beta_implementations.server(method_implementations, options=server_options)


  def beta_create_StreetViewPublishService_stub(channel, host=None, metadata_transformer=None, pool=None, pool_size=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_serializers = {
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchDeletePhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchDeletePhotosRequest.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchGetPhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchGetPhotosRequest.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchUpdatePhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchUpdatePhotosRequest.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'CreatePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.CreatePhotoRequest.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'DeletePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.DeletePhotoRequest.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'GetPhoto'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.GetPhotoRequest.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'ListPhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.ListPhotosRequest.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'StartUpload'): google_dot_protobuf_dot_empty__pb2.Empty.SerializeToString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'UpdatePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.UpdatePhotoRequest.SerializeToString,
    }
    response_deserializers = {
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchDeletePhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchDeletePhotosResponse.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchGetPhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchGetPhotosResponse.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'BatchUpdatePhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.BatchUpdatePhotosResponse.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'CreatePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'DeletePhoto'): google_dot_protobuf_dot_empty__pb2.Empty.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'GetPhoto'): google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'ListPhotos'): google_dot_streetview_dot_publish_dot_v1_dot_rpcmessages__pb2.ListPhotosResponse.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'StartUpload'): google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.UploadRef.FromString,
      ('google.streetview.publish.v1.StreetViewPublishService', 'UpdatePhoto'): google_dot_streetview_dot_publish_dot_v1_dot_resources__pb2.Photo.FromString,
    }
    cardinalities = {
      'BatchDeletePhotos': cardinality.Cardinality.UNARY_UNARY,
      'BatchGetPhotos': cardinality.Cardinality.UNARY_UNARY,
      'BatchUpdatePhotos': cardinality.Cardinality.UNARY_UNARY,
      'CreatePhoto': cardinality.Cardinality.UNARY_UNARY,
      'DeletePhoto': cardinality.Cardinality.UNARY_UNARY,
      'GetPhoto': cardinality.Cardinality.UNARY_UNARY,
      'ListPhotos': cardinality.Cardinality.UNARY_UNARY,
      'StartUpload': cardinality.Cardinality.UNARY_UNARY,
      'UpdatePhoto': cardinality.Cardinality.UNARY_UNARY,
    }
    stub_options = beta_implementations.stub_options(host=host, metadata_transformer=metadata_transformer, request_serializers=request_serializers, response_deserializers=response_deserializers, thread_pool=pool, thread_pool_size=pool_size)
    return beta_implementations.dynamic_stub(channel, 'google.streetview.publish.v1.StreetViewPublishService', cardinalities, options=stub_options)
except ImportError:
  pass
# @@protoc_insertion_point(module_scope)
