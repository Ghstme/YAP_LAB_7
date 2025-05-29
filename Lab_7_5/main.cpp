#include "duplicate.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    Duplicate(numbers);
    std::cout << "Numbers after duplication: ";
    for (int num: numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::vector<std::string> words = {"hello", "world"};
    Duplicate(words);
    std::cout << "Words after duplication: ";
    for (const auto &word: words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;
    return 0;
}
