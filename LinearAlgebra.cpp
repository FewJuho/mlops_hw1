#include "LinearAlgebra.h"

std::vector<double> LinearAlgebra::multiplyMatrixByVector(const std::vector<std::vector<double>>& matrix, const std::vector<double>& vec) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    if (cols != vec.size()) {
        throw std::invalid_argument("Number of columns in the matrix must be equal to the size of the vector.");
    }

    std::vector<double> result(rows, 0.0);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i] += matrix[i][j] * vec[j];
        }
    }

    return result;
}
