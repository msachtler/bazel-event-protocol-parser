load("@com_google_protobuf//:protobuf.bzl", "py_proto_library")

py_proto_library(
    name = "lib",
    srcs = [
            ":build_event_stream.proto",
            ":invocation_policy.proto",
    ],
    protoc = "@com_google_protobuf//:protoc",
    default_runtime = "@com_google_protobuf//:protobuf_python",
)

py_binary(
    name = "test",
    srcs = ["test.py"],
    deps = [":lib"],
)
