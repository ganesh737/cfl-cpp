#include <iostream>

int main() {
    std::cout << "Enter your name:" << std::flush;
    std::string input;
    std::cin >> input;
    std::cout << "Hi " << input << std::endl;
    
    std::cout << "Enter your age:" << std::flush;
    int age;
    std::cin >> age;
    std::cout << "Oh!! You are " << age << " years old!!!" << std::endl;
    return 0;
}