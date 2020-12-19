// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program calculates the times table of a user input

#include <iostream>
#include <string>

int main() {
    // this function displays the times table of a user input

    std::cout << "This program displays the times table of a "
                 "user input." << std::endl;
    std::cout << "" << std::endl;

    // variable declarations
    const int MAX_MULTIPLICATION = 10;
    int loopCounter = 0;
    int answer = 0;
    std::string userInput;
    int userInputInt;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;

    // process
    try {
        userInputInt = std::stoi(userInput);

        if (userInputInt > 0) {
            while (loopCounter <= MAX_MULTIPLICATION) {
                // calculations
                answer = userInputInt * loopCounter;
                std::cout << userInputInt << " x " << loopCounter
                          << " = " << answer << std::endl;
                loopCounter = loopCounter + 1;
            }
        } else {
            // output
            std::cout << userInputInt << " is not a positive integer!";
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a number! Try again." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Thanks for playing!" << std::endl;
}
