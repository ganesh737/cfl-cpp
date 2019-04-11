#include <iostream>

using namespace std;

int main() {
    string passwd = "hello";
    cout << "Enter your password > " << flush;

    string input;    
    cin >> input;
    
    if(0 == input.compare(passwd)) {
        cout << "Correct Password !!!" << endl;
    }
    else {
        cout << "Incorrect Password!!!" << endl;
    }
    
    if(input == passwd) {
        cout << "Correct Password !!!" << endl;
    }
    else {
        cout << "Incorrect Password!!!" << endl;
    }
    return 0;
}