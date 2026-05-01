/**
 * @file iso_80000_3.hh
 * @brief Quantities and units for Space and Time.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_3 ISO_80000_3
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines geometric and kinematic quantities.
 * - Provides standardized units for length-derived and time-derived scales.
 * 
 * REFERENCE:
 * - ISO 80000-3:2019 (Space and Time)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_3_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_3_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_3
{

    /**
     * @note Derived dimension aliases (Space and Time)
     * area_d (m^2)
     * volume_d (m^3)
     * velocity_d (m/s)
     * acceleration_d (m/s^2)
     * angular_velocity_d (rad/s | 1/s)
     * frequency_d (1/s)
     * @{
     */
    using area_d             = dimension< 2, 0,  0, 0, 0, 0, 0>;
    using volume_d           = dimension< 3, 0,  0, 0, 0, 0, 0>;
    using velocity_d         = dimension< 1, 0, -1, 0, 0, 0, 0>;
    using acceleration_d     = dimension< 1, 0, -2, 0, 0, 0, 0>;
    using angular_velocity_d = dimension< 0, 0, -1, 0, 0, 0, 0>;
    using frequency_d        = dimension< 0, 0, -1, 0, 0, 0, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<area_d>         square_meter{1.0};
    inline constexpr quantity<volume_d>       cubic_meter{1.0};
    inline constexpr quantity<velocity_d>     meter_per_second{1.0};
    inline constexpr quantity<acceleration_d> meter_per_second_squared{1.0};
    inline constexpr quantity<frequency_d>    hertz{1.0};
    inline constexpr quantity<volume_d>       liter{0.001};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto m2 = square_meter;
        inline constexpr auto m3 = cubic_meter;
        inline constexpr auto v  = meter_per_second;
        inline constexpr auto a  = meter_per_second_squared;
        inline constexpr auto Hz = hertz;
        inline constexpr auto L  = liter;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_3

#endif // METRON_DIMENSIONAL_SI_ISO_80000_3_HH