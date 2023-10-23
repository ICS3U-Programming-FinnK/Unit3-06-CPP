// Created by : Finn Kitor
// Created on : October 23rd, 2023
// this program checks if the number the user guessed is correct with the try case statement..

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    srand(time(0));

    int random_number = rand() % 10;
//the user inputs the number to the terminal
    std::string integer_as_string;
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> integer_as_string;
    std::cout << std::endl;
// the terminal will process of it is a number or not.
    try {
        int integer_as_number = std::stoi(integer_as_string);
        std::cout << "You entered a number correctly" << std::endl;
    } catch (std::exception& e) {
        std::cout << "You did not type in a number" << std::endl;
    }  {
        std::cout << "Thank you for trying out my program!" << std::endl;
    }

    return 0;
}