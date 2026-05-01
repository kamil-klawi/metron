#include <gtest/gtest.h>
#include "metron/core/constants.hh"
#include "metron/core/metric/iso_80000_11.hh"

TEST(ISO8000011Test, DimensionlessNumbers) 
{
    EXPECT_DOUBLE_EQ(metron::core::units::metric::iso_80000_11::reynolds_number, 1.0);
    EXPECT_DOUBLE_EQ(metron::core::units::metric::iso_80000_11::mach_number, 1.0);
    EXPECT_DOUBLE_EQ(metron::core::units::metric::iso_80000_11::prandtl_number, 1.0);
    EXPECT_DOUBLE_EQ(metron::core::units::metric::iso_80000_11::knudsen_number, 1.0);
}