#include "common_letters.h"
#include <algorithm>
#include <unordered_set>

std::string findCommonLetters(const std::vector<std::string> &words) {
    if (words.empty()) return "";

    std::unordered_set<char> common_letters(words[0].begin(), words[0].end());

    for (size_t i = 1; i < words.size() && !common_letters.empty(); ++i) {
        std::unordered_set<char> current_letters;
        for (char c: words[i]) {
            if (common_letters.count(c)) {
                current_letters.insert(c);
            }
        }
        common_letters = std::move(current_letters);
    }

    std::string result(common_letters.begin(), common_letters.end());
    std::sort(result.begin(), result.end());
    return result;
}
