#include <gtest/gtest.h>
#include "metron/core/metric/iso_80000_04.hh"

TEST(ISO800004Test, IsBarDevidedBy100_000_PascalEqaulToOnePascal)
{
    constexpr double pascal = metron::core::units::metric::iso_80000_4::pascal;
    constexpr double bar = metron::core::units::metric::iso_80000_4::bar;

    EXPECT_NEAR(bar / (100000.0 * pascal), pascal, 1e-12);
}