// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: September 2019
// This lets the user guess a number

#include <iostream>
#include <cstdlib>

int main() {
    // variable declaration
    int number;
    int guess;

    // set number
    number = rand() % 9 + 0;

    // input
    std::cout << "Guess my number between 0 and 9: ";
    std::cin >> guess;

    // process
    if (guess == number) {
        // output
        std::cout << "" << std::endl;
        std::cout << "Correct! My number was "<< (number) << std::endl;
    }

    // process
    if (guess != number) {
        // output
        std::cout << "" << std::endl;
        std::cout << "Sorry. Better luck next time." << std::endl;
        std::cout << "My number was "<< (number) << std::endl;
    }
}
