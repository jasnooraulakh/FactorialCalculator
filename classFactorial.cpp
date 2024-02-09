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

}