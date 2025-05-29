#include "word_counter.h"
#include <unordered_map>

std::vector<int> countWordOccurrences(const std::vector<std::string>& words) {
    std::unordered_map<std::string, int> word_counts;
    std::vector<int> result;
    result.reserve(words.size());
    
    for (const auto& word : words) {
        result.push_back(++word_counts[word]);
    }
    
    return result;
}