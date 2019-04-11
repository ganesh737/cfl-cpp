#include <iostream>

using namespace std;

int main() {
    const string passwd = "hello";
    string input;
    
    do {
        cout << "Enter your password > " << flush;
        cin >> input;
        
        if(input != passwd) {
            cout << "Access denied!" << endl;
        }
    } while(input != passwd);

    cout << "Password accepted";

    return 0;
}