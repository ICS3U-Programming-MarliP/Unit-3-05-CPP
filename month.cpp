// Copyright Marli Peters 2023 All rights reserved.
// Created By: Marli Peters
// Date: Oct. 23, 2023
// This program asks the user for a number then
// tells them if the number is positive or negative.

#include <cstdlib>
#include <iostream>

// set variable
int month;

int main() {
    // get user input
    std::cout << "Enter month as integer: ";
    std::cin >> month;

    // display month for number
    switch (month) {
        case 1:
            std::cout << "1 is January!" << std::endl;
            break;
        case 2:
            std::cout << "2 is February!" << std::endl;
            break;
        case 3:
            std::cout << "3 is March!" << std::endl;
            break;
        case 4:
            std::cout << "4 is April!" << std::endl;
            break;
        case 5:
            std::cout << "5 is May!" << std::endl;
            break;
        case 6:
            std::cout << "6 is June!" << std::endl;
            break;
        case 7:
            std::cout << "7 is July!" << std::endl;
            break;
        case 8:
            std::cout << "8 is August!" << std::endl;
            break;
        case 9:
            std::cout << "9 is September!" << std::endl;
            break;
        case 10:
            std::cout << "10 is October!" << std::endl;
            break;
        case 11:
            std::cout << "11 is November!" << std::endl;
            break;
        case 12:
            std::cout << "12 is December!" << std::endl;
            break;
        default:
            std::cout << "Invalid integer." << std::endl;
    }
}
