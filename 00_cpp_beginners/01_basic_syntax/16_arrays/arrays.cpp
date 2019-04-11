#include <iostream>

using namespace std;

int main() {
    char val[3];
    
    val[0] = 0x65;
    val[1] = 0x66;
    val[2] = 0x67;
    
    cout << val[0] << endl;
    cout << val[1] << endl;
    cout << val[2] << endl;
    
    int iArr[10] = {};
    for(int i = 0; i < 10; i++)
        cout << iArr[i] << endl;
    return 0;
}