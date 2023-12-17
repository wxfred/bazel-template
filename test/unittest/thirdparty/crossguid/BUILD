# https://github.com/bazelbuild/bazel/blob/master/src/main/cpp/BUILD
# WIN_LINK_OPTS = [
#   "-DEFAULTLIB:advapi32.lib",  # GetUserNameW
#   "-DEFAULTLIB:ole32.lib",  # CoTaskMemFree
#   "-DEFAULTLIB:shell32.lib",  # SHGetKnownFolderPath
#   "-DEFAULTLIB:ws2_32.lib",  # grpc
# ]

cc_test(
  name = "guid_test",
  size = "small",
  srcs = ["guid_test.cc"],
  deps = [
    "@com_google_googletest//:gtest_main",
    "@crossguid//:crossguid",
  ],
  copts = [
    "/std:c++17",
  ],
  linkopts = ["-DEFAULTLIB:ole32.lib"],
)