/**
 * @file iso_80000_9.hh
 * @brief Quantities and units for Physical Chemistry and Molecular Physics.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_9 ISO_80000_9
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines quantities for molecular systems and chemical reactions.
 * - Provides units for molar mass, concentration, and chemical potential.
 * 
 * REFERENCE:
 * - ISO 80000-9:2019 (Physical chemistry and molecular physics)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_9_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_9_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_9
{

    /**
     * @note Derived dimension aliases (Physical Chemistry)
     * molar_mass_d (kg/mol)
     * molar_volume_d (m^3/mol)
     * amount_conc_d (mol/m^3)
     * molality_d (mol/kg)
     * molar_energy_d (J/mol)
     * molar_entropy_d (J/(mol*K))
     * @{
     */
    using molar_mass_d    = dimension< 0, 1, 0, 0, 0, -1, 0>;
    using molar_volume_d  = dimension< 3, 0, 0, 0, 0, -1, 0>;
    using amount_conc_d   = dimension<-3, 0, 0, 0, 0,  1, 0>;
    using molality_d      = dimension< 0,-1, 0, 0, 0,  1, 0>;
    using molar_energy_d  = dimension< 2, 1,-2, 0, 0, -1, 0>;
    using molar_entropy_d = dimension< 2, 1,-2, 0,-1, -1, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<molar_mass_d>  kilogram_per_mol{1.0};
    inline constexpr quantity<amount_conc_d> mol_per_cubic_meter{1.0};
    inline constexpr quantity<amount_conc_d> molar = mol_per_cubic_meter * 1000.0;
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto kg_mol = kilogram_per_mol;
        inline constexpr auto mol_m3 = mol_per_cubic_meter;
        inline constexpr auto M      = molar;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_9

#endif // METRON_DIMENSIONAL_SI_ISO_80000_9_HH