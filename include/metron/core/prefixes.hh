/**
 * @file prefixes.hh
 * @brief Definition of SI unit prefixes.
 * 
 * @defgroup METRON_CORE_PREFIXES Prefixes
 * @ingroup METRON_CORE
 * 
 * @details
 * PURPOSE:
 * - The module defines SI decimal multiples and submultiples, allowing scaling of base
 *   and derived units.
 * 
 * REFERENCE:
 * - ISO 80000-1:2022 (Quantities and units - Part 1: General).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Prefixes are defined as constexpr double values.
 * - Limited to standard SI range (quecto to quetta).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 25-04-2026
 */

 #ifndef PREFIXES_HH
 #define PREFIXES_HH

 namespace metron::core::prefixes
 {

    /**
     * @name Decimal multiples of SI units
     * @{
     */
    inline constexpr double quetta = 1e30;
    inline constexpr double ronna  = 1e27;
    inline constexpr double yotta  = 1e24;
    inline constexpr double zetta  = 1e21;
    inline constexpr double exa    = 1e18;
    inline constexpr double peta   = 1e15;
    inline constexpr double tera   = 1e12;
    inline constexpr double giga   = 1e9;
    inline constexpr double mega   = 1e6;
    inline constexpr double kilo   = 1e3;
    inline constexpr double hecto  = 1e2;
    inline constexpr double deca   = 1e1;
    /** @} */

    /**
     * @name Decimal submultiples of SI units
     * @{
     */
    inline constexpr double deci   = 1e-1;
    inline constexpr double centi  = 1e-2;
    inline constexpr double milli  = 1e-3;
    inline constexpr double micro  = 1e-6;
    inline constexpr double nano   = 1e-9;
    inline constexpr double pico   = 1e-12;
    inline constexpr double femto  = 1e-15;
    inline constexpr double atto   = 1e-18;
    inline constexpr double zepto  = 1e-21;
    inline constexpr double yocto  = 1e-24;
    inline constexpr double ronto  = 1e-27;
    inline constexpr double quecto = 1e-30;
    /** @} */

 } // namespace metron::core::prefixes

 #endif // PREFIXES_HH