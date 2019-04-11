#include "Person.hpp"

Person::Person() {
    name = "Ashwini";
}

void Person::setName(std::string name) {
    this->name = name;
}

std::string Person::getName() {
    return name;
}
