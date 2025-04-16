#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
using namespace std;

class Matrix {
    private:
    vector<vector<double>> nums;
    int row, col;

    public:
    Matrix(int rows, int cols);
    Matrix(vector<vector<double>> data);
    void print() const;
    Matrix transpose() const;
    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(double scalar) const;
};

#endif

