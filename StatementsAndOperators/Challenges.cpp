/*
1 dollar is 100 cents
1 quarter is 25 cents
1 dime is 10 cents
1 nickel is 5 cents
1 penny is 1 cent
*/

#include <iostream>

int main() {

    int total_cents {};

    std::cout << "Enter an amount in cents: ";
    std::cin >> total_cents;
    
    int cents_remained {total_cents};

    int dollars {cents_remained/100};
    cents_remained = cents_remained % 100;

    int quarters {cents_remained/25};
    cents_remained = cents_remained % 25;

    int dimes {cents_remained/10};
    cents_remained = cents_remained % 10;

    int nickels {cents_remained/5};
    cents_remained = cents_remained % 5;

    int pennies {cents_remained};



    std::cout << "You can provide this change as follows:" << std::endl;
    std::cout << "dollars: " << dollars << std::endl;
    std::cout << "quarters: " << quarters << std::endl;
    std::cout << "dimes: " << dimes << std::endl;
    std::cout << "nickels: " << nickels << std::endl;
    std::cout << "pennies: " << pennies << std::endl;

}