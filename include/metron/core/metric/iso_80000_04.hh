/**
 * @file iso_80000_04.hh
 * @brief Mechanics units according to ISO 80000-4.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_4 Mechanics
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Provides standardized conversion factors for force, pressure, energy, power
 *   and related mechanical quantities.
 * - Establishes the link between SI base units and coherent derived mechanical units.
 * 
 * REFERENCE:
 * - ISO 80000-4:2019 (Mechanics).
 * - SI Brochure (9th edition, 2019).
 * - CODATA 2018/2022 recommended values for physical constants.
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * - All units are derived directly from SI base units (kg, m, s) to ensure
 *   a coherent system (e.g., 1 N = 1 kg·m/s²).
 * - Standard gravity (gn) is used as a constant defined in ISO 80000-4 for
 *   force-related conversions.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 29-04-2026
 */

#ifndef ISO_80000_04_HH
#define ISO_80000_04_HH

#include "../si_base.hh"
#include "../constants.hh"
#include "iso_80000_03.hh"

namespace metron::core::units::metric::iso_80000_4
{
    
    /**
     * @name Force Units
     * - Newton (N): kg * m / s^2
     * @{
     */
    inline constexpr double newton = metron::core::units::kilogram * metron::core::units::metric::iso_80000_3::meter_per_second_squared;
    /** @} */

    /**
     * @name Pressure and Stress Units
     * - Pascal (Pa): N / m^2
     * @{
     */
    inline constexpr double pascal = newton / (metron::core::units::meter * metron::core::units::meter);
    inline constexpr double bar    = 100000.0 * pascal;
    inline constexpr double standard_atmosphere = 101325.0 * pascal;
    /** @} */

    /**
     * @name Energy, Work and Heat
     * - Joule (J): N * m
     * @{
     */
    inline constexpr double joule = newton * metron::core::units::meter;
    inline constexpr double electronvolt = 1.602176634e-19 * joule;
    /** @} */

    /**
     * @name Power
     * - Watt (W): J / s
     * @{
     */
    inline constexpr double watt = joule / metron::core::units::second;
    /** @} */

    /**
     * @name Gravitational Reference
     * @{
     */
    inline constexpr double standard_gravity = 9.80665 * (metron::core::units::meter / (metron::core::units::second * metron::core::units::second));
    inline constexpr double gravitational_constant = 6.67430e-11 * (
        (metron::core::units::meter * metron::core::units::meter * metron::core::units::meter) / (
            metron::core::units::kilogram * (metron::core::units::second * metron::core::units::second)));
    /** @} */

} // namespace metron::core::units::metric::iso_80000_4

#endif // ISO_80000_04_HH