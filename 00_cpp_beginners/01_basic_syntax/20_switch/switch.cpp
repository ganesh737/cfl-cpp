#include <iostream>

using namespace std;

int main() {
    int val = 5;
    
    switch(val) {
        case 1:
            cout << "1" << endl;
            break;
        case 2:
            cout << "2" << endl;
            break;
        case 3:
            cout << "3" << endl;
            break;
        case 4:
            cout << "4" << endl;
            break;
        case 5:
            cout << "5" << endl;
            break;
        default:
            cout << "default" << endl;
            break;
    }
    return 0;
}