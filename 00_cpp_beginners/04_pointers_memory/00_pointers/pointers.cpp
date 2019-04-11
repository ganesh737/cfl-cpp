#include <iostream>

using namespace std;

int main() {
    int nVal = 10;
    int* pVal = &nVal;
    
    cout << "nVal=" << nVal << endl;
    cout << "pVal=" << pVal << endl;
    cout << "*pVal=" << *pVal << endl;
    cout << "sizeof(pVal)=" << sizeof(pVal) << endl;
    cout << "sizeof(*pVal)=" << sizeof(*pVal) << endl;
    return 0;
}