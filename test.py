from build_event_stream_pb2 import (
    BuildEvent,
)
from google.protobuf.internal.decoder import _DecodeVarint32

import sys

infile = sys.argv[1]
fd = open(infile, 'rb')
data = fd.read()

decoder = _DecodeVarint32

messages = []

next_pos, pos = 0, 0
while pos < len(data):
    event = BuildEvent()
    next_pos, pos = decoder(data, pos)
    event.ParseFromString(data[pos:pos + next_pos])
    messages.append(event)
    pos += next_pos

    # use parsed message
    print 80 * '-' 
    print(event)
    print type(event.children)


print len(messages)
