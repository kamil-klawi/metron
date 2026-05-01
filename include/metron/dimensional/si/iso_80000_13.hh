/**
 * @file iso_80000_13.hh
 * @brief Quantities and units for Information Science and Technology.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_13 ISO_80000_13
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines units for information storage and transmission.
 * - Handles prefix standards for binary vs decimal.
 * 
 * REFERENCE:
 * - ISO 80000-13:2025 (Information science and technology)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_13_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_13_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_13
{

    /**
     * @note Derived dimension aliases (Information Science)
     * storage_capacity_d (bit)
     * throughput_d (bit/s)
     * modulation_rate_d (1/s)
     * entropy_stream_d (Sh/s)
     * @{
     */
    using storage_capacity_d = dimension<0, 0, 0, 0, 0, 0, 0>;
    using throughput_d       = dimension<0, 0, -1, 0, 0, 0, 0>;
    using modulation_rate_d  = dimension<0, 0, -1, 0, 0, 0, 0>;
    using entropy_stream_d   = dimension<0, 0, -1, 0, 0, 0, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<storage_capacity_d> bit{1.0};
    inline constexpr quantity<storage_capacity_d> byte{8.0 * bit};
    inline constexpr quantity<storage_capacity_d> octet{8.0 * bit};
    inline constexpr quantity<throughput_d>       bit_per_second{1.0};
    inline constexpr quantity<modulation_rate_d>  baud{1.0};
    /** @} */

    /**
     * @note Binary Multiples of Byte
     * @{
     */
    inline constexpr auto kibibyte  = 1024.0 * byte;
    inline constexpr auto mebibyte  = 1024.0 * kibibyte;
    inline constexpr auto gibibyte  = 1024.0 * mebibyte;
    inline constexpr auto tebibyte  = 1024.0 * gibibyte;
    inline constexpr auto pebibyte  = 1024.0 * tebibyte;
    inline constexpr auto exbibyte  = 1024.0 * pebibyte;
    inline constexpr auto zebibyte  = 1024.0 * exbibyte;
    inline constexpr auto yobibyte  = 1024.0 * zebibyte;
    inline constexpr auto robibyte  = 1024.0 * yobibyte;
    inline constexpr auto quebibyte = 1024.0 * robibyte;
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto b   = bit;
        inline constexpr auto B   = byte;
        inline constexpr auto bps = bit_per_second;
        inline constexpr auto Bd  = baud;
        inline constexpr auto KiB = kibibyte;
        inline constexpr auto MiB = mebibyte;
        inline constexpr auto GiB = gibibyte;
        inline constexpr auto TiB = tebibyte;
        inline constexpr auto PiB = pebibyte;
        inline constexpr auto EiB = exbibyte;
        inline constexpr auto ZiB = zebibyte;
        inline constexpr auto YiB = yobibyte;
        inline constexpr auto RiB = robibyte;
        inline constexpr auto QiB = quebibyte;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_13

#endif // METRON_DIMENSIONAL_SI_ISO_80000_13_HH