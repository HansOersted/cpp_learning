/*
P - Print numbers
A - Add a number
M - Display mean of the numbers
S - Dispplay the smallest number
L - Display the largest number
Q - Quit
*/

// 1. while loop with an exit

#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<int> int_vec;
    char choice {};
    do {
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << std::endl;
    
        switch(choice) {
            case 'p':
            case 'P': {
                if(int_vec.size() == 0)
                    std::cout << "[] - the list is empty" << std::endl;
                else
                    {
                        std::cout << "[ ";
                        for(size_t i = 0; i < int_vec.size(); i++) {
                            std::cout << int_vec[i] << " ";
                        }
                        std::cout << "]" << std::endl;
                    }
            } break;

            case 'a':
            case 'A': {
                int new_int {};
                std::cout << "Add an integer: ";
                std::cin >> new_int;
                int_vec.push_back(new_int);
                std::cout << std::endl;
                std::cout << new_int << " added!" << std::endl;
            } break;

            case 'm':
            case 'M': 
            case 's':
            case 'S': 
            case 'l':
            case 'L': {
                int smallest {std::numeric_limits<int>::max()}, largest {std::numeric_limits<int>::min()}, sum {};
                double mean {};
                size_t size {int_vec.size()};
                if(size == 0) {
                   switch (choice){
                    case 'm':
                    case 'M': std::cout << "Unable to calculate the mean: List is empty!" << std::endl; break;
                    case 's':
                    case 'S': std::cout << "Unable to find the smallest: List is empty!" << std::endl; break;
                    case 'l':
                    case 'L': std::cout << "Unable to find the largest: List is empty!" << std::endl; break;
                   }
                }
                else {
                    for(auto num: int_vec) {
                        sum += num;
                        if (num >= largest)
                            largest = num;
                        if (num <= smallest)
                            smallest = num;
                    }
                    mean = static_cast<double>(sum)/size;
                
                   switch (choice){
                    case 'm':
                    case 'M': std::cout << "The mean is " << mean << std::endl; break;
                    case 's':
                    case 'S': std::cout << "The smallest number is " << smallest << std::endl; break;
                    case 'l':
                    case 'L': std::cout << "The largest number is " << largest << std::endl; break;
                   }
                }
            } break;           
        }
    } while(choice != 'q' && choice != 'Q');
    std::cout << "Goodbye!" << std::endl;
    
    return 0;
}