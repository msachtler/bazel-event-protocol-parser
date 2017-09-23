# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/api/experimental/authorization_config.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/api/experimental/authorization_config.proto',
  package='google.api',
  syntax='proto3',
  serialized_pb=_b('\n2google/api/experimental/authorization_config.proto\x12\ngoogle.api\"\'\n\x13\x41uthorizationConfig\x12\x10\n\x08provider\x18\x01 \x01(\tBb\n\x0e\x63om.google.apiB\x18\x41uthorizationConfigProtoP\x01Z-google.golang.org/genproto/googleapis/api;api\xa2\x02\x04GAPIb\x06proto3')
)




_AUTHORIZATIONCONFIG = _descriptor.Descriptor(
  name='AuthorizationConfig',
  full_name='google.api.AuthorizationConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='provider', full_name='google.api.AuthorizationConfig.provider', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=66,
  serialized_end=105,
)

DESCRIPTOR.message_types_by_name['AuthorizationConfig'] = _AUTHORIZATIONCONFIG
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

AuthorizationConfig = _reflection.GeneratedProtocolMessageType('AuthorizationConfig', (_message.Message,), dict(
  DESCRIPTOR = _AUTHORIZATIONCONFIG,
  __module__ = 'google.api.experimental.authorization_config_pb2'
  # @@protoc_insertion_point(class_scope:google.api.AuthorizationConfig)
  ))
_sym_db.RegisterMessage(AuthorizationConfig)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\016com.google.apiB\030AuthorizationConfigProtoP\001Z-google.golang.org/genproto/googleapis/api;api\242\002\004GAPI'))
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
