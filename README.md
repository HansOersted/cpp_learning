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