/**
 * @file quantity.hh
 * @brief Value container with compile-time dimensional analysis.
 * 
 * @defgroup METRON_DIMENSIONAL Quantity
 * @ingroup METRON_DIMENSIONAL
 * 
 * @details
 * PURPOSE:
 * - Provides a type-safe wrapper for numerical values associated with physical dimensions.
 * - Enforces dimensional consistency during arithmetic operations at compile-time.
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


#ifndef METRON_DIMENSIONAL_QUANTITY_HH
#define METRON_DIMENSIONAL_QUANTITY_HH

#include "dimension.hh"

namespace metron::dimensional {

    /**
     * @note A quantity with a value and a dimension.
     * @{
     */
    template<IsDimension Dim, typename T = double>
    class quantity
    {
        public:
            using dimension_type = Dim;
            using value_type = T;

            explicit constexpr quantity(T val) : value_(val) {}

            constexpr T value() const
            {
                return value_;
            }

            constexpr quantity operator+(const quantity& other) const
            {
                return quantity(value_ + other.value_);
            }

            constexpr quantity operator-(const quantity& other) const
            {
                return quantity(value_ - other.value_);
            }

            template<IsDimension OtherDim>
            constexpr auto operator*(const quantity<OtherDim, T>& other) const
            {
                using ResDim = dimension_add<Dim, OtherDim>;
                return quantity<ResDim, T>(value_ * other.value());
            }

            template<IsDimension OtherDim>
            constexpr auto operator/(const quantity<OtherDim, T>& other) const
            {
                using ResDim = dimension_sub<Dim, OtherDim>;
                return quantity<ResDim, T>(value_ / other.value());
            }

            constexpr quantity operator+() const
            {
                return *this;
            }

            constexpr quantity operator-() const
            {
                return quantity(-value_);
            }

        private:
            T value_;
    };
    /** @} */

    template<IsDimension Dim, typename T>
    constexpr auto operator*(const T scalar, const quantity<Dim, T>& q) 
    {
        return quantity<Dim, T>(scalar * q.value());
    }

    template<IsDimension Dim, typename T>
    constexpr auto operator*(const quantity<Dim, T>& q, const T scalar) 
    {
        return quantity<Dim, T>(q.value() * scalar);
    }

    template<IsDimension Dim, typename T>
    constexpr auto operator/(const quantity<Dim, T>& q, const T scalar) 
    {
        return quantity<Dim, T>(q.value() / scalar);
    }

} // namespace metron::dimensional

#endif // METRON_DIMENSIONAL_QUANTITY_HH