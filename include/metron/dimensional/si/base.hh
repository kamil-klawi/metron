/**
 * @file base.hh
 * @brief Definitions of the seven SI base dimensions and their primary units.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_BASE Base
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines the seven fundamental SI base dimensions.
 * - Provides standardized unit constants for physical calculations.
 * 
 * REFERENCE:
 * - (TBD)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_BASE_HH
#define METRON_DIMENSIONAL_SI_BASE_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si
{

    /**
     * @note Base dimension aliases
     * <L, M, T, I, Th, N, J>
     * @{
     */
    using length_d      = dimension<1, 0, 0, 0, 0, 0, 0>;
    using mass_d        = dimension<0, 1, 0, 0, 0, 0, 0>;
    using time_d        = dimension<0, 0, 1, 0, 0, 0, 0>;
    using current_d     = dimension<0, 0, 0, 1, 0, 0, 0>;
    using temperature_d = dimension<0, 0, 0, 0, 1, 0, 0>;
    using amount_d      = dimension<0, 0, 0, 0, 0, 1, 0>;
    using luminous_d    = dimension<0, 0, 0, 0, 0, 0, 1>;
    /** @} */

    /**
     * @note Base unit constants
     * @{
     */
    inline constexpr quantity<length_d>      meter{1.0};
    inline constexpr quantity<mass_d>        kilogram{1.0};
    inline constexpr quantity<time_d>        second{1.0};
    inline constexpr quantity<current_d>     ampere{1.0};
    inline constexpr quantity<temperature_d> kelvin{1.0};
    inline constexpr quantity<amount_d>      mole{1.0};
    inline constexpr quantity<luminous_d>    candela{1.0};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto m   = meter;
        inline constexpr auto kg  = kilogram;
        inline constexpr auto s   = second;
        inline constexpr auto A   = ampere;
        inline constexpr auto K   = kelvin;
        inline constexpr auto mol = mole;
        inline constexpr auto cd  = candela;
    }
    /** @} */

} // namespace metron::dimensional::si

#endif // METRON_DIMENSIONAL_SI_BASE_HH