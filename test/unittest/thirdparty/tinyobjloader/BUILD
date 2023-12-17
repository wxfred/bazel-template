cc_test(
  name = "load_test",
  size = "small",
  srcs = ["load_test.cc"],
  copts = [
    "-Ithirdparty",
    "-DTINYOBJLOADER_IMPLEMENTATION",
    "-DTINYOBJLOADER_USE_MAPBOX_EARCUT",
  ],
  data = ["//test/asset:asset"],
  deps = [
    "@com_google_googletest//:gtest_main",
    "@bazel_tools//tools/cpp/runfiles",
    "//thirdparty/tinyobjloader:tinyobjloader"
  ],
)