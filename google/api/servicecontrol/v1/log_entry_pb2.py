# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/api/servicecontrol/v1/log_entry.proto

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
from google.logging.type import log_severity_pb2 as google_dot_logging_dot_type_dot_log__severity__pb2
from google.protobuf import any_pb2 as google_dot_protobuf_dot_any__pb2
from google.protobuf import struct_pb2 as google_dot_protobuf_dot_struct__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/api/servicecontrol/v1/log_entry.proto',
  package='google.api.servicecontrol.v1',
  syntax='proto3',
  serialized_pb=_b('\n,google/api/servicecontrol/v1/log_entry.proto\x12\x1cgoogle.api.servicecontrol.v1\x1a\x1cgoogle/api/annotations.proto\x1a&google/logging/type/log_severity.proto\x1a\x19google/protobuf/any.proto\x1a\x1cgoogle/protobuf/struct.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\x86\x03\n\x08LogEntry\x12\x0c\n\x04name\x18\n \x01(\t\x12-\n\ttimestamp\x18\x0b \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x32\n\x08severity\x18\x0c \x01(\x0e\x32 .google.logging.type.LogSeverity\x12\x11\n\tinsert_id\x18\x04 \x01(\t\x12\x42\n\x06labels\x18\r \x03(\x0b\x32\x32.google.api.servicecontrol.v1.LogEntry.LabelsEntry\x12-\n\rproto_payload\x18\x02 \x01(\x0b\x32\x14.google.protobuf.AnyH\x00\x12\x16\n\x0ctext_payload\x18\x03 \x01(\tH\x00\x12\x31\n\x0estruct_payload\x18\x06 \x01(\x0b\x32\x17.google.protobuf.StructH\x00\x1a-\n\x0bLabelsEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t:\x02\x38\x01\x42\t\n\x07payloadB\x7f\n com.google.api.servicecontrol.v1B\rLogEntryProtoP\x01ZJgoogle.golang.org/genproto/googleapis/api/servicecontrol/v1;servicecontrolb\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_logging_dot_type_dot_log__severity__pb2.DESCRIPTOR,google_dot_protobuf_dot_any__pb2.DESCRIPTOR,google_dot_protobuf_dot_struct__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])




_LOGENTRY_LABELSENTRY = _descriptor.Descriptor(
  name='LabelsEntry',
  full_name='google.api.servicecontrol.v1.LogEntry.LabelsEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='google.api.servicecontrol.v1.LogEntry.LabelsEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='google.api.servicecontrol.v1.LogEntry.LabelsEntry.value', index=1,
      number=2, type=9, cpp_type=9, label=1,
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
  options=_descriptor._ParseOptions(descriptor_pb2.MessageOptions(), _b('8\001')),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=573,
  serialized_end=618,
)

_LOGENTRY = _descriptor.Descriptor(
  name='LogEntry',
  full_name='google.api.servicecontrol.v1.LogEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.api.servicecontrol.v1.LogEntry.name', index=0,
      number=10, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='google.api.servicecontrol.v1.LogEntry.timestamp', index=1,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='severity', full_name='google.api.servicecontrol.v1.LogEntry.severity', index=2,
      number=12, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='insert_id', full_name='google.api.servicecontrol.v1.LogEntry.insert_id', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='labels', full_name='google.api.servicecontrol.v1.LogEntry.labels', index=4,
      number=13, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='proto_payload', full_name='google.api.servicecontrol.v1.LogEntry.proto_payload', index=5,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='text_payload', full_name='google.api.servicecontrol.v1.LogEntry.text_payload', index=6,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='struct_payload', full_name='google.api.servicecontrol.v1.LogEntry.struct_payload', index=7,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_LOGENTRY_LABELSENTRY, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='payload', full_name='google.api.servicecontrol.v1.LogEntry.payload',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=239,
  serialized_end=629,
)

_LOGENTRY_LABELSENTRY.containing_type = _LOGENTRY
_LOGENTRY.fields_by_name['timestamp'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_LOGENTRY.fields_by_name['severity'].enum_type = google_dot_logging_dot_type_dot_log__severity__pb2._LOGSEVERITY
_LOGENTRY.fields_by_name['labels'].message_type = _LOGENTRY_LABELSENTRY
_LOGENTRY.fields_by_name['proto_payload'].message_type = google_dot_protobuf_dot_any__pb2._ANY
_LOGENTRY.fields_by_name['struct_payload'].message_type = google_dot_protobuf_dot_struct__pb2._STRUCT
_LOGENTRY.oneofs_by_name['payload'].fields.append(
  _LOGENTRY.fields_by_name['proto_payload'])
_LOGENTRY.fields_by_name['proto_payload'].containing_oneof = _LOGENTRY.oneofs_by_name['payload']
_LOGENTRY.oneofs_by_name['payload'].fields.append(
  _LOGENTRY.fields_by_name['text_payload'])
_LOGENTRY.fields_by_name['text_payload'].containing_oneof = _LOGENTRY.oneofs_by_name['payload']
_LOGENTRY.oneofs_by_name['payload'].fields.append(
  _LOGENTRY.fields_by_name['struct_payload'])
_LOGENTRY.fields_by_name['struct_payload'].containing_oneof = _LOGENTRY.oneofs_by_name['payload']
DESCRIPTOR.message_types_by_name['LogEntry'] = _LOGENTRY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

LogEntry = _reflection.GeneratedProtocolMessageType('LogEntry', (_message.Message,), dict(

  LabelsEntry = _reflection.GeneratedProtocolMessageType('LabelsEntry', (_message.Message,), dict(
    DESCRIPTOR = _LOGENTRY_LABELSENTRY,
    __module__ = 'google.api.servicecontrol.v1.log_entry_pb2'
    # @@protoc_insertion_point(class_scope:google.api.servicecontrol.v1.LogEntry.LabelsEntry)
    ))
  ,
  DESCRIPTOR = _LOGENTRY,
  __module__ = 'google.api.servicecontrol.v1.log_entry_pb2'
  # @@protoc_insertion_point(class_scope:google.api.servicecontrol.v1.LogEntry)
  ))
_sym_db.RegisterMessage(LogEntry)
_sym_db.RegisterMessage(LogEntry.LabelsEntry)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n com.google.api.servicecontrol.v1B\rLogEntryProtoP\001ZJgoogle.golang.org/genproto/googleapis/api/servicecontrol/v1;servicecontrol'))
_LOGENTRY_LABELSENTRY.has_options = True
_LOGENTRY_LABELSENTRY._options = _descriptor._ParseOptions(descriptor_pb2.MessageOptions(), _b('8\001'))
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