/**
 * @file iso_80000_8.hh
 * @brief Quantities and units for Acoustics.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_8 ISO_80000_8
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines physical quantities for sound propagation and perception.
 * - Provides units for sound pressure, particle velocity, and acoustic impedance.
 * 
 * REFERENCE:
 * - ISO 80000-8:2020 (Acoustics)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_8_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_8_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_8
{

    /**
     * @note Derived dimension aliases (Acoustics)
     * static_pressure_d (Pa)
     * sound_pressure_d (Pa)
     * sound_power_d (W)
     * sound_intensity_d (W/m^2)
     * acoustic_impedance_d (Pa*s/m^3)
     * sound_exposure_d (Pa^2*s)
     * @{
     */
    using static_pressure_d    = dimension<-1, 1, -2, 0, 0, 0, 0>;
    using sound_pressure_d     = dimension<-1, 1, -2, 0, 0, 0, 0>;
    using sound_power_d        = dimension< 2, 1, -3, 0, 0, 0, 0>;
    using sound_intensity_d    = dimension< 0, 1, -3, 0, 0, 0, 0>;
    using acoustic_impedance_d = dimension<-4, 1, -1, 0, 0, 0, 0>;
    using sound_exposure_d     = dimension<-2, 2, -3, 0, 0, 0, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<sound_pressure_d>  pascal{1.0};
    inline constexpr quantity<sound_power_d>     watt{1.0};
    inline constexpr quantity<sound_intensity_d> watt_per_square_meter{1.0};
    inline constexpr quantity<sound_pressure_d>  sound_pressure_ref{20e-6};
    inline constexpr quantity<sound_intensity_d> sound_intensity_ref{1e-12};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto Pa   = pascal;
        inline constexpr auto W    = watt;
        inline constexpr auto W_m2 = watt_per_square_meter;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_8

#endif // METRON_DIMENSIONAL_SI_ISO_80000_8_HH