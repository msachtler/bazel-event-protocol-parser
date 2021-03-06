# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/api/experimental/experimental.proto

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
from google.api.experimental import authorization_config_pb2 as google_dot_api_dot_experimental_dot_authorization__config__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/api/experimental/experimental.proto',
  package='google.api',
  syntax='proto3',
  serialized_pb=_b('\n*google/api/experimental/experimental.proto\x12\ngoogle.api\x1a\x1cgoogle/api/annotations.proto\x1a\x32google/api/experimental/authorization_config.proto\"F\n\x0c\x45xperimental\x12\x36\n\rauthorization\x18\x08 \x01(\x0b\x32\x1f.google.api.AuthorizationConfigB[\n\x0e\x63om.google.apiB\x11\x45xperimentalProtoP\x01Z-google.golang.org/genproto/googleapis/api;api\xa2\x02\x04GAPIb\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_api_dot_experimental_dot_authorization__config__pb2.DESCRIPTOR,])




_EXPERIMENTAL = _descriptor.Descriptor(
  name='Experimental',
  full_name='google.api.Experimental',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='authorization', full_name='google.api.Experimental.authorization', index=0,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=140,
  serialized_end=210,
)

_EXPERIMENTAL.fields_by_name['authorization'].message_type = google_dot_api_dot_experimental_dot_authorization__config__pb2._AUTHORIZATIONCONFIG
DESCRIPTOR.message_types_by_name['Experimental'] = _EXPERIMENTAL
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Experimental = _reflection.GeneratedProtocolMessageType('Experimental', (_message.Message,), dict(
  DESCRIPTOR = _EXPERIMENTAL,
  __module__ = 'google.api.experimental.experimental_pb2'
  # @@protoc_insertion_point(class_scope:google.api.Experimental)
  ))
_sym_db.RegisterMessage(Experimental)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\016com.google.apiB\021ExperimentalProtoP\001Z-google.golang.org/genproto/googleapis/api;api\242\002\004GAPI'))
try:
  # THESE ELEMENTS WILL BE DEPRECATED.
  # Please use the generated *_pb2_grpc.py files instead.
  import grpc
  from grpc.beta import implementations as beta_implementations
  from grpc.beta import interfaces as beta_interfaces
  from grpc.framework.common import cardinality
  from grpc.framework.interfaces.face import utilities as face_utilities
except ImportError:
  pass
# @@protoc_insertion_point(module_scope)
