#include <gtest/gtest.h>
#include "metron/core/non_metric/mass.hh"

TEST(NonMetricMassTest, IsOneSixtiethPoundEqualToOneOunce)
{
    constexpr double pound = metron::core::units::non_metric::mass::pound;
    constexpr double ounce = metron::core::units::non_metric::mass::ounce;

    EXPECT_NEAR(pound / 16.0, ounce, 1e-15);
}