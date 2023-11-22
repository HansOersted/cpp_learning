/* FUNCTION BASED

P - Print numbers
A - Add a number
M - Display mean of the numbers
S - Display the smallest number
L - Display the largest number
Q - Quit

*/

#include <iostream>
#include <vector>
#include <limits>

void printOptions();
char readTheOption();
char letterTrans(const char &);
void printNumbers(const std::vector<int> &);
void addNumber(std::vector<int> &);
void meanValue(const std::vector<int> &);
void smallestValue(const std::vector<int> &);
void largestValue(const std::vector<int> &);

int main() {
    std::vector<int> vec_int;
    char option {};
    do {
        printOptions();
        std::cout << std::endl;
        option = readTheOption();
            switch (option){
                case 'p': printNumbers(vec_int); break;
                case 'a': addNumber(vec_int); break;
                case 'm': meanValue(vec_int); break;
                case 's': smallestValue(vec_int); break;
                case 'l': largestValue(vec_int); break;
                }
    } while(option != 'q');

}


void printOptions() {
    std::cout << "P - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display mean of the numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - Display the largest number" << std::endl;
    std::cout << "Q - Quit" << std::endl;
}

char readTheOption() {
    char option {};
    std::cout << "Enter your option: ";
    std::cin >> option;
    return letterTrans(option);
}

char letterTrans(const char &option) {
    char lower_case {};
        switch (option){
            case 'p':
            case 'P': lower_case = 'p'; break;
            case 'a':
            case 'A': lower_case = 'a'; break;
            case 'm':
            case 'M': lower_case = 'm'; break;
            case 's':
            case 'S': lower_case = 's'; break;
            case 'l':
            case 'L': lower_case = 'l'; break;
            case 'q':
            case 'Q': lower_case = 'q'; break;
            }
    return lower_case;
        
}

void printNumbers(const std::vector<int> &vec_int) {
    if(vec_int.size() == 0)
        std::cout << "[] - the list is empty" << std::endl;
    else
        {
            std::cout << "[ ";
            for(size_t i = 0; i < vec_int.size(); i++) {
                std::cout << vec_int.at(i) << " ";
            }
            std::cout << "]" << std::endl;
        }
}

void addNumber(std::vector<int> &vec) {
    int new_int {};
    std::cout << "Add an integer: ";
    std::cin >> new_int;
    vec.push_back(new_int);
    std::cout << std::endl;
    std::cout << new_int << " added!" << std::endl;
}

void meanValue(const std::vector<int> &vec) {
    int sum {};
    double mean {};
    if(vec.size() == 0)
        std::cout << "Unable to calculate the mean: List is empty!" << std::endl;
    else
        {
        for(auto num: vec)
            sum += num;
        mean = static_cast<double>(sum)/vec.size();
        std::cout << "The mean is " << mean << std::endl;
        }
}

void smallestValue(const std::vector<int> &vec) {
    int smallest {std::numeric_limits<int>::max()};
    if(vec.size() == 0)
        std::cout << "Unable to calculate the mean: List is empty!" << std::endl;
    else
        {
        for(auto num: vec) {
            if (num <= smallest)
                smallest = num;
        }
        std::cout << "The smallest number is " << smallest << std::endl;
        }
}

void largestValue(const std::vector<int> &vec) {
    int largest {std::numeric_limits<int>::min()};
    if(vec.size() == 0)
        std::cout << "Unable to calculate the mean: List is empty!" << std::endl;
    else
        {
        for(auto num: vec) {
            if (num >= largest)
                largest = num;
        }
        std::cout << "The largest number is " << largest << std::endl;
        }
}
