#include <iostream>

#include "Cat.hpp"

using namespace std;

int main() {
    cout << "Starting main....." << endl;
    Cat tomy;
    // tomy.makeSad();
    tomy.speak();

    {
        Cat thimma;
        // thimma.makeHappy();
        thimma.speak();
    }

    cout << "Ending main....." << endl;
    return 0;
}