/**
 * @file mass.hh
 * @brief Definition of non-metric units of mass.
 * 
 * @defgroup METRON_CORE_UNITS_NONMETRIC_MASS Non-Metric Mass
 * @ingroup METRON_CORE_UNITS_NONMETRIC
 * 
 * @details
 * PURPOSE:
 * - Provides standardized conversion factors for Imperial and US Customary mass units
 *   to the SI kilogram.
 * 
 * REFERENCE:
 * - International Yard and Pound Agreement (1959).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations are based on the International Pound definition.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 28-04-2026
 */

#ifndef MASS_HH
#define MASS_HH

#include "../si_base.hh"
#include "../constants.hh"
#include "length.hh"
#include "../metric/iso_80000_04.hh"

namespace metron::core::units::non_metric::mass
{

    /**
     * @name Avoirdupois Mass Units
     * @{
     */
    inline constexpr double pound = 0.45359237 * metron::core::units::kilogram;
    inline constexpr double grain = pound / 7000.0;
    inline constexpr double drachm = pound / 256.0;
    inline constexpr double ounce = pound / 16.0;
    inline constexpr double stone = 14.0 * pound;
    inline constexpr double quarter = 28.0 * pound;
    /** @} */

    /**
     * @name Large Units (UK and US differences)
     * @{
     */
    inline constexpr double hundredweight_uk = 112.0 * pound;
    inline constexpr double hundredweight_us = 100.0 * pound;
    inline constexpr double ton_uk = 2240.0 * pound;
    inline constexpr double ton_us = 2000.0 * pound;
    /** @} */

    /** 
     * @name Engineering Units 
     * @{ 
     */
    inline constexpr double slug = (metron::core::units::metric::iso_80000_4::standard_gravity / (metron::core::units::non_metric::length::foot / metron::core::units::meter)) * pound;
    /** @} */

} // namespace metron::core::units::non_metric::mass

#endif // MASS_HH