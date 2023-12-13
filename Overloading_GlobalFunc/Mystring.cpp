#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}




// overloaded operator-
Mystring operator-(Mystring obj) {
    for (size_t it = 0; obj.str[it] != '\0'; it++) {
        obj.str[it] = std::tolower(obj.str[it]);
    }
    return obj;
}

// overloaded operator==
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return !std::strcmp(lhs.str, rhs.get_str());
}

// overloaded operator!=
bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return std::strcmp(lhs.str, rhs.get_str());
}


// overloaded operator<
bool operator<(const Mystring &lhs, const Mystring &rhs) {
    return std::strcmp(lhs.str, rhs.get_str()) < 0;
};


// overloaded operator>
bool operator>(const Mystring &lhs, const Mystring &rhs) {
    return std::strcmp(lhs.str, rhs.get_str()) > 0;
};  


// overloaded operator+
Mystring operator+(Mystring &lhs, const char *const rhs) {
    std::strcat(lhs.str, rhs);
    return lhs;
};  


// overloaded operator+=
Mystring operator+=(Mystring &lhs, const char *const rhs) {
    std::strcat(lhs.str, rhs);
    return lhs;
};  


// overloaded operator*
Mystring operator*(Mystring &lhs, const int rhs) {
    size_t updated_length {strlen(lhs.str) * rhs + 1};
    char *temp = new char [updated_length];
    for(int it = 1; it <= rhs; it++) {
        std::strcat(temp, lhs.str);
    }
    Mystring updated_string {temp};
    delete [] temp;
    return updated_string;
};  

// overloaded operator*=
Mystring operator*=(Mystring &lhs, const int rhs) {
    lhs = lhs * rhs;
    return lhs;
};  


// overloaded operator++
Mystring operator++(Mystring &lhs) {
    for(size_t it = 0; lhs.str[it] != '\0'; it++) {
        lhs.str[it] = std::toupper(lhs.str[it]);
    }
    return lhs;
};  

// overloaded operator++(int)
Mystring operator++(Mystring &lhs, int) {
    for(size_t it = 0; lhs.str[it] != '\0'; it++) {
        lhs.str[it] = std::toupper(lhs.str[it]);
    }
    return lhs;
};  