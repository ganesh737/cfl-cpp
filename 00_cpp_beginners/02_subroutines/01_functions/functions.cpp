#include <iostream>

using namespace std;

void showMenu();
void processSelection(int input);

int main(){
    showMenu();
    cout << "Enter selection:" << endl;
    int input;
    cin >> input;
    processSelection(input);
    return 0;
}

void showMenu() {
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
}

void processSelection(int input) {
    switch(input) {
    case 1:
        cout << "Searching ..." << endl;
        break;
    case 2:
        cout << "Viewing ..." << endl;
        break;
    case 3:
        cout << "Quiting ..." << endl;
        break;
    default:
        cout << "Unknown option :(" << endl;
    }
}