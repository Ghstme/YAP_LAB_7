#include "vector_processor.h"
#include <fstream>
#include <algorithm>
#include <numeric>
#include <iostream>

std::vector<int> VectorProcessor::loadFromFile(const std::string &filename) {
    std::vector<int> numbers;
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Ошибка: не удалось открыть файл " << filename << std::endl;
        return numbers;
    }

    int num;
    while (file >> num) {
        numbers.push_back(num);
    }

    return numbers;
}

std::pair<int, std::vector<size_t> > VectorProcessor::findNumber(const std::vector<int> &vec, int n) {
    int count = std::count(vec.begin(), vec.end(), n);

    std::vector<size_t> positions;
    auto it = vec.begin();

    while ((it = std::find(it, vec.end(), n)) != vec.end()) {
        positions.push_back(std::distance(vec.begin(), it));
        ++it;
    }

    return {count, positions};
}

std::pair<int, int> VectorProcessor::processEvenNumbers(const std::vector<int> &vec) {
    int even_count = std::count_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
    int odd_count = vec.size() - even_count;

    if (even_count > odd_count) {
        int sum = std::accumulate(vec.begin(), vec.end(), 0,
                                  [](int acc, int x) { return x % 2 == 0 ? acc + x : acc; });
        return {even_count, sum};
    } else {
        int total_sum = std::accumulate(vec.begin(), vec.end(), 0);
        return {even_count, total_sum};
    }
}

std::vector<int> VectorProcessor::sortVector(const std::vector<int> &vec) {
    std::vector<int> sorted = vec;
    std::sort(sorted.begin(), sorted.end());
    return sorted;
}

std::vector<int> VectorProcessor::swapFirstLast(const std::vector<int> &vec) {
    if (vec.empty()) return vec;

    std::vector<int> result = vec;
    std::swap(result.front(), result.back());
    return result;
}

void VectorProcessor::printVector(const std::vector<int> &vec, const std::string &message) {
    if (!message.empty()) {
        std::cout << message;
    }
    for (int num: vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
