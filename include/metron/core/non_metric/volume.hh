/**
 * @file volume.hh
 * @brief Definition of non-metric volume units.
 * 
 * @defgroup METRON_CORE_UNITS_NONMETRIC_Volume Non-Metric Volume
 * @ingroup METRON_CORE_UNITS_NONMETRIC
 * 
 * @details
 * PURPOSE:
 * - Provides standardized conversion factors for Imperial and US Customary volume units
 *   to the SI cubic meter.
 * 
 * REFERENCE:
 * - Weights and Measures Act 1985.
 * - NIST Special Publication 811.
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * - UK imperial system based on the Weights and Measures Act 1985.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 29-04-2026
 */

#ifndef VOLUME_HH
#define VOLUME_HH

#include "../si_base.hh"
#include "length.hh"

namespace metron::core::units::non_metric::volume
{

    namespace uk
    {
        inline constexpr double gallon      = 4.54609 * (metron::core::units::meter * metron::core::units::meter * metron::core::units::meter / 1000.0);
        inline constexpr double quart       = gallon / 4.0;
        inline constexpr double pint        = quart / 2.0;
        inline constexpr double gill        = pint / 4.0;
        inline constexpr double fluid_ounce = gill / 5.0;
    } // namespace uk

    namespace us
    {
        inline constexpr double gallon_liquid = 231.0 * (metron::core::units::non_metric::length::inch * metron::core::units::non_metric::length::inch * metron::core::units::non_metric::length::inch);
        inline constexpr double quart         = gallon_liquid / 4.0;
        inline constexpr double pint          = quart / 2.0;
        inline constexpr double cup           = pint / 2.0;
        inline constexpr double fluid_ounce   = pint / 16.0;
        inline constexpr double tablespoon    = fluid_ounce / 2.0;
        inline constexpr double teaspoon      = tablespoon / 3.0;
    } // namespace us

} // namespace metron::core::units::non_metric::volume

#endif // VOLUME_HH