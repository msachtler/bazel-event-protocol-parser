load("@com_google_protobuf//:protobuf.bzl", "py_proto_library")
load("@org_pubref_rules_protobuf//python:rules.bzl", "py_proto_compile")


py_proto_library(
    name = "lib",
    srcs = [
            ":build_event_stream.proto",
            ":invocation_policy.proto",
    ],
    protoc = "@com_google_protobuf//:protoc",
    default_runtime = "@com_google_protobuf//:protobuf_python",
)

py_proto_compile(
    name = "publish_build_event_proto",
    protos = [
        "google/devtools/build/v1/publish_build_event.proto",
        "google/devtools/build/v1/build_events.proto",
        "google/devtools/build/v1/build_status.proto",

        "google/api/annotations.proto",
        "google/api/http.proto",
        "google/protobuf/descriptor.proto",
        "google/protobuf/duration.proto",
        "google/protobuf/empty.proto",
        "google/protobuf/any.proto",

        "google/protobuf/timestamp.proto",
        "google/protobuf/wrappers.proto",
        "google/rpc/status.proto",


    ],
    includes = [
#        "@com_google_protobuf//:well_known_protos",
#        "@com_google_protobuf//:src/google/protobuf/duration.proto",
#        "@com_google_protobuf//:src/google/protobuf/empty.proto",
    ],
    with_grpc = True,
    deps = [],
)

py_library(
    name = "grpc_lib",
    srcs = [
        ":publish_build_event_proto",
    ],
)

py_binary(
    name = "test",
    srcs = ["test.py"],
    deps = [
	":lib",
        ":grpc_lib",
    ],
)
