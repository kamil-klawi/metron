#include <gtest/gtest.h>
#include "metron/core/metric/iso_80000_06.hh"

TEST(ISO800006Test, IsReverseOhmEqaulToSiemens)
{
    constexpr double ohm = metron::core::units::metric::iso_80000_6::ohm;
    constexpr double siemens = metron::core::units::metric::iso_80000_6::siemens;

    EXPECT_NEAR(1.0 / ohm, siemens, 1e-12);
}