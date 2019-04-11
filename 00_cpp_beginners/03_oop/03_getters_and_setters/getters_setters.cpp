#include <iostream>

#include "Person.hpp"

using namespace std;

int main() {
    Person person;
    cout << person.getName() << endl;
    person.setName("Ganesh");
    cout << person.getName() << endl;
    return 0;
}