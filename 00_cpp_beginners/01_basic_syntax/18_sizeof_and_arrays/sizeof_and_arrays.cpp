#include <iostream>

using namespace std;

int main() {
    int vals[] = {1, 3, 5, 6, 7};
    for(int i = 0; i < sizeof(vals) / sizeof(int); i++) {
        cout << vals[i] << endl;
    }
    return 0;
}