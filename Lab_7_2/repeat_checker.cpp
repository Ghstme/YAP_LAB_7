#include "repeat_checker.h"
#include <unordered_set>
#include <string>

std::vector<std::string> checkRepeats(const std::string &digits) {
    std::unordered_set<char> seen;
    std::vector<std::string> result;
    for (char d: digits) {
        if (seen.count(d)) {
            result.push_back("YES");
        } else {
            result.push_back("NO");
            seen.insert(d);
        }
    }
    return result;
}
