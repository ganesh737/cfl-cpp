#include <iostream>

using namespace std;

int main() {
    string animals[2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };
    
    int iArr[2][3] = {
        1, 3, 4,
        5, 6, 7
    };
    
    cout << "sizeof(animals):" << sizeof(animals) << endl;
    cout << "sizeof(animals[0]):" << sizeof(animals[0]) << endl;
    cout << "sizeof(string):" << sizeof(string) << endl;
    
    for(int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) {
        for(int j = 0; j < sizeof(animals[0])/sizeof(string); j++) {
            cout << animals[i][j] << " " << flush;
        }
    }
    cout << endl;
    cout << "sizeof(iArr):" << sizeof(iArr) << endl;
    cout << "sizeof(int):" << sizeof(int) << endl;
}