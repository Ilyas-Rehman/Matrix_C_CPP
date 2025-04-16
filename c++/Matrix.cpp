#include "Matrix.h"

#include <iostream>
using namespace std;

// Constructs an empty matrix of given dimensions, initialized to zeros.
Matrix::Matrix(int r, int c) {
    row = r;
    col = c;
    nums.resize(row, vector<double> (c, 0));
}
// Constructs a matrix using a 2D vector of values.
Matrix::Matrix(vector<vector<double>> input) {
    nums = input;
    row = input.size();
    col = input[0].size();
}
// Prints the matrix to standard output in row-column format.
void Matrix::print() const {
    for (const vector<double>& row : nums) {
        for (double value : row) {
            cout << value << " ";
        }
        cout << "\n";
    }
}
// Returns the transpose of the matrix (flips rows and columns).
Matrix Matrix::transpose() const {
    vector<vector<double>> output(col, vector<double>(row));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            output[j][i] = nums[i][j];
        }
    }
    return Matrix(output);
}
// Adds two matrices element-wise. Assumes dimensions match.
Matrix Matrix::operator+(const Matrix& secondMatrix) const {
    vector<vector<double>> output(row, vector<double>(col));
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            output[i][j] = nums[i][j] + secondMatrix.nums[i][j];
        }
    }
    return Matrix(output);
}

/// Performs matrix multiplication: this × secondMatrix.
/// Assumes this->col == secondMatrix.row.
Matrix Matrix::operator*(const Matrix& secondMatrix) const {
    vector<vector<double>> output(row, vector<double>(secondMatrix.col, 0));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < secondMatrix.col; j++) {
            for (int k = 0; k < col; k++) {
                output[i][j] += nums[i][k] * secondMatrix.nums[k][j];
            }
        }
    }
    return Matrix(output);
}

// Multiplies every element in the matrix by a scalar value.
Matrix Matrix::operator*(double scalar) const {
    vector<vector<double>> result = nums;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] *= scalar;
        }
    }
    return Matrix(result);
}