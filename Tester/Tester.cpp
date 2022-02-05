//
// Created by iiana on 20.01.2022.
//

#include "Tester.h"
#include <iostream>

void describe(const std::string& description, UnitResult (*function)()) {
    std::cout << description << ": ";
    UnitResult result = function();
    switch(result) {
        case UnitResult::PASS:
            std::cout << "PASS";
            break;
        case UnitResult::WARNING:
            std::cout << "WARNING";
            break;
        case UnitResult::ERROR:
            std::cout << "ERROR";
            break;
    }
    std::cout << '\n';
}

UnitResult Tester::ToEqual(int result, int expectedResult) {
    if (result == expectedResult) return UnitResult::PASS;
    else return UnitResult::ERROR;
}
