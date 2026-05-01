/**
 * @file dimension.hh
 * @brief Represents the dimensions of a physical quantity.
 * 
 * @defgroup METRON_DIMENSIONAL Dimension
 * @ingroup METRON_DIMENSIONAL
 * 
 * @details
 * PURPOSE:
 * - Provides a compile-time representation of the seven SI base dimensions.
 * - Enables dimensional analysis and type-safety for physical computations.
 * 
 * REFERENCE:
 * - (TBD)
 * 
 * ASSUMPTIONS AND LIMITATIONS:
 * - Limited to the seven fundamental SI base units.
 * 
 * PROGRAMMERS:
 * - kamil-klawi
 * 
 * CREATED: 1-05-2026
 */


#ifndef METRON_DIMENSIONAL_DIMENSION_HH
#define METRON_DIMENSIONAL_DIMENSION_HH

#include <concepts>

namespace metron::dimensional {

    /**
     * @note Represents the dimensions of a physical quantity.
     * L: Length,
     * M: Mass,
     * T: Time,
     * I: Electric Current,
     * Th: Thermodynamic Temperature,
     * N: Amount of substance,
     * J: Luminous intensity.
     * @{
     */
    template<int L, int M, int T, int I, int Th, int N, int J>
    struct dimension {
        static constexpr int length                    = L;
        static constexpr int mass                      = M;
        static constexpr int time                      = T;
        static constexpr int electric_current          = I;
        static constexpr int thermodynamic_temperature = Th;
        static constexpr int amount_of_substance       = N;
        static constexpr int luminous_intensity        = J;
    };
    /** @} */

    /**
     * @note Verifies if a type provides the required SI base dimension exponents.
     * @{
     */
    template <typename T>
    concept IsDimension = requires {
        { T::length } -> std::convertible_to<int>;
        { T::mass } -> std::convertible_to<int>;
        { T::time } -> std::convertible_to<int>;
        { T::electric_current } -> std::convertible_to<int>;
        { T::thermodynamic_temperature } -> std::convertible_to<int>;
        { T::amount_of_substance } -> std::convertible_to<int>;
        { T::luminous_intensity } -> std::convertible_to<int>;
    };
    /** @} */

    /**
     * @note Helper for dimension addition.
     * @{
     */
    template<IsDimension D1, IsDimension D2>
    using dimension_add = dimension<
        D1::length + D2::length,
        D1::mass + D2::mass,
        D1::time + D2::time,
        D1::electric_current + D2::electric_current,
        D1::thermodynamic_temperature + D2::thermodynamic_temperature,
        D1::amount_of_substance + D2::amount_of_substance,
        D1::luminous_intensity + D2::luminous_intensity
    >;
    /** @} */

    /**
     * @note Helper for dimension subtraction.
     * @{
     */
    template<IsDimension D1, IsDimension D2>
    using dimension_sub = dimension<
        D1::length - D2::length,
        D1::mass - D2::mass,
        D1::time - D2::time,
        D1::electric_current - D2::electric_current,
        D1::thermodynamic_temperature - D2::thermodynamic_temperature,
        D1::amount_of_substance - D2::amount_of_substance,
        D1::luminous_intensity - D2::luminous_intensity
    >;
    /** @} */

} // namespace metron::dimensional

#endif // METRON_DIMENSIONAL_DIMENSION_HH