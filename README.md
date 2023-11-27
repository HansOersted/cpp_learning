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

