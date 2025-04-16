Matrix Library Project

AUTHORING:
Ilyas Rehman
UMBC CMSC313 - Spring 2025 (2:30 PM, 4/15/2025)

PURPOSE OF SOFTWARE:
This project implements a matrix math library in both C++ (object-oriented) and C (C99 procedural style). It calculates the result of a matrix expression involving scalar multiplication, matrix transposition, matrix multiplication, and addition:
D = A + (3 × B) × Cᵀ

FILES:
Matrix.h / matrix.h – Matrix structure and function declarations
Matrix.cpp / matrix.c – Function implementations
main.cpp / main.c – Main programs that compute the final matrix result

BUILD INSTRUCTIONS:
To compile and run the C++ version:
g++ -o matrix_cpp main.cpp Matrix.cpp
./matrix_cpp

To compile and run the C version:
gcc -o matrix_c main.c matrix.c
./matrix_c

TESTING METHODOLOGY:
I first solved the matrix equation on paper to understand the expected result and steps involved. Then I broke down the equation into separate functions for each operation (scaling, transposing, multiplying, and adding). After implementing the C++ version, I used it as a reference while creating the C version side-by-side, adapting the logic to structs and basic C functions. I ran both programs on the UMBC Linux servers and compared the output to my hand-calculated result to ensure accuracy. (Output screenshot is attached on Blackboard as reference.)

ADDITIONAL INFORMATION:
This project helped reinforce my understanding of basic matrix operations and their algorithmic implementations using nested loops over 2D arrays or vectors. I appreciated the flexibility of the assignment, as the open-ended structure allowed for creativity in the design and coding approach.
