#include <gtest/gtest.h>
#include "metron/core/metric/iso_80000_03.hh"

TEST(ISO800003Test, IsOneDegreeEqualsTo3600Arcsecond)
{
    constexpr double degree = metron::core::units::metric::iso_80000_3::degree;
    constexpr double arcsecond = metron::core::units::metric::iso_80000_3::arcsecond;

    EXPECT_NEAR(degree, arcsecond * 3600.0, 1e-12);
}

TEST(ISO800003Test, Is24HoursEqualToOneDay)
{
    constexpr double day = metron::core::units::metric::iso_80000_3::day;
    constexpr double hour = metron::core::units::metric::iso_80000_3::hour;

    EXPECT_DOUBLE_EQ(hour * 24.0, day);
}

TEST(ISO800003Test, IsOneThousandMilliliterEqualToOneLiter)
{
    constexpr double liter = metron::core::units::metric::iso_80000_3::liter;
    constexpr double milliliter = metron::core::units::metric::iso_80000_3::milliliter;

    EXPECT_DOUBLE_EQ(milliliter * 1000.0, liter);
}