#include "repeat_checker.h"
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    std::vector<std::string> results = checkRepeats(input);

    for (const auto &res: results) {
        std::cout << res << std::endl;
    }

    return 0;
}
