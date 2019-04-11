#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    float fVal = 123.456789;
    
    cout << "sizeof(float):" << sizeof(float) << endl;
    cout << fixed << "fVal=" << fVal << endl;
    cout << setprecision(40) << fixed << "fVal" << fVal << endl;
    cout << scientific << "fVal" << fVal << endl;
    
    double dVal = 123.456789;
    
    cout << "sizeof(double)" << sizeof(double) << endl;
    cout << fixed << "dVal:" << dVal << endl;
    cout << setprecision(40) << fixed << "dVal:" << dVal << endl;
    cout << scientific << "dVal:" << dVal << endl;
    
    long double ldVal = 123.456789;
    
    cout << "sizeof(long double)" << sizeof(long double) << endl;
    cout << fixed << "ldVal:" << ldVal << endl;
    cout << setprecision(40) << fixed << "ldVal:" << ldVal << endl;
    cout << scientific << "ldVal:" << ldVal << endl;

    return 0;
}