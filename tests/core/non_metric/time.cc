#include <gtest/gtest.h>
#include "metron/core/non_metric/time.hh"

TEST(NonMetricTimeTest, IsSixtyMinutesEqualsOneHour)
{
    constexpr double minute = metron::core::units::non_metric::time::minute;
    constexpr double hour = metron::core::units::non_metric::time::hour;
    EXPECT_NEAR((60.0 * minute), hour, 1e-12);
}