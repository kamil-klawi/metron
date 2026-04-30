/**
 * @file area.hh
 * @brief Definition of non-metric units of area.
 * 
 * @defgroup METRON_CORE_UNITS_NONMETRIC_AREA Non-Metric Area
 * @ingroup METRON_CORE_UNITS_NONMETRIC
 * 
 * @details
 * PURPOSE:
 * - Provides standardized conversion factors for Imperial and US Customary area units
 *   to the SI square meter.
 * 
 * REFERENCE:
 * - International Yard and Pound Agreement (1959).
 * - NIST Special Publication 811.
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * - Derived units (perch, rood, acre) maintain strict geometric coherence with 
 *   length::yard definitions.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 29-04-2026
 */

#ifndef AREA_HH
#define AREA_HH

#include "length.hh"

namespace metron::core::units::non_metric::area
{

    /**
     * @name Imperial Area Units
     * @{
     */
    inline constexpr double square_inch = metron::core::units::non_metric::length::inch * metron::core::units::non_metric::length::inch;
    inline constexpr double square_foot = metron::core::units::non_metric::length::foot * metron::core::units::non_metric::length::foot;
    inline constexpr double square_yard = metron::core::units::non_metric::length::yard * metron::core::units::non_metric::length::yard;
    inline constexpr double square_mile = metron::core::units::non_metric::length::mile * metron::core::units::non_metric::length::mile;
    /** @} */

    /**
     * @name Land Measurement Units
     * @{
     */
    inline constexpr double perch = (5.5 * metron::core::units::non_metric::length::yard) * (5.5 * metron::core::units::non_metric::length::yard);
    inline constexpr double rood  = 40.0 * perch;
    inline constexpr double acre  = 4.0 * rood;
    /** @} */

} // namespace metron::core::units::non_metric::area

#endif // AREA_HH