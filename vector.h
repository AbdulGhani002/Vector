//
// Created by itsag on 8/25/2024.
//

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
            return resultant;
        }
    };

} // matrix

<<<<<<< HEAD
#endif //VECTOR_VECTOR_H
=======
#endif //VECTOR_VECTOR_H
>>>>>>> master
