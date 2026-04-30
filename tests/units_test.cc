#include <gtest/gtest.h>
#include "metron/core/prefixes.hh"
#include "metron/core/si_base.hh"

TEST(UnitsTest, ReturnsOnePicoSecond)
{
    constexpr double pico = metron::core::prefixes::pico;
    constexpr double second = metron::core::units::second;

    EXPECT_NEAR(pico * second, 1e-12, 1e-15);
}