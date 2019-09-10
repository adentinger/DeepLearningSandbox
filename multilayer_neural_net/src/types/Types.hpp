#ifndef _TYPES_TYPES_HPP_
#define _TYPES_TYPES_HPP_

#include <stdint.h>

#include <Eigen/Dense>

/**
 * A column vector.
 * 
 * Use Eigen::Dynamic for dynamic column count.
 */
template <int dim>
using Vector = Eigen::Matrix<double, dim, 1>;

/**
 * A line vector.
 * 
 * Use Eigen::Dynamic for dynamic column count.
 */
template <int dim>
using LVector = Eigen::Matrix<double, 1, dim>;

#endif // !_TYPES_TYPES_HPP_
