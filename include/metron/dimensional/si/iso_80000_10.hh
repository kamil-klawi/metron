/**
 * @file iso_80000_10.hh
 * @brief Quantities and units for Atomic and Nuclear Physics.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_10 ISO_80000_10
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines quantities for ionizing radiation and nuclear reactions.
 * - Provides units for activity, absorbed dose, and cross-section.
 * 
 * REFERENCE:
 * - ISO 80000-10:2019 (Atomic and nuclear physics)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_10_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_10_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_10
{

    /**
     * @note Derived dimension aliases (Atomic and Nuclear Physics)
     * activity_d (1/s)
     * absorbed_dose_d (J/kg)
     * dose_equivalent_d (J/kg)
     * exposure_d (Coulomb/kg)
     * cross_section_d (m^2)
     * energy_d (eV/J)
     * @{
     */
    using activity_d        = dimension< 0, 0, -1, 0, 0, 0, 0>;
    using absorbed_dose_d   = dimension< 2, 0, -2, 0, 0, 0, 0>;
    using dose_equivalent_d = dimension< 2, 0, -2, 0, 0, 0, 0>; 
    using exposure_d        = dimension< 0, -1, 1, 1, 0, 0, 0>;
    using cross_section_d   = dimension< 2, 0,  0, 0, 0, 0, 0>;
    using energy_d          = dimension< 2, 1, -2, 0, 0, 0, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<activity_d>        becquerel{1.0};
    inline constexpr quantity<absorbed_dose_d>   gray{1.0};
    inline constexpr quantity<dose_equivalent_d> sievert{1.0};
    inline constexpr quantity<cross_section_d>   barn{1e-28};
    inline constexpr quantity<energy_d>          electronvolt{1.602176634e-19};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto Bq = becquerel;
        inline constexpr auto Gy = gray;
        inline constexpr auto Sv = sievert;
        inline constexpr auto b  = barn;
        inline constexpr auto eV = electronvolt;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_10

#endif // METRON_DIMENSIONAL_SI_ISO_80000_10_HH