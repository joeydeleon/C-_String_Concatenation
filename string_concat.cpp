#include <iostream>
#include <string>

int main() {
    std::string str1, str2, concatenatedStr;

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter the first string: ";
        std::getline(std::cin, str1);

        std::cout << "Enter the second string: ";
        std::getline(std::cin, str2);

        concatenatedStr = str1 + str2;

        std::cout << "Concatenated string: " << concatenatedStr << std::endl;
        std::cout << "---------------------" << std::endl;
    }

    return 0;
}
/*
 * string_concat.cpp
 *
 *  Created on: Nov 3, 2024
 *      Author: jocelyndeleon
 */




