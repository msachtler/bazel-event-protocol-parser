from build_events.parse_event import (
        from_prefixed_bin,
        print_stderr,
)
import sys

infile = sys.argv[1]
fd = open(infile, 'rb')
data = fd.read()

events = from_prefixed_bin(data)

for event in events:
    print_stderr(event)   

