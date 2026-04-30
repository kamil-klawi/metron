/**
 * @file length.hh
 * @brief Definition of non-metric units of length.
 * 
 * @defgroup METRON_CORE_UNITS_NONMETRIC_LENGTH Non-Metric Length
 * @ingroup METRON_CORE_UNITS_NONMETRIC
 * 
 * @details
 * PURPOSE:
 * - Provides compile-time constant conversion factors for imperial, US customary 
 *   and maritime length units relative to the SI meter.
 * 
 * REFERENCE:
 * - International Yard and Pound Agreement (1959).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * - Calculations are based on the International Yard definition (1 yard = 0.9144 m).
 * - Maritime units follow the International Nautical Mile standard (1 nmi = 1852 m).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 27-04-2026
 */

#ifndef LENGTH_HH
#define LENGTH_HH

#include "../si_base.hh"

namespace metron::core::units::non_metric::length
{

    /**
     * @name Imperial Length Units
     * @{
     */
    inline constexpr double inch    = 0.0254 * metron::core::units::meter;
    inline constexpr double hand    = 4.0 * inch;
    inline constexpr double foot    = 3.0 * hand;
    inline constexpr double yard    = 3.0 * foot;
    inline constexpr double chain   = 22.0 * yard;
    inline constexpr double furlong = 10.0 * chain;
    inline constexpr double mile    = 8.0 * furlong;
    inline constexpr double league  = 3.0 * mile;
    /** @} */

    /**
     * @name Maritime Length Units
     * @{
     */
    inline constexpr double fathom        = 1.8288 * metron::core::units::meter;
    inline constexpr double cable         = 185.2 * metron::core::units::meter;
    inline constexpr double nautical_mile = 1852.0 * metron::core::units::meter;
    /** @} */

} // namespace metron::core::units::non_metric::length

#endif // LENGTH_HH