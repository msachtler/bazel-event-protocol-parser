# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/bigtable/admin/table/v1/bigtable_table_data.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.longrunning import operations_pb2 as google_dot_longrunning_dot_operations__pb2
from google.protobuf import duration_pb2 as google_dot_protobuf_dot_duration__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/bigtable/admin/table/v1/bigtable_table_data.proto',
  package='google.bigtable.admin.table.v1',
  syntax='proto3',
  serialized_pb=_b('\n8google/bigtable/admin/table/v1/bigtable_table_data.proto\x12\x1egoogle.bigtable.admin.table.v1\x1a#google/longrunning/operations.proto\x1a\x1egoogle/protobuf/duration.proto\"\xfd\x02\n\x05Table\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x38\n\x11\x63urrent_operation\x18\x02 \x01(\x0b\x32\x1d.google.longrunning.Operation\x12R\n\x0f\x63olumn_families\x18\x03 \x03(\x0b\x32\x39.google.bigtable.admin.table.v1.Table.ColumnFamiliesEntry\x12O\n\x0bgranularity\x18\x04 \x01(\x0e\x32:.google.bigtable.admin.table.v1.Table.TimestampGranularity\x1a\x63\n\x13\x43olumnFamiliesEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12;\n\x05value\x18\x02 \x01(\x0b\x32,.google.bigtable.admin.table.v1.ColumnFamily:\x02\x38\x01\"\"\n\x14TimestampGranularity\x12\n\n\x06MILLIS\x10\x00\"l\n\x0c\x43olumnFamily\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x15\n\rgc_expression\x18\x02 \x01(\t\x12\x37\n\x07gc_rule\x18\x03 \x01(\x0b\x32&.google.bigtable.admin.table.v1.GcRule\"\xed\x02\n\x06GcRule\x12\x1a\n\x10max_num_versions\x18\x01 \x01(\x05H\x00\x12,\n\x07max_age\x18\x02 \x01(\x0b\x32\x19.google.protobuf.DurationH\x00\x12K\n\x0cintersection\x18\x03 \x01(\x0b\x32\x33.google.bigtable.admin.table.v1.GcRule.IntersectionH\x00\x12=\n\x05union\x18\x04 \x01(\x0b\x32,.google.bigtable.admin.table.v1.GcRule.UnionH\x00\x1a\x45\n\x0cIntersection\x12\x35\n\x05rules\x18\x01 \x03(\x0b\x32&.google.bigtable.admin.table.v1.GcRule\x1a>\n\x05Union\x12\x35\n\x05rules\x18\x01 \x03(\x0b\x32&.google.bigtable.admin.table.v1.GcRuleB\x06\n\x04ruleB\x83\x01\n\"com.google.bigtable.admin.table.v1B\x16\x42igtableTableDataProtoP\x01ZCgoogle.golang.org/genproto/googleapis/bigtable/admin/table/v1;tableb\x06proto3')
  ,
  dependencies=[google_dot_longrunning_dot_operations__pb2.DESCRIPTOR,google_dot_protobuf_dot_duration__pb2.DESCRIPTOR,])



_TABLE_TIMESTAMPGRANULARITY = _descriptor.EnumDescriptor(
  name='TimestampGranularity',
  full_name='google.bigtable.admin.table.v1.Table.TimestampGranularity',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='MILLIS', index=0, number=0,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=509,
  serialized_end=543,
)
_sym_db.RegisterEnumDescriptor(_TABLE_TIMESTAMPGRANULARITY)


_TABLE_COLUMNFAMILIESENTRY = _descriptor.Descriptor(
  name='ColumnFamiliesEntry',
  full_name='google.bigtable.admin.table.v1.Table.ColumnFamiliesEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='google.bigtable.admin.table.v1.Table.ColumnFamiliesEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='google.bigtable.admin.table.v1.Table.ColumnFamiliesEntry.value', index=1,
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
  serialized_start=408,
  serialized_end=507,
)

_TABLE = _descriptor.Descriptor(
  name='Table',
  full_name='google.bigtable.admin.table.v1.Table',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.bigtable.admin.table.v1.Table.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='current_operation', full_name='google.bigtable.admin.table.v1.Table.current_operation', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='column_families', full_name='google.bigtable.admin.table.v1.Table.column_families', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='granularity', full_name='google.bigtable.admin.table.v1.Table.granularity', index=3,
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
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=162,
  serialized_end=543,
)


_COLUMNFAMILY = _descriptor.Descriptor(
  name='ColumnFamily',
  full_name='google.bigtable.admin.table.v1.ColumnFamily',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.bigtable.admin.table.v1.ColumnFamily.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gc_expression', full_name='google.bigtable.admin.table.v1.ColumnFamily.gc_expression', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gc_rule', full_name='google.bigtable.admin.table.v1.ColumnFamily.gc_rule', index=2,
      number=3, type=11, cpp_type=10, label=1,
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
  serialized_start=545,
  serialized_end=653,
)


