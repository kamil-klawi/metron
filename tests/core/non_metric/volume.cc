#include <gtest/gtest.h>
#include "metron/core/non_metric/volume.hh"

TEST(NonMetricVolumeTest, IsTwentyFluidOunceEqualToPint)
{
    constexpr double fluid_ounce_uk = metron::core::units::non_metric::volume::uk::fluid_ounce;
    constexpr double pint_uk = metron::core::units::non_metric::volume::uk::pint;

    EXPECT_NEAR(20.0 * fluid_ounce_uk, pint_uk, 1e-3);
}