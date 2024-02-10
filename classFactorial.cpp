//
// Created by Jasnoor Aulakh on 2/9/24.
//

#include "Factorial.h"
#include <iostream>
#include <string>

using namespace std;

int Factorial::calculateFactorial(int number) {
    // Calculate factorial for a provided number

    // Base Case
    if (number <= 1) {
        return 1;
    }
    // Recursive Case
    else {
        return (number * calculateFactorial(number - 1));
    }
}

void Factorial::displayMenu() {
    cout << "Welcome to the Factorial Calculator" << endl;

    while (true) {
        cout << "Enter a number (or type 'exit' to quit): ";
        getline(cin, user_entry);

        if (user_entry == "exit" || user_entry == "Exit") {
            break;
        }
        try {
            // Convert input to int, and try
            int num = stoi(user_entry);

            result = calculateFactorial(num);
            cout << "The Factorial is " << result << endl;
        }
        catch (invalid_argument& ia){
            cout << "Invalid input. Please try again" << endl;
        }
    }
}