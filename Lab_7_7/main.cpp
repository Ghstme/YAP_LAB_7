#include <iostream>
#include <vector>
#include "unique.h"

int main() {
    std::vector<int> data = {1, 1, 2, 2, 3, 3, 3, 4, 5, 5};
    auto new_end = Unique(data.begin(), data.end());

    std::cout << "Unique elements: ";
    for (auto it = data.begin(); it != new_end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
