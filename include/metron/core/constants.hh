/**
 * @file constants.hh
 * @brief Fundamental physical and mathematical constants.
 * 
 * @defgroup METRON_CORE_CONSTANTS Constants
 * @ingroup METRON_CORE
 * 
 * @details
 * PURPOSE:
 * - Provides irreducible mathematical constants used across all physical domains.
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
 * CREATED: 30-04-2026
 */

#ifndef METRON_CORE_CONSTANTS_HH
#define METRON_CORE_CONSTANTS_HH

#include "si_base.hh"

namespace metron::core::constants
{
    /**
     * @name Mathematical Constants
     * @{
     */
    inline constexpr double pi     = 3.14159265358979323846;
    inline constexpr double e      = 2.71828182845904523536;
    inline constexpr double inv_pi = 1.0 / pi;
    inline constexpr double tau    = 2.0 * pi;
    /** @} */

    /**
     * @name Algebraic Constants
     * @{
     */
    inline constexpr double sqrt2 = 1.41421356237309504880;
    inline constexpr double sqrt3 = 1.73205080756887729352;
    inline constexpr double phi   = 1.61803398874989484820;
    /** @} */

    /**
     * @name Conversion Factor Bases
     * @{
     */
    inline constexpr double ln2    = 0.69314718055994530941;
    inline constexpr double ln10   = 2.30258509299404568401;
    inline constexpr double log2e  = 1.44269504088896340736;
    inline constexpr double log10e = 0.43429448190325182765;

} // namespace metron::core::constants

#endif // METRON_CORE_CONSTANTS_HH