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
    print 10 * "="
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
    event_db.register(event)

def print_target_configured(event):
    print event.HasField("configured")
    print event.id.target_configured.label


#
# TODO
#
# I think the way to handle these IDs is to have the db keep a list of
# messages of each ID type. Whenever a message comes in, it is looked up in
# the appropriate bin, and inserted if it didn't exist. Its children are
# looked up too, and inserted if they don't exist.
#
# Each bucket would have its own message-specific way of doing lookups, since
# the information is different in each. In reality, a dictionary will probably
# serve well for many of them, but there seem to be a couple types with no
# actual information. I assume that means we'll only ever get one of them.
#

class Identifier(object):
    def __init__(self, id_object):
        self.id_object = id_object
        self.children = []

class PatternIdentifier(Identifier):
    def __init__(self, id_object):
        Identifier.__init__(self, id_object)
        message = None


class EventDb(object):
    def __init__(self):
        self.db = {}
        self.unseen = set()

    def register(self, event):
        print "Registering event."

        id_type = event.id.WhichOneof("id")
        if id_type == "unknown":
            print "got an UnknownBuildEventId"
        elif id_type == "progress":
            print "progress"
        elif id_type == "started":
            print "started"
        elif id_type == "command_line":
            print "command_line"
        elif id_type == "workspace_status":
            print "workspace_status"
        elif id_type == "options_parsed":
            print "options_parsed"
        elif id_type == "fetch":
            print "fetch"
        elif id_type == "configuration":
            print "configuration"
        elif id_type == "target_configured":
            print "target_configured"
        elif id_type == "pattern":
            print "pattern"
            id_obj = PatternIdentifier(event.id)
        elif id_type == "pattern_skipped":
            print "pattern_skipped"
        elif id_type == "named_set":
            print "named_set"
        elif id_type == "target_completed":
            print "target_completed"
        elif id_type == "action_completed":
            print "action_completed"
        elif id_type == "test_result":
            print "test_result"
        elif id_type == "test_summary":
            print "test_summary"
        elif id_type == "build_finished":
            print "build_finished"
        else:
            print "ERROR: unknown",
            print id_type

#        print "progress"
#        print event.id in self.db.keys()
#
#        print type(event.id)
#
##        self.db[event.id] = event
#
#        for c in event.children:
#            if c not in db.keys():
#                print "Unseen child"
#                self.unseen.add(c)
#            else:
#                print "Seen child!"
        

event_db = EventDb()
