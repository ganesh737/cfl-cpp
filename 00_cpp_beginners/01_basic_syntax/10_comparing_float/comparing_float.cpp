#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float val = 1.1;
    
    if(val == 1.1) {
        cout << "equal" << endl;
    }
    else {
        cout << "not equal" << endl;
    }
    
    cout << setprecision(10) << val << endl;
    return 0;
}