#include <gtest/gtest.h>
#include "metron/core/non_metric/area.hh"

TEST(NonMetricAreaTest, IsEightPointNineFiveFeetEqualToSquareYard)
{
    constexpr double square_foot = metron::core::units::non_metric::area::square_foot;
    constexpr double square_yard = metron::core::units::non_metric::area::square_yard;

    EXPECT_NEAR(8.95 * square_foot, square_yard, 1e-2);
}