// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

bool is_palindrome(const std::string& s)
{
    std::deque<char> dq;

    for (char ch : s) {
        if (std::isalpha(ch)) {
            dq.push_back(std::toupper(ch));
        }
    }

    std::deque<char> rev_dq {dq};
    std::reverse(rev_dq.begin(), rev_dq.end());

    for(size_t it = 0; it <= rev_dq.size() - 1; it++) {
        if(dq[it] != rev_dq[it]) {
            return false;
        }
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}