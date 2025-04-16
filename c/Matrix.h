#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int row;
    int col;
    double nums[10][10];
} Matrix;

void print(const Matrix m);
Matrix transpose(const Matrix m);
Matrix scalarMultiply(const Matrix m, double scalar);
Matrix add(const Matrix a, const Matrix b);
Matrix multiply(const Matrix a, const Matrix b);

#endif