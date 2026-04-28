 /**
 * @file angles.hh
 * @brief Definition of non-metric angular units and their SI equivalents.
 * 
 * @defgroup METRON_CORE_UNITS_NONMETRIC_ANGLES Non-Metric Angles
 * @ingroup METRON_CORE_UNITS_NONMETRIC
 * 
 * @details
 * PURPOSE:
 * - Provides standardized conversion factors for traditional angular measures 
 *   (sexagesimal system) and engineering units (gradians, revolutions).
 * - Bridges the gap between the SI radian (from <metron/metric/iso_80000_3.hh>) 
 *   and practical navigation, surveying, and mechanical engineering units.
 * 
 * REFERENCE:
 * - NIST Special Publication 811 – for the use of non-SI units in modern physics.
 * - DIN 1301 – for additional engineering units like the gon (gradian).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * - Gradians defined as exactly 1/400 of a revolution, used primarily in European
 *   surveying and civil engineering.
 * - Full circle based on the exact relationship 1 revolution = 2\pi radians.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 28-04-2026
 */

#ifndef ANGLES_HH
#define ANGLES_HH

#include "../constants.hh"
#include "../metric/iso_80000_03.hh"

namespace metron::core::units::non_metric::angles
{

    /**
     * @name Sexagesimal units
     * @{
     */
    inline constexpr double degree    = (metron::core::constants::pi / 180.0) * metron::core::units::metric::iso_80000_3::radian;
    inline constexpr double arcminute = degree / 60.0;
    inline constexpr double arcsecond = arcminute / 60.0;
    /** @} */

    /**
     * @name Engineering units
     * @{
     */
    inline constexpr double gradian    = (metron::core::constants::pi / 200.0) * metron::core::units::metric::iso_80000_3::radian;
    inline constexpr double revolution = 2.0 * metron::core::constants::pi * metron::core::units::metric::iso_80000_3::radian;
    inline constexpr double quadrant = 0.5 * metron::core::constants::pi * metron::core::units::metric::iso_80000_3::radian;
    /** @} */

    /**
     * @name Military units
     * @{
     */
    inline constexpr double nato_mil = revolution / 6400.0;
    /** @} */

} // namespace metron::core::units::non_metric::angles

#endif // ANGLES_HH