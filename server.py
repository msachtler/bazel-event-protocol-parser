from concurrent import futures
import time
import math

import grpc

from build_events.parse_event import (
        decode_from_str,
        print_stderr
)
from build_events.build_event_stream_pb2 import BuildEvent
import google.devtools.build.v1.publish_build_event_pb2 as pbe
import google.devtools.build.v1.publish_build_event_pb2_grpc as pbe_grpc
import google.protobuf.empty_pb2
from google.protobuf.internal.decoder import _DecodeVarint32

_ONE_DAY_IN_SECONDS = 60 * 60 * 24

class MyPublishBuildEventServicer(object):
    def PublishLifecycleEvent(self, request, context):
        """Publish a build event stating the new state of a build (typically from the
        build queue). If the event is a BuildEnqueued event, also register the new
        build request ID and its build type to BES.

        The backend will persist the event and deliver it to registered frontend
        jobs immediately without batching.

        The commit status of the request is reported by the RPC's util_status()
        function. The error code is the canoncial error code defined in
        //util/task/codes.proto.
        """

#        print("event start")
#        print(request)
#        print(type(request))
#        print(dir(request))

#        print request.project_id
#        print request.build_event.stream_id
#        print request.build_event.stream_id.build_id
#        print request.build_event.event.event_time
#        print dir(request.build_event.event)
#        print request.build_event.event.build_finished
#        print request.build_event.event.bazel_event
#        print request.build_event.event.build_enqueued
#        print request.build_event.event.build_execution_event
#        print request.build_event.event.build_finished
#        print request.build_event.event.component_stream_finished
#        print request.build_event.event.console_output
#        print request.build_event.event.event_time
#        print request.build_event.event.invocation_attempt_finished
#        print request.build_event.event.invocation_attempt_started
#        print request.build_event.event.source_fetch_event
#
        return google.protobuf.empty_pb2.Empty()


    def PublishBuildToolEventStream(self, request_iterator, context):
        """
        Publish build tool events belonging to the same stream to a backend
        job using bidirectional streaming.
        """
#        print("stream enter")
        for request in request_iterator:
            event_bytes = request.event.bazel_event
#            print dir(event_bytes)
#            print type(event_bytes.value)

            event = decode_from_str(event_bytes.value)
            print_stderr(event)
        
            yield pbe.PublishBuildToolEventStreamResponse()


def serve():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    pbe_grpc.add_PublishBuildEventServicer_to_server(
        MyPublishBuildEventServicer(), server)
    server.add_insecure_port('[::]:50051')
    server.start()
    try:
        while True:
            time.sleep(_ONE_DAY_IN_SECONDS)
    except KeyboardInterrupt:
        server.stop(0)


serve()
