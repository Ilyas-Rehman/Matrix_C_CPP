#include "Matrix.h"
#include <stdio.h>

// Prints the matrix to standard output in row-column format.
void print(const Matrix m) {
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
            printf("%.2f ", m.nums[i][j]);
        }
        printf("\n");
    }
}
// Returns the transpose of the input matrix (flips rows and columns).
Matrix transpose(const Matrix m) {
    Matrix result = {m.col, m.row};
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
            result.nums[j][i] = m.nums[i][j];
        }
    }
    return result;
}
// Multiplies every element of the matrix by a scalar value.
Matrix scalarMultiply(const Matrix m, double scalar) {
    Matrix result = m;
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
            result.nums[i][j] *= scalar;
        }
    }
    return result;
}

/// Returns the element-wise sum of two matrices of the same dimensions.
Matrix add(const Matrix a, const Matrix b) {
    Matrix result = {a.row, a.col};
    for (int i = 0; i < a.row; i++) {
        for (int j = 0; j < a.col; j++) {
            result.nums[i][j] = a.nums[i][j] + b.nums[i][j];
        }
    }
    return result;
}

/// Performs matrix multiplication: result = a × b.
/// Assumes a.col == b.row and sets result dimensions to a.row × b.col.
Matrix multiply(const Matrix a, const Matrix b) {
    Matrix result = {a.row, b.col};
    for (int i = 0; i < a.row; i++) {
        for (int j = 0; j < b.col; j++) {
            result.nums[i][j] = 0;
            for (int k = 0; k < a.col; k++) {
                result.nums[i][j] += a.nums[i][k] * b.nums[k][j];
            }
        }
    }
    return result;
}