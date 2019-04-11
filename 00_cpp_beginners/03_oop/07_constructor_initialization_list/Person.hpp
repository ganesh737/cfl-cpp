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
    Person(): name("Ashwini"), age(24) {};
    Person(std::string name, int age): name(name), age(age) {};
    void setName(std::string name);
    std::string getName();
    void printData();
};

#endif /* PERSON_HPP_ */
