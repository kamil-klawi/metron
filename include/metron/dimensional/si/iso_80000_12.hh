/**
 * @file iso_80000_12.hh
 * @brief Quantities and units for Condensed Matter Physics.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_12 ISO_80000_12
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines quantities for solid-state physics and material science.
 * - Provides units for lattice vectors, density of states, and Fermi energy.
 * 
 * REFERENCE:
 * - ISO 80000-12:2019 (Condensed matter physics)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_12_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_12_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_12
{

    /**
     * @note Derived dimension aliases (Condensed Matter Physics)
     * lattice_vector_d (m)
     * reciprocal_vector_d (1/m)
     * electron_mobility_d (m^2/(V*s))
     * density_of_states_d (1/(J*m^3))
     * fermi_energy_d (Joule)
     * magnetization_d (A/m)
     * magnetic_suscept_d (dimensionless)
     * @{
     */
    using lattice_vector_d    = dimension< 1, 0, 0, 0, 0, 0, 0>;
    using reciprocal_vector_d = dimension<-1, 0, 0, 0, 0, 0, 0>;
    using electron_mobility_d = dimension< 0,-1, 2, 1, 0, 0, 0>;
    using density_of_states_d = dimension<-2,-1, 2, 0, 0, 0, 0>;
    using fermi_energy_d      = dimension< 2, 1,-2, 0, 0, 0, 0>;
    using magnetization_d     = dimension<-1, 0, 0, 1, 0, 0, 0>;
    using magnetic_suscept_d  = dimension< 0, 0, 0, 0, 0, 0, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<lattice_vector_d> angstrom{1e-10}; 
    inline constexpr quantity<lattice_vector_d> bohr_radius{5.291772109e-11};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto A_ang = angstrom;
        inline constexpr auto a0    = bohr_radius;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_12

#endif // METRON_DIMENSIONAL_SI_ISO_80000_12_HH