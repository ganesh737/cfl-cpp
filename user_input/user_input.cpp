#include <iostream>

using namespace std;

int main() {
    cout << "Enter your name:" << flush;
    string name;
    cin >> name;
    cout << "Entered:" << name << endl;
    
    cout << "Enter age:" << flush;
    int age;
    cin >> age;
    cout << "Entered:" << age << endl;
    return 0;
}