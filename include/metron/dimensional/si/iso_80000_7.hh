/**
 * @file iso_80000_7.hh
 * @brief Quantities and units for Light and Radiation.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_7 ISO_80000_7
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines quantities for photometry and radiometry.
 * - Provides units for luminous flux, illuminance, and radiance.
 * 
 * REFERENCE:
 * - ISO 80000-7:2019 (Light and Radiation)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_7_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_7_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_7
{

    /**
     * @note Derived dimension aliases (Light and Radiation)
     * luminous_flux_d (cd*sr)
     * illuminance_d (lm/m^2)
     * luminance_d (cd/m^2)
     * luminous_energy_d (lm*s)
     * radiant_flux_d (J/s)
     * irradiance_d (W/m^2)
     * @{
     */
    using luminous_flux_d   = dimension< 0, 0, 0, 0, 0, 0, 1>;
    using illuminance_d     = dimension<-2, 0, 0, 0, 0, 0, 1>;
    using luminance_d       = dimension<-2, 0, 0, 0, 0, 0, 1>;
    using luminous_energy_d = dimension< 0, 0, 1, 0, 0, 0, 1>;
    using radiant_flux_d    = dimension< 2, 1, -3, 0, 0, 0, 0>;
    using irradiance_d      = dimension< 0, 1, -3, 0, 0, 0, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<luminous_flux_d> lumen{1.0};
    inline constexpr quantity<illuminance_d>   lux{1.0};
    inline constexpr quantity<radiant_flux_d>  watt{1.0};
    inline constexpr quantity<irradiance_d>    watt_per_square_meter{1.0};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto lm   = lumen;
        inline constexpr auto lx   = lux;
        inline constexpr auto W_m2 = watt_per_square_meter;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_7

#endif // METRON_DIMENSIONAL_SI_ISO_80000_7_HH