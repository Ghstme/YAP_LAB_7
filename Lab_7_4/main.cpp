#include "word_counter.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words;
    std::string word;

    std::cout << "Enter words (one per line, empty line to finish):" << std::endl;

    while (std::getline(std::cin, word)) {
        if (word.empty()) {
            break;
        }
        words.push_back(word);
    }

    std::vector<int> counts = countWordOccurrences(words);

    for (int count: counts) {
        std::cout << count << std::endl;
    }

    return 0;
}
