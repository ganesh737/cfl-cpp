#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string name = "Ashwini";
    int age = 24;
    stringstream ss;
    
    ss << "Name: " + name + "; age: ";
    ss << age;
    
    cout << ss.str() << endl;
    
    return 0;
}