# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from google.devtools.clouderrorreporting.v1beta1 import common_pb2 as google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_common__pb2
from google.devtools.clouderrorreporting.v1beta1 import error_group_service_pb2 as google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_error__group__service__pb2


class ErrorGroupServiceStub(object):
  """Service for retrieving and updating individual error groups.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.GetGroup = channel.unary_unary(
        '/google.devtools.clouderrorreporting.v1beta1.ErrorGroupService/GetGroup',
        request_serializer=google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_error__group__service__pb2.GetGroupRequest.SerializeToString,
        response_deserializer=google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_common__pb2.ErrorGroup.FromString,
        )
    self.UpdateGroup = channel.unary_unary(
        '/google.devtools.clouderrorreporting.v1beta1.ErrorGroupService/UpdateGroup',
        request_serializer=google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_error__group__service__pb2.UpdateGroupRequest.SerializeToString,
        response_deserializer=google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_common__pb2.ErrorGroup.FromString,
        )


class ErrorGroupServiceServicer(object):
  """Service for retrieving and updating individual error groups.
  """

  def GetGroup(self, request, context):
    """Get the specified group.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def UpdateGroup(self, request, context):
    """Replace the data for the specified group.
    Fails if the group does not exist.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_ErrorGroupServiceServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'GetGroup': grpc.unary_unary_rpc_method_handler(
          servicer.GetGroup,
          request_deserializer=google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_error__group__service__pb2.GetGroupRequest.FromString,
          response_serializer=google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_common__pb2.ErrorGroup.SerializeToString,
      ),
      'UpdateGroup': grpc.unary_unary_rpc_method_handler(
          servicer.UpdateGroup,
          request_deserializer=google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_error__group__service__pb2.UpdateGroupRequest.FromString,
          response_serializer=google_dot_devtools_dot_clouderrorreporting_dot_v1beta1_dot_common__pb2.ErrorGroup.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'google.devtools.clouderrorreporting.v1beta1.ErrorGroupService', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
