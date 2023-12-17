cc_library(
  name = "crossguid",
  hdrs = ["include/crossguid/guid.hpp"],
  srcs = ["src/guid.cpp"],
  includes = ["include"],
  visibility = ["//visibility:public"],
  copts = [
    "/std:c++17",
    "-DGUID_WINDOWS",
  ],
  alwayslink = True,
)

# cc_library(
#   name = "crossguid",
#   hdrs = ["crossguid-*/Guid.hpp"],
#   srcs = ["crossguid-*/Guid.cpp"],
#   visibility = ["//visibility:public"],
# )

# package(
#   default_visibility = ["//visibility:public"],
# )

# cc_library(
#   name = "crossguid",
#   hdrs = ["include/crossguid/guid.hpp"],
#   srcs = ["src/guid.cpp"],
#   includes = ["include"],
# )