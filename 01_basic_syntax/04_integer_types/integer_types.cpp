#include <iostream>
#include <climits>

int main (void) {
    int val = 1219;
    std::cout << "val:" << val << std::endl;

    std::cout << "max int val:" << INT_MAX << std::endl;
    std::cout << "min int val:" << INT_MIN << std::endl;

    std::cout << "max short int val:" << SHRT_MAX << std::endl;
    std::cout << "min short int val:" << SHRT_MIN << std::endl;
    
    std::cout << "max long int val:" << LONG_MAX << std::endl;
    std::cout << "min long int val:" << LONG_MIN << std::endl;
    
    std::cout << "sizeof(int):" << sizeof(int) << std::endl;
    std::cout << "sizeof(short int):" << sizeof(short int) << std::endl;
    std::cout << "sizeof(long int):" << sizeof(long int) << std::endl;
    
    unsigned int uVal = -123;
    std::cout << "unsinged int:" << uVal << std::endl;
    
    return 0;
}