/**
 * @file iso_80000_6.hh
 * @brief Quantities and units for Electromagnetism.
 * 
 * @defgroup METRON_DIMENSIONAL_SI_ISO_80000_6 ISO_80000_6
 * @ingroup METRON_DIMENSIONAL_SI
 * 
 * @details
 * PURPOSE:
 * - Defines electrical and magnetic quantities.
 * - Provides standardized units for circuit analysis and field theory.
 * 
 * REFERENCE:
 * - ISO 80000-6:2019 (Electro­magnetism)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - (TBD)
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */

#ifndef METRON_DIMENSIONAL_SI_ISO_80000_6_HH
#define METRON_DIMENSIONAL_SI_ISO_80000_6_HH

#include "dimension.hh"
#include "quantity.hh"

namespace metron::dimensional::si::iso_80000_6
{

    /**
     * @note Derived dimension aliases (Electromagnetism)
     * electric_charge_d (A*s)
     * voltage_d (W/A)
     * resistance_d (V/A)
     * capacitance_d (C/V)
     * inductance_d (Wb/A)
     * magnetic_flux_d (V*s)
     * magnetic_field_b_d (Wb/m^2)
     * conductance_d (1/Ohm)
     * @{
     */
    using electric_charge_d  = dimension< 0, 0,  1, 1, 0, 0, 0>;
    using voltage_d          = dimension< 2, 1, -3, -1, 0, 0, 0>;
    using resistance_d       = dimension< 2, 1, -3, -2, 0, 0, 0>;
    using capacitance_d      = dimension<-2,-1,  4, 2, 0, 0, 0>;
    using inductance_d       = dimension< 2, 1, -2, -2, 0, 0, 0>;
    using magnetic_flux_d    = dimension< 2, 1, -2, -1, 0, 0, 0>;
    using magnetic_field_b_d = dimension< 0, 1, -2, -1, 0, 0, 0>;
    using conductance_d      = dimension<-2,-1,  3, 2, 0, 0, 0>;
    /** @} */

    /**
     * @note Unit constants
     * @{
     */
    inline constexpr quantity<electric_charge_d>  coulomb{1.0};
    inline constexpr quantity<voltage_d>          volt{1.0};
    inline constexpr quantity<resistance_d>       ohm{1.0};
    inline constexpr quantity<capacitance_d>      farad{1.0};
    inline constexpr quantity<inductance_d>       henry{1.0};
    inline constexpr quantity<magnetic_flux_d>    weber{1.0};
    inline constexpr quantity<magnetic_field_b_d> tesla{1.0};
    inline constexpr quantity<conductance_d>      siemens{1.0};
    /** @} */

    /**
     * @note Common abbreviations
     * @{
     */
    namespace abbreviations {
        inline constexpr auto C  = coulomb;
        inline constexpr auto V  = volt;
        inline constexpr auto R  = ohm;
        inline constexpr auto F  = farad;
        inline constexpr auto H  = henry;
        inline constexpr auto Wb = weber;
        inline constexpr auto T  = tesla;
        inline constexpr auto S  = siemens;
    }
    /** @} */

} // namespace metron::dimensional::si::iso_80000_6

#endif // METRON_DIMENSIONAL_SI_ISO_80000_6_HH