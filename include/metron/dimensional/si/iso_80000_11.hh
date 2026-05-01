/**
 * @file iso_80000_11.hh
 * @brief Characteristic numbers (dimensionless quantities).
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_11 ISO_80000_11
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines dimensionless characteristic numbers used in physics and engineering.
 * - Essential for fluid dynamics, heat transfer, and similarity laws.
 * 
 * REFERENCE:
 * - ISO 80000-11:2019 (Characteristic numbers)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_11_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_11_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_11
{

    /**
     * @note Derived dimension aliases (Characteristic Numbers)
     * All parameters are 0 because these are ratios.
     * @{
     */
    using dimensionless_d   = dimension<0, 0, 0, 0, 0, 0, 0>;
    using reynolds_number_d = dimensionless_d;
    using mach_number_d     = dimensionless_d;
    using froude_number_d   = dimensionless_d;
    using weber_number_d    = dimensionless_d;
    using prandtl_number_d  = dimensionless_d;
    using nusselt_number_d  = dimensionless_d;
    using lewis_number_d    = dimensionless_d;
    using peclet_number_d   = dimensionless_d;
    using alfven_number_d   = dimensionless_d;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<dimensionless_d> percent{0.01};
    inline constexpr quantity<dimensionless_d> per_mille{0.001};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto pct = percent;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_11

#endif // METRON_DIMENSIONAL_SI_ISO_80000_11_HH