/**
 * @file time.hh
 * @brief Definition of non-metric units of time.
 * 
 * @defgroup METRON_CORE_UNITS_NONMETRIC_TIME Non-Metric Time
 * @ingroup METRON_CORE_UNITS_NONMETRIC
 * 
 * @details
 * PURPOSE:
 * - Provides compile-time constant conversion factors for non-metric units of time.
 * 
 * REFERENCE:
 * - IAU (International Astronomical Union).
 * - ISO 8601-1:2019
 * - ISO 80000-3:2006 (Space and Time)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * - Minute, hour, and day are defined as exact multiples of the SI second.
 * - Month is fixed at exactly 30 days for simplified estimation.
 * - Gregorian year represents the mean year length over the 400-year Gregorian cycle.
 * - Julian year used as the basis for light-year calculations and astronomical epochs.
 * - Astronomical units represent mean values at J2000.0 epoch.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 27-04-2026
 */

#ifndef TIME_HH
#define TIME_HH

#include "../si_base.hh"

namespace metron::core::units::non_metric::time
{

    /**
     * @name Accepted non-metric units of time
     * @{
     */
    inline constexpr double minute         = 60.0 * metron::core::units::second;
    inline constexpr double hour           = 60.0 * minute;
    inline constexpr double day            = 24.0 * hour;
    inline constexpr double week           = 7.0 * day;
    inline constexpr double month          = 30.0 * day;
    inline constexpr double gregorian_year = 365.2425 * day;
    inline constexpr double julian_year    = 365.25 * day;
    /** @} */

    /**
     * @name Astronomical units of time
     * @{
     */
    inline constexpr double sidereal_day  = 0.99726957 * day;
    inline constexpr double sidereal_year = 365.25636 * day;
    inline constexpr double tropical_year = 365.24219 * day;
    /** @} */

    /**
     * @name Historical units of time
     * @{
     */
    inline constexpr double fortnight  = 14.0 * day;
    inline constexpr double quarter    = 91.31 * day;
    inline constexpr double decade     = 10.0 * julian_year;
    inline constexpr double century    = 100.0 * julian_year;
    inline constexpr double millennium = 1000.0 * julian_year;
    /** @} */

} // namespace metron::core::units::non_metric::time

#endif // TIME_HH