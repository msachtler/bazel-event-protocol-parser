# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/iam/v1/policy.proto

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


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/iam/v1/policy.proto',
  package='google.iam.v1',
  syntax='proto3',
  serialized_pb=_b('\n\x1agoogle/iam/v1/policy.proto\x12\rgoogle.iam.v1\x1a\x1cgoogle/api/annotations.proto\"Q\n\x06Policy\x12\x0f\n\x07version\x18\x01 \x01(\x05\x12(\n\x08\x62indings\x18\x04 \x03(\x0b\x32\x16.google.iam.v1.Binding\x12\x0c\n\x04\x65tag\x18\x03 \x01(\x0c\"(\n\x07\x42inding\x12\x0c\n\x04role\x18\x01 \x01(\t\x12\x0f\n\x07members\x18\x02 \x03(\t\"B\n\x0bPolicyDelta\x12\x33\n\x0e\x62inding_deltas\x18\x01 \x03(\x0b\x32\x1b.google.iam.v1.BindingDelta\"\x97\x01\n\x0c\x42indingDelta\x12\x32\n\x06\x61\x63tion\x18\x01 \x01(\x0e\x32\".google.iam.v1.BindingDelta.Action\x12\x0c\n\x04role\x18\x02 \x01(\t\x12\x0e\n\x06member\x18\x03 \x01(\t\"5\n\x06\x41\x63tion\x12\x16\n\x12\x41\x43TION_UNSPECIFIED\x10\x00\x12\x07\n\x03\x41\x44\x44\x10\x01\x12\n\n\x06REMOVE\x10\x02\x42m\n\x11\x63om.google.iam.v1B\x0bPolicyProtoP\x01Z0google.golang.org/genproto/googleapis/iam/v1;iam\xf8\x01\x01\xaa\x02\x13Google.Cloud.Iam.V1b\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,])



_BINDINGDELTA_ACTION = _descriptor.EnumDescriptor(
  name='Action',
  full_name='google.iam.v1.BindingDelta.Action',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='ACTION_UNSPECIFIED', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ADD', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='REMOVE', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=367,
  serialized_end=420,
)
_sym_db.RegisterEnumDescriptor(_BINDINGDELTA_ACTION)


_POLICY = _descriptor.Descriptor(
  name='Policy',
  full_name='google.iam.v1.Policy',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='version', full_name='google.iam.v1.Policy.version', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bindings', full_name='google.iam.v1.Policy.bindings', index=1,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='etag', full_name='google.iam.v1.Policy.etag', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
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
  serialized_start=75,
  serialized_end=156,
)


_BINDING = _descriptor.Descriptor(
  name='Binding',
  full_name='google.iam.v1.Binding',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='role', full_name='google.iam.v1.Binding.role', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='members', full_name='google.iam.v1.Binding.members', index=1,
      number=2, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=158,
  serialized_end=198,
)


_POLICYDELTA = _descriptor.Descriptor(
  name='PolicyDelta',
  full_name='google.iam.v1.PolicyDelta',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='binding_deltas', full_name='google.iam.v1.PolicyDelta.binding_deltas', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=200,
  serialized_end=266,
)


_BINDINGDELTA = _descriptor.Descriptor(
  name='BindingDelta',
  full_name='google.iam.v1.BindingDelta',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='action', full_name='google.iam.v1.BindingDelta.action', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='role', full_name='google.iam.v1.BindingDelta.role', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='member', full_name='google.iam.v1.BindingDelta.member', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _BINDINGDELTA_ACTION,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=269,
  serialized_end=420,
)

_POLICY.fields_by_name['bindings'].message_type = _BINDING
_POLICYDELTA.fields_by_name['binding_deltas'].message_type = _BINDINGDELTA
_BINDINGDELTA.fields_by_name['action'].enum_type = _BINDINGDELTA_ACTION
_BINDINGDELTA_ACTION.containing_type = _BINDINGDELTA
DESCRIPTOR.message_types_by_name['Policy'] = _POLICY
DESCRIPTOR.message_types_by_name['Binding'] = _BINDING
DESCRIPTOR.message_types_by_name['PolicyDelta'] = _POLICYDELTA
DESCRIPTOR.message_types_by_name['BindingDelta'] = _BINDINGDELTA
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Policy = _reflection.GeneratedProtocolMessageType('Policy', (_message.Message,), dict(
  DESCRIPTOR = _POLICY,
  __module__ = 'google.iam.v1.policy_pb2'
  # @@protoc_insertion_point(class_scope:google.iam.v1.Policy)
  ))
_sym_db.RegisterMessage(Policy)

Binding = _reflection.GeneratedProtocolMessageType('Binding', (_message.Message,), dict(
  DESCRIPTOR = _BINDING,
  __module__ = 'google.iam.v1.policy_pb2'
  # @@protoc_insertion_point(class_scope:google.iam.v1.Binding)
  ))
_sym_db.RegisterMessage(Binding)

PolicyDelta = _reflection.GeneratedProtocolMessageType('PolicyDelta', (_message.Message,), dict(
  DESCRIPTOR = _POLICYDELTA,
  __module__ = 'google.iam.v1.policy_pb2'
  # @@protoc_insertion_point(class_scope:google.iam.v1.PolicyDelta)
  ))
_sym_db.RegisterMessage(PolicyDelta)

BindingDelta = _reflection.GeneratedProtocolMessageType('BindingDelta', (_message.Message,), dict(
  DESCRIPTOR = _BINDINGDELTA,
  __module__ = 'google.iam.v1.policy_pb2'
  # @@protoc_insertion_point(class_scope:google.iam.v1.BindingDelta)
  ))
_sym_db.RegisterMessage(BindingDelta)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\021com.google.iam.v1B\013PolicyProtoP\001Z0google.golang.org/genproto/googleapis/iam/v1;iam\370\001\001\252\002\023Google.Cloud.Iam.V1'))
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
