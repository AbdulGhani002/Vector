

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <utility>
#include<vector>
#include<iostream>

namespace matrix {


    class vector {
    public:
        static std::vector<int> add(std::vector<int> firstVector, std::vector<int> secondVector) {
            std::vector<int> resultant(firstVector.size());
            for (int i = 0; i < firstVector.size(); i++) {
                resultant[i] = firstVector[i] + secondVector[i];
            }
            for (int i = 0; i < firstVector.size(); i++) {
                std::cout << resultant[i] << " ";
            }
            std::cout << std::endl;
            return resultant;
        }

        static std::vector<int> substract(std::vector<int> firstVector, std::vector<int> secondVector) {
            std::vector<int> resultant(firstVector.size());
            for (int i = 0; i < firstVector.size(); i++) {
                resultant[i] = firstVector[i] - secondVector[i];
            }
            for (int i = 0; i < firstVector.size(); i++) {
                std::cout << resultant[i] << " ";
            }
            std::cout << std::endl;
            return resultant;
        }
    };

    static std::vector<std::vector<int>>
    add2D(const std::vector<std::vector<int>> &firstMatrix, const std::vector<std::vector<int>> &secondMatrix) {
        if (firstMatrix.size() != secondMatrix.size() || firstMatrix[0].size() != secondMatrix[0].size()) {
            throw std::invalid_argument("Matrices must have the same dimensions");
        }


        std::vector<std::vector<int>> resultant(firstMatrix.size(), std::vector<int>(firstMatrix[0].size()));

        for (size_t i = 0; i < firstMatrix.size(); ++i) {
            for (size_t j = 0; j < firstMatrix[i].size(); ++j) {
                resultant[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            }
        }
        for (const auto &row: resultant) {
            for (const int element: row) {
                std::cout << element << "   ";
            }
            std::cout << std::endl;
        }

        return resultant;
    }

    static std::vector<std::vector<int>>
    substract2D(const std::vector<std::vector<int>> &firstMatrix, const std::vector<std::vector<int>> &secondMatrix) {
        if (firstMatrix.size() != secondMatrix.size() || firstMatrix[0].size() != secondMatrix[0].size()) {
            throw std::invalid_argument("Matrices must have the same dimensions");
        }


        std::vector<std::vector<int>> resultant(firstMatrix.size(), std::vector<int>(firstMatrix[0].size()));

        for (size_t i = 0; i < firstMatrix.size(); i++) {
            for (size_t j = 0; j < firstMatrix[i].size(); j++) {
                resultant[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
            }
        }
        for (const auto &row: resultant) {
            for (const int element: row) {
                std::cout << element << "   ";
            }
            std::cout << std::endl;
        }

        return resultant;
    }

    static std::vector<std::vector<int>>
    multiply2D(const std::vector<std::vector<int>> &firstMatrix, const std::vector<std::vector<int>> &secondMatrix) {
        if (firstMatrix[0].size() != secondMatrix.size()) {
            throw std::invalid_argument(
                    "The number of columns in the first matrix must be equal to the number of rows in the second matrix");
        }
        std::vector<std::vector<int>> resultant(firstMatrix[0].size(), std::vector<int>(secondMatrix.size()));
        for (size_t i = 0; i < firstMatrix.size(); i++) {
            for (size_t j = 0; j < firstMatrix[i].size(); j++) {
                resultant[i][j] = 0;
                for (size_t k = 0; k < secondMatrix.size(); k++) {
                    resultant[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }
        for (const auto &row: resultant) {
            for (const int element: row) {
                std::cout << element << "   ";
            }
            std::cout << std::endl;
        }
        return resultant;
    }
}
#endif