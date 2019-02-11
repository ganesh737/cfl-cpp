#include <iostream>
#include <climits>

using namespace std;

int main (void) {
    int val = 1219;
    cout << "val:" << val << endl;

    cout << "max int val:" << INT_MAX << endl;
    cout << "min int val:" << INT_MIN << endl;

    cout << "max short int val:" << SHRT_MAX << endl;
    cout << "min short int val:" << SHRT_MIN << endl;
    
    cout << "max long int val:" << LONG_MAX << endl;
    cout << "min long int val:" << LONG_MIN << endl;
    
    cout << "sizeof(int):" << sizeof(int) << endl;
    cout << "sizeof(short int):" << sizeof(short int) << endl;
    cout << "sizeof(long int):" << sizeof(long int) << endl;
    
    unsigned int uVal = -123;
    cout << "unsinged int:" << uVal << endl;
    
    return 0;
}