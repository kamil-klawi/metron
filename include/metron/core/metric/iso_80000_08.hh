/**
 * @file iso_80000_08.hh
 * @brief Acoustics units according to ISO 80000-8.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_8 Acoustics
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Defines units and quantities for acoustics according to ISO 80000-8.
 * - Provides standardized measures for sound pressure, power, and intensity.
 * - Establishes logarithmic scales (decibels) for expressing levels relative 
 *   to standardized reference values.
 * 
 * REFERENCE:
 * - ISO 80000-8:2020 (Acoustics).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 30-04-2026
 */

#ifndef ISO_80000_08_HH
#define ISO_80000_08_HH

#include "../si_base.hh"
#include "iso_80000_03.hh"
#include "iso_80000_04.hh"

namespace metron::core::units::metric::iso_80000_8 {

    /**
     * @name Linear Acoustic Units
     * @{
     */
    inline constexpr double hertz           = 1.0 / metron::core::units::second;
    inline constexpr double sound_pressure  = metron::core::units::metric::iso_80000_4::pascal;
    inline constexpr double sound_intensity = metron::core::units::metric::iso_80000_4::watt / (metron::core::units::meter * metron::core::units::meter);
    /** @} */

    /**
     * @name Reference Values for Levels
     * @{
     */
    inline constexpr double reference_sound_pressure  = 20.0e-6 * metron::core::units::metric::iso_80000_4::pascal;
    inline constexpr double reference_sound_intensity = 1.0e-12 * (metron::core::units::metric::iso_80000_4::watt / (metron::core::units::meter * metron::core::units::meter));
    inline constexpr double reference_sound_power     = 1.0e-12 * metron::core::units::metric::iso_80000_4::watt;
    /** @} */

    /**
     * @name Musical Acoustics
     * - Octave interval ratio of 2:1
     * @{
     */
    inline constexpr double octave = 2.0;
    /** @} */

} // namespace metron::core::units::metric::iso_80000_8

#endif // ISO_80000_08_HH