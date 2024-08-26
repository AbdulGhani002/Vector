#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <utility>
#include <vector>
#include <iostream>
#include <cmath>

namespace matrix {

    /**
     * @class vector
     * @brief A class for performing vector operations such as addition, subtraction, scaling, dot product, magnitude, and cosine similarity.
     */
    class vector {
    public:
        /**
         * @brief Adds two vectors element-wise.
         * @param firstVector The first vector.
         * @param secondVector The second vector.
         * @return The resultant vector after addition.
         */
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

        /**
         * @brief Subtracts the second vector from the first vector element-wise.
         * @param firstVector The first vector.
         * @param secondVector The second vector.
         * @return The resultant vector after subtraction.
         */
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

        /**
         * @brief Scales a vector by a given factor.
         * @param vector The vector to scale.
         * @param scale The scaling factor.
         * @return The resultant scaled vector.
         */
        static std::vector<int> scale(std::vector<int> vector, int scale) {
            for (int i = 0; i < vector.size(); i++) {
                vector[i] *= scale;
            }
            return vector;
        }

        /**
         * @brief Computes the dot product of two vectors.
         * @param firstVector The first vector.
         * @param secondVector The second vector. Defaults to an empty vector (treated as a zero vector).
         * @return The dot product of the two vectors.
         * @throws std::invalid_argument if the vectors are of different lengths.
         */
        static int dotProduct(const std::vector<int> &firstVector, const std::vector<int> &secondVector = std::vector<int>()) {
            std::vector<int> adjustedSecondVector = secondVector;

            if (adjustedSecondVector.empty()) {
                adjustedSecondVector.resize(firstVector.size(), 0);
            }

            if (firstVector.size() != adjustedSecondVector.size()) {
                throw std::invalid_argument("Vectors must be of same length");
            }

            int result = 0;
            for (size_t i = 0; i < firstVector.size(); ++i) {
                result += firstVector[i] * adjustedSecondVector[i];
            }

            return result;
        }

        /**
         * @brief Computes the magnitude of the difference between two vectors.
         * @param firstVector The first vector.
         * @param secondVector The second vector. Defaults to an empty vector (treated as a zero vector).
         * @return The magnitude of the difference between the two vectors.
         * @throws std::invalid_argument if the vectors are of different lengths.
         */
        static double magnitude(const std::vector<int> &firstVector, const std::vector<int> &secondVector = std::vector<int>()) {
            std::vector<int> adjustedSecondVector = secondVector;

            if (adjustedSecondVector.empty()) {
                adjustedSecondVector.resize(firstVector.size(), 0);
            }
            if (firstVector.size() != adjustedSecondVector.size()) {
                throw std::invalid_argument("Vectors must be of same length");
            }
            int result = 0;
            for (int i = 0; i < firstVector.size(); i++) {
                result += (adjustedSecondVector[i] - firstVector[i]) * (adjustedSecondVector[i] - firstVector[i]);
            }
            return sqrt((double) result);
        }

        /**
         * @brief Computes the cosine similarity between two vectors.
         * @param firstVector The first vector.
         * @param secondVector The second vector.
         * @return The cosine similarity between the two vectors.
         * @throws std::invalid_argument if the vectors are of different lengths.
         */
        static double cosineSimilarity(const std::vector<int> &firstVector, const std::vector<int> &secondVector) {
            if (firstVector.size() != secondVector.size()) {
                throw std::invalid_argument("Vectors must be of same length");
            }
            int dotProduct = matrix::vector::dotProduct(firstVector, secondVector);
            double magnitudeOfA = matrix::vector::magnitude(firstVector);
            double magnitudeOfB = matrix::vector::magnitude(secondVector);
            double cosineSimilarity = dotProduct / (magnitudeOfA * magnitudeOfB);
            return cosineSimilarity;
        }
    };

    /**
     * @class Matrix
     * @brief A class for performing operations on 2D matrices such as addition, subtraction, and multiplication.
     */
    class Matrix {
    public:
        /**
         * @brief Adds two 2D matrices element-wise.
         * @param firstMatrix The first matrix.
         * @param secondMatrix The second matrix.
         * @return The resultant matrix after addition.
         * @throws std::invalid_argument if the matrices have different dimensions.
         */
        static std::vector<std::vector<int>> add2D(const std::vector<std::vector<int>> &firstMatrix, const std::vector<std::vector<int>> &secondMatrix) {
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

        /**
         * @brief Subtracts the second 2D matrix from the first 2D matrix element-wise.
         * @param firstMatrix The first matrix.
         * @param secondMatrix The second matrix.
         * @return The resultant matrix after subtraction.
         * @throws std::invalid_argument if the matrices have different dimensions.
         */
        static std::vector<std::vector<int>> substract2D(const std::vector<std::vector<int>> &firstMatrix, const std::vector<std::vector<int>> &secondMatrix) {
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

        /**
         * @brief Multiplies two 2D matrices.
         * @param firstMatrix The first matrix.
         * @param secondMatrix The second matrix.
         * @return The resultant matrix after multiplication.
         * @throws std::invalid_argument if the number of columns in the first matrix is not equal to the number of rows in the second matrix.
         */
        static std::vector<std::vector<int>> multiply2D(const std::vector<std::vector<int>> &firstMatrix, const std::vector<std::vector<int>> &secondMatrix) {
            if (firstMatrix[0].size() != secondMatrix.size()) {
                throw std::invalid_argument("The number of columns in the first matrix must be equal to the number of rows in the second matrix");
            }
            std::vector<std::vector<int>> resultant(firstMatrix.size(), std::vector<int>(secondMatrix[0].size()));
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
    };
}

#endif //VECTOR_VECTOR_H
