#include <gtest/gtest.h>
#include "metron/core/non_metric/length.hh"

TEST(NonMetricLengthTest, IsInchMultipliedByFourEqualsHand)
{
    constexpr double inch = metron::core::units::non_metric::length::inch;
    constexpr double hand = metron::core::units::non_metric::length::hand;

    EXPECT_NEAR(inch * 4.0, hand, 1e-15);
}