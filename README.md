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

alphabet.find(charater) may return std::string::npos


10. prototype of a function

int func(int);
or
int func(int a = 1); // default argument value. only need to give the default in the prototype.


11. pass by reference

void number (int &a) {
   // a can be changed even after jumping outside of this scope. 
}


12. pointer declare

int *int_ptr {nullptr};

int *score_ptr {&score};


13.   &    *  


14. allocate storage

int *int_ptr {nullptr};

int_ptr = new int;

...

delete int_ptr;


15. allocate storage

int *array_ptr {nullptr};

int size {};

array_ptr = new int[size_of_array];

...

delete [] array_ptr;


16. pointers to constants

const int *int_ptr {&an_int};   // data is const and cannot be changed


17. constant pointers

int *const int_ptr {&an_int};   // cannot point somewhere else, data can be changed


18. constant pointers to constants

const int *const int_ptr {&an_int};


19. passing pointers to a function

void func(int *int_ptr);

func(&value);


20. returning a pointer from a function

int *largest_int_ptr(int *int_ptr1, int *int_ptr2);


21. USE REFRENCE in a loop

for (auto element: vector_name) { ... };  // cannot change the elements in the ORIGINAL vector, DO NOT USE

for (auto &element: vector_name) { ... };  // can change the elements in the ORIGINAL vector

for (auto const &element: vector_name) { ... };   // cannot change the elements in the ORIGINAL vector


22. class declaration

class Player
{
};

Player *enemy = new Player;  // Player *enemy = new Player();  Player *enemy = new Player("Name",10);  depends on the constructor

delete enemy;


23. private and protected

private: accessible only by members or friends of the class

protected: private + accessible by inheritance


24. include guards (in Account.h)

#ifndef _ACCOUNT_H_  //whether Account.h is included
#define _ACCOUNT_H_

// Account class declaratuin

#endif


25. Account.cpp  Account.h  main.cpp

Account.h  //declare a class

Account.cpp  // implement the method; # include "Account.h"

main.cpp  // # include "Account.h"


26. Constructor
    Player hero {"Hero"};
    Player *hero = new Player("Hero");
    delete hero;


27. Initialization List

Player::Player()
: name{"None"}, health{0}, exp{0} {
    }

Player::Playe {"name", 0} {   //delegating the constructor
    }       


28. shallow copy constructor: only the pointer will be copied

Player::Player(const Player & source)  // use reference
    : name{source.name},
      health {source.health} {
      }


29. deep copy: define a new pointer and copy the value that it is pointing to.


30. move constructor: steal the pointer and null out the cource pointer

Move::Move(Move &&source)  // R-reference
    : data {source.data} {
        source.data = nullptr;
    }


31. this pointer: pointing to the current class


32. const object

const Player shen {"Shen", 100};  // cannot change its attributes


33. utilize the methods in the const object: add "const" at the end of the method;


34. class in C++: default is private
    struct in C: default is public


35. Assignment Operator Overloading

Type &Type::operator=(const Type &rhs);  // copy

Type &Type::operator=(Type &&rhs); // move

NOTE: use reference in return


36. Unary Operator as member methods

ReturnType Type::operatorOP();


37. Binary Operator as member methods

ReturnType Type::operatorOP(const Type &rhs);


38. Unary Operator as global functions

ReturnType operatorOP(Type &obj);


39. Binary Operator as global functions

ReturnType operatorOP(const Type &lhs, const Type &rhs);


40. steam insertion operator (<<)

std::ostream &operator<<(std::ostream &os, const Mystring &obj) {
    os << obj.str;
    return os;
}

NOTE: use reference in return


41. steam extraction operator (>>)

std::istream &operator>>(std::istream &is, const Mystring &obj) {
    char *buff = new char[1000];
    is >> buff;
    obj = Mystring{buff};
    delete [] buff;
    return is;
}


42. Prefix and Postfix overloading

++s: 
Mystring Mystring::operator++();

s++: 
Mystring Mystring::operator++(int);


43. unique pointers

std::unique_ptr<int> p1 {new int {100}};

std::unique_ptr<int> p1 = std::make_unique<int>(100);

auto p1 = std::make_unique<Player>("Shen",100);


p1.get();  // return the address
p1.reset();  //nullify


44. unique pointers can not be copied. Use std::move(ptr)

vec.push_back(ptr);  // ERROR - copy not allowed

vec.push_back(std::move(ptr));  // ptr will be null 


45. shared pointers

std::shared_ptr<int> p1 {new int {100}};

std::shared_ptr<int> p1 = std::make_shared<int>(100);

auto p1 = std::make_shared<Player>("Shen",100);


p1.use_count();


46. shared pointers can be copied and/or moved.


47. template

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template <class T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

max<int>(10, 20)


template <typename T1, typename T2>
void func(T1 a, T2 b) { ......... }

func<int,double>(10, 20.2);


NOTE: can also use for the class template 


template <int N> // know at the compile-time


48. iterator

std::vector<int>::iterator it = vec.begin();


49. std::find()

auto loc = std::find(vec.begin(), vec.end(), an_item); //return to the iterator pointing to the an_item or to the end, that is vec.end()


50. playlist.end() and playlist.begin()

playlist.end() does NOT point to the last element.
It points to the one after the last element.

On the contrary, playlist.begin() points to the initial element.


51. structure of a Lambda Expression

[] () -> return_type specifiers {};

[] () {};


CALL:

[] (auto x) {}(100); // very interesting auto. x legal for int, double, ...

or

auto l = [] () {};
l();


52. use Lambda expressions as function parameters (std::function)

#include <functional> // for std::function, which is the type of the lambda function

void foo(std::function<void(int)> l) {
    l(10);
}


53. use Lambda expressions as function parameters (function pointer, not common)

void foo(void (*l) (int)) {
    l(10);
}


54. use Lambda expressions as function parameters (auto)

void foo (auto l) {
    l(10);
}


55. return Lambda expressions from functions (std::function)

#include <functional> // for std::function, which is the type of the lambda function

std::function<void(int)> foo() {
    return [] (int x) {std::cout << x;};
}


56. return Lambda expressions from functions (function pointer, not common)

void (*foo()) (int) {
    return [] (int x) {std::cout << x;};
}


57. return Lambda expressions from functions (auto)

auto foo() {
    return [] (int x) {std::cout << x;};
}


58. capture by value in Lambda expressions

int x {100};

[x] () {std::cout << x;} ();



59. enumerator list

enum {Red, Green, Blue}; // 0 1 2 (default)

enum {Red = 1, Green = 2, Blue = 3};

int my_color {Red};


60. enumerator list with type

enum {Red, Green, Blue}; // 0 1 2 (default)

enum Color {Red = 1, Green = 2, Blue = 3};

Color my_color {Red};
