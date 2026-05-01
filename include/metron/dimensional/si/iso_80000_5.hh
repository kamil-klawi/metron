/**
 * @file iso_80000_5.hh
 * @brief Quantities and units for Thermodynamics.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_5 ISO_80000_5
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines quantities related to heat, temperature, and thermal properties.
 * - Provides units for heat capacity, entropy, and thermal conductivity.
 * 
 * REFERENCE:
 * - ISO 80000-5:2019 (Thermo­dynamics)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_5_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_5_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_5
{

    /**
     * @note Derived dimension aliases (Thermodynamics)
     * heat_capacity_d (J/K)
     * specific_heat_d (J/(kg*K))
     * thermal_cond_d (W/(m*K))
     * entropy_d (J/K)
     * thermal_resist_d (K/W)
     * linear_expansion_coeff_d (1/K)
     * specific_energy_d (J/kg)
     * heat_flux_density_d (W/m^2)
     * specific_entropy_d (J/(kg*K))
     * @{
     */
    using heat_capacity_d          = dimension< 2, 1, -2, 0, -1, 0, 0>;
    using specific_heat_d          = dimension< 2, 0, -2, 0, -1, 0, 0>;
    using thermal_cond_d           = dimension< 1, 1, -3, 0, -1, 0, 0>;
    using entropy_d                = dimension< 2, 1, -2, 0, -1, 0, 0>;
    using thermal_resist_d         = dimension<-2,-1,  3, 0,  1, 0, 0>;
    using linear_expansion_coeff_d = dimension<0, 0, 0, 0, -1, 0, 0>;
    using specific_energy_d        = dimension<2, 0, -2, 0,  0, 0, 0>;
    using heat_flux_density_d      = dimension<0, 1, -3, 0,  0, 0, 0>;
    using specific_entropy_d       = dimension<2, 0, -2, 0, -1, 0, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<heat_capacity_d>          joule_per_kelvin{1.0};
    inline constexpr quantity<thermal_cond_d>           watt_per_meter_kelvin{1.0};
    inline constexpr quantity<linear_expansion_coeff_d> inverse_kelvin{1.0};
    inline constexpr quantity<specific_energy_d>        joule_per_kilogram{1.0};
    inline constexpr quantity<heat_flux_density_d>      watt_per_square_meter{1.0};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto J_K  = joule_per_kelvin;
        inline constexpr auto W_mK = watt_per_meter_kelvin;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_5

#endif // METRON_DIMENSIONAL_SI_ISO_80000_5_HH