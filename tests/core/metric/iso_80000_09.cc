#include <gtest/gtest.h>
#include "metron/core/metric/iso_80000_09.hh"

TEST(ISO800009Test, IsKilogramDividedByMoleEqaulToKilogramPerMole)
{
    constexpr double kilogram_per_mole = metron::core::units::metric::iso_80000_9::kilogram_per_mole;
    constexpr double kilogram = metron::core::units::kilogram;
    constexpr double mole = metron::core::units::mole;

    EXPECT_NEAR(kilogram / mole, kilogram_per_mole, 1e-12);
}