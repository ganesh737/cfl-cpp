#include "Cat.hpp"

using namespace std;

Cat::Cat() {
    cout << "Creating a Cat instance" << endl;
    happy = false;
}

Cat::~Cat() {
    cout << "Deallocating Cat instance" << endl;
}

void Cat::makeHappy() {
    happy = true;
}
void Cat::makeSad() {
    happy = false;
}

void Cat::speak() {
    if(happy) {
        cout << "meow....." << endl;
    }
    else {
        cout << "ssss....." << endl;
    }
}

void Cat::play() {
    cout << "play....." << endl;
}

void Cat::jump() {
    cout << "jump....." << endl;
}
