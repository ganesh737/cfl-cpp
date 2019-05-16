#include <iostream>

using namespace std;

int main() {
    string texts[] = { "one", "two", "three" };
    
    string* pTexts = texts;
    
    cout << sizeof(texts)/sizeof(string) << endl;
    
    for(int i = 0; i < sizeof(texts)/sizeof(string); i++) {
        cout << texts[i] << " " << flush;
    }
    cout << endl;
    
    for(int i = 0; i < sizeof(texts)/sizeof(string); i++) {
        cout << pTexts[i] << " " << flush;
    }
    cout << endl;
    
    for(int i = 0; i < sizeof(texts)/sizeof(string); i++, pTexts++) {
        cout << *pTexts << " " << flush;
    }
    cout << endl;
    
    string *pElements = texts;
    string *pEnd = &texts[2];
    
    do {
        cout << *pElements << " " << flush;
    } while (pElements++ != pEnd);
    
    return 0;
}