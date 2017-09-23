from build_events.build_event_stream_pb2 import (
    BuildEvent,
)
from google.protobuf.internal.decoder import _DecodeVarint32

def decode_from_str(data):
    event = BuildEvent()
    event.ParseFromString(data)
    return event

def from_prefixed_bin(data):
    decoder = _DecodeVarint32

    messages = []

    # Loop over the input data, decoding the varint prefix on each message, then
    # decoding that many bytes at a time.
    next_pos, pos = 0, 0
    while pos < len(data):
        event = BuildEvent()
        next_pos, pos = decoder(data, pos)
        event.ParseFromString(data[pos:pos + next_pos])
        messages.append(event)
        pos += next_pos

    return messages


def print_stderr(event):
    if event.progress.stderr:
        print event.progress.stderr

