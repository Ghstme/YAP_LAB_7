#include "process.h"
#include <vector>

int main() {
    std::vector<int> numbers = {1, -2, 3, -4, 5};
    Process(numbers);
    std::vector<double> doubles = {1.5, -2.3, 3.7, -4.1, 5.0};
    Process(doubles);
    return 0;
}
