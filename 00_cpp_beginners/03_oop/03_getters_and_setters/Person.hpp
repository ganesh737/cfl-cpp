#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <iostream>

class Person
{
private:
    std::string name;

public:
    Person();
    void setName(std::string name);
    std::string getName();
};

#endif /* PERSON_HPP_ */
