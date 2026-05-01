#include <gtest/gtest.h>
#include "metron/core/metric/iso_80000_10.hh"
#include "metron/core/metric/iso_80000_12.hh"

TEST(ISO8000012Test, IsExpectedFluxEqualToFluxQuantum)
{
    double expected_flux = metron::core::units::metric::iso_80000_10::planck_constant / (2.0 * 1.602176634e-19);
    EXPECT_NEAR(metron::core::units::metric::iso_80000_12::flux_quantum, expected_flux, 1e-30);
}