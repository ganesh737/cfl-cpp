#include "Person.hpp"

Person::Person() {
    name = "Ashwini";
    age  = 24;
}

Person::Person(std::string name, int age) {
    this->name = name;
    this->age = age;
}

void Person::setName(std::string name) {
    this->name = name;
}

std::string Person::getName() {
    return name;
}

void Person::printData() {
    std::stringstream ss;
    ss << "Name : ";
    ss << this->name;
    ss << "; age : ";
    ss << this->age;
    std::cout << ss.str() << std::endl;
}