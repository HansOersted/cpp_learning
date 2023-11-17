#include <iostream>

int main() {
    int num;
    std::cout << "Enter your favourite integer between 1 and 100: ";
    std::cin >> num;
    std::cout << "Amazing!! That is my favourite integer too!" << std::endl;
    std::cout << "No really!! "<< num << " is my favourite integer!" << std::endl;
    return 0;
}