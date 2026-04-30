/**
 * @file iso_80000_12.hh
 * @brief Condensed matter physics units according to ISO 80000-12.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_12 Condensed matter physics
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Defines units and quantities for condensed matter physics according to ISO 80000-12.
 * - Establishes standards for describing crystal lattices, electronic bands, 
 *   and transport phenomena in solids.
 * - Provides units for reciprocal space, density of states, and superconductivity.
 * 
 * REFERENCE:
 * - ISO 80000-12:2019 (Condensed matter physics).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 30-04-2026
 */

#ifndef ISO_80000_12_HH
#define ISO_80000_12_HH

#include "../si_base.hh"
#include "iso_80000_04.hh"
#include "iso_80000_06.hh"
#include "iso_80000_10.hh"

namespace metron::core::units::metric::iso_80000_12 {

    /**
     * @name Geometry and Reciprocal Space
     * @{
     */
    inline constexpr double reciprocal_meter      = 1.0 / metron::core::units::meter;
    inline constexpr double wave_vector_magnitude = 1.0 / metron::core::units::meter;
    inline constexpr double lattice_parameter     = metron::core::units::meter;
    /** @} */

    /**
     * @name Transport and Electron Properties
     * @{
     */
    inline constexpr double mobility             = (metron::core::units::meter * metron::core::units::meter) / (metron::core::units::metric::iso_80000_6::volt * metron::core::units::second);
    inline constexpr double density_of_states    = 1.0 / (metron::core::units::metric::iso_80000_4::joule * (metron::core::units::meter * metron::core::units::meter * metron::core::units::meter));
    inline constexpr double density_of_states_ev = 1.0 / (metron::core::units::metric::iso_80000_10::electronvolt * (metron::core::units::meter * metron::core::units::meter * metron::core::units::meter));
    inline constexpr double seebeck_coefficient  = metron::core::units::metric::iso_80000_6::volt / metron::core::units::kelvin;
    inline constexpr double lorenz_number        = (metron::core::units::metric::iso_80000_4::watt * metron::core::units::metric::iso_80000_6::ohm) / (metron::core::units::kelvin * metron::core::units::kelvin);
    /** @} */

    /**
     * @name Superconductivity and Quantum Phenomena
     * @{
     */
    inline constexpr double flux_quantum          = metron::core::units::metric::iso_80000_10::planck_constant / (2.0 * metron::core::units::metric::iso_80000_6::elementary_charge);
    inline constexpr double hall_coefficient      = (metron::core::units::meter * metron::core::units::meter * metron::core::units::meter) / metron::core::units::metric::iso_80000_6::coulomb;
    inline constexpr double josephson_constant    = (2.0 * metron::core::units::metric::iso_80000_6::elementary_charge) / metron::core::units::metric::iso_80000_10::planck_constant;
    inline constexpr double magnetic_flux_quantum = flux_quantum;
    inline constexpr double penetration_depth     = metron::core::units::meter;
    /** @} */

} // namespace metron::core::units::metric::iso_80000_12

#endif // ISO_80000_12_HH