//
// Created by Jasnoor Aulakh on 2/9/24.
//

#include "Factorial.h"
#include <iostream>
#include <string>

using namespace std;

int Factorial::calculateFactorial(int number) {
    if (number <= 1) {
        return 1;
    }
    else {
        return (number * calculateFactorial(number - 1));
    }
}

void Factorial::displayMenu() {
    cout << "Welcome to the Factorial Calculator" << endl;

    while (true) {
        cout << "Enter a number (or type 'exit' to quit): ";
        cin >> user_entry;

        if (user_entry == "exit") {
            break;
        }
        int num = stoi(user_entry);

        result = calculateFactorial(num);
        cout << "The Factorial is " << result << endl;
    }
}