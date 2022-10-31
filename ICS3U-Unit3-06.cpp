// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : October 2022
// ICS3U-Unit3-06.cpp File, learning try...catch... statements in C++.

#include <iostream>
#include <random>
#include <string>

int main() {
    // creating variables
    int randomNumber;
    std::string guessNumber;

    // random generator
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // input
    std::cout << "Guess the number from 0 to 9: ";
    std::cin >> guessNumber;

    // process and output
    std::cout << "\n";
    try {
        if (randomNumber == std::stoi(guessNumber)) {
            std::cout << "You guessed right.";
        } else {
            std::cout << "You guessed wrong, the number was "
                    << randomNumber << ".";
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input, "
                  << guessNumber << " does not fit the requirements.";
        std::cout << "\nPlease try again "
                  << "and input a whole number between 0 and 9";
    }

    std::cout << "\n\n\nDone.\n";
}
