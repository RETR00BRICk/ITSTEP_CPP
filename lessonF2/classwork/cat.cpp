#include <iostream>
#include "cat.h"
#include <cstring>

void Cat::printCat() {
 std::cout << name << ' ' << age << '\n';
}

void Cat::askForFood() {
    while (true) {
        std::cout << "MEOW!!!" << '\n';
    }
}

void Cat::makePurr() {
    std::cout << "Purrrrr" << '\n';
}

void Cat::setName(const char* newName) {
    if (newName != nullptr) {
        if (strlen(newName) + 1 > MAX_NAME_LEN) {
            std::cout << "Name is longer then MAX_NAME_LEN\n";
        }

        strcpy(name, newName);
    }
}

void Cat::setAge(int newAge) {
    if (newAge < 0) return;
    if (newAge < age) return;
    age = newAge;
}
