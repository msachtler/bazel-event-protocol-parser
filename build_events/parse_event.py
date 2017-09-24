import build_events.build_event_stream_pb2 as bes
from google.protobuf import message as _message
from google.protobuf.internal.decoder import _DecodeVarint32

def decode_from_str(data):
    event = bes.BuildEvent()
    event.ParseFromString(data)
    return event

def from_prefixed_bin(data):
    decoder = _DecodeVarint32

    messages = []

    # Loop over the input data, decoding the varint prefix on each message, then
    # decoding that many bytes at a time.
    next_pos, pos = 0, 0
    while pos < len(data):
        event = bes.BuildEvent()
        next_pos, pos = decoder(data, pos)
        event.ParseFromString(data[pos:pos + next_pos])
        messages.append(event)
        pos += next_pos

    return messages

def print_stderr(event):
    if event.progress.stderr:
        print event.progress.stderr

def handle(event):
    process(event)
    print_stderr(event)

def process(event):
    # Dispatch messages based on their type.
    msg_type = event.WhichOneof("payload")
    if msg_type == "progress":
        print "progress"
    elif msg_type == "aborted":
        print "aborted"
    elif msg_type == "started":
        print "started"
    elif msg_type == "command_line":
        print "command_line"
    elif msg_type == "options_parsed":
        print "options_parsed"
    elif msg_type == "workspace_status":
        print "workspace_status"
    elif msg_type == "fetch":
        print "fetch"
    elif msg_type == "configuration":
        print "configuration"
    elif msg_type == "expanded":
        print "expanded"
    elif msg_type == "configured":
        print "configured"
        print_target_configured(event)
    elif msg_type == "action":
        print "action"
    elif msg_type == "named_set_of_files":
        print "named_set_of_files"
    elif msg_type == "completed":
        print "completed"
    elif msg_type == "test_result":
        print "test_result"
    elif msg_type == "test_summary":
        print "test_summary"
    elif msg_type == "finished":
        print "finished"
    else:
        print "unknown",
        print msg_type

    for c in event.children:
        print "child", c.WhichOneof("id")


def print_target_configured(event):
    print event.HasField("configured")
    print "---"
    print event.id.target_configured.label
    print "---"
