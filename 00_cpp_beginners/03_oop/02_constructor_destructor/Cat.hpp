#ifndef CAT_HPP_
#define CAT_HPP_

#include <iostream>

class Cat
{
private:
    // bool happy = true; only in C++11
    bool happy;
public:
    void makeHappy();
    void makeSad();
    void speak();
    void play();
    void jump();
    
    Cat();
    ~Cat();
};

#endif /* CAT_HPP_ */

