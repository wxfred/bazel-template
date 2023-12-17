#include <gtest/gtest.h>
#include <crossguid/guid.hpp>

TEST(HelloTest, BasicAssertions) {
  auto g = xg::newGuid();
  std::cout << g << "\n";
}