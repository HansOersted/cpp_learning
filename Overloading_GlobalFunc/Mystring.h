#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

public:
    char *str;      // pointer to a char[] that holds a C-style string

    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment
    
    void display() const;
    
    int get_length() const;                                      // getters
    const char *get_str() const;
};


Mystring operator-(Mystring obj);  // overloaded operator-

bool operator==(const Mystring &lhs, const Mystring &rhs);  // overloaded operator==
bool operator!=(const Mystring &lhs, const Mystring &rhs);  // overloaded operator!=
bool operator<(const Mystring &lhs, const Mystring &rhs);  // overloaded operator<
bool operator>(const Mystring &lhs, const Mystring &rhs);  // overloaded operator>
Mystring operator+(Mystring &lhs, const char *const rhs);  // overloaded operator+
Mystring operator+=(Mystring &lhs, const char *const rhs);  // overloaded operator+=
Mystring operator*(Mystring &lhs, const int rhs);  // overloaded operator*
Mystring operator*=(Mystring &lhs, const int rhs);  // overloaded operator*=
Mystring operator++(Mystring &lhs);  // overloaded operator++
Mystring operator++(Mystring &lhs, int);  // overloaded operator++(int)

#endif // _MYSTRING_H_