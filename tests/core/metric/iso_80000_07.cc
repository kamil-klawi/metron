#include <gtest/gtest.h>
#include "metron/core/si_base.hh"
#include "metron/core/metric/iso_80000_07.hh"

TEST(ISO800007Test, IsLumenDividedBySquareMeterEqaulToLux)
{
    constexpr double lumen = metron::core::units::metric::iso_80000_7::lumen;
    constexpr double lux = metron::core::units::metric::iso_80000_7::lux;
    constexpr double meter = metron::core::units::meter;

    EXPECT_NEAR(lumen / (metron::core::units::meter * metron::core::units::meter), lux, 1e-12);
}