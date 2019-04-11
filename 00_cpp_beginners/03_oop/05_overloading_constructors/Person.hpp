#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <iostream>
#include <sstream>

class Person
{
private:
    std::string name;
    int age;

public:
    Person();
    Person(std::string name, int age);
    void setName(std::string name);
    std::string getName();
    void printData();
};

#endif /* PERSON_HPP_ */
