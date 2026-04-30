/**
 * @file iso_80000_06.hh
 * @brief Electro­magnetism units according to ISO 80000-6.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_6 Electro­magnetism
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Defines derived SI units for electromagnetism according to ISO 80000-6.
 * - Establishes the relationship between electric current (A) and mechanical 
 *   units (kg, m, s) to describe charge, potential, resistance, and fields.
 * - Provides standardized units for both electric and magnetic phenomena 
 *   (e.g., volt, ohm, tesla, henry).
 * 
 * REFERENCE:
 * - ISO 80000-6:2019 (Electro­magnetism).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 30-04-2026
 */

#ifndef ISO_80000_06_HH
#define ISO_80000_06_HH

#include "../si_base.hh"
#include "iso_80000_04.hh"

namespace metron::core::units::metric::iso_80000_6 {

    /**
     * @name Electrostatics and Current
     * @{
     */
    inline constexpr double coulomb = metron::core::units::ampere * metron::core::units::second;
    inline constexpr double volt    = metron::core::units::metric::iso_80000_4::watt / metron::core::units::ampere;
    inline constexpr double ohm     = volt / metron::core::units::ampere;
    inline constexpr double siemens = 1.0 / ohm;
    inline constexpr double farad   = coulomb / volt;
    /** @} */

    /**
     * @name Magnetics
     * @{
     */
    inline constexpr double weber = volt * metron::core::units::second;
    inline constexpr double tesla = weber / (metron::core::units::meter * metron::core::units::meter);
    inline constexpr double henry = weber / metron::core::units::ampere;
    /** @} */

    /**
     * @name Electromagnetism Constants
     * @{
     */
    inline constexpr double elementary_charge = 1.602176634e-19 * coulomb;
    /** @} */

    /**
     * @name Electromagnetism Constants
     * - Vacuum permeability (mu0) approx 4*pi*1e-7
     * - Vacuum permittivity (epsilon0) approx 1e-9/36*pi
     * @{
     */
    inline constexpr double vacuum_permeability = 1.25663706212e-6 * (henry / metron::core::units::meter);
    inline constexpr double vacuum_permittivity = 8.8541878128e-12 * (farad / metron::core::units::meter);
    inline constexpr double vacuum_impedance    = 376.730313668 * ohm;

    /** @} */

} // namespace metron::core::units::metric::iso_80000_6

#endif // ISO_80000_06_HH