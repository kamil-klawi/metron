/**
 * @file iso_80000_07.hh
 * @brief Light and Radiation units according to ISO 80000-7.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_7 Light and Radiation
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Defines units for optical radiation and photometry according to ISO 80000-7.
 * - Bridges the gap between radiometric (physical energy) and photometric 
 *   (visual perception) quantities.
 * - Establishes units for luminous intensity, flux, luminance, and exposure.
 * 
 * REFERENCE:
 * - ISO 80000-7:2019 (Light and Radiation).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 30-04-2026
 */

#ifndef ISO_80000_07_HH
#define ISO_80000_07_HH

#include "../si_base.hh"
#include "iso_80000_03.hh"
#include "iso_80000_04.hh"

namespace metron::core::units::metric::iso_80000_7 {

    /**
     * @name Photometric Units
     * - Lumen (lm): Luminous flux
     * - Lux (lx): Luminous flux per unit area
     * - Nit (nt): Non-SI but common name for candela per square meter (luminance)
     * @{
     */
    inline constexpr double lumen = metron::core::units::candela * metron::core::units::metric::iso_80000_3::steradian;
    inline constexpr double lux = lumen / (metron::core::units::meter * metron::core::units::meter);
    inline constexpr double nit = metron::core::units::candela / (metron::core::units::meter * metron::core::units::meter);
    /** @} */

    /**
     * @name Radiometric Units
     * @{
     */
    inline constexpr double watt_per_steradian    = metron::core::units::metric::iso_80000_4::watt / metron::core::units::metric::iso_80000_3::steradian;
    inline constexpr double watt_per_square_meter = metron::core::units::metric::iso_80000_4::watt / (metron::core::units::meter * metron::core::units::meter);
    /** @} */

    /**
     * @name Constants
     * @{
     */
    inline constexpr double luminous_efficacy_constant = 683.0 * (lumen / metron::core::units::metric::iso_80000_4::watt);
    /** @} */

} // namespace metron::core::units::metric::iso_80000_7

#endif // ISO_80000_07_HH