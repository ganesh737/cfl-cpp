#include <iostream>
#include <climits>  // also available as limits.h

using namespace std;

int main() {

    double dVal = 864827576832643468;
    cout << dVal << endl;

    cout << "INT_MAX=" << INT_MAX << endl;
    cout << "INT_MIN=" << INT_MIN << endl;
    
    cout << "sizeof(int):" << sizeof(int) << endl;
    cout << "sizeof(short int):" << sizeof(short int) << endl;
    
    cout << "sizeof(unsigned int):" << sizeof(unsigned int) << endl;
    cout << "sizeof(unsigned short int):" << sizeof(unsigned short int) << endl;

    return 0;
}