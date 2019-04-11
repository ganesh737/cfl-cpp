#include <iostream>

#include "Person.hpp"

using namespace std;

int main() {
    Person a;
    a.printData();
    Person b("Ganesh", 27);
    b.printData();
    return 0;
}