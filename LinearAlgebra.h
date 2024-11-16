#ifndef LINEAR_ALGEBRA_H
#define LINEAR_ALGEBRA_H

#include <vector>
#include <stdexcept>

class LinearAlgebra {
public:
    static std::vector<double> multiplyMatrixByVector(const std::vector<std::vector<double>>& matrix, const std::vector<double>& vec);
};

#endif // LINEAR_ALGEBRA_H
