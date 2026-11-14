#include <iostream>
#include "cat.h"

int main() {
    Cat cat = {};

    cat.setAge(10);
    cat.setName("Anton");
    cat.makePurr();

    std::cout << cat.getName() << '\n';

    cat.printCat();
}
 
