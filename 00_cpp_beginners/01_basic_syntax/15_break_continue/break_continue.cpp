#include <iostream>

using namespace std;

int main() {
    for(int i = 0; i < 10; i++) {
        cout << "i = " << i << endl;
        if(i % 2 == 0) {
            cout << "contining ..." << endl;
            continue;
        }
        if(i == 7) {
            cout << "breaking ..." << endl;
            break;
        }
        cout << "hello there !!!" << endl;
    }
    return 0;
}