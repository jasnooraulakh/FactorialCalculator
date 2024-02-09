//
// Created by Jasnoor Aulakh on 2/9/24.
//

#ifndef FACTORIALCALCULATOR_FACTORIAL_H
#define FACTORIALCALCULATOR_FACTORIAL_H

#include <string>
#include <cctype>

using namespace std;

class Factorial {
private:
     string user_entry;
     long long result;

public:
    int calculateFactorial(int);
    void displayMenu();
};


#endif //FACTORIALCALCULATOR_FACTORIAL_H
