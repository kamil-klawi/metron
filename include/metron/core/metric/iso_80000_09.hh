/**
 * @file iso_80000_09.hh
 * @brief Physical chemistry and molecular physics units according to ISO 80000-9.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_9 Physical chemistry and molecular physics
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Defines units and quantities for physical chemistry and molecular physics 
 *   according to ISO 80000-9.
 * - Establishes the relationship between the amount of substance (mol) and 
 *   mass, volume, and number of entities.
 * - Provides standardized measures for molar, specific, and concentration-related 
 *   properties essential for chemical thermodynamics and kinetics.
 * 
 * REFERENCE:
 * - ISO 80000-9:2019 (Physical chemistry and molecular physics).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 30-04-2026
 */

#ifndef ISO_80000_09_HH
#define ISO_80000_09_HH

#include "../si_base.hh"
#include "iso_80000_05.hh"
#include "iso_80000_06.hh"

namespace metron::core::units::metric::iso_80000_9 {

    /**
     * @name Constants
     * - Avogadro constant (Na)
     * - Molar gas constant (R)
     * - Faraday constant (F)
     * @{
     */
    inline constexpr double avogadro_constant = 6.02214076e23 / mole;
    inline constexpr double molar_gas_constant = metron::core::units::metric::iso_80000_5::boltzmann_constant * avogadro_constant;
    inline constexpr double faraday_constant = metron::core::units::metric::iso_80000_6::elementary_charge * avogadro_constant;
    /** @} */

    /**
     * @name Concentration and Molar Quantities
     * - Molar mass (M)
     * - Molar volume (Vm)
     * - Amount concentration (Molarity)
     * - Molality
     * @{
     */
    inline constexpr double kilogram_per_mole    = metron::core::units::kilogram / metron::core::units::mole;
    inline constexpr double cubic_meter_per_mole = (metron::core::units::meter * metron::core::units::meter * metron::core::units::meter) / metron::core::units::mole;
    inline constexpr double mole_per_cubic_meter = metron::core::units::mole / (metron::core::units::meter * metron::core::units::meter * metron::core::units::meter);
    inline constexpr double mole_per_kilogram    = metron::core::units::mole / metron::core::units::kilogram;
    /** @} */

} // namespace metron::core::units::metric::iso_80000_9

#endif // ISO_80000_09_HH