_GCRULE_INTERSECTION = _descriptor.Descriptor(
  name='Intersection',
  full_name='google.bigtable.admin.table.v1.GcRule.Intersection',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='rules', full_name='google.bigtable.admin.table.v1.GcRule.Intersection.rules', index=0,
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
  serialized_start=880,
  serialized_end=949,
)

_GCRULE_UNION = _descriptor.Descriptor(
  name='Union',
  full_name='google.bigtable.admin.table.v1.GcRule.Union',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='rules', full_name='google.bigtable.admin.table.v1.GcRule.Union.rules', index=0,
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
  serialized_start=951,
  serialized_end=1013,
)

_GCRULE = _descriptor.Descriptor(
  name='GcRule',
  full_name='google.bigtable.admin.table.v1.GcRule',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='max_num_versions', full_name='google.bigtable.admin.table.v1.GcRule.max_num_versions', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='max_age', full_name='google.bigtable.admin.table.v1.GcRule.max_age', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='intersection', full_name='google.bigtable.admin.table.v1.GcRule.intersection', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='union', full_name='google.bigtable.admin.table.v1.GcRule.union', index=3,
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
      name='rule', full_name='google.bigtable.admin.table.v1.GcRule.rule',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=656,
  serialized_end=1021,
)

_TABLE_COLUMNFAMILIESENTRY.fields_by_name['value'].message_type = _COLUMNFAMILY
_TABLE_COLUMNFAMILIESENTRY.containing_type = _TABLE
_TABLE.fields_by_name['current_operation'].message_type = google_dot_longrunning_dot_operations__pb2._OPERATION
_TABLE.fields_by_name['column_families'].message_type = _TABLE_COLUMNFAMILIESENTRY
_TABLE.fields_by_name['granularity'].enum_type = _TABLE_TIMESTAMPGRANULARITY
_TABLE_TIMESTAMPGRANULARITY.containing_type = _TABLE
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
    __module__ = 'google.bigtable.admin.table.v1.bigtable_table_data_pb2'
    # @@protoc_insertion_point(class_scope:google.bigtable.admin.table.v1.Table.ColumnFamiliesEntry)
    ))
  ,
  DESCRIPTOR = _TABLE,
  __module__ = 'google.bigtable.admin.table.v1.bigtable_table_data_pb2'
  # @@protoc_insertion_point(class_scope:google.bigtable.admin.table.v1.Table)
  ))
_sym_db.RegisterMessage(Table)
_sym_db.RegisterMessage(Table.ColumnFamiliesEntry)

ColumnFamily = _reflection.GeneratedProtocolMessageType('ColumnFamily', (_message.Message,), dict(
  DESCRIPTOR = _COLUMNFAMILY,
  __module__ = 'google.bigtable.admin.table.v1.bigtable_table_data_pb2'
  # @@protoc_insertion_point(class_scope:google.bigtable.admin.table.v1.ColumnFamily)
  ))
_sym_db.RegisterMessage(ColumnFamily)

GcRule = _reflection.GeneratedProtocolMessageType('GcRule', (_message.Message,), dict(

  Intersection = _reflection.GeneratedProtocolMessageType('Intersection', (_message.Message,), dict(
    DESCRIPTOR = _GCRULE_INTERSECTION,
    __module__ = 'google.bigtable.admin.table.v1.bigtable_table_data_pb2'
    # @@protoc_insertion_point(class_scope:google.bigtable.admin.table.v1.GcRule.Intersection)
    ))
  ,

  Union = _reflection.GeneratedProtocolMessageType('Union', (_message.Message,), dict(
    DESCRIPTOR = _GCRULE_UNION,
    __module__ = 'google.bigtable.admin.table.v1.bigtable_table_data_pb2'
    # @@protoc_insertion_point(class_scope:google.bigtable.admin.table.v1.GcRule.Union)
    ))
  ,
  DESCRIPTOR = _GCRULE,
  __module__ = 'google.bigtable.admin.table.v1.bigtable_table_data_pb2'
  # @@protoc_insertion_point(class_scope:google.bigtable.admin.table.v1.GcRule)
  ))
_sym_db.RegisterMessage(GcRule)
_sym_db.RegisterMessage(GcRule.Intersection)
_sym_db.RegisterMessage(GcRule.Union)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\"com.google.bigtable.admin.table.v1B\026BigtableTableDataProtoP\001ZCgoogle.golang.org/genproto/googleapis/bigtable/admin/table/v1;table'))
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