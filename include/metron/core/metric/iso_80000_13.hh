/**
 * @file iso_80000_13.hh
 * @brief Information science and technology units according to ISO 80000-13.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_13 Information science and technology
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Defines quantities and units for information technology according to ISO 80000-13:2025.
 * - Standardizes storage capacity, information entropy, and data transmission rates.
 * - Bridges the gap between hardware capacity (bits/bytes) and theoretical information (shannons).
 * 
 * REFERENCE:
 * - ISO 80000-13:2019 (Information science and technology).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 30-04-2026
 */

#ifndef ISO_80000_13_HH
#define ISO_80000_13_HH

#include "../si_base.hh"
#include "../prefixes.hh"

namespace metron::core::units::metric::iso_80000_13 {

    /**
     * @name Basic Information Units
     * @{
     */
    inline constexpr double bit   = 1.0;
    inline constexpr double byte  = 8.0 * bit;
    inline constexpr double octet = 8.0 * bit;
    /** @} */

    /**
     * @name Information Entropy Units
     * @{
     */
    inline constexpr double shannon = bit;
    inline constexpr double hartley = 3.32192809488736 * bit;
    inline constexpr double nat     = 1.44269504088896 * bit;
    /** @} */

    /**
     * @name Transmission Rates
     * @{
     */
    inline constexpr double bit_per_second  = bit / metron::core::units::second;
    inline constexpr double byte_per_second = byte / metron::core::units::second;
    inline constexpr double baud            = 1.0 / metron::core::units::second;
    /** @} */

    /**
     * @name Quantum and Computational Units
     * @{
     */
    inline constexpr double qubit = 1.0;
    inline constexpr double flop  = 1.0;
    /** @} */

    /**
     * @name Binary Multiples of Byte
     * @{
     */
    inline constexpr double kibibyte  = 1024.0 * byte;
    inline constexpr double mebibyte  = 1024.0 * kibibyte;
    inline constexpr double gibibyte  = 1024.0 * mebibyte;
    inline constexpr double tebibyte  = 1024.0 * gibibyte;
    inline constexpr double pebibyte  = 1024.0 * tebibyte;
    inline constexpr double exbibyte  = 1024.0 * pebibyte;
    inline constexpr double zebibyte  = 1024.0 * exbibyte;
    inline constexpr double yobibyte  = 1024.0 * zebibyte;
    inline constexpr double robibyte  = 1024.0 * yobibyte;
    inline constexpr double quebibyte = 1024.0 * robibyte;
    /** @} */

    /**
     * @name Decimal Multiples of Byte
     * @{
     */
    inline constexpr double kilobyte = metron::core::prefixes::kilo * byte;
    inline constexpr double megabyte = metron::core::prefixes::mega * byte;
    inline constexpr double gigabyte = metron::core::prefixes::giga * byte;
    inline constexpr double terabyte = metron::core::prefixes::tera * byte;
    inline constexpr double petabyte = metron::core::prefixes::peta * byte;
    inline constexpr double exabyte = metron::core::prefixes::exa * byte;
    inline constexpr double zettabyte = metron::core::prefixes::zetta * byte;
    inline constexpr double yottabyte = metron::core::prefixes::yotta * byte;
    inline constexpr double ronnabyte  = metron::core::prefixes::ronna * byte;
    inline constexpr double quettabyte = metron::core::prefixes::quetta * byte;
    /** @} */

} // namespace metron::core::units::metric::iso_80000_13

#endif // ISO_80000_13_HH