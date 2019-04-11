#ifndef CAT_HPP_
#define CAT_HPP_

#include <iostream>

class Cat
{
private:
    bool happy = true;
public:
    void makeHappy();
    void makeSad();
    void speak();
    void play();
    void jump();
};

#endif /* CAT_HPP_ */

