/**
 * @file si_base.hh
 * @brief Definition of SI base units.
 * 
 * @defgroup METRON_CORE_UNITS SI Base Units
 * @ingroup METRON_CORE
 * 
 * @details
 * PURPOSE:
 * - This module defines the seven fundamental SI base units which form the foundation
 *   for all derived units in the Metron library.
 * 
 * REFERENCE:
 * - ISO 80000-1:2022 (Quantities and units - Part 1: General).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Base units are defined as 1.0 to serve as a reference for derived units and prefixes.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 26-04-2026
 */

#ifndef SI_BASE_HH
#define SI_BASE_HH

namespace metron::core::units
{

    /**
     * @name SI Base Units
     * @{
     */
    inline constexpr double meter    = 1.0;
    inline constexpr double kilogram = 1.0;
    inline constexpr double second   = 1.0;
    inline constexpr double ampere   = 1.0;
    inline constexpr double kelvin   = 1.0;
    inline constexpr double mole     = 1.0;
    inline constexpr double candela  = 1.0;
    /** @} */

} // namespace metron::core::units

#endif // SI_BASE_HH