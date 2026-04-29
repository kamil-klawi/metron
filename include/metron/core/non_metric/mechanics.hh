/**
 * @file mechanics.hh
 * @brief Definition of non-metric units for mechanics.
 * 
 * @defgroup METRON_CORE_UNITS_NONMETRIC_MECHANICS Non-Metric Mechanics
 * @ingroup METRON_CORE_UNITS_NONMETRIC
 * 
 * @details
 * PURPOSE:
 * - Defines derived SI units for mechanical quantities by integrating mass (kg), 
 *   length (m) and time (s).
 * - Provides a coherent framework for calculating force, pressure, work, energy
 *   and power according to ISO 80000-4.
 * 
 * REFERENCE:
 * - International Yard and Pound Agreement (1959).
 * - ISO 80000-4:2019 (Mechanics).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations are based on the International Pound definition.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 29-04-2026
 */

#ifndef MECHANICS_HH
#define MECHANICS_HH

#include "../si_base.hh"
#include "mass.hh"
#include "length.hh"

namespace metron::core::units::non_metric::mechanics
{

    /**
     * @name Constants used for definitions
     * @{
     */
    inline constexpr double standard_gravity = 9.80665 * (metron::core::units::meter / (metron::core::units::second * metron::core::units::second));
    /** @} */

    /**
     * @name Force (Siła)
     * - Pound-force (lbf)
     * - Ounces-force (ozf)
     * - kilopound-force (kip)
     * 
     * @{
     */
    inline constexpr double pound_force = metron::core::units::non_metric::mass::pound * standard_gravity;
    inline constexpr double ounce_force = pound_force / 16.0;
    inline constexpr double kip = 1000.0 * pound_force;
    /** @} */

    /**
     * @name Pressure and Stress
     * - Pound per Square Inch (psi)
     * - Kilopound per Square Inch (ksi)
     * @{
     */
    inline constexpr double psi = pound_force / (metron::core::units::non_metric::length::inch * metron::core::units::non_metric::length::inch);
    inline constexpr double ksi = 1000.0 * psi;
    /** @} */

    /**
     * @name Energy and Power
     * - Foot-pound (ft*lbf)
     * - British Thermal Unit (BTU)
     * - Horsepower (Mechanical hp)
     * @{
     */
    inline constexpr double foot_pound = metron::core::units::non_metric::length::foot * pound_force;
    inline constexpr double btu = 1055.05585262 * (metron::core::units::kilogram * metron::core::units::meter * metron::core::units::meter / (metron::core::units::second * metron::core::units::second));
    inline constexpr double horsepower = 550.0 * foot_pound / metron::core::units::second;
    /** @} */

} // namespace metron::core::units::non_metric::mechanics

#endif // MECHANICS_HH