# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/protobuf/source_context.proto

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
  name='google/protobuf/source_context.proto',
  package='google.protobuf',
  syntax='proto3',
  serialized_pb=_b('\n$google/protobuf/source_context.proto\x12\x0fgoogle.protobuf\"\"\n\rSourceContext\x12\x11\n\tfile_name\x18\x01 \x01(\tB\x95\x01\n\x13\x63om.google.protobufB\x12SourceContextProtoP\x01ZAgoogle.golang.org/genproto/protobuf/source_context;source_context\xa2\x02\x03GPB\xaa\x02\x1eGoogle.Protobuf.WellKnownTypesb\x06proto3')
)




_SOURCECONTEXT = _descriptor.Descriptor(
  name='SourceContext',
  full_name='google.protobuf.SourceContext',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='file_name', full_name='google.protobuf.SourceContext.file_name', index=0,
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
  serialized_start=57,
  serialized_end=91,
)

DESCRIPTOR.message_types_by_name['SourceContext'] = _SOURCECONTEXT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SourceContext = _reflection.GeneratedProtocolMessageType('SourceContext', (_message.Message,), dict(
  DESCRIPTOR = _SOURCECONTEXT,
  __module__ = 'google.protobuf.source_context_pb2'
  # @@protoc_insertion_point(class_scope:google.protobuf.SourceContext)
  ))
_sym_db.RegisterMessage(SourceContext)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\023com.google.protobufB\022SourceContextProtoP\001ZAgoogle.golang.org/genproto/protobuf/source_context;source_context\242\002\003GPB\252\002\036Google.Protobuf.WellKnownTypes'))
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
