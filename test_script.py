import numpy
import linalg_core


def test_matrix_multiplication():
    a = numpy.array([[1, 2], [3, 4]])
    b = numpy.array([5, 6])

    result = linalg_core.LinearAlgebra.multiplyMatrixByVector(a, b)

    expected = numpy.dot(a, b)

    assert numpy.allclose(result, expected), "Matrix multiplication failed!"


if __name__ == "__main__":
    test_matrix_multiplication()
    print("All tests passed!")
