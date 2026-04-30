/**
 * @file iso_80000_05.hh
 * @brief Thermo­dynamics units according to ISO 80000-5.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_5 Thermo­dynamics
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Provides standardized conversion factors for thermodynamic quantities including 
 *   temperature, heat, and entropy.
 * 
 * REFERENCE:
 * - ISO 80000-5:2019 (Thermo­dynamics).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * - This implementation focuses on thermodynamic (absolute) temperature. Offset conversions
 *   (e.g., K to °C) require specialized functions due to the non-zero origin of the Celsius scale.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 30-04-2026
 */

#ifndef ISO_80000_05_HH
#define ISO_80000_05_HH

#include "../si_base.hh"
#include "iso_80000_04.hh"

namespace metron::core::units::metric::iso_80000_5 {

    /**
     * @name Temperature Units
     * @{
     */
    inline constexpr double degree_celsius_offset = 273.15;
    /** @} */

    /**
     * @name Energy and Entropy
     * @{
     */
    inline constexpr double entropy = metron::core::units::metric::iso_80000_4::joule / metron::core::units::kelvin;
    inline constexpr double specific_entropy = metron::core::units::metric::iso_80000_4::joule / (metron::core::units::kilogram * metron::core::units::kelvin);
    inline constexpr double molar_entropy = metron::core::units::metric::iso_80000_4::joule / (metron::core::units::mole * metron::core::units::kelvin);
    /** @} */

    /**
     * @name Heat Capacity
     * @{
     */
    inline constexpr double heat_capacity = metron::core::units::metric::iso_80000_4::joule / metron::core::units::kelvin;
    inline constexpr double specific_heat_capacity = metron::core::units::metric::iso_80000_4::joule / (metron::core::units::kilogram * metron::core::units::kelvin);
    inline constexpr double molar_heat_capacity = metron::core::units::metric::iso_80000_4::joule / (metron::core::units::mole * metron::core::units::kelvin);
    /** @} */

    /**
     * @name Heat Transfer
     * @{
     */
    inline constexpr double thermal_conductivity = metron::core::units::metric::iso_80000_4::watt / (metron::core::units::meter * metron::core::units::kelvin);
    inline constexpr double thermal_resistance = metron::core::units::kelvin / metron::core::units::metric::iso_80000_4::watt;
    inline constexpr double heat_transfer_coefficient = metron::core::units::metric::iso_80000_4::watt / (metron::core::units::meter * metron::core::units::meter * metron::core::units::kelvin);
    /** @} */

    /**
     * @name Constants
     * @{
     */
    inline constexpr double boltzmann_constant = 1.380649e-23 * (metron::core::units::metric::iso_80000_4::joule / metron::core::units::kelvin);
    inline constexpr double molar_gas_constant = 8.314462618 * (metron::core::units::metric::iso_80000_4::joule / (metron::core::units::mole * metron::core::units::kelvin));
    /** @} */

} // namespace metron::core::units::metric::iso_80000_5

#endif // ISO_80000_05_HH