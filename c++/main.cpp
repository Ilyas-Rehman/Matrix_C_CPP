#include "Matrix.h"

#include <iostream>
using namespace std;

int main() {
    Matrix A({{6, 4}, {8, 3}});
    Matrix B({{1, 2, 3}, {4, 5, 6}});
    Matrix C({{2, 4, 6}, {1, 3, 5}});

    Matrix B_s = B * 3;
    Matrix C_t = C.transpose();
    Matrix result = A + (B_s * C_t);

    cout << "Matrix D:" << endl;
    result.print();

    return 0;
}