/**
 * @file iso_80000_11.hh
 * @brief Characteristic numbers units according to ISO 80000-11.
 *
 * @defgroup METRON_CORE_UNITS_METRIC_ISO_80000_11 Characteristic numbers
 * @ingroup METRON_CORE_UNITS_METRIC
 * 
 * @details
 * PURPOSE:
 * - Defines dimensionless characteristic numbers according to ISO 80000-11.
 * - Provides standardized ratios used to describe physical systems in fluid 
 *   dynamics, heat transfer, and wave propagation.
 * - Enables similarity analysis, allowing results from scale models (e.g., 
 *   wind tunnels) to be applied to full-scale engineering structures.
 * 
 * REFERENCE:
 * - ISO 80000-11:2019 (Characteristic numbers).
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Calculations assume a floating-point precision context (double).
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 30-04-2026
 */

#ifndef ISO_80000_11_HH
#define ISO_80000_11_HH

namespace metron::core::units::metric::iso_80000_11 {

    /**
     * @name Dimensionless Scale
     * @{
     */
    inline constexpr double dimensionless = 1.0;
    /** @} */

    /**
     * @name Fluid Dynamics
     * @{
     */
    inline constexpr double reynolds_number = dimensionless;
    inline constexpr double mach_number     = dimensionless;
    inline constexpr double froude_number   = dimensionless;
    inline constexpr double euler_number    = dimensionless;
    inline constexpr double weber_number    = dimensionless;
    inline constexpr double strouhal_number = dimensionless;
    /** @} */

    /**
     * @name Heat & Mass Transfer
     * @{
     */
    inline constexpr double prandtl_number = dimensionless;
    inline constexpr double nusselt_number = dimensionless;
    inline constexpr double biot_number    = dimensionless;
    inline constexpr double fourier_number = dimensionless;
    inline constexpr double grashof_number = dimensionless;
    /** @} */

    /**
     * @name Magnetohydrodynamics
     * @{
     */
    inline constexpr double knudsen_number = dimensionless;
    inline constexpr double alfven_number  = dimensionless;
    /** @} */

} // namespace metron::core::units::metric::iso_80000_11

#endif // ISO_80000_11_HH