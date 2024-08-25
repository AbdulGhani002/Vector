//
// Created by itsag on 8/25/2024.
//

#include "vector.h"

//namespace matrix {
//} // matrix
int main() {
    std::vector<int> firstVector = {1, 3, 6, 9};
    std::vector<int> secondVector = {1, 3, -6, 9};
    std::vector<int> resultant = matrix::vector::add(firstVector, secondVector);
    std::vector<int> resultantt = matrix::vector::substract(firstVector, secondVector);
}