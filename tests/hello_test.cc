#include <gtest/gtest.h>
#include "metron/hello.hh"

TEST(HelloTest, ReturnsCorrectGreeting) {
    EXPECT_EQ(hello::greeting(), "Hello World!");
}