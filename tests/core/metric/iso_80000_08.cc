#include <gtest/gtest.h>
#include "metron/core/metric/iso_80000_08.hh"

TEST(ISO800008Test, IsReverseSecondEqaulToHertz)
{
    constexpr double hertz = metron::core::units::metric::iso_80000_8::hertz;
    constexpr double second = metron::core::units::second;

    EXPECT_NEAR(1.0 / second, hertz, 1e-12);
}