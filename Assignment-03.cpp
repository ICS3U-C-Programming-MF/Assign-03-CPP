// copyright Maximiliano Fairman
// Created on Nov 5th 2025
// all rights reserved
// This program that asks the user to provide.
// A single character from the alphabet
// and then prints "Vowel" or "Consonant"
// depending on the letter entered.

#include <cctype>
#include <iostream>
#include <string>

int main() {
    // input
    std::string letter;
    std::string extra_char;

    // welcome message
    std::cout << "" << std::endl;  // blank line for formatting
    std::cout << "Welcome! This program will tell you" << std::endl;
    std::cout << "if the letter you enter" << std::endl;
    std::cout << "is either a Vowel or a Consonant." << std::endl;
    std::cout << "" << std::endl;  // blank line for formatting

    std::cout << "Enter a letter from the alphabet: ";
    std::cin >> letter;

    // check if there is more than one character
    if (letter.length() > 1) {
        extra_char = letter[1];

        // if there is more than one character
        std::cout << "Please enter ONE letter." << std::endl;
        return 0;
    }

    // If there is one character
    // Check if it's a valid letter
    if (!isalpha(letter[0])) {
        // (non taught)
        std::cout << "Please enter only letters." << std::endl;
        return 0;
    }

    // If the letter is Y or y
    if (letter == "Y" || letter == "y") {
        std::cout << "Y is both a Vowel and a Consonant." << std::endl;
        return 0;
    }

    // Check if the letter is a vowel
    if (letter == "a" || letter == "e" ||
         letter == "A" || letter == "E") {
        std::cout << letter << " is a Vowel." << std::endl;
    }
    if ((letter == "i") || (letter == "o") || (letter == "u") ||
        (letter == "I") || (letter == "O") || (letter == "U")) {
        std::cout << letter << " is a Vowel." << std::endl;
    } else {
            std::cout << letter << " is a Consonant." << std::endl;
        }

    return 0;
}


