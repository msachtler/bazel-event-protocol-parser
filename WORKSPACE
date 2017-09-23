# File //:WORKSPACE
workspace(name = "build_events")

#
#http_archive(
#    name = "com_google_protobuf",
#    urls = ["https://github.com/google/protobuf/archive/b4b0e304be5a68de3d0ee1af9b286f958750f5e4.zip"],
#    strip_prefix = "protobuf-b4b0e304be5a68de3d0ee1af9b286f958750f5e4",
#    sha256 = "ff771a662fb6bd4d3cc209bcccedef3e93980a49f71df1e987f6afa3bcdcba3a",
#)

git_repository(
    name = "org_pubref_rules_protobuf",
    remote = "https://github.com/pubref/rules_protobuf.git",
    tag = "v0.8.0",
)



new_http_archive(
    name = "six_archive",
    build_file = "@com_google_protobuf//:six.BUILD",
    sha256 = "105f8d68616f8248e24bf0e9372ef04d3cc10104f1980f54d57b2ce73a5ad56a",
    url = "https://pypi.python.org/packages/source/s/six/six-1.10.0.tar.gz#md5=34eed507548117b2ab523ab14b2f8b55",
)

bind(
    name = "six",
    actual = "@six_archive//:six",
)

http_file(
    name = "build_event_proto",
    urls = ["https://raw.githubusercontent.com/googleapis/googleapis/master/google/devtools/build/v1/publish_build_event.proto"],
)

#new_http_archive(
#    name = "com_google_googleapis",
#    urls = ["https://github.com/googleapis/googleapis/archive/master.zip"],
#    strip_prefix = "googleapis-master",
#    build_file_content = """
#exports_files(glob(["google/**"]))
#"""
#)


# Load language-specific dependencies
load("@org_pubref_rules_protobuf//python:rules.bzl", "py_proto_repositories")
py_proto_repositories()
