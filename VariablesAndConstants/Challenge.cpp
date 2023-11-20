#include <iostream>

int main() {
    std::cout << "Hello, welcome to Zhe's Cleaning Service" << std::endl;

    std::cout << "How many small rooms would you like cleaned? ";
    int small_room {};
    std::cin >> small_room;

    std::cout << "How many large rooms would you like cleaned? ";
    int large_room {};
    std::cin >> large_room;

    std::cout << "\nEstimate for cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << small_room << std::endl;
    std::cout << "Number of large rooms: " << large_room << std::endl;

    constexpr double price_small {25};
    constexpr double price_large {35};

    std::cout << "Price per small room: $" << price_small << std::endl;
    std::cout << "Price per large room: $" << price_large << std::endl;

    double cost {price_small * small_room + price_large * large_room};
    std::cout << "Cost: $" << cost << std::endl;

    constexpr double tax_rate {0.06};
    double tax {tax_rate * cost};
    std::cout << "Tax: $" << tax << std::endl;

    std::cout << "======================" << std::endl;
    std::cout << "Total estimate: $" << tax + cost << std::endl;

    constexpr int period {30};
    std::cout << "This estimate is valid for " << period << " days." << std::endl;

    return 0;
}
