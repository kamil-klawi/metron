#include <gtest/gtest.h>
#include "metron/core/prefixes.hh"

TEST(PrefixesTest, LargeMultiples) 
{
    EXPECT_DOUBLE_EQ(metron::core::prefixes::kilo, 1e3);
    EXPECT_DOUBLE_EQ(metron::core::prefixes::mega, 1e6);
    EXPECT_DOUBLE_EQ(metron::core::prefixes::quetta, 1e30);
}

TEST(PrefixesTest, SmallSubmultiples) 
{
    EXPECT_DOUBLE_EQ(metron::core::prefixes::milli, 1e-3);
    EXPECT_DOUBLE_EQ(metron::core::prefixes::micro, 1e-6);
    EXPECT_DOUBLE_EQ(metron::core::prefixes::atto, 1e-18);
}

TEST(PrefixesTest, IsKiloMultipliedByMilliEqualsOne)
{
    constexpr double kilo = metron::core::prefixes::kilo;
    constexpr double milli = metron::core::prefixes::milli;

    EXPECT_NEAR(kilo * milli, 1.0, 1e-15);
}