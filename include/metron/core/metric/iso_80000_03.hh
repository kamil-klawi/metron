/**
 * @file iso_80000_03.hh
 * @brief Space and Time units according to ISO 80000-3.
 * 
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_3 Space and Time
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Provides standardized conversion factors for kinematics, geometry, 
 *   and time-tracking units as defined by ISO 80000-3.
 * 
 * REFERENCE:
 * - ISO 80000-3:2019 (Space and Time).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * - Radians are normalized to 1.0 (dimensionless m/m).
 * - The liter is defined as exactly 0.001 cubic meters
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 29-04-2026
 */

#ifndef ISO_80000_03_HH
#define ISO_80000_03_HH

#include "../si_base.hh"
#include "../constants.hh"

namespace metron::core::units::metric::iso_80000_3
{

    /**
     * @name Angles Units
     * @{
     */
    inline constexpr double radian    = 1.0;
    inline constexpr double steradian = 1.0;
    inline constexpr double degree    = (metron::core::constants::pi / 180.0) * radian;
    inline constexpr double arcminute = degree / 60.0;
    inline constexpr double arcsecond = arcminute / 60.0;
    /** @} */

    /**
     * @name Time Units
     * @{
     */
    inline constexpr double minute = 60.0 * metron::core::units::second;
    inline constexpr double hour   = 60.0 * minute;
    inline constexpr double day    = 24.0 * hour;
    /** @} */

    /**
     * @name Space Units
     * @{
     */
    inline constexpr double are     = 100.0 * (metron::core::units::meter * metron::core::units::meter);
    inline constexpr double hectare = 100.0 * are;
    /** @} */

    /**
     * @name Volume Units
     * @{
     */
    inline constexpr double liter      = 0.001 * (metron::core::units::meter * metron::core::units::meter * metron::core::units::meter);
    inline constexpr double milliliter = liter / 1000.0;
    /** @} */

    /**
     * @name Kinematics Units
     * @{
     */
    inline constexpr double speed_of_light           = 299792458.0 * (metron::core::units::meter / metron::core::units::second);
    inline constexpr double meter_per_second         = metron::core::units::meter / metron::core::units::second;
    inline constexpr double kilometer_per_hour       = (1000.0 * metron::core::units::meter) / hour;
    inline constexpr double meter_per_second_squared = meter_per_second / metron::core::units::second;
    inline constexpr double knot                     = 1852.0 * (metron::core::units::meter / hour);
    /** @} */

} // metron::core::units::metric::iso_80000_3

#endif // ISO_80000_03_HH