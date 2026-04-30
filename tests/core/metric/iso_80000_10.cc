#include <gtest/gtest.h>
#include "metron/core/constants.hh"
#include "metron/core/metric/iso_80000_10.hh"

TEST(ISO8000010Test, IsExpectedHbarEqualToReducedPlanckConstant)
{
    double expected_hbar = metron::core::units::metric::iso_80000_10::planck_constant / (2.0 * metron::core::constants::pi);
    EXPECT_DOUBLE_EQ(metron::core::units::metric::iso_80000_10::reduced_planck_constant, expected_hbar);
}