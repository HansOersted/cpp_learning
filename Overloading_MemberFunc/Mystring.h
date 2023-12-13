#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
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



    Mystring operator-();  // overloaded operator-
    bool operator==(const Mystring &rhs) const;  // overloaded operator==
    bool operator!=(const Mystring &rhs) const;  // overloaded operator!=
    bool operator<(const Mystring &rhs) const;  // overloaded operator<
    bool operator>(const Mystring &rhs) const;  // overloaded operator>
    Mystring operator+(const char *const rhs);  // overloaded operator+
    Mystring operator+=(const char *const rhs);  // overloaded operator+=
    Mystring operator*(const int rhs);  // overloaded operator*
    Mystring operator*=(const int rhs);  // overloaded operator*=
    Mystring operator++();  // overloaded operator++
    Mystring operator++(int);  // overloaded operator++(int)
};

#endif // _MYSTRING_H_