#include <gtest/gtest.h>
#include "metron/core/non_metric/angles.hh"

TEST(NonMetricAnglesTest, IsOneSixtiethDegreeEqualToArcminute)
{
    constexpr double degree = metron::core::units::non_metric::angles::degree;
    constexpr double arcminute = metron::core::units::non_metric::angles::arcminute;

    EXPECT_NEAR(degree / 60.0, arcminute, 1e-12);
}