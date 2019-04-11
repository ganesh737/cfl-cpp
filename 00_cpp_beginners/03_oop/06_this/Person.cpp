#include "Person.hpp"

Person::Person() {
    name = "Ashwini";
    age  = 24;
    
    std::cout << "memory location of this: " << this << std::endl;
}

Person::Person(std::string name, int age) {
    this->name = name;
    this->age = age;
    
    std::cout << "memory location of this: " << this << std::endl;
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