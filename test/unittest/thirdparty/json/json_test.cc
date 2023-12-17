#include <gtest/gtest.h>
#include <nlohmann/json.hpp>
#include <fstream>
#include "tools/cpp/runfiles/runfiles.h"
using bazel::tools::cpp::runfiles::Runfiles;
using json = nlohmann::json;

TEST(JSON_TEST, BasicAssertions) {
  std::unique_ptr<Runfiles> runfiles(Runfiles::CreateForTest());

  ASSERT_NE(runfiles, nullptr);

  std::string inputfile = runfiles->Rlocation("__main__/test/asset/json/test.json");
  std::cout << inputfile << "\n";

  std::ifstream f(inputfile);
  json data = json::parse(f);
  std::string s = data.dump();
  std::cout << s << "\n";
}