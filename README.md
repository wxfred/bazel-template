Bazel 4.2.4

On Windows 11 it is in settings -> Privacy & security -> For developers -> Install apps from any source, including loose files
https://github.com/bazelRio/bazelRio/issues/84

bazel test --cxxopt=-std=c++14 --test_output=all --enable_runfiles //test/unittest/thirdparty/gtest:hello_test
bazel test --cxxopt=-std=c++14 --test_output=all --enable_runfiles //test/unittest/thirdparty/json:json_test
bazel test --cxxopt=-std=c++14 --test_output=all --enable_runfiles //test/unittest/thirdparty/tinyobjloader:load_test

bazel test --cxxopt=-std=c++17 --test_output=all --enable_runfiles //test/unittest/thirdparty/crossguid:guid_test

--runs_per_test=2