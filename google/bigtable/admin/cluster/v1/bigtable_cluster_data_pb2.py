# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/bigtable/admin/cluster/v1/bigtable_cluster_data.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2
from google.longrunning import operations_pb2 as google_dot_longrunning_dot_operations__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/bigtable/admin/cluster/v1/bigtable_cluster_data.proto',
  package='google.bigtable.admin.cluster.v1',
  syntax='proto3',
  serialized_pb=_b('\n<google/bigtable/admin/cluster/v1/bigtable_cluster_data.proto\x12 google.bigtable.admin.cluster.v1\x1a\x1cgoogle/api/annotations.proto\x1a#google/longrunning/operations.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xbb\x01\n\x04Zone\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x14\n\x0c\x64isplay_name\x18\x02 \x01(\t\x12=\n\x06status\x18\x03 \x01(\x0e\x32-.google.bigtable.admin.cluster.v1.Zone.Status\"P\n\x06Status\x12\x0b\n\x07UNKNOWN\x10\x00\x12\x06\n\x02OK\x10\x01\x12\x17\n\x13PLANNED_MAINTENANCE\x10\x02\x12\x18\n\x14\x45MERGENCY_MAINENANCE\x10\x03\"\xc9\x01\n\x07\x43luster\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x38\n\x11\x63urrent_operation\x18\x03 \x01(\x0b\x32\x1d.google.longrunning.Operation\x12\x14\n\x0c\x64isplay_name\x18\x04 \x01(\t\x12\x13\n\x0bserve_nodes\x18\x05 \x01(\x05\x12K\n\x14\x64\x65\x66\x61ult_storage_type\x18\x08 \x01(\x0e\x32-.google.bigtable.admin.cluster.v1.StorageType*H\n\x0bStorageType\x12\x17\n\x13STORAGE_UNSPECIFIED\x10\x00\x12\x0f\n\x0bSTORAGE_SSD\x10\x01\x12\x0f\n\x0bSTORAGE_HDD\x10\x02\x42\x8b\x01\n$com.google.bigtable.admin.cluster.v1B\x18\x42igtableClusterDataProtoP\x01ZGgoogle.golang.org/genproto/googleapis/bigtable/admin/cluster/v1;clusterb\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_longrunning_dot_operations__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])

_STORAGETYPE = _descriptor.EnumDescriptor(
  name='StorageType',
  full_name='google.bigtable.admin.cluster.v1.StorageType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='STORAGE_UNSPECIFIED', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STORAGE_SSD', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STORAGE_HDD', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=592,
  serialized_end=664,
)
_sym_db.RegisterEnumDescriptor(_STORAGETYPE)

StorageType = enum_type_wrapper.EnumTypeWrapper(_STORAGETYPE)
STORAGE_UNSPECIFIED = 0
STORAGE_SSD = 1
STORAGE_HDD = 2


_ZONE_STATUS = _descriptor.EnumDescriptor(
  name='Status',
  full_name='google.bigtable.admin.cluster.v1.Zone.Status',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='OK', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PLANNED_MAINTENANCE', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EMERGENCY_MAINENANCE', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=306,
  serialized_end=386,
)
_sym_db.RegisterEnumDescriptor(_ZONE_STATUS)


_ZONE = _descriptor.Descriptor(
  name='Zone',
  full_name='google.bigtable.admin.cluster.v1.Zone',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.bigtable.admin.cluster.v1.Zone.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='display_name', full_name='google.bigtable.admin.cluster.v1.Zone.display_name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='status', full_name='google.bigtable.admin.cluster.v1.Zone.status', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _ZONE_STATUS,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=199,
  serialized_end=386,
)


_CLUSTER = _descriptor.Descriptor(
  name='Cluster',
  full_name='google.bigtable.admin.cluster.v1.Cluster',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='google.bigtable.admin.cluster.v1.Cluster.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='current_operation', full_name='google.bigtable.admin.cluster.v1.Cluster.current_operation', index=1,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='display_name', full_name='google.bigtable.admin.cluster.v1.Cluster.display_name', index=2,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='serve_nodes', full_name='google.bigtable.admin.cluster.v1.Cluster.serve_nodes', index=3,
      number=5, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='default_storage_type', full_name='google.bigtable.admin.cluster.v1.Cluster.default_storage_type', index=4,
      number=8, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=389,
  serialized_end=590,
)

_ZONE.fields_by_name['status'].enum_type = _ZONE_STATUS
_ZONE_STATUS.containing_type = _ZONE
_CLUSTER.fields_by_name['current_operation'].message_type = google_dot_longrunning_dot_operations__pb2._OPERATION
_CLUSTER.fields_by_name['default_storage_type'].enum_type = _STORAGETYPE
DESCRIPTOR.message_types_by_name['Zone'] = _ZONE
DESCRIPTOR.message_types_by_name['Cluster'] = _CLUSTER
DESCRIPTOR.enum_types_by_name['StorageType'] = _STORAGETYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Zone = _reflection.GeneratedProtocolMessageType('Zone', (_message.Message,), dict(
  DESCRIPTOR = _ZONE,
  __module__ = 'google.bigtable.admin.cluster.v1.bigtable_cluster_data_pb2'
  # @@protoc_insertion_point(class_scope:google.bigtable.admin.cluster.v1.Zone)
  ))
_sym_db.RegisterMessage(Zone)

Cluster = _reflection.GeneratedProtocolMessageType('Cluster', (_message.Message,), dict(
  DESCRIPTOR = _CLUSTER,
  __module__ = 'google.bigtable.admin.cluster.v1.bigtable_cluster_data_pb2'
  # @@protoc_insertion_point(class_scope:google.bigtable.admin.cluster.v1.Cluster)
  ))
_sym_db.RegisterMessage(Cluster)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n$com.google.bigtable.admin.cluster.v1B\030BigtableClusterDataProtoP\001ZGgoogle.golang.org/genproto/googleapis/bigtable/admin/cluster/v1;cluster'))
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
