#include <iostream>

int main() {
    int numberCats = 5;
    int numberDogs = 10;
    
    std::cout << "number of cats:" << numberCats << std::endl;
    std::cout << "number of dogs:" << numberDogs << std::endl;
    
    std::cout << "Total number of animals:" << (numberCats + numberDogs) << std::endl;
    
    std::cout << "New dog acquired!!!" << std::endl;
    numberDogs += 1;
    
    std::cout << "new number of dogs:" << numberDogs << std::endl;
    
    return 0;
}