#include <iostream>

#include "Person.hpp"

using namespace std;

int main() {
    Person a;
    Person b("Ganesh", 27);
    a.printData();
    b.printData();
    return 0;
}