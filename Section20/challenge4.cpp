// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and a queue
#include <cctype>
#include <queue>
#include <stack>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
    std::queue<char> fifo;
    std::stack<char> lifo;

    for(const auto &c: s){
        if(isalpha(c)){
            fifo.push(toupper(c));
            lifo.push(toupper(c));
        }
    }
    while (!lifo.empty()) {
        if (fifo.front() != lifo.top())
            return false;

        lifo.pop();
        fifo.pop();
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