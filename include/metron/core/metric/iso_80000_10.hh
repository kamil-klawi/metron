/**
 * @file iso_80000_10.hh
 * @brief Atomic and nuclear physics units according to ISO 80000-10.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_10 Atomic and nuclear physics
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Defines units and quantities for atomic, molecular, and nuclear physics 
 *   according to ISO 80000-10.
 * - Establishes the scale for subatomic energy (electronvolts), mass (daltons), 
 *   and time-dependent decay (becquerels).
 * - Integrates the Planck constant (h) to relate frequency to energy levels 
 *   in quantum systems.
 * 
 * REFERENCE:
 * - ISO 80000-10:2019 (Atomic and nuclear physics).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 30-04-2026
 */

#ifndef ISO_80000_10_HH
#define ISO_80000_10_HH

#include "../si_base.hh"
#include "../prefixes.hh"
#include "../constants.hh"
#include "iso_80000_04.hh"
#include "iso_80000_06.hh"

namespace metron::core::units::metric::iso_80000_10 {

    /**
     * @name Fundamental Quantum Constants
     * - Planck constant (h)
     * - Reduced Planck constant (hbar)
     * @{
     */
    inline constexpr double planck_constant         = 6.62607015e-34 * (metron::core::units::metric::iso_80000_4::joule * metron::core::units::second);
    inline constexpr double reduced_planck_constant = planck_constant / (2.0 * metron::core::constants::pi);
    /** @} */

    /**
     * @name Atomic Units
     * - Electronvolt (eV)
     * - Dalton (Da)
     * @{
     */
    inline constexpr double electronvolt      = metron::core::units::metric::iso_80000_6::elementary_charge * metron::core::units::metric::iso_80000_6::volt;
    inline constexpr double mega_electronvolt = metron::core::prefixes::mega * electronvolt;
    inline constexpr double dalton            = 1.66053906660 * metron::core::prefixes::ronto * metron::core::units::kilogram;
    /** @} */

    /**
     * @name Nuclear Physics Units
     * - Becquerel (Bq)
     * - Barn (b)
     * @{
     */
    inline constexpr double becquerel = 1.0 / metron::core::units::second;
    inline constexpr double barn      = 1e-28 * (metron::core::units::meter * metron::core::units::meter);
    /** @} */

} // namespace metron::core::units::metric::iso_80000_10

#endif // ISO_80000_10_HH