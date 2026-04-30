#include <gtest/gtest.h>
#include "metron/core/si_base.hh"
#include "metron/core/metric/iso_80000_04.hh"
#include "metron/core/metric/iso_80000_05.hh"

TEST(ISO800005Test, IsJouleDevidedByKelvinEqaulToHeatCapacity)
{
    constexpr double heat_capacity = metron::core::units::metric::iso_80000_5::heat_capacity;
    constexpr double joule = metron::core::units::metric::iso_80000_4::joule;
    constexpr double kelvin = metron::core::units::kelvin;

    EXPECT_NEAR(joule / kelvin, heat_capacity, 1e-12);
}