
#include "vector.h"

int main() {
    std::vector<int> firstVector = {1, 3, 6, 9};
    std::vector<int> secondVector = {1, 3, -6, 9};
    std::vector<int> resultant = matrix::vector::add(firstVector, secondVector);
    std::vector<int> resultantt = matrix::vector::substract(firstVector, secondVector);


    std::vector<std::vector<int>> firstMatrix = {{1, 3, 6, 9},
                                                 {5, 9, 8, 0},
                                                 {1, 9, 7, 5}};
    std::vector<std::vector<int>> secondMatrix = {{1, 3, 6, 9},
                                                  {5, 9, 8, 0},
                                                  {1, 9, 7, 5}};
    matrix::add2D(firstMatrix, secondMatrix);
    matrix::substract2D(firstMatrix, secondMatrix);
    std::vector<std::vector<int>> firstMatrixForMultiplication = {{1, 3, 6, 9},
                                                                  {5, 9, 8, 0},
                                                                  {1, 9, 7, 5}};
    std::vector<std::vector<int>> secondMatrixForMultiplication = {{1, 3,  6, 9},
                                                                   {5, 9,  8, 0},
                                                                   {1, 9,  7, 5},
                                                                   {1, 18, 9, 8}};
    matrix::multiply2D(firstMatrixForMultiplication, secondMatrixForMultiplication);
}