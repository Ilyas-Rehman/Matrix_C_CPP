#include "Matrix.h"
#include <stdio.h>

int main() {
    Matrix A = {2, 2, {{6, 4}, {8, 3}}};
    Matrix B = {2, 3, {{1, 2, 3}, {4, 5, 6}}};
    Matrix C = {2, 3, {{2, 4, 6}, {1, 3, 5}}};

    Matrix B_s = scalarMultiply(B, 3);
    Matrix C_t = transpose(C);
    Matrix result = add(A, multiply(B_s, C_t));

    printf("Matrix D:\n");
    print(result);

    return 0;
}