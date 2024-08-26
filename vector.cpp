/**
 * @file main.cpp
 * @brief Demonstration of vector and matrix operations.
 *
 * This file is part of the matrix operations project and contains the `main` function
 * that demonstrates the functionality of the vector and matrix classes provided in the `vector.h` file.
 *
 * The operations demonstrated include:
 * - Vector addition and subtraction
 * - 2D matrix addition, subtraction, and multiplication
 * - Dot product of a vector
 * - Cosine similarity between two vectors
 *
 * @details
 * The `main.cpp` file is the entry point of the program and serves as an example
 * of how to use the `vector` and `Matrix` classes. The vector operations include
 * basic arithmetic and geometric operations, while the matrix operations demonstrate
 * basic 2D matrix arithmetic.
 *
 * The program's output can be used to verify the correctness of the implemented methods
 * and serves as a basic test for these operations.
 *
 * @version 1.0
 * @date 2024-08-26
 *
 * @author Your Name
 *
 * @see vector.h
 */

#include "vector.h"

/**
 * @brief The main function demonstrating various vector and matrix operations.
 *
 * This function performs the following operations:
 * - Addition and subtraction of two vectors.
 * - Addition, subtraction, and multiplication of 2D matrices.
 * - Calculation of the dot product of a vector.
 * - Calculation of the cosine similarity between two vectors.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
    // Vectors for addition and subtraction
    std::vector<int> firstVector = {1, 3, 6, 9};
    std::vector<int> secondVector = {1, 3, -6, 9};

    // Perform vector addition
    std::vector<int> resultant = matrix::vector::add(firstVector, secondVector);

    // Perform vector subtraction
    std::vector<int> resultantt = matrix::vector::substract(firstVector, secondVector);

    // 2D matrices for addition and subtraction
    std::vector<std::vector<int>> firstMatrix = {{1, 3, 6, 9},
                                                 {5, 9, 8, 0},
                                                 {1, 9, 7, 5}};
    std::vector<std::vector<int>> secondMatrix = {{1, 3, 6, 9},
                                                  {5, 9, 8, 0},
                                                  {1, 9, 7, 5}};

    // Perform 2D matrix addition
    matrix::Matrix::add2D(firstMatrix, secondMatrix);

    // Perform 2D matrix subtraction
    matrix::Matrix::substract2D(firstMatrix, secondMatrix);

    // 2D matrices for multiplication
    std::vector<std::vector<int>> firstMatrixForMultiplication = {{1, 3, 6, 9},
                                                                  {5, 9, 8, 0},
                                                                  {1, 9, 7, 5}};
    std::vector<std::vector<int>> secondMatrixForMultiplication = {{1, 3,  6, 9},
                                                                   {5, 9,  8, 0},
                                                                   {1, 9,  7, 5},
                                                                   {1, 18, 9, 8}};

    // Perform 2D matrix multiplication
    matrix::Matrix::multiply2D(firstMatrixForMultiplication, secondMatrixForMultiplication);

    // Vector for dot product calculation
    std::vector<int> vec1 = {1, 2, 3};

    // Calculate dot product of a vector with a zero vector (default)
    int result2 = matrix::vector::dotProduct(vec1);

    // Calculate cosine similarity between two vectors
    std::cout << matrix::vector::cosineSimilarity(firstVector, secondVector) * 100 << " %" << std::endl;

    return 0;
}
