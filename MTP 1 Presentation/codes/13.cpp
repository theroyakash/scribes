#include <list>
#include <iostream>

int main() {
    std::list<char> letters {'d', 'm', 'g', 'w', 't', 'f'};

    if (!letters.empty()) {
        std::cout << "The first character is '" << letters.front() << "'.\n";
        std::cout << "The last character is '" << letters.back() << "'.\n";        
    }
}