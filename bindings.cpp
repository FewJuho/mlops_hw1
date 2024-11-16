#include "LinearAlgebra.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(linalg_core, m) {
    m.doc() = R"doc(
        Python bindings for LinearAlgebra library
    )doc";

    py::class_<LinearAlgebra>(m, "LinearAlgebra")
        .def_static("multiplyMatrixByVector", &LinearAlgebra::multiplyMatrixByVector, R"doc(
            Multiply a matrix by a vector.

            Parameters:
              matrix : list of list of float
                      The matrix to be multiplied.
              vec : list of float
                    The vector to be multiplied.

            Returns:
              list of float
                  The resulting vector after multiplication.
        )doc");
}
