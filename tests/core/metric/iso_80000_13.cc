#include <gtest/gtest.h>
#include <cmath>
#include "metron/core/metric/iso_80000_13.hh"

TEST(ISO8000013Test, IsOneHartleyEqualToLog2Of10Shannons)
{
    const double expected_ratio = std::log2(10.0);
    EXPECT_NEAR(metron::core::units::metric::iso_80000_13::hartley, expected_ratio * metron::core::units::metric::iso_80000_13::shannon, 1e-12);
}