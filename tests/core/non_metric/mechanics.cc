#include <gtest/gtest.h>
#include "metron/core/non_metric/mechanics.hh"
#include "metron/core/non_metric/mass.hh"

TEST(NonMetricMechanicsTest, IsPoundForceDividedByStandardGravityEqualToPound)
{
    constexpr double standard_gravity = metron::core::units::non_metric::mechanics::standard_gravity;
    constexpr double pound_force = metron::core::units::non_metric::mechanics::pound_force;
    constexpr double pound = metron::core::units::non_metric::mass::pound;
    EXPECT_NEAR(pound_force / standard_gravity, pound, 1e-12);
}