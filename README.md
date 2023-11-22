# cpp_learning

This is the personal repo for cpp learning.


Step1. Compile

    g++ -Wall -std=c++14 <source.cpp> -o <object_file>

Step2. Run 

    ./<object_file>



1. using namespace

    using namespace std;

    using std::cout;



2. define vectors and arrays

    vector <int> vector1;

    vector <vector<int>> vector2d;

    int this_is_an_array [size_of_array];


3. static cast

    static_cast<double>(an_integer);


4. boolalpha

    cout << boolalpha;  // true or false

    cout << noboolalpha;  // 1 or 0


5.   !   &&   ||


6. switch

switch (expr) {
    case exp1: state1; break;
    case exp2: state2; break;
    default: state_default;
}

7. range-based for

for (var_type var_name: sequence){
    statements; // cane use var_name
}

NOTE: var_type can be "auto"


8. do while loop

do {
    statements;
} while (expression);


9. characters and Strings

#include <cctype>

#include <cstring>   -- C type
#include <cstdlib>   -- C type
char my_name [8];

#include <string>    -- Cpp type
std::string s1 {"Hans"};

