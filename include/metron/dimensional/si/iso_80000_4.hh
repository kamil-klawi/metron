/**
 * @file iso_80000_4.hh
 * @brief Quantities and units for Mechanics.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_4 ISO_80000_4
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines derived physical quantities and units related to mechanics.
 * - Provides standardized constants for force, energy, pressure, and power.
 * 
 * REFERENCE:
 * - ISO 80000-4:2019 (Mechanics)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_4_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_4_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_4
{

    /**
     * @note Derived dimension aliases (Mechanics)
     * power_d (J/s)
     * momentum_d (kg*m/s)
     * force_d (kg*m/s^2)
     * energy_d (kg*m^2/s^2)
     * pressure_d (kg/(m*s^2))
     * angular_moment_d (kg*m^2/s)
     * dynamic_viscosity_d (Pa*s)
     * surface_tension_d (N/m)
     * @{
     */
    using power_d             = dimension<2, 1, -3, 0, 0, 0, 0>;
    using momentum_d          = dimension<1, 1, -1, 0, 0, 0, 0>;
    using force_d             = dimension<1, 1, -2, 0, 0, 0, 0>;
    using energy_d            = dimension<2, 1, -2, 0, 0, 0, 0>;
    using pressure_d          = dimension<-1, 1, -2, 0, 0, 0, 0>;
    using angular_moment_d    = dimension<2, 1, -1, 0, 0, 0, 0>;
    using dynamic_viscosity_d = dimension<-1, 1, -1, 0, 0, 0, 0>;
    using surface_tension_d   = dimension<0, 1, -2, 0, 0, 0, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<force_d>    newton{1.0};
    inline constexpr quantity<energy_d>   joule{1.0};
    inline constexpr quantity<pressure_d> pascal{1.0};
    inline constexpr quantity<power_d>    watt{1.0};
    inline constexpr quantity<energy_d>   newton_meter{1.0};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto N  = newton;
        inline constexpr auto J  = joule;
        inline constexpr auto Pa = pascal;
        inline constexpr auto W  = watt;
        inline constexpr auto Nm = newton_meter;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_4

#endif // METRON_DIMENSIONAL_SI_ISO_80000_4_HH