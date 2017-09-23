# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/bigtable/admin/v2/table.proto

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
from google.protobuf import duration_pb2 as google_dot_protobuf_dot_duration__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/bigtable/admin/v2/table.proto',
  package='google.bigtable.admin.v2',
  syntax='proto3',
  serialized_pb=_b('\n$google/bigtable/admin/v2/table.proto\x12\x18google.bigtable.admin.v2\x1a\x1cgoogle/api/annotations.proto\x1a\x1egoogle/protobuf/duration.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xa0\x03\n\x05Table\x12\x0c\n\x04name\x18\x01 \x01(\t\x12L\n\x0f\x63olumn_families\x18\x03 \x03(\x0b\x32\x33.google.bigtable.admin.v2.Table.ColumnFamiliesEntry\x12I\n\x0bgranularity\x18\x04 \x01(\x0e\x32\x34.google.bigtable.admin.v2.Table.TimestampGranularity\x1a]\n\x13\x43olumnFamiliesEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\x35\n\x05value\x18\x02 \x01(\x0b\x32&.google.bigtable.admin.v2.ColumnFamily:\x02\x38\x01\"I\n\x14TimestampGranularity\x12%\n!TIMESTAMP_GRANULARITY_UNSPECIFIED\x10\x00\x12\n\n\x06MILLIS\x10\x01\"F\n\x04View\x12\x14\n\x10VIEW_UNSPECIFIED\x10\x00\x12\r\n\tNAME_ONLY\x10\x01\x12\x0f\n\x0bSCHEMA_VIEW\x10\x02\x12\x08\n\x04\x46ULL\x10\x04\"A\n\x0c\x43olumnFamily\x12\x31\n\x07gc_rule\x18\x01 \x01(\x0b\x32 .google.bigtable.admin.v2.GcRule\"\xd5\x02\n\x06GcRule\x12\x1a\n\x10max_num_versions\x18\x01 \x01(\x05H\x00\x12,\n\x07max_age\x18\x02 \x01(\x0b\x32\x19.google.protobuf.DurationH\x00\x12\x45\n\x0cintersection\x18\x03 \x01(\x0b\x32-.google.bigtable.admin.v2.GcRule.IntersectionH\x00\x12\x37\n\x05union\x18\x04 \x01(\x0b\x32&.google.bigtable.admin.v2.GcRule.UnionH\x00\x1a?\n\x0cIntersection\x12/\n\x05rules\x18\x01 \x03(\x0b\x32 .google.bigtable.admin.v2.GcRule\x1a\x38\n\x05Union\x12/\n\x05rules\x18\x01 \x03(\x0b\x32 .google.bigtable.admin.v2.GcRuleB\x06\n\x04ruleB\x8c\x01\n\x1c\x63om.google.bigtable.admin.v2B\nTableProtoP\x01Z=google.golang.org/genproto/googleapis/bigtable/admin/v2;admin\xaa\x02\x1eGoogle.Cloud.Bigtable.Admin.V2b\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_protobuf_dot_duration__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])



_TABLE_TIMESTAMPGRANULARITY = _descriptor.EnumDescriptor(
  name='TimestampGranularity',
  full_name='google.bigtable.admin.v2.Table.TimestampGranularity',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TIMESTAMP_GRANULARITY_UNSPECIFIED', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MILLIS', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=433,
  serialized_end=506,
)
_sym_db.RegisterEnumDescriptor(_TABLE_TIMESTAMPGRANULARITY)

_TABLE_VIEW = _descriptor.EnumDescriptor(
  name='View',
  full_name='google.bigtable.admin.v2.Table.View',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='VIEW_UNSPECIFIED', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='NAME_ONLY', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SCHEMA_VIEW', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FULL', index=3, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=508,
  serialized_end=578,
)
_sym_db.RegisterEnumDescriptor(_TABLE_VIEW)


_TABLE_COLUMNFAMILIESENTRY = _descriptor.Descriptor(
  name='ColumnFamiliesEntry',
  full_name='google.bigtable.admin.v2.Table.ColumnFamiliesEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='google.bigtable.admin.v2.Table.ColumnFamiliesEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='google.bigtable.admin.v2.Table.ColumnFamiliesEntry.value', index=1,
      number=2, type=11, cpp_type=10, label=1,
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
  options=_descriptor._ParseOptions(descriptor_pb2.MessageOptions(), _b('8\001')),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=338,
  serialized_end=431,
)

_TABLE = _descriptor.Descriptor(
  name='Table',
  full_name='google.bigtable.admin.v2.Table',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.bigtable.admin.v2.Table.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='column_families', full_name='google.bigtable.admin.v2.Table.column_families', index=1,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='granularity', full_name='google.bigtable.admin.v2.Table.granularity', index=2,
      number=4, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_TABLE_COLUMNFAMILIESENTRY, ],
  enum_types=[
    _TABLE_TIMESTAMPGRANULARITY,
    _TABLE_VIEW,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=162,
  serialized_end=578,
)


_COLUMNFAMILY = _descriptor.Descriptor(
  name='ColumnFamily',
  full_name='google.bigtable.admin.v2.ColumnFamily',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='gc_rule', full_name='google.bigtable.admin.v2.ColumnFamily.gc_rule', index=0,
      number=1, type=11, cpp_type=10, label=1,
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
  serialized_start=580,
  serialized_end=645,
)


_GCRULE_INTERSECTION = _descriptor.Descriptor(
  name='Intersection',
  full_name='google.bigtable.admin.v2.GcRule.Intersection',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='rules', full_name='google.bigtable.admin.v2.GcRule.Intersection.rules', index=0,
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
  serialized_start=860,
  serialized_end=923,
)

_GCRULE_UNION = _descriptor.Descriptor(
  name='Union',
  full_name='google.bigtable.admin.v2.GcRule.Union',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='rules', full_name='google.bigtable.admin.v2.GcRule.Union.rules', index=0,
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
  serialized_start=925,
  serialized_end=981,
)

_GCRULE = _descriptor.Descriptor(
  name='GcRule',
  full_name='google.bigtable.admin.v2.GcRule',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='max_num_versions', full_name='google.bigtable.admin.v2.GcRule.max_num_versions', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='max_age', full_name='google.bigtable.admin.v2.GcRule.max_age', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='intersection', full_name='google.bigtable.admin.v2.GcRule.intersection', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='union', full_name='google.bigtable.admin.v2.GcRule.union', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_GCRULE_INTERSECTION, _GCRULE_UNION, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='rule', full_name='google.bigtable.admin.v2.GcRule.rule',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=648,
  serialized_end=989,
)

_TABLE_COLUMNFAMILIESENTRY.fields_by_name['value'].message_type = _COLUMNFAMILY
_TABLE_COLUMNFAMILIESENTRY.containing_type = _TABLE
_TABLE.fields_by_name['column_families'].message_type = _TABLE_COLUMNFAMILIESENTRY
_TABLE.fields_by_name['granularity'].enum_type = _TABLE_TIMESTAMPGRANULARITY
_TABLE_TIMESTAMPGRANULARITY.containing_type = _TABLE
_TABLE_VIEW.containing_type = _TABLE
_COLUMNFAMILY.fields_by_name['gc_rule'].message_type = _GCRULE
_GCRULE_INTERSECTION.fields_by_name['rules'].message_type = _GCRULE
_GCRULE_INTERSECTION.containing_type = _GCRULE
_GCRULE_UNION.fields_by_name['rules'].message_type = _GCRULE
_GCRULE_UNION.containing_type = _GCRULE
_GCRULE.fields_by_name['max_age'].message_type = google_dot_protobuf_dot_duration__pb2._DURATION
_GCRULE.fields_by_name['intersection'].message_type = _GCRULE_INTERSECTION
_GCRULE.fields_by_name['union'].message_type = _GCRULE_UNION
_GCRULE.oneofs_by_name['rule'].fields.append(
  _GCRULE.fields_by_name['max_num_versions'])
_GCRULE.fields_by_name['max_num_versions'].containing_oneof = _GCRULE.oneofs_by_name['rule']
_GCRULE.oneofs_by_name['rule'].fields.append(
  _GCRULE.fields_by_name['max_age'])
_GCRULE.fields_by_name['max_age'].containing_oneof = _GCRULE.oneofs_by_name['rule']
_GCRULE.oneofs_by_name['rule'].fields.append(
  _GCRULE.fields_by_name['intersection'])
_GCRULE.fields_by_name['intersection'].containing_oneof = _GCRULE.oneofs_by_name['rule']
_GCRULE.oneofs_by_name['rule'].fields.append(
  _GCRULE.fields_by_name['union'])
_GCRULE.fields_by_name['union'].containing_oneof = _GCRULE.oneofs_by_name['rule']
DESCRIPTOR.message_types_by_name['Table'] = _TABLE
DESCRIPTOR.message_types_by_name['ColumnFamily'] = _COLUMNFAMILY
DESCRIPTOR.message_types_by_name['GcRule'] = _GCRULE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Table = _reflection.GeneratedProtocolMessageType('Table', (_message.Message,), dict(

  ColumnFamiliesEntry = _reflection.GeneratedProtocolMessageType('ColumnFamiliesEntry', (_message.Message,), dict(
    DESCRIPTOR = _TABLE_COLUMNFAMILIESENTRY,
    __module__ = 'google.bigtable.admin.v2.table_pb2'
    # @@protoc_insertion_point(class_scope:google.bigtable.admin.v2.Table.ColumnFamiliesEntry)
    ))
  ,
  DESCRIPTOR = _TABLE,
  __module__ = 'google.bigtable.admin.v2.table_pb2'
  # @@protoc_insertion_point(class_scope:google.bigtable.admin.v2.Table)
  ))
_sym_db.RegisterMessage(Table)
_sym_db.RegisterMessage(Table.ColumnFamiliesEntry)

ColumnFamily = _reflection.GeneratedProtocolMessageType('ColumnFamily', (_message.Message,), dict(
  DESCRIPTOR = _COLUMNFAMILY,
  __module__ = 'google.bigtable.admin.v2.table_pb2'
  # @@protoc_insertion_point(class_scope:google.bigtable.admin.v2.ColumnFamily)
  ))
_sym_db.RegisterMessage(ColumnFamily)

GcRule = _reflection.GeneratedProtocolMessageType('GcRule', (_message.Message,), dict(

  Intersection = _reflection.GeneratedProtocolMessageType('Intersection', (_message.Message,), dict(
    DESCRIPTOR = _GCRULE_INTERSECTION,
    __module__ = 'google.bigtable.admin.v2.table_pb2'
    # @@protoc_insertion_point(class_scope:google.bigtable.admin.v2.GcRule.Intersection)
    ))
  ,

  Union = _reflection.GeneratedProtocolMessageType('Union', (_message.Message,), dict(
    DESCRIPTOR = _GCRULE_UNION,
    __module__ = 'google.bigtable.admin.v2.table_pb2'
    # @@protoc_insertion_point(class_scope:google.bigtable.admin.v2.GcRule.Union)
    ))
  ,
  DESCRIPTOR = _GCRULE,
  __module__ = 'google.bigtable.admin.v2.table_pb2'
  # @@protoc_insertion_point(class_scope:google.bigtable.admin.v2.GcRule)
  ))
_sym_db.RegisterMessage(GcRule)
_sym_db.RegisterMessage(GcRule.Intersection)
_sym_db.RegisterMessage(GcRule.Union)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\034com.google.bigtable.admin.v2B\nTableProtoP\001Z=google.golang.org/genproto/googleapis/bigtable/admin/v2;admin\252\002\036Google.Cloud.Bigtable.Admin.V2'))
_TABLE_COLUMNFAMILIESENTRY.has_options = True
_TABLE_COLUMNFAMILIESENTRY._options = _descriptor._ParseOptions(descriptor_pb2.MessageOptions(), _b('8\001'))
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
