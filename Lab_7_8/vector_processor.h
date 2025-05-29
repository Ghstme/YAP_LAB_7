#ifndef VECTOR_PROCESSOR_H
#define VECTOR_PROCESSOR_H

#include <vector>
#include <utility> // для std::pair
#include <string>

class VectorProcessor {
public:
    static std::vector<int> loadFromFile(const std::string &filename);

    static std::pair<int, std::vector<size_t> > findNumber(const std::vector<int> &vec, int n);

    static std::pair<int, int> processEvenNumbers(const std::vector<int> &vec);

    static std::vector<int> sortVector(const std::vector<int> &vec);

    static std::vector<int> swapFirstLast(const std::vector<int> &vec);

    static void printVector(const std::vector<int> &vec, const std::string &message = "");
};

#endif // VECTOR_PROCESSOR_H
