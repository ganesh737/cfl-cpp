#include <iostream>

#include "Cat.hpp"

using namespace std;

int main() {
    Cat tomy;
    tomy.makeSad();
    tomy.speak();

    Cat thimma;
    thimma.makeHappy();
    thimma.speak();

    return 0;
}