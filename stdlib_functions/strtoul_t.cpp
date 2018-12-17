#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    int ival = 0;
    string sval;
    string str = "9660";

    ival = static_cast<int> (strtoul(str.c_str(), 0, 10));
    sval = static_cast<int> (strtoul(str.c_str(), 0, 10));

    cout << "ival:\"" << ival << "\"" << endl;
    cout << "sval:\"" << sval << "\"" << endl;
    cout << "str:\"" << str << "\"" << endl;
    cout << "nocast:\"" << strtoul(str.c_str(), 0, 10) << "\"" << endl;

    for(std::string::iterator it=sval.begin(); it!=sval.end(); ++it) {
        cout << (int)*it;
    }
    cout << endl;

    return 0;
}
