#include <iostream>

#include "Person.hpp"

using namespace std;

int main() {
    Person a;
    a.printData();
    cout << a.getName() << " memory address is " << &a << endl;
    Person b("Ganesh", 27);
    b.printData();
    cout << b.getName() << " memory address is " << &b << endl;
    return 0;
}