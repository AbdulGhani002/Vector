# Matrix Operations Project

## Overview

This project provides a set of classes and methods for performing various vector and matrix operations. It includes functionality for vector arithmetic, dot products, magnitudes, cosine similarity, and matrix operations such as addition, subtraction, and multiplication.

## Classes and Methods

### `vector` Class

The `vector` class offers the following static methods for vector operations:

- **Addition**: `static std::vector<int> add(std::vector<int> firstVector, std::vector<int> secondVector)`
  - Adds two vectors element-wise.

- **Subtraction**: `static std::vector<int> substract(std::vector<int> firstVector, std::vector<int> secondVector)`
  - Subtracts the second vector from the first vector element-wise.

- **Scaling**: `static std::vector<int> scale(std::vector<int> vector, int scale)`
  - Scales a vector by a given factor.

- **Dot Product**: `static int dotProduct(const std::vector<int> &firstVector, const std::vector<int> &secondVector = std::vector<int>())`
  - Computes the dot product of two vectors.

- **Magnitude**: `static double magnitude(const std::vector<int> &firstVector, const std::vector<int> &secondVector = std::vector<int>())`
  - Computes the magnitude of the difference between two vectors.

- **Cosine Similarity**: `static double cosineSimilarity(const std::vector<int> &firstVector, const std::vector<int> &secondVector)`
  - Computes the cosine similarity between two vectors.

### `Matrix` Class

The `Matrix` class provides methods for 2D matrix operations:

- **Addition**: `static std::vector<std::vector<int>> add2D(const std::vector<std::vector<int>> &firstMatrix, const std::vector<std::vector<int>> &secondMatrix)`
  - Adds two 2D matrices element-wise.

- **Subtraction**: `static std::vector<std::vector<int>> substract2D(const std::vector<std::vector<int>> &firstMatrix, const std::vector<std::vector<int>> &secondMatrix)`
  - Subtracts the second 2D matrix from the first 2D matrix element-wise.

- **Multiplication**: `static std::vector<std::vector<int>> multiply2D(const std::vector<std::vector<int>> &firstMatrix, const std::vector<std::vector<int>> &secondMatrix)`
  - Multiplies two 2D matrices.

## Example Usage

The following example demonstrates the usage of vector and matrix operations:

```cpp
#include "vector.h"

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
```
Building and Running
Build:

## Compile the program using a C++ compiler. For example:

```
g++ -o matrix_operations main.cpp
```

## Execute the compiled program:

```
./matrix_operations
```

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Author

Abdul Ghani

## Acknowledgements

Doxygen for generating the documentation.
C++ Standard Library for standard containers and functions.

Feel free to adjust the file paths, compiler commands, and any other details specific to
