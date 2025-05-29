#include "common_letters.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words;
    std::string word;

    std::cout << "Enter words (one per line). Press ENTER twice to finish:" << std::endl;

    while (true) {
        std::getline(std::cin, word);
        if (word.empty()) {
            if (!words.empty()) {
                break;
            }
        } else {
            words.push_back(word);
        }
    }

    std::string result = findCommonLetters(words);
    std::cout << "Common letters: " << result << std::endl;

    return 0;
}
