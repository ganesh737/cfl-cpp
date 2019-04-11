#include <iostream>

using namespace std;

/*
 * == equality test
 * != not equal
 * <  less than
 * >  greater than
 * <= less than or equal to
 * >= greater than or equal to
 */

int main() {
    int val1 = 10;
    int val2 = 12;
    
    string output;
    output = (val1>val2)? "true" : "false";
    cout << output;
    return 0;
